#include<stdio.h>
int main()
{
#if defined RELEASE
	printf("\n[Mode : Release] Compiled at %s %s.\n",__TIME__,__DATE__);
#elif defined DEBUG
	printf("\n[Mode : Debug] Compiled at %s %s.\n",__TIME__,__DATE__);
#else
	printf("\nMode : Unselected!\n");
#endif
	return 0;
};

