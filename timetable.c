#include <stdio.h>
#include <gtk/gtk.h>

GtkWidget *window;
GtkWidget *hbox1;
GtkWidget *hbox2;
GtkWidget *hbox3;
GtkWidget *hbox4;
GtkWidget *hbox5;
GtkWidget *hbox6;
GtkWidget *hbox7;
GtkWidget *hbox8;
GtkWidget *hbox9;
GtkWidget *hbox10;
GtkWidget *hbox11;
GtkWidget *hbox12;
GtkWidget *hbox13;

//table 6*13
GtkWidget *label1_1;
GtkWidget *label1_2;
GtkWidget *label1_3;
GtkWidget *label1_4;
GtkWidget *label1_5;
GtkWidget *label1_6;

GtkWidget *label2_1;
GtkWidget *label2_2;
GtkWidget *label2_3;
GtkWidget *label2_4;
GtkWidget *label2_5;
GtkWidget *label2_6;

GtkWidget *label3_1;
GtkWidget *label3_2;
GtkWidget *label3_3;
GtkWidget *label3_4;
GtkWidget *label3_5;
GtkWidget *label3_6;

GtkWidget *label4_1;
GtkWidget *label4_2;
GtkWidget *label4_3;
GtkWidget *label4_4;
GtkWidget *label4_5;
GtkWidget *label4_6;

GtkWidget *label5_1;
GtkWidget *label5_2;
GtkWidget *label5_3;
GtkWidget *label5_4;
GtkWidget *label5_5;
GtkWidget *label5_6;

GtkWidget *label6_1;
GtkWidget *label6_2;
GtkWidget *label6_3;
GtkWidget *label6_4;
GtkWidget *label6_5;
GtkWidget *label6_6;

GtkWidget *label7_1;
GtkWidget *label7_2;
GtkWidget *label7_3;
GtkWidget *label7_4;
GtkWidget *label7_5;
GtkWidget *label7_6;

GtkWidget *label8_1;
GtkWidget *label8_2;
GtkWidget *label8_3;
GtkWidget *label8_4;
GtkWidget *label8_5;
GtkWidget *label8_6;

GtkWidget *label9_1;
GtkWidget *label9_2;
GtkWidget *label9_3;
GtkWidget *label9_4;
GtkWidget *label9_5;
GtkWidget *label9_6;

GtkWidget *label10_1;
GtkWidget *label10_2;
GtkWidget *label10_3;
GtkWidget *label10_4;
GtkWidget *label10_5;
GtkWidget *label10_6;

GtkWidget *label11_1;
GtkWidget *label11_2;
GtkWidget *label11_3;
GtkWidget *label11_4;
GtkWidget *label11_5;
GtkWidget *label11_6;

GtkWidget *label12_1;
GtkWidget *label12_2;
GtkWidget *label12_3;
GtkWidget *label12_4;
GtkWidget *label12_5;
GtkWidget *label12_6;

GtkWidget *label13_1;
GtkWidget *label13_2;
GtkWidget *label13_3;
GtkWidget *label13_4;
GtkWidget *label13_5;
GtkWidget *label13_6;

//GtkWidget *button;
//guint rows=13;
//guint coulums=6;
//gboolean tf=1;
//GtkWidget* gtk_table_new (rows,coulums,tf);
int table(void)
{
	int tableArray[13][6];
	/*
	information about grade put into tableArray. 
	*/
}
//
//callback function by OS
void saveButton()
{
	printf("save completed\n");
}

int main(int argc, char *argv[])
{
	
	gtk_init(&argc, &argv); 

	window=gtk_window_new(GTK_WINDOW_TOPLEVEL);
	g_signal_connect(G_OBJECT(window), "destroy",G_CALLBACK(gtk_main_quit),NULL);
	
	hbox1=gtk_hbox_new(TRUE,0);
	label1_1=gtk_label_new("  ");
	gtk_widget_set_size_request(label1_1,50,50);
	label1_2=gtk_label_new("MON");
	gtk_widget_set_size_request(label1_2,50,50);
	label1_3=gtk_label_new("THU");
	gtk_widget_set_size_request(label1_3,50,50);
	label1_4=gtk_label_new("WED");
	gtk_widget_set_size_request(label1_4,50,50);
	label1_5=gtk_label_new("THR");
	gtk_widget_set_size_request(label1_5,50,50);
	label1_6=gtk_label_new("FRI");
	gtk_widget_set_size_request(label1_6,50,50);
	
	hbox2=gtk_hbox_new(TRUE,0);
	label2_1=gtk_label_new("1");
	gtk_widget_set_size_request(label2_1,50,50);
	label2_2=gtk_label_new("  ");
	gtk_widget_set_size_request(label2_2,50,50);
	label2_3=gtk_label_new("  ");
	gtk_widget_set_size_request(label2_3,50,50);
	label2_4=gtk_label_new("  ");
	gtk_widget_set_size_request(label2_4,50,50);
	label2_5=gtk_label_new("  ");
	gtk_widget_set_size_request(label2_5,50,50);
	label2_6=gtk_label_new("  ");
	gtk_widget_set_size_request(label2_6,50,50);
	
	//button=gtk_button_new_with_label("save");
	//gtk_widget_set_size_request(button,50,50);
	//g_signal_connect(G_OBJECT(button), "clicked",G_CALLBACK(saveButton),NULL);
		
	gtk_container_add(GTK_CONTAINER(hbox1),label1_1);
	gtk_container_add(GTK_CONTAINER(hbox1),label1_2);
	gtk_container_add(GTK_CONTAINER(hbox1),label1_3);
	gtk_container_add(GTK_CONTAINER(hbox1),label1_4);
	gtk_container_add(GTK_CONTAINER(hbox1),label1_5);
	gtk_container_add(GTK_CONTAINER(hbox1),label1_6);
	
	gtk_container_add(GTK_CONTAINER(hbox2),label2_1);
	gtk_container_add(GTK_CONTAINER(hbox2),label2_2);
	gtk_container_add(GTK_CONTAINER(hbox2),label2_3);
	gtk_container_add(GTK_CONTAINER(hbox2),label2_4);
	gtk_container_add(GTK_CONTAINER(hbox2),label2_5);
	gtk_container_add(GTK_CONTAINER(hbox2),label2_6);
		
	//gtk_container_add(GTK_CONTAINER(hbox),button);
	gtk_container_add(GTK_CONTAINER(window),hbox1);
	gtk_container_add(GTK_CONTAINER(window),hbox2);	
	gtk_widget_show_all(window);
	gtk_main();

	return 0;
}
