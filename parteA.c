#include <stdio.h>



int main(int argc, char *argv[])
{

	char * user = getlogin();
	char * host[20];
	gethostname(host, 20);
	char * command[50];
	while(1){

		printf("%s@%s:%s$ ", user, host,getcwd(NULL,50));
		gets (command);

	}

	return 0;

}