typedef void (*printfunc_t)(const char*);

void _start(printfunc_t print)
{
	print("hi it works\n");
}