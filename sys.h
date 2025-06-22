#include <stdint.h>

typedef struct
{
	void* (*malloc)(uint32_t size);
	void (*free)(void* ptr);
	void (*print)(const char* text);
	void (*printDword)(uint32_t v);
} sys_f;

extern sys_f* sys;