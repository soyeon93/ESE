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
GtkWidget *vbox1;

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
	vbox1=gtk_vbox_new(TRUE,0);
	hbox1=gtk_hbox_new(TRUE,0);
	label1_1=gtk_label_new("  ");
	gtk_widget_set_size_request(label1_1,100,50);
	label1_2=gtk_label_new("MON");
	gtk_widget_set_size_request(label1_2,100,50);
	label1_3=gtk_label_new("THU");
	gtk_widget_set_size_request(label1_3,100,50);
	label1_4=gtk_label_new("WED");
	gtk_widget_set_size_request(label1_4,100,50);
	label1_5=gtk_label_new("THR");
	gtk_widget_set_size_request(label1_5,100,50);
	label1_6=gtk_label_new("FRI");
	gtk_widget_set_size_request(label1_6,100,50);
	
	hbox2=gtk_hbox_new(TRUE,0);
	label2_1=gtk_label_new("1교시");
	gtk_widget_set_size_request(label2_1,100,50);
	label2_2=gtk_label_new("  ");
	gtk_widget_set_size_request(label2_2,100,50);
	label2_3=gtk_label_new("  ");
	gtk_widget_set_size_request(label2_3,100,50);
	label2_4=gtk_label_new("  ");
	gtk_widget_set_size_request(label2_4,100,50);
	label2_5=gtk_label_new("  ");
	gtk_widget_set_size_request(label2_5,100,50);
	label2_6=gtk_label_new("  ");
	gtk_widget_set_size_request(label2_6,100,50);
	
	hbox3=gtk_hbox_new(TRUE,0);
	label3_1=gtk_label_new("2교시");
	gtk_widget_set_size_request(label3_1,100,50);
	label3_2=gtk_label_new("  ");
	gtk_widget_set_size_request(label3_2,100,50);
	label3_3=gtk_label_new("  ");
	gtk_widget_set_size_request(label3_3,100,50);
	label3_4=gtk_label_new("  ");
	gtk_widget_set_size_request(label3_4,100,50);
	label3_5=gtk_label_new("  ");
	gtk_widget_set_size_request(label3_5,100,50);
	label3_6=gtk_label_new("  ");
	gtk_widget_set_size_request(label3_6,100,50);

	hbox4=gtk_hbox_new(TRUE,0);
	label4_1=gtk_label_new("3교시");
	gtk_widget_set_size_request(label4_1,100,50);
	label4_2=gtk_label_new("  ");
	gtk_widget_set_size_request(label4_2,100,50);
	label4_3=gtk_label_new("  ");
	gtk_widget_set_size_request(label4_3,100,50);
	label4_4=gtk_label_new("  ");
	gtk_widget_set_size_request(label4_4,100,50);
	label4_5=gtk_label_new("  ");
	gtk_widget_set_size_request(label4_5,100,50);
	label4_6=gtk_label_new("  ");
	gtk_widget_set_size_request(label4_6,100,50);
	
	hbox5=gtk_hbox_new(TRUE,0);
	label5_1=gtk_label_new("4교시");
	gtk_widget_set_size_request(label5_1,100,50);
	label5_2=gtk_label_new("  ");
	gtk_widget_set_size_request(label5_2,100,50);
	label5_3=gtk_label_new("  ");
	gtk_widget_set_size_request(label5_3,100,50);
	label5_4=gtk_label_new("  ");
	gtk_widget_set_size_request(label5_4,100,50);
	label5_5=gtk_label_new("  ");
	gtk_widget_set_size_request(label5_5,100,50);
	label5_6=gtk_label_new("  ");
	gtk_widget_set_size_request(label5_6,100,50);
	
	hbox6=gtk_hbox_new(TRUE,0);
	label6_1=gtk_label_new("5교시");
	gtk_widget_set_size_request(label6_1,100,50);
	label6_2=gtk_label_new("  ");
	gtk_widget_set_size_request(label6_2,100,50);
	label6_3=gtk_label_new("  ");
	gtk_widget_set_size_request(label6_3,100,50);
	label6_4=gtk_label_new("  ");
	gtk_widget_set_size_request(label6_4,100,50);
	label6_5=gtk_label_new("  ");
	gtk_widget_set_size_request(label6_5,100,50);
	label6_6=gtk_label_new("  ");
	gtk_widget_set_size_request(label6_6,100,50);
	
	hbox7=gtk_hbox_new(TRUE,0);
	label7_1=gtk_label_new("6교시");
	gtk_widget_set_size_request(label7_1,100,50);
	label7_2=gtk_label_new("  ");
	gtk_widget_set_size_request(label7_2,100,50);
	label7_3=gtk_label_new("  ");
	gtk_widget_set_size_request(label7_3,100,50);
	label7_4=gtk_label_new("  ");
	gtk_widget_set_size_request(label7_4,100,50);
	label7_5=gtk_label_new("  ");
	gtk_widget_set_size_request(label7_5,100,50);
	label7_6=gtk_label_new("  ");
	gtk_widget_set_size_request(label7_6,100,50);
	
	hbox8=gtk_hbox_new(TRUE,0);
	label8_1=gtk_label_new("7교시");
	gtk_widget_set_size_request(label8_1,100,50);
	label8_2=gtk_label_new("  ");
	gtk_widget_set_size_request(label8_2,100,50);
	label8_3=gtk_label_new("  ");
	gtk_widget_set_size_request(label8_3,100,50);
	label8_4=gtk_label_new("  ");
	gtk_widget_set_size_request(label8_4,100,50);
	label8_5=gtk_label_new("  ");
	gtk_widget_set_size_request(label8_5,100,50);
	label8_6=gtk_label_new("  ");
	gtk_widget_set_size_request(label8_6,100,50);
	
	hbox9=gtk_hbox_new(TRUE,0);
	label9_1=gtk_label_new("8교시");
	gtk_widget_set_size_request(label9_1,100,50);
	label9_2=gtk_label_new("  ");
	gtk_widget_set_size_request(label9_2,100,50);
	label9_3=gtk_label_new("  ");
	gtk_widget_set_size_request(label9_3,100,50);
	label9_4=gtk_label_new("  ");
	gtk_widget_set_size_request(label9_4,100,50);
	label9_5=gtk_label_new("  ");
	gtk_widget_set_size_request(label9_5,100,50);
	label9_6=gtk_label_new("  ");
	gtk_widget_set_size_request(label9_6,100,50);
	
	hbox10=gtk_hbox_new(TRUE,0);
	label10_1=gtk_label_new("9교시");
	gtk_widget_set_size_request(label10_1,100,50);
	label10_2=gtk_label_new("  ");
	gtk_widget_set_size_request(label10_2,100,50);
	label10_3=gtk_label_new("  ");
	gtk_widget_set_size_request(label10_3,100,50);
	label10_4=gtk_label_new("  ");
	gtk_widget_set_size_request(label10_4,100,50);
	label10_5=gtk_label_new("  ");
	gtk_widget_set_size_request(label10_5,100,50);
	label10_6=gtk_label_new("  ");
	gtk_widget_set_size_request(label10_6,100,50);
	
	
	hbox11=gtk_hbox_new(TRUE,0);
	label11_1=gtk_label_new("야간1교시");
	gtk_widget_set_size_request(label11_1,100,50);
	label11_2=gtk_label_new("  ");
	gtk_widget_set_size_request(label11_2,100,50);
	label11_3=gtk_label_new("  ");
	gtk_widget_set_size_request(label11_3,100,50);
	label11_4=gtk_label_new("  ");
	gtk_widget_set_size_request(label11_4,100,50);
	label11_5=gtk_label_new("  ");
	gtk_widget_set_size_request(label11_5,100,50);
	label11_6=gtk_label_new("  ");
	gtk_widget_set_size_request(label11_6,100,50);
	
	
	hbox12=gtk_hbox_new(TRUE,0);
	label12_1=gtk_label_new("야간2교시");
	gtk_widget_set_size_request(label12_1,100,50);
	label12_2=gtk_label_new("  ");
	gtk_widget_set_size_request(label12_2,100,50);
	label12_3=gtk_label_new("  ");
	gtk_widget_set_size_request(label12_3,100,50);
	label12_4=gtk_label_new("  ");
	gtk_widget_set_size_request(label12_4,100,50);
	label12_5=gtk_label_new("  ");
	gtk_widget_set_size_request(label12_5,100,50);
	label12_6=gtk_label_new("  ");
	gtk_widget_set_size_request(label12_6,100,50);
	
	
	hbox13=gtk_hbox_new(TRUE,0);
	label13_1=gtk_label_new("야간3교시");
	gtk_widget_set_size_request(label13_1,100,50);
	label13_2=gtk_label_new("  ");
	gtk_widget_set_size_request(label13_2,100,50);
	label13_3=gtk_label_new("  ");
	gtk_widget_set_size_request(label13_3,100,50);
	label13_4=gtk_label_new("  ");
	gtk_widget_set_size_request(label13_4,100,50);
	label13_5=gtk_label_new("  ");
	gtk_widget_set_size_request(label13_5,100,50);
	label13_6=gtk_label_new("  ");
	gtk_widget_set_size_request(label13_6,100,50);
	

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
		
	gtk_container_add(GTK_CONTAINER(hbox3),label3_1);
	gtk_container_add(GTK_CONTAINER(hbox3),label3_2);
	gtk_container_add(GTK_CONTAINER(hbox3),label3_3);
	gtk_container_add(GTK_CONTAINER(hbox3),label3_4);
	gtk_container_add(GTK_CONTAINER(hbox3),label3_5);
	gtk_container_add(GTK_CONTAINER(hbox3),label3_6);
	
	gtk_container_add(GTK_CONTAINER(hbox4),label4_1);
	gtk_container_add(GTK_CONTAINER(hbox4),label4_2);
	gtk_container_add(GTK_CONTAINER(hbox4),label4_3);
	gtk_container_add(GTK_CONTAINER(hbox4),label4_4);
	gtk_container_add(GTK_CONTAINER(hbox4),label4_5);
	gtk_container_add(GTK_CONTAINER(hbox4),label4_6);

	gtk_container_add(GTK_CONTAINER(hbox5),label5_1);
	gtk_container_add(GTK_CONTAINER(hbox5),label5_2);
	gtk_container_add(GTK_CONTAINER(hbox5),label5_3);
	gtk_container_add(GTK_CONTAINER(hbox5),label5_4);
	gtk_container_add(GTK_CONTAINER(hbox5),label5_5);
	gtk_container_add(GTK_CONTAINER(hbox5),label5_6);
	
	gtk_container_add(GTK_CONTAINER(hbox6),label6_1);
	gtk_container_add(GTK_CONTAINER(hbox6),label6_2);
	gtk_container_add(GTK_CONTAINER(hbox6),label6_3);
	gtk_container_add(GTK_CONTAINER(hbox6),label6_4);
	gtk_container_add(GTK_CONTAINER(hbox6),label6_5);
	gtk_container_add(GTK_CONTAINER(hbox6),label6_6);

	gtk_container_add(GTK_CONTAINER(hbox7),label7_1);
	gtk_container_add(GTK_CONTAINER(hbox7),label7_2);
	gtk_container_add(GTK_CONTAINER(hbox7),label7_3);
	gtk_container_add(GTK_CONTAINER(hbox7),label7_4);
	gtk_container_add(GTK_CONTAINER(hbox7),label7_5);
	gtk_container_add(GTK_CONTAINER(hbox7),label7_6);
	
	gtk_container_add(GTK_CONTAINER(hbox8),label8_1);
	gtk_container_add(GTK_CONTAINER(hbox8),label8_2);
	gtk_container_add(GTK_CONTAINER(hbox8),label8_3);
	gtk_container_add(GTK_CONTAINER(hbox8),label8_4);
	gtk_container_add(GTK_CONTAINER(hbox8),label8_5);
	gtk_container_add(GTK_CONTAINER(hbox8),label8_6);

	gtk_container_add(GTK_CONTAINER(hbox9),label9_1);
	gtk_container_add(GTK_CONTAINER(hbox9),label9_2);
	gtk_container_add(GTK_CONTAINER(hbox9),label9_3);
	gtk_container_add(GTK_CONTAINER(hbox9),label9_4);
	gtk_container_add(GTK_CONTAINER(hbox9),label9_5);
	gtk_container_add(GTK_CONTAINER(hbox9),label9_6);

	gtk_container_add(GTK_CONTAINER(hbox10),label10_1);
	gtk_container_add(GTK_CONTAINER(hbox10),label10_2);
	gtk_container_add(GTK_CONTAINER(hbox10),label10_3);
	gtk_container_add(GTK_CONTAINER(hbox10),label10_4);
	gtk_container_add(GTK_CONTAINER(hbox10),label10_5);
	gtk_container_add(GTK_CONTAINER(hbox10),label10_6);

	gtk_container_add(GTK_CONTAINER(hbox11),label11_1);
	gtk_container_add(GTK_CONTAINER(hbox11),label11_2);
	gtk_container_add(GTK_CONTAINER(hbox11),label11_3);
	gtk_container_add(GTK_CONTAINER(hbox11),label11_4);
	gtk_container_add(GTK_CONTAINER(hbox11),label11_5);
	gtk_container_add(GTK_CONTAINER(hbox11),label11_6);
	
	gtk_container_add(GTK_CONTAINER(hbox12),label12_1);
	gtk_container_add(GTK_CONTAINER(hbox12),label12_2);
	gtk_container_add(GTK_CONTAINER(hbox12),label12_3);
	gtk_container_add(GTK_CONTAINER(hbox12),label12_4);
	gtk_container_add(GTK_CONTAINER(hbox12),label12_5);
	gtk_container_add(GTK_CONTAINER(hbox12),label12_6);

	gtk_container_add(GTK_CONTAINER(hbox13),label13_1);
	gtk_container_add(GTK_CONTAINER(hbox13),label13_2);
	gtk_container_add(GTK_CONTAINER(hbox13),label13_3);
	gtk_container_add(GTK_CONTAINER(hbox13),label13_4);
	gtk_container_add(GTK_CONTAINER(hbox13),label13_5);
	gtk_container_add(GTK_CONTAINER(hbox13),label13_6);
	
	
	//gtk_container_add(GTK_CONTAINER(hbox),button);
	gtk_container_add(GTK_CONTAINER(vbox1),hbox1);
	gtk_container_add(GTK_CONTAINER(vbox1),hbox2);
	gtk_container_add(GTK_CONTAINER(vbox1),hbox3);
	gtk_container_add(GTK_CONTAINER(vbox1),hbox4);	
	gtk_container_add(GTK_CONTAINER(vbox1),hbox5);
	gtk_container_add(GTK_CONTAINER(vbox1),hbox6);	
	gtk_container_add(GTK_CONTAINER(vbox1),hbox7);
	gtk_container_add(GTK_CONTAINER(vbox1),hbox8);	
	gtk_container_add(GTK_CONTAINER(vbox1),hbox9);
	gtk_container_add(GTK_CONTAINER(vbox1),hbox10);	
	gtk_container_add(GTK_CONTAINER(vbox1),hbox11);
	gtk_container_add(GTK_CONTAINER(vbox1),hbox12);	
	gtk_container_add(GTK_CONTAINER(vbox1),hbox13);
		
	gtk_container_add(GTK_CONTAINER(window),vbox1);
		
	gtk_widget_show_all(window);
	gtk_main();

	return 0;
}
