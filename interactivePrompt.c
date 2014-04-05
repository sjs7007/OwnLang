#include<stdio.h>

//for ability to move cursor : http://www.buildyourownlisp.com/chapter4_interactive_prompt
//sudo apt-get install libedit-dev`
#include <editline/readline.h>
#include <editline/history.h>

//static buffer for user input of size 2048
static char input[2048];

int main()
{
	puts("Lispy Version 0.0.0.0.1");
	puts("Ctrl+c to Exit."); //appends new line at end.

	while(1)
	{
		//Output prompt and get input
		char* input = readline("lispy> ");

		//add input to history
		add_history(input); //will allow history to be accessed using up/down arrows

		//echo input back to user
		printf("Input is : %s\n",input);

		//free retrieved input
		free(input);
		/*becayse unlike fgets, which writes to some existing buffer, readline allocates nw memory when called each time.*/
	}
}
