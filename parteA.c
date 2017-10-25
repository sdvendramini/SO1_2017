#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <pwd.h>
#include <stdbool.h>

#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_RESET   "\x1b[0m"



int main(int argc, char *argv[])
{
	//char* user=getpwuid(getuid());
	//int i = getlogin_r(user, 20);
	char *user;
	struct passwd *pass;
	pass = getpwuid(getuid());
	user = pass->pw_name;
	
	char host[20];
	gethostname(host, 20);
	char command[50];
	
	char command_exit[]="exit\n";

	while(1){

		printf( ANSI_COLOR_RED "%s@%s:%s$ "ANSI_COLOR_RESET , user, host, getcwd(NULL,50) );
		fgets(command,49,stdin);
			//printf("%s",command);
			//printf("%s",command_exit);

		if (strcmp(command,command_exit)==0)
		{
			//printf("%s",command);
			return 0;
		}
	}
	return 0;

}