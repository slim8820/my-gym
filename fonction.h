typedef struct
{
int jours;
int mois;
int annee;
}Date;
typedef struct
{
char username[20];
char password[20];
char nom[20];
char prenom[20];
Date dt_nais;
char sexe[20];
}admin;

void ajouter (admin s);
