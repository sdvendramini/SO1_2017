#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <pwd.h>



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
	while(1){

		printf("%s@%s:%s$ ", user, host, getcwd(NULL,50));
		fgets(command,49,stdin);
	}

	return 0;

}