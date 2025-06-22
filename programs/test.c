#include "sys.h"

sys_f* sys;

void main();

void _start(sys_f* _sys)
{
	sys = _sys;
	main();
}

void main()
{
	sys->print("hi it works\n");
}