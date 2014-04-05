#include <stdio.h>

int add(int x,int y)
{
	int z = x+y;
	return z;
}

int main(int argc, char** argv)
{
	puts("Hello World!\n");
	int x=4,y=5;
	printf("%d + %d = %d\n",x,y,add(x,y));
	return 0;
}
