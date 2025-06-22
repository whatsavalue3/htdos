#include <stdint.h>
#include <stdbool.h>
#include "fat.h"

typedef struct
{
	void* (*malloc)(uint32_t size);
	void (*free)(void* ptr);
	void (*print)(const char* text);
	void (*printFlags)(const char* text, const char* flags);
	void (*printDword)(uint32_t v);
	int (*fopen)(File* file, const char* path, uint8_t flags);
	int (*fclose)(File* file);
	int (*fread)(File* file, void* buf, int len, int* bytes);
	int (*fwrite)(File* file, const void* buf, int len, int* bytes);
	int (*fseek)(File* file, int offset, int seek);
	int (*fsync)(File* file);
	int (*stat)(const char* path, DirInfo* info);
	int (*dcreate)(Dir* dir, const char* path);
	int (*dopen)(Dir* dir, const char* path);
	int (*dread)(Dir* dir, DirInfo* info);
	int (*drewind)(Dir* dir);
	int (*dnext)(Dir* dir);
	void (*renderChar)(unsigned short x, unsigned short y, char c, char f);
	void (*run)(void* data);
	void (*scroll)();
	char* terminal;
	char* terminalFlags;
	unsigned short* printptr;

	
} sys_f;

extern sys_f* sys;



static inline bool StringEquals(const char* a, const char* b)
{
	unsigned short o = 0;
	while(a[o] == b[o])
	{
		if(a[o] == 0)
		{
			return true;
		}
		++o;
	}
	return false;
}

static inline bool StringStartsWith(const char* a, const char* b)
{
	unsigned short o = 0;
	while((a[o] == b[o]) || (b[o] == 0))
	{
		if(b[o] == 0)
		{
			return true;
		}
		++o;
	}
	return false;
}

static inline void StringConcat(char* out, const char* a, const char* b)
{
	unsigned short o = 0;
	while(a[o] != 0)
	{
		out[o] = a[o];
		++o;
	}
	unsigned short i = 0;
	while(b[i] != 0)
	{
		out[o] = b[i];
		++i;
		++o;
	}
	out[o] = '\x00';
}

static inline unsigned short StringLength(const char* a)
{
	unsigned short o = 0;
	while(a[o] != 0)
	{
		++o;
	}
	return o;
}

static inline void StringRemoveAfterLast(char* a, char chr, unsigned short start)
{
	unsigned short o = start;
	while(o > 0)
	{
		--o;
		if(a[o] == chr)
		{
			a[o+1] = '\x00';
			return;
		}
	}
}

static inline char* StringRemoveFirst(char* a, char chr, unsigned short len)
{
	unsigned short o = 0;
	while(o < len)
	{
		++o;
		if(a[o] == chr)
		{
			a[o] = '\x00';
			return &a[o+1];
		}
	}
}