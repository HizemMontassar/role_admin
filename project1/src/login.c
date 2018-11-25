#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int verifier(char login[], char password[])
{
	int verif=-1;
	FILE *f;
	char r_login[30];char r_password[30];
	int r_role=-1 ;
	f=fopen("/home/hizem/Projects/project1/src/liste/users.txt","r");
	if(f!=NULL)
	{
	
		while (fscanf(f,"%s %s %d\n",r_login,r_password,&r_role) != EOF)
		{
			if (((strcmp(login,r_login)==0)&&(strcmp(password,r_password)==0)))
			{
			verif=r_role;
			}
		}
		fclose(f);		
	}
	else{
		printf("erreur syntax\n");
		}

return verif;

}
