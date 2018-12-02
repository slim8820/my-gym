#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ajout.h>
int verifier(char username[],char password[])
{
FILE*f;
int i=1,j=1,z=-1,fonction;
char username1[30];char password1[40];
f=fopen("username.txt","r");
if(f !=NULL)
while (fscanf(f,"%s %s %d \n",username1,password1,&fonction)!=EOF)
{
i=strcmp(username,username1);
j=strcmp(password,password1);
if(i==0 && j==0)
{
z=fonction;
}
}
return (z);
}
