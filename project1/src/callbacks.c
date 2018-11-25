#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>
#include <string.h>
#include <stdio.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"
#include "login.h"


void on_button1_clicked (GtkWidget *object_graphique, gpointer user_data)
{
	char login[30];char password[30]; int role;int x;

	GtkWidget *input1=lookup_widget(object_graphique,"entry1");
	GtkWidget *input2=lookup_widget(object_graphique,"entry2");
	GtkWidget *output=lookup_widget(object_graphique,"label4");
	GtkWidget *window2;
	GtkWidget *window3;
	GtkWidget *window4;

	

	strcpy(login,gtk_entry_get_text(GTK_ENTRY(input1)));
	strcpy(password,gtk_entry_get_text(GTK_ENTRY(input2)));

	x=verifier(login,password);
	
	if(x ==-1)
	{
	gtk_label_set_text(GTK_LABEL(output),"login/Password incorrect");
	
	}
	else 
	{
		switch(x)
		{
		case 1 : {	window2 = create_window2();
				gtk_widget_show(window2);}break;
		case 2 : { 	window3 = create_window3();
				gtk_widget_show(window3);}break;
		case 3 : {	window4 = create_window4();
				gtk_widget_show(window4);}break;
		default : printf("nothing\n");
		}

	}

	
}


void on_button2_clicked (GtkWidget *object_graphique, gpointer user_data)
{
gtk_main_quit();
}

void on_button3_clicked (GtkWidget *object_graphique, gpointer user_data)
{
	GtkWidget *window5;
	window5 = create_window5();
	gtk_widget_show(window5);

}


void on_button4_clicked (GtkWidget *object_graphique, gpointer user_data)
{

}


void on_button5_clicked (GtkWidget *object_graphique, gpointer user_data)
{

}


void on_button6_clicked (GtkWidget *object_graphique, gpointer user_data)
{

}


void on_button7_clicked (GtkWidget *object_graphique, gpointer user_data)
{
gtk_main_quit();
}


gboolean
on_comboboxentry1_popdown              (GtkComboBox     *combobox,
                                        gpointer         user_data)
{

  return FALSE;
}


void on_button8_clicked (GtkWidget *object_graphique, gpointer user_data)
{
	char login[30];char password[30];int role;
	char nom[30];char prenom[30];
	int jour;int mois;int annee;
	char ville[30];char postal[30];char adresse[50];

	GtkWidget *input3=lookup_widget(object_graphique,"entry3");
	GtkWidget *input4=lookup_widget(object_graphique,"entry4");
	GtkWidget *input5=lookup_widget(object_graphique,"entry5");
	GtkWidget *input6=lookup_widget(object_graphique,"entry6");
	GtkWidget *input7=lookup_widget(object_graphique,"entry7");
	GtkWidget *input8=lookup_widget(object_graphique,"entry8");
	GtkWidget *input9=lookup_widget(object_graphique,"entry9");
	GtkWidget *combobox1=lookup_widget(object_graphique,"combobox1");
	GtkWidget *j=lookup_widget(object_graphique, "spinbutton1");
	GtkWidget *m=lookup_widget(object_graphique, "spinbutton2");
	GtkWidget *a=lookup_widget(object_graphique, "spinbutton3");

	strcpy(login,gtk_entry_get_text(GTK_ENTRY(input3)));
	strcpy(password,gtk_entry_get_text(GTK_ENTRY(input4)));
	strcpy(nom,gtk_entry_get_text(GTK_ENTRY(input6)));
	strcpy(prenom,gtk_entry_get_text(GTK_ENTRY(input5)));
	strcpy(ville,gtk_entry_get_text(GTK_ENTRY(input7)));
	strcpy(postal,gtk_entry_get_text(GTK_ENTRY(input8)));
	strcpy(adresse,gtk_entry_get_text(GTK_ENTRY(input9)));
	
	jour=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON (j));
	mois=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON (m));
	annee=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON (a));

	if(strcmp("coach",gtk_combo_box_get_active_text(GTK_COMBO_BOX(combobox1)))==0)
	{	role=2;
	}
	else if(strcmp("adherent",gtk_combo_box_get_active_text(GTK_COMBO_BOX(combobox1)))==0)
	{	role=3;
	}
	else if(strcmp("kine",gtk_combo_box_get_active_text(GTK_COMBO_BOX(combobox1)))==0)
	{	role=4;
	}
	
	else{	
	role=5;
	}
	
	ajouter(login,password,role);
	info(nom,prenom,jour,mois,annee,ville,postal,adresse);


}

