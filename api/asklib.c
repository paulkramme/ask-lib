#include"asklib.h"

int ask(char question[256])
{
	puts(question);
	switch(getch())
	{
		case 'y':
			return 0;
		default:
			return 1;
	}
	/*return 0;*/
}

int ask_long(char question[256])
{
	puts(question);
	char answer[256];
	scanf("%s", answer);
	if(strcmp("yes", answer) == 0)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

int ask_for_quit(void)
{
	puts("Press any key to quit...");
	getch();
	exit(0);
}
