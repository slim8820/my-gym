#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ajout.h>
void ajouter(char username[],char password[],int fonction)
{
FILE*f;
f=fopen("username.txt","a+");
if(f!=NULL)
{
fprintf(f,"%s %s %d \n",username,password,fonction);
fclose(f);
}}
