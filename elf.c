#include <stdint.h>
#include "sys.h"

#define ELF_NIDENT	16

typedef uint8_t		Elf_Byte;

typedef uint32_t	Elf32_Addr;
typedef uint32_t	Elf32_Off;
typedef int32_t		Elf32_SOff;
typedef int32_t		Elf32_Sword;
typedef uint32_t	Elf32_Word;
typedef uint16_t	Elf32_Half;
typedef uint64_t	Elf32_Lword;

typedef struct {
	unsigned char	e_ident[ELF_NIDENT];	/* Id bytes */
	Elf32_Half	e_type;			/* file type */
	Elf32_Half	e_machine;		/* machine type */
	Elf32_Word	e_version;		/* version number */
	Elf32_Addr	e_entry;		/* entry point */
	Elf32_Off	e_phoff;		/* Program hdr offset */
	Elf32_Off	e_shoff;		/* Section hdr offset */
	Elf32_Word	e_flags;		/* Processor flags */
	Elf32_Half	e_ehsize;		/* sizeof ehdr */
	Elf32_Half	e_phentsize;		/* Program header entry size */
	Elf32_Half	e_phnum;		/* Number of program headers */
	Elf32_Half	e_shentsize;		/* Section header entry size */
	Elf32_Half	e_shnum;		/* Number of section headers */
	Elf32_Half	e_shstrndx;		/* String table index */
} Elf32_Ehdr;

typedef struct {
	Elf32_Word	p_type;		/* entry type */
	Elf32_Off	p_offset;	/* offset */
	Elf32_Addr	p_vaddr;	/* virtual address */
	Elf32_Addr	p_paddr;	/* physical address */
	Elf32_Word	p_filesz;	/* file size */
	Elf32_Word	p_memsz;	/* memory size */
	Elf32_Word	p_flags;	/* flags */
	Elf32_Word	p_align;	/* memory & file alignment */
} Elf32_Phdr;

#define PT_NULL		0		/* Program header table entry unused */
#define PT_LOAD		1		/* Loadable program segment */
#define PT_DYNAMIC	2		/* Dynamic linking information */
#define PT_INTERP	3		/* Program interpreter */
#define PT_NOTE		4		/* Auxiliary information */
#define PT_SHLIB	5		/* Reserved, unspecified semantics */
#define PT_PHDR		6		/* Entry for header table itself */
#define PT_TLS		7		/* TLS initialisation image */
#define PT_NUM		8


#define SHT_NULL	      0		/* Section header table entry unused */
#define SHT_PROGBITS	      1		/* Program information */
#define SHT_SYMTAB	      2		/* Symbol table */
#define SHT_STRTAB	      3		/* String table */
#define SHT_RELA	      4		/* Relocation information w/ addend */
#define SHT_HASH	      5		/* Symbol hash table */
#define SHT_DYNAMIC	      6		/* Dynamic linking information */
#define SHT_NOTE	      7		/* Auxiliary information */
#define SHT_NOBITS	      8		/* No space allocated in file image */
#define SHT_REL		      9		/* Relocation information w/o addend */
#define SHT_SHLIB	     10		/* Reserved, unspecified semantics */
#define SHT_DYNSYM	     11		/* Symbol table for dynamic linker */
#define SHT_INIT_ARRAY	     14		/* Initialization function pointers */
#define SHT_FINI_ARRAY	     15		/* Termination function pointers */
#define SHT_PREINIT_ARRAY    16		/* Pre-initialization function ptrs */
#define SHT_GROUP	     17		/* Section group */
#define SHT_SYMTAB_SHNDX     18		/* Section indexes (see SHN_XINDEX) */
#define SHT_RELR	     19		/* Relative relocation information */
#define SHT_NUM		     20

#define SHF_WRITE	     0x00000001 /* Contains writable data */
#define SHF_ALLOC	     0x00000002 /* Occupies memory */
#define SHF_EXECINSTR	     0x00000004 /* Contains executable insns */
#define SHF_MERGE	     0x00000010 /* Might be merged */
#define SHF_STRINGS	     0x00000020 /* Contains nul terminated strings */
#define SHF_INFO_LINK	     0x00000040 /* "sh_info" contains SHT index */
#define SHF_LINK_ORDER	     0x00000080 /* Preserve order after combining */
#define SHF_OS_NONCONFORMING 0x00000100 /* OS specific handling required */
#define SHF_GROUP	     0x00000200 /* Is member of a group */
#define SHF_TLS		     0x00000400 /* Holds thread-local data */
#define SHF_MASKOS	     0x0ff00000 /* Operating system specific values */
#define SHF_MASKPROC	     0xf0000000 /* Processor-specific values */
#define SHF_ORDERED	     0x40000000 /* Ordering requirement (Solaris) */
#define SHF_EXCLUDE	     0x80000000 /* Excluded unless unles ref/alloc */

typedef struct {
	Elf32_Word	sh_name;	/* section name (.shstrtab index) */
	Elf32_Word	sh_type;	/* section type */
	Elf32_Word	sh_flags;	/* section flags */
	Elf32_Addr	sh_addr;	/* virtual address */
	Elf32_Off	sh_offset;	/* file offset */
	Elf32_Word	sh_size;	/* section size */
	Elf32_Word	sh_link;	/* link to another */
	Elf32_Word	sh_info;	/* misc info */
	Elf32_Word	sh_addralign;	/* memory alignment */
	Elf32_Word	sh_entsize;	/* table entry size */
} Elf32_Shdr;

typedef struct {
	Elf32_Word	r_offset;	/* where to do it */
	Elf32_Word	r_info;		/* index & type of relocation */
} Elf32_Rel;


typedef struct {
	Elf32_Word	r_offset;	/* where to do it */
	Elf32_Word	r_info;		/* index & type of relocation */
	Elf32_Sword	r_addend;	/* adjustment value */
} Elf32_Rela;

typedef struct {
	Elf32_Lword	m_value;	/* symbol value */
	Elf32_Word	m_info;		/* size + index */
	Elf32_Word	m_poffset;	/* symbol offset */
	Elf32_Half	m_repeat;	/* repeat count */
	Elf32_Half	m_stride;	/* stride info */
} Elf32_Move;

extern void print(const char* text);
extern void printDword(uint32_t v);

void Relocate(void* data, Elf32_Rel* rels, uint32_t count, uint32_t start, uint32_t size, int offset)
{
	for(int i = 0; i < count; i++)
	{
		if(rels[i].r_offset == 0xffffffff)
		{
			continue;
		}
		uint32_t ptr = *(uint32_t*)(((char*)data) + rels[i].r_offset);
		if((ptr >= start) && (ptr < (start+size)))
		{
			*(uint32_t*)(((char*)data) + rels[i].r_offset) += (uint32_t)(data)+offset;
			rels[i].r_offset = 0xffffffff;
		}
	}
}

typedef void(*entryfunc_t)(sys_f*);

void* malloc(uint32_t size);
void free(void* ptr);


void* RelocateElf(void* data, void** bss)
{
	Elf32_Ehdr* ehdr = (Elf32_Ehdr*)data;
	Elf32_Shdr* shdr = (Elf32_Shdr*)(((char*)data)+ehdr->e_shoff);
	Elf32_Shdr* rel_hdr = 0;
	Elf32_Shdr* bss_hdr = 0;
	for(int i = 0; i < ehdr->e_shnum; i++)
	{
		if(shdr[i].sh_type == SHT_REL)
		{
			rel_hdr = &shdr[i];
			break;
		}
	}
	for(int i = 0; i < ehdr->e_shnum; i++)
	{
		if((shdr[i].sh_type == SHT_NOBITS) && (shdr[i].sh_size > 0))
		{
			bss_hdr = &shdr[i];
			break;
		}
	}
	Elf32_Rel* rels = (Elf32_Rel*)(((char*)data)+rel_hdr->sh_offset);
	uint32_t relcount = rel_hdr->sh_size/sizeof(Elf32_Rel);
	*bss = malloc(bss_hdr->sh_size);
	Relocate(data,rels,relcount,bss_hdr->sh_addr,bss_hdr->sh_size,(int)(*bss)-(int)data-(int)bss_hdr->sh_addr);
	for(int i = 0; i < ehdr->e_shnum; i++)
	{
		if((shdr[i].sh_type == SHT_PROGBITS) && (shdr[i].sh_size > 0))
		{
			Relocate(data,rels,relcount,shdr[i].sh_addr,shdr[i].sh_size,(int)shdr[i].sh_offset-(int)shdr[i].sh_addr);
		}
	}
	return (((char*)data) + ehdr->e_entry);
}

void Run(void* data)
{
	void* bss;
	entryfunc_t entry = (entryfunc_t)RelocateElf(data,&bss);
	entry(sys);
	free(bss);
}

typedef void*(*driverfunc_t)(sys_f*);

void* RunDriver(void* data)
{
	void* bss;
	driverfunc_t entry = (driverfunc_t)RelocateElf(data,&bss);
	return entry(sys);
}