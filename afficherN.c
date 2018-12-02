#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include <gtk/gtk.h>
#include "personneN.h"
enum
{
NOM,
PRENOM,
SEXE,
AGE,
POIDS,
TAILLE,
REGIME,
COLUMNS
};
void afficher_personneN(GtkWidget *liste)

{
GtkCellRenderer *renderer;
GtkTreeViewColumn *column;
GtkTreeIter iter;
GtkListStore *store;
char nom[20];
char prenom[20];
char sexe[20];
char age[20];
char poids[20];
char taille[20];
char regime[20];
store=NULL;
FILE*f;
store=gtk_tree_view_get_model(liste);
if(store==NULL)
{
renderer = gtk_cell_renderer_text_new();
column = gtk_tree_view_column_new_with_attributes(" nom",renderer,"text",NOM, NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW (liste), column);

renderer = gtk_cell_renderer_text_new();
column = gtk_tree_view_column_new_with_attributes(" prenom",renderer,"text",PRENOM, NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW (liste), column);
renderer = gtk_cell_renderer_text_new();

column = gtk_tree_view_column_new_with_attributes(" sexe",renderer,"text",SEXE, NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW (liste), column);

renderer = gtk_cell_renderer_text_new();
column = gtk_tree_view_column_new_with_attributes(" age",renderer,"text",AGE, NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW (liste), column);

renderer = gtk_cell_renderer_text_new();
column = gtk_tree_view_column_new_with_attributes(" poids",renderer,"text",POIDS, NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW (liste), column);
renderer = gtk_cell_renderer_text_new();
column = gtk_tree_view_column_new_with_attributes(" taille",renderer,"text",TAILLE, NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW (liste), column);

renderer = gtk_cell_renderer_text_new();
column = gtk_tree_view_column_new_with_attributes(" regime",renderer,"text",REGIME, NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW (liste), column);

store=gtk_list_store_new(COLUMNS,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING);

f=fopen("afficherFN.txt","r");
if(f==NULL)
{
return;
}
else
{
f=fopen("afficherFN.txt","a+");
while(fscanf(f,"%s %s %s %s %s %s %s \n",nom,prenom,sexe,age,poids,taille,regime)!=EOF)
{

gtk_list_store_append(store,&iter);
gtk_list_store_set(store,&iter,NOM,nom,PRENOM,prenom,SEXE,sexe,AGE,age,POIDS,poids,TAILLE,taille,REGIME,regime,-1);

}

fclose(f);
gtk_tree_view_set_model(GTK_TREE_VIEW(liste), GTK_TREE_MODEL (store));
g_object_unref(store);
}}}


