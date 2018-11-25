#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void ajouter(char login[], char password[],int role)
{
	
	FILE *f;

	f=fopen("/home/hizem/Projects/project1/src/liste/users.txt","a");
	if (f!=NULL)
	{

	
	fprintf(f,"%s %s %d\n",login,password,role);
	fclose(f);
	}
	else printf("impossssible d'ouvrir\n");


	
	
}
//=============================================================================
void info(char nom[],char prenom[],int jour,int mois,int annee,char ville[],char postal[],char adresse[])
{
	FILE *info;

	info=fopen("/home/hizem/Projects/project1/src/liste/info.txt","a");
	if (info!=NULL)
	{

	
	fprintf(info,"%s %s %d %d %d %s %s %s\n",nom,prenom,jour,mois,annee,ville,postal,adresse);
	fclose(info);
	}
	else printf("impossssible d'ouvrir\n");

}
//=============================================================================
void afficher ()
{
	
	FILE* f;
	char r_login[30];char r_password[30];int r_role;
	f=fopen("/home/hizem/Projects/project1/src/listeusers.txt","r");
		while (!EOF)
		{
		fscanf(f,"%s %s %d",r_login,r_password,&r_role);
		}
}
//=============================================================================
