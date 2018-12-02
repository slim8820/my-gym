#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "personne.h"
#include <gtk/gtk.h>
enum
{
USERNAME,
PASSWORD,
FONCTION,
COLUMNS
};
void afficher_personne(GtkWidget *liste)

{
GtkCellRenderer *renderer;
GtkTreeViewColumn *column;
GtkTreeIter iter;
GtkListStore *store;
char username[30];
char password[30];
char fonction[30];

store=NULL;
FILE *f;
store=gtk_tree_view_get_model(liste);
if(store==NULL)
{
renderer = gtk_cell_renderer_text_new();
column = gtk_tree_view_column_new_with_attributes(" username",renderer,"text",USERNAME, NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW (liste), column);

renderer = gtk_cell_renderer_text_new();
column = gtk_tree_view_column_new_with_attributes(" password",renderer,"text",PASSWORD, NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW (liste), column);

renderer = gtk_cell_renderer_text_new();
column = gtk_tree_view_column_new_with_attributes(" fonction",renderer,"text",FONCTION, NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW (liste), column);

store=gtk_list_store_new(COLUMNS,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING);

f = fopen("username.txt","r");
if(f==NULL)
{
return;
}
else
{
f=fopen("username.txt","a+");
while(fscanf(f,"%s %s %s\n",username,password,fonction)!=EOF)
{
//printf("%s %s %s\n",username,password,fonction);
gtk_list_store_append(store,&iter);
gtk_list_store_set(store,&iter,USERNAME,username,PASSWORD,password,FONCTION,fonction,-1);

}

fclose(f);
gtk_tree_view_set_model(GTK_TREE_VIEW(liste), GTK_TREE_MODEL (store));
g_object_unref(store);
}
}}

