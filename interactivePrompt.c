#include<stdio.h>

//static buffer for user input of size 2048
static char input[2048];

int main()
{
	puts("Lispy Version 0.0.0.0.1");
	puts("Ctrl+c to Exit."); //appends new line at end.

	while(1)
	{
		fputs("lispy> ",stdout); //no new line at end. variation of puts

		//read a line of user input of max size 2048
		fgets(input,2048,stdin);

		//echo input back to user
		printf("Input is : %s",input);
	}
}
