#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ajouterFN.h>
void ajouteFN(char Nom[],char Prenom[],char Sexe[],int Age,int Poids,int Taille,char Regime[])
{
FILE*f;
f=fopen("ajouterFN.txt","a+");
if(f!=NULL)
{
fprintf(f,"%s %s %s %d %d %d %s \n",Nom,Prenom,Sexe,Age,Poids,Taille,Regime);
fclose(f);
}}
