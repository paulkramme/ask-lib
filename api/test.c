#include<stdio.h>
#include"asklib.h"

int main(void)
{
	puts("This application tests the ask library.");
	if(ask("Continue?") == 1)
	{
		puts("Program will stop now.");
		ask_for_quit();
	}

	puts("You continued! Glad you're still with me.");

	if(ask_long("This is the long ask. Here you have to type yes.") == 1)
	{
		puts("You typed something else than 'yes'. I'll quit now.");
		ask_for_quit();
	}
	puts("Cool!\nProgram will exit anyway. Have fun.");
	ask_for_quit();
	return 0;
}
