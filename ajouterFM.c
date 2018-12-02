#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ajouterFM.h>
void ajouteFM(char Nom[],char Prenom[],char Sexe[],int Age,int Poids,int Taille,char MaladieC[],char allergie[],char Notice[])
{
FILE*f;
f=fopen("ajouterFM.txt","a+");
if(f!=NULL)
{
fprintf(f,"%s %s %s %d %d %d %s %s %s\n",Nom,Prenom,Sexe,Age,Poids,Taille,MaladieC,allergie,Notice);
fclose(f);
}}
