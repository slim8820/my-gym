#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "fonction.h"
void ajouter ( admin s)
{
FILE*f;
f=fopen("user.txt","a+");
if ( f!=NULL)
{
fprintf(f,"%s %s %s %s %d %d %d %s"
,s.username,s.password,s.nom,s.prenom,s.dt_nais.jours,s.dt_nais.mois,s.dt_nais.annee,s.sexe);
fclose(f);
}
}
int supprimer(char x[])
{
FILE*f;
FILE*f1;
int test=-1;
char nom[50];
char prenom[50];
char CIN[50];
char TEL[50];
int jour;
int mois;
int annee;
int duree;
f=fopen("user.txt","r");
f1=fopen("fichier.txt","w");
while(fscanf(f,"%s %s %s %s %d %d %d %d",nom,prenom,CIN,TEL,&jour,&mois,&annee,&duree)!=EOF)
{
if(strcmp(x,CIN)!=0)
{
fprintf(f1,"%s %s %s %s %d %d %d %d\n",nom,prenom,CIN,TEL,jour,mois,annee,duree);
}
else
{
test=1;
}
}
fclose(f);
fclose(f1);
remove("user.txt");
rename("fichier.txt","user.txt");
return(test);
}


void modifier(char nom[],char prenom[],char CIN[],char TEL[],int jour,int mois,int annee,int duree)
{
FILE*f;
FILE*f1;
char nom1[50];
char prenom1[50];
char CIN1[50];
char TEL1[50];
int jour1;
int mois1;
int annee1;
int duree1;
f=fopen("user.txt","r");
f1=fopen("fichier.txt","w");
while(fscanf(f,"%s %s %s %s %d %d %d %d",nom1,prenom1,CIN1,TEL1,&jour1,&mois1,&annee1,&duree1)!=EOF)
{
if(strcmp(CIN,CIN1)==0)
{
fprintf(f1,"%s %s %s %s %d %d %d %d\n",nom,prenom,CIN,TEL,jour,mois,annee,duree);
}
else
{
fprintf(f1,"%s %s %s %s %d %d %d %d\n",nom1,prenom1,CIN1,TEL1,jour1,mois1,annee1,duree1);
}
}
  fclose(f);
  fclose(f1);
  remove("user.txt");
  rename("fichier.txt","user.txt");
}
