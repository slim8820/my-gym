#include <gtk/gtk.h>
typedef struct
{
char nom[20];
char prenom[20];
char sexe[20];
char age[20];
char poids[20];
char taille[20];
char maladiec[20];
char allergie[20];
char notice[20];

}Adherant;
void afficher_Adherant(GtkWidget *liste);
