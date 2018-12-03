#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>
#include <string.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"
#include "verfier.h"









void
on_button1_clicked                     (GtkWidget       *button , gpointer         user_data)

{
GtkWidget *window;
GtkWidget *window1;
GtkWidget *input;
GtkWidget *input2;
GtkWidget *output;
char x[50];char y[50];
char ext[50];
int verif;
 
window1=lookup_widget(button,"window1");
input=lookup_widget(button,"entry1");
strcpy(x,gtk_entry_get_text(GTK_ENTRY(input)));
input2=lookup_widget(button,"entry2");
strcpy(y,gtk_entry_get_text(GTK_ENTRY(input2)));
verif=verifier(x,y);
if( verif==1){
gtk_widget_hide(window1);
window=create_admin();
gtk_widget_show_all(window);}
else if( verif==2){
gtk_widget_hide(window1);
window=create_adherent();
gtk_widget_show_all(window);}
else if( verif==3){
gtk_widget_hide(window1);
window=create_coach();
gtk_widget_show_all(window);}
else if( verif==4){
gtk_widget_hide(window1);
window=create_nutritionniste();
gtk_widget_show_all(window);}
else if( verif==5){
gtk_widget_hide(window1);
window=create_dieteticien();
gtk_widget_show_all(window);}
else if( verif==6){
gtk_widget_hide(window1);
window=create_kine();
gtk_widget_show_all(window);}
else if( verif==-1){
strcpy(ext,"erreur:user name/ password uncorrect");
output=lookup_widget(button,"label8");
gtk_label_set_text(GTK_LABEL(output),ext);}

}
void
on_button2_clicked                     (GtkWidget       *button , gpointer         user_data)

{
 
GtkWidget *window;
window=lookup_widget(button,"admin");
gtk_widget_hide(window);
window=create_ajouter();
gtk_widget_show_all(window);

}
void
on_button3_clicked                     (GtkWidget       *button , gpointer         user_data)

{
GtkWidget *window;
GtkWidget *input3;
GtkWidget *input4;
GtkWidget *input5;
int r2;
char x[50];
char y[50];
FILE* f ;

window=lookup_widget(button,"ajouter");
input3=lookup_widget(button,"entry11");
strcpy(x,gtk_entry_get_text(GTK_ENTRY(input3)));
input4=lookup_widget(button,"entry12");
strcpy(y,gtk_entry_get_text(GTK_ENTRY(input4)));
input5=lookup_widget(button,"spinbutton1");
r2=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON (input5));  
f=fopen("/home/slimmensi/Projects/project3/src/users.txt","a++");
if(f !=NULL) 
	{
		fprintf(f,"%s %s %d \n",x,y,r2);
	}
fclose(f);
}



void
on_button4_clicked                     (GtkWidget       *button, gpointer  user_data)
{


users adm;
GtkWidget *input1;
GtkWidget *input2;
char username[20];
char password[20];

input1=lookup_widget(button,"entry13");
input2=lookup_widget(button,"entry14");
strcpy(username,gtk_entry_get_text(GTK_ENTRY(input1)));
strcpy(password,gtk_entry_get_text(GTK_ENTRY(input2)));
 FILE* f;
 FILE* f_temp;   
int i=0;
   f=fopen("/home/slimmensi/Projects/project3/src/users.txt","r");
 f_temp=fopen("/home/slimmensi/Projects/project3/src/users_tmp.txt","a+");
while(fscanf(f,"%s %s",Username,Password)!=EOF)
   {i++;}
fclose(f);

f=fopen("admin.txt","r");
 f_temp=fopen("/home/slimmensi/Projects/project3/src/users_tmp.txt","a+");

   while(fscanf(f,"%s %s",username,password)!=EOF)
   {  
     if ((strcmp(username)!=0)||(strcmp(password)!=0))
{
fprintf(f_temp,"%s %s\n",username,password);
  }
};
fclose(f);
fclose(f_temp);
remove("/home/slimmensi/Projects/project3/src/users.txt");
rename("/home/slimmensi/Projects/project3/src/users_tmp.txt","users.txt");



}


void
on_button5_clicked                     (GtkButton       *button,
                                        gpointer         user_data)
{

}

