#include<gtk/gtk.h>
#include "define.h" 
int counter;
int buf_grd[16];
int buf_crd[16];
int buf_maj[16];
char *subA[16];		
double gradeA[16];	
int creditA[16];	
int majorA[16];	

void function_clear()
{
	int i;	
	
	for(i=0;i<16;i++){ *(subA+i) = 0;}
	for(i=0;i<16;i++){gradeA[i]=0;}
	for(i=0;i<16;i++){creditA[i]=0;}
	for(i=0;i<16;i++){majorA[i]=0;}
	for(i=0;i<16;i++){buf_grd[i]=0;}
	for(i=0;i<16;i++){buf_crd[i]=0;}
	for(i=0;i<16;i++){buf_maj[i]=0;}

	counter = 0;

	gtk_label_set_text(GTK_LABEL(major_result),"0.0");
	gtk_label_set_text(GTK_LABEL(result),"0.0");
	gtk_label_set_text(GTK_LABEL(sub1),"sub1");	//button setting
	gtk_label_set_text(GTK_LABEL(sub2),"sub2");
	gtk_label_set_text(GTK_LABEL(sub3),"sub3");
	gtk_label_set_text(GTK_LABEL(sub4),"sub4");
	gtk_label_set_text(GTK_LABEL(sub5),"sub5");
	gtk_label_set_text(GTK_LABEL(sub6),"sub6");
	gtk_label_set_text(GTK_LABEL(sub7),"sub7");
	gtk_label_set_text(GTK_LABEL(sub8),"sub8");
	gtk_label_set_text(GTK_LABEL(sub9),"sub9");
	gtk_label_set_text(GTK_LABEL(sub10),"sub10");

	gtk_button_set_label(GTK_BUTTON(grade1),"grd1");
	gtk_button_set_label(GTK_BUTTON(grade2),"grd2");
	gtk_button_set_label(GTK_BUTTON(grade3),"grd3");
	gtk_button_set_label(GTK_BUTTON(grade4),"grd4");
	gtk_button_set_label(GTK_BUTTON(grade5),"grd5");
	gtk_button_set_label(GTK_BUTTON(grade6),"grd6");
	gtk_button_set_label(GTK_BUTTON(grade7),"grd7");
	gtk_button_set_label(GTK_BUTTON(grade8),"grd8");
	gtk_button_set_label(GTK_BUTTON(grade9),"grd9");
	gtk_button_set_label(GTK_BUTTON(grade10),"grd10");

	gtk_button_set_label(GTK_BUTTON(credit1),"crd1");
	gtk_button_set_label(GTK_BUTTON(credit2),"crd2");
	gtk_button_set_label(GTK_BUTTON(credit3),"crd3");
	gtk_button_set_label(GTK_BUTTON(credit4),"crd4");
	gtk_button_set_label(GTK_BUTTON(credit5),"crd5");
	gtk_button_set_label(GTK_BUTTON(credit6),"crd6");
	gtk_button_set_label(GTK_BUTTON(credit7),"crd7");
	gtk_button_set_label(GTK_BUTTON(credit8),"crd8");
	gtk_button_set_label(GTK_BUTTON(credit9),"crd9");
	gtk_button_set_label(GTK_BUTTON(credit10),"crd10");

	gtk_button_set_label(GTK_BUTTON(major1),"mjr1");
	gtk_button_set_label(GTK_BUTTON(major2),"mjr2");
	gtk_button_set_label(GTK_BUTTON(major3),"mjr3");
	gtk_button_set_label(GTK_BUTTON(major4),"mjr4");
	gtk_button_set_label(GTK_BUTTON(major5),"mjr5");
	gtk_button_set_label(GTK_BUTTON(major6),"mjr6");
	gtk_button_set_label(GTK_BUTTON(major7),"mjr7");
	gtk_button_set_label(GTK_BUTTON(major8),"mjr8");
	gtk_button_set_label(GTK_BUTTON(major9),"mjr9");
	gtk_button_set_label(GTK_BUTTON(major10),"mjr10");
	return;
}

