#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif
#include "fonction.h"
#include <string.h>

#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"


void
on_button1_clicked                     (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{

}


void
on_button3_clicked                     (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{

}


void
on_button4_clicked                     (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{

}


void
on_button2_clicked                     (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{

}


void
on_button5_clicked                     (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{

GtkWidget *nom;
GtkWidget *prenom;
GtkWidget *age;
GtkWidget *sexe;
GtkWidget *poids;
GtkWidget *taille;
GtkWidget *cin;
GtkWidget *password;

GtkWidget *date_dabonnement;
GtkWidget *jours;
GtkWidget *mois;
GtkWidget *annee;

Date dt_nais;
admin s ;
jours=lookup_widget(objet_graphique,"spinbutton1");
mois=lookup_widget(objet_graphique,"spinbutton2");
annee=lookup_widget(objet_graphique,"spinbutton3");
password=lookup_widget(objet_graphique,"entry9");
cin=lookup_widget(objet_graphique,"entry10");
nom=lookup_widget(objet_graphique,"entry3");
prenom=lookup_widget(objet_graphique,"entry4");
age=lookup_widget(objet_graphique,"entry5");
sexe=lookup_widget(objet_graphique,"entry6");
poids=lookup_widget(objet_graphique,"entry7");
taille=lookup_widget(objet_graphique,"entry8");
s.dt_nais.jours=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(jours));
s.dt_nais.mois=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(mois));
s.dt_nais.annee=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(annee));
strcpy(s.username,gtk_entry_get_text(GTK_ENTRY(cin)));
strcpy(s.password,gtk_entry_get_text(GTK_ENTRY(password)));
strcpy(s.nom,gtk_entry_get_text(GTK_ENTRY(nom)));
strcpy(s.prenom,gtk_entry_get_text(GTK_ENTRY(prenom)));
ajouter(s);
}






