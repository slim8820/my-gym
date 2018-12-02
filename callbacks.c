#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>
#include <string.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"
#include "string.h"
#include "verifier.h"
#include "ajout.h"
#include "personne.h"
#include "ajouterFM.h"
#include "ajouterFN.h"
#include "adherant.h"
#include "personneN.h"


void
on_button1_clicked                     (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *input1,*input2,*login,*admin,*medecin,*clients,*coach,*error,*output;
char username[30];char password[40];
int i=0;
input1=lookup_widget(objet_graphique,"entry1");
input2=lookup_widget(objet_graphique,"entry2");

login=lookup_widget(objet_graphique,"login");
//admin=lookup_widget(objet_graphique,"admin");
//medecin=lookup_widget(objet_graphique,"medecin");
//clients=lookup_widget(objet_graphique,"clients");
//coach=lookup_widget(objet_graphique,"coach");
//error=lookup_widget(objet_graphique,"error");

strcpy(username,gtk_entry_get_text(GTK_ENTRY(input1)));
strcpy(password,gtk_entry_get_text(GTK_ENTRY(input2)));
i=verifier(username,password);
if(i==1)
{
admin= create_admin ();

gtk_widget_show(admin);
}
else if(i==2)
{
medecin= create_medecin ();

gtk_widget_show(medecin);
}
else if(i==3)
{
coach= create_coach ();

gtk_widget_show(coach);
}
else if(i==4)
{
clients= create_clients ();

gtk_widget_show(clients);
}
else if(i==-1)
{
error= create_error ();
gtk_widget_show(error);
}
}
void
on_button2_clicked                     (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *input3,*input4,*input5,*ajout;
char username1[30];char password1[40];char fonction1[20];
int fonction=0;
input3=lookup_widget(objet_graphique,"entry3");
input4=lookup_widget(objet_graphique,"entry4");
input5=lookup_widget(objet_graphique,"entry5");
ajout=lookup_widget(objet_graphique,"ajout");
strcpy(username1,gtk_entry_get_text(GTK_ENTRY(input3)));
strcpy(password1,gtk_entry_get_text(GTK_ENTRY(input4)));
strcpy(fonction1,gtk_entry_get_text(GTK_ENTRY(input5)));
fonction=atoi(fonction1);
ajouter(username1,password1,fonction);
}




void
on_button3_clicked                     (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{

GtkWidget *treeview1;
GtkWidget *login;
GtkWidget *output;
login=lookup_widget(objet_graphique,"login");
treeview1=lookup_widget(login,"treeview1");
afficher_personne(treeview1);
}


void
on_button4_clicked                     (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *ajout;
ajout= create_ajout ();
gtk_widget_show(ajout);

}


void
on_button5_clicked                     (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *ficheM;
ficheM= create_ficheM ();
gtk_widget_show(ficheM);

}



void
on_button6_clicked                     (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *ficheN;
ficheN= create_ficheN ();
gtk_widget_show(ficheN);

}

void
on_button7_clicked                     (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{

}


void
on_button8_clicked                     (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *ajouterFM;
ajouterFM= create_ajouterFM ();
gtk_widget_show(ajouterFM);
}


void
on_button9_clicked                     (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{

}


void
on_button10_clicked                    (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{

}


void
on_button14_clicked                    (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{

GtkWidget spinbutton1;
GtkWidget spinbutton4;
GtkWidget spinbutton5;

GtkWidget *combobox1;
GtkWidget *combobox2;
GtkWidget *combobox3;
GtkWidget *combobox4;
GtkWidget *input6;
GtkWidget *input7;
char MaladieC1[20];
char allergie1[20];
char Notice1[20];
char Sexe1[20];
char Nom1[20];
char Prenom1[20];
int Age;
int Taille;
int Poids;
GtkWidget *Age1;
GtkWidget *Taille1;
GtkWidget *Poids1;
input6=lookup_widget(objet_graphique,"entry6");
input7=lookup_widget(objet_graphique,"entry7");
combobox1=lookup_widget(objet_graphique,"combobox1");
combobox2=lookup_widget(objet_graphique,"combobox2");
combobox3=lookup_widget(objet_graphique,"combobox3");
combobox4=lookup_widget(objet_graphique,"combobox4");
Age1=lookup_widget(objet_graphique,"spinbutton1");
Poids1=lookup_widget(objet_graphique,"spinbutton4");
Taille1=lookup_widget(objet_graphique,"spinbutton5");

//ajouterFM=lookup_widget(objet_graphique,"ajouter");
strcpy(Nom1,gtk_entry_get_text(GTK_ENTRY(input6)));
strcpy(Prenom1,gtk_entry_get_text(GTK_ENTRY(input7)));
strcpy(Sexe1,gtk_combo_box_get_active_text(GTK_COMBO_BOX(combobox1)));
Age=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(Age1));
Poids=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(Poids1));
Taille=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(Taille1));

strcpy(MaladieC1,gtk_combo_box_get_active_text(GTK_COMBO_BOX(combobox2)));;
strcpy(allergie1,gtk_combo_box_get_active_text(GTK_COMBO_BOX(combobox3)));
strcpy(Notice1,gtk_combo_box_get_active_text(GTK_COMBO_BOX(combobox4)));
//Age=atoi(Age1);
//Poids=atoi(Poids1);
//Taille=atoi(Taille1);
ajouteFM(Nom1,Prenom1,Sexe1,Age,Poids,Taille,MaladieC1,allergie1,Notice1);
}


void
on_button11_clicked                    (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *ajouterFN;
ajouterFN= create_ajouterFN ();
gtk_widget_show(ajouterFN);
}


void
on_button12_clicked                    (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{

}


void
on_button13_clicked                    (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{

}


void
on_button15_clicked                    (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget spinbutton6;
GtkWidget spinbutton7;
GtkWidget spinbutton8;


GtkWidget *combobox5;
GtkWidget *combobox6;
GtkWidget *input8;
GtkWidget *input9;
char Regime2[20];
char Sexe2[20];
char Nom2[20];
char Prenom2[20];
int Age;
int Taille;
int Poids;
GtkWidget *Age2;
GtkWidget *Taille2;
GtkWidget *Poids2;
input8=lookup_widget(objet_graphique,"entry8");
input9=lookup_widget(objet_graphique,"entry9");
combobox5=lookup_widget(objet_graphique,"combobox5");
combobox6=lookup_widget(objet_graphique,"combobox6");

Age2=lookup_widget(objet_graphique,"spinbutton6");
Poids2=lookup_widget(objet_graphique,"spinbutton7");
Taille2=lookup_widget(objet_graphique,"spinbutton8");

//ajouterFM=lookup_widget(objet_graphique,"ajouter");
strcpy(Nom2,gtk_entry_get_text(GTK_ENTRY(input8)));
strcpy(Prenom2,gtk_entry_get_text(GTK_ENTRY(input9)));
strcpy(Sexe2,gtk_combo_box_get_active_text(GTK_COMBO_BOX(combobox5)));
Age=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(Age2));
Poids=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(Poids2));
Taille=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(Taille2));

strcpy(Regime2,gtk_combo_box_get_active_text(GTK_COMBO_BOX(combobox6)));

//Age=atoi(Age1);
//Poids=atoi(Poids1);
//Taille=atoi(Taille1);
ajouteFN(Nom2,Prenom2,Sexe2,Age,Poids,Taille,Regime2);
}


void
on_button16_clicked                    (GtkWidget       *objet,
                                        gpointer         user_data)
{

GtkWidget *treeview2;
GtkWidget *ficheM;
GtkWidget *output;
ficheM=lookup_widget(objet,"ficheM");
treeview2=lookup_widget(ficheM,"treeview2");
afficher_Adherant(treeview2);
}


void
on_button17_clicked                    (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *treeview3;
GtkWidget *ficheN;
GtkWidget *output;
ficheN=lookup_widget(objet,"ficheN");
treeview3=lookup_widget(ficheN,"treeview3");
afficher_personneN(treeview3);
}

