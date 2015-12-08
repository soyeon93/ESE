#include <stdio.h>
#include <gtk/gtk.h>
#include "define.h"

void timetable(void)
{
	

	window_timetable=gtk_window_new(GTK_WINDOW_TOPLEVEL);
	g_signal_connect(G_OBJECT(window_timetable), "destroy",G_CALLBACK(gtk_main_quit),NULL);
	vbox_timetable=gtk_vbox_new(TRUE,0);
	hbox1jj=gtk_hbox_new(TRUE,0);
	label1jj_1=gtk_label_new("  ");
	gtk_widget_set_size_request(label1jj_1,100,50);
	label1jj_2=gtk_label_new("MON");
	gtk_widget_set_size_request(label1jj_2,100,50);
	label1jj_3=gtk_label_new("THU");
	gtk_widget_set_size_request(label1jj_3,100,50);
	label1jj_4=gtk_label_new("WED");
	gtk_widget_set_size_request(label1jj_4,100,50);
	label1jj_5=gtk_label_new("THR");
	gtk_widget_set_size_request(label1jj_5,100,50);
	label1jj_6=gtk_label_new("FRI");
	gtk_widget_set_size_request(label1jj_6,100,50);
	
	hbox2jj=gtk_hbox_new(TRUE,0);
	label2jj_1=gtk_label_new("1교시");
	gtk_widget_set_size_request(label2jj_1,100,50);
	label2jj_2=gtk_label_new("  ");
	gtk_widget_set_size_request(label2jj_2,100,50);
	label2jj_3=gtk_label_new("  ");
	gtk_widget_set_size_request(label2jj_3,100,50);
	label2jj_4=gtk_label_new("  ");
	gtk_widget_set_size_request(label2jj_4,100,50);
	label2jj_5=gtk_label_new("  ");
	gtk_widget_set_size_request(label2jj_5,100,50);
	label2jj_6=gtk_label_new("  ");
	gtk_widget_set_size_request(label2jj_6,100,50);
	
	hbox3jj=gtk_hbox_new(TRUE,0);
	label3jj_1=gtk_label_new("2교시");
	gtk_widget_set_size_request(label3jj_1,100,50);
	label3jj_2=gtk_label_new("  ");
	gtk_widget_set_size_request(label3jj_2,100,50);
	label3jj_3=gtk_label_new("  ");
	gtk_widget_set_size_request(label3jj_3,100,50);
	label3jj_4=gtk_label_new("  ");
	gtk_widget_set_size_request(label3jj_4,100,50);
	label3jj_5=gtk_label_new("  ");
	gtk_widget_set_size_request(label3jj_5,100,50);
	label3jj_6=gtk_label_new("  ");
	gtk_widget_set_size_request(label3jj_6,100,50);

	hbox4jj=gtk_hbox_new(TRUE,0);
	label4jj_1=gtk_label_new("3교시");
	gtk_widget_set_size_request(label4jj_1,100,50);
	label4jj_2=gtk_label_new("  ");
	gtk_widget_set_size_request(label4jj_2,100,50);
	label4jj_3=gtk_label_new("  ");
	gtk_widget_set_size_request(label4jj_3,100,50);
	label4jj_4=gtk_label_new("  ");
	gtk_widget_set_size_request(label4jj_4,100,50);
	label4jj_5=gtk_label_new("  ");
	gtk_widget_set_size_request(label4jj_5,100,50);
	label4jj_6=gtk_label_new("  ");
	gtk_widget_set_size_request(label4jj_6,100,50);
	
	hbox5jj=gtk_hbox_new(TRUE,0);
	label5jj_1=gtk_label_new("4교시");
	gtk_widget_set_size_request(label5jj_1,100,50);
	label5jj_2=gtk_label_new("  ");
	gtk_widget_set_size_request(label5jj_2,100,50);
	label5jj_3=gtk_label_new("  ");
	gtk_widget_set_size_request(label5jj_3,100,50);
	label5jj_4=gtk_label_new("  ");
	gtk_widget_set_size_request(label5jj_4,100,50);
	label5jj_5=gtk_label_new("  ");
	gtk_widget_set_size_request(label5jj_5,100,50);
	label5jj_6=gtk_label_new("  ");
	gtk_widget_set_size_request(label5jj_6,100,50);
	
	hbox6jj=gtk_hbox_new(TRUE,0);
	label6jj_1=gtk_label_new("5교시");
	gtk_widget_set_size_request(label6jj_1,100,50);
	label6jj_2=gtk_label_new("  ");
	gtk_widget_set_size_request(label6jj_2,100,50);
	label6jj_3=gtk_label_new("  ");
	gtk_widget_set_size_request(label6jj_3,100,50);
	label6jj_4=gtk_label_new("  ");
	gtk_widget_set_size_request(label6jj_4,100,50);
	label6jj_5=gtk_label_new("  ");
	gtk_widget_set_size_request(label6jj_5,100,50);
	label6jj_6=gtk_label_new("  ");
	gtk_widget_set_size_request(label6jj_6,100,50);
	
	hbox7jj=gtk_hbox_new(TRUE,0);
	label7jj_1=gtk_label_new("6교시");
	gtk_widget_set_size_request(label7jj_1,100,50);
	label7jj_2=gtk_label_new("  ");
	gtk_widget_set_size_request(label7jj_2,100,50);
	label7jj_3=gtk_label_new("  ");
	gtk_widget_set_size_request(label7jj_3,100,50);
	label7jj_4=gtk_label_new("  ");
	gtk_widget_set_size_request(label7jj_4,100,50);
	label7jj_5=gtk_label_new("  ");
	gtk_widget_set_size_request(label7jj_5,100,50);
	label7jj_6=gtk_label_new("  ");
	gtk_widget_set_size_request(label7jj_6,100,50);
	
	hbox8jj=gtk_hbox_new(TRUE,0);
	label8jj_1=gtk_label_new("7교시");
	gtk_widget_set_size_request(label8jj_1,100,50);
	label8jj_2=gtk_label_new("  ");
	gtk_widget_set_size_request(label8jj_2,100,50);
	label8jj_3=gtk_label_new("  ");
	gtk_widget_set_size_request(label8jj_3,100,50);
	label8jj_4=gtk_label_new("  ");
	gtk_widget_set_size_request(label8jj_4,100,50);
	label8jj_5=gtk_label_new("  ");
	gtk_widget_set_size_request(label8jj_5,100,50);
	label8jj_6=gtk_label_new("  ");
	gtk_widget_set_size_request(label8jj_6,100,50);
	
	hbox9jj=gtk_hbox_new(TRUE,0);
	label9jj_1=gtk_label_new("8교시");
	gtk_widget_set_size_request(label9jj_1,100,50);
	label9jj_2=gtk_label_new("  ");
	gtk_widget_set_size_request(label9jj_2,100,50);
	label9jj_3=gtk_label_new("  ");
	gtk_widget_set_size_request(label9jj_3,100,50);
	label9jj_4=gtk_label_new("  ");
	gtk_widget_set_size_request(label9jj_4,100,50);
	label9jj_5=gtk_label_new("  ");
	gtk_widget_set_size_request(label9jj_5,100,50);
	label9jj_6=gtk_label_new("  ");
	gtk_widget_set_size_request(label9jj_6,100,50);
	
	hbox1jj0=gtk_hbox_new(TRUE,0);
	label1jj0_1=gtk_label_new("9교시");
	gtk_widget_set_size_request(label1jj0_1,100,50);
	label1jj0_2=gtk_label_new("  ");
	gtk_widget_set_size_request(label1jj0_2,100,50);
	label1jj0_3=gtk_label_new("  ");
	gtk_widget_set_size_request(label1jj0_3,100,50);
	label1jj0_4=gtk_label_new("  ");
	gtk_widget_set_size_request(label1jj0_4,100,50);
	label1jj0_5=gtk_label_new("  ");
	gtk_widget_set_size_request(label1jj0_5,100,50);
	label1jj0_6=gtk_label_new("  ");
	gtk_widget_set_size_request(label1jj0_6,100,50);
	
	
	hbox1jj1=gtk_hbox_new(TRUE,0);
	label1jj1_1=gtk_label_new("야간1교시");
	gtk_widget_set_size_request(label1jj1_1,100,50);
	label1jj1_2=gtk_label_new("  ");
	gtk_widget_set_size_request(label1jj1_2,100,50);
	label1jj1_3=gtk_label_new("  ");
	gtk_widget_set_size_request(label1jj1_3,100,50);
	label1jj1_4=gtk_label_new("  ");
	gtk_widget_set_size_request(label1jj1_4,100,50);
	label1jj1_5=gtk_label_new("  ");
	gtk_widget_set_size_request(label1jj1_5,100,50);
	label1jj1_6=gtk_label_new("  ");
	gtk_widget_set_size_request(label1jj1_6,100,50);
	
	
	hbox1jj2=gtk_hbox_new(TRUE,0);
	label1jj2_1=gtk_label_new("야간2교시");
	gtk_widget_set_size_request(label1jj2_1,100,50);
	label1jj2_2=gtk_label_new("  ");
	gtk_widget_set_size_request(label1jj2_2,100,50);
	label1jj2_3=gtk_label_new("  ");
	gtk_widget_set_size_request(label1jj2_3,100,50);
	label1jj2_4=gtk_label_new("  ");
	gtk_widget_set_size_request(label1jj2_4,100,50);
	label1jj2_5=gtk_label_new("  ");
	gtk_widget_set_size_request(label1jj2_5,100,50);
	label1jj2_6=gtk_label_new("  ");
	gtk_widget_set_size_request(label1jj2_6,100,50);
	
	
	hbox1jj3=gtk_hbox_new(TRUE,0);
	label1jj3_1=gtk_label_new("야간3교시");
	gtk_widget_set_size_request(label1jj3_1,100,50);
	label1jj3_2=gtk_label_new("  ");
	gtk_widget_set_size_request(label1jj3_2,100,50);
	label1jj3_3=gtk_label_new("  ");
	gtk_widget_set_size_request(label1jj3_3,100,50);
	label1jj3_4=gtk_label_new("  ");
	gtk_widget_set_size_request(label1jj3_4,100,50);
	label1jj3_5=gtk_label_new("  ");
	gtk_widget_set_size_request(label1jj3_5,100,50);
	label1jj3_6=gtk_label_new("  ");
	gtk_widget_set_size_request(label1jj3_6,100,50);
	

	gtk_container_add(GTK_CONTAINER(hbox1jj),label1jj_1);
	gtk_container_add(GTK_CONTAINER(hbox1jj),label1jj_2);
	gtk_container_add(GTK_CONTAINER(hbox1jj),label1jj_3);
	gtk_container_add(GTK_CONTAINER(hbox1jj),label1jj_4);
	gtk_container_add(GTK_CONTAINER(hbox1jj),label1jj_5);
	gtk_container_add(GTK_CONTAINER(hbox1jj),label1jj_6);
	
	gtk_container_add(GTK_CONTAINER(hbox2jj),label2jj_1);
	gtk_container_add(GTK_CONTAINER(hbox2jj),label2jj_2);
	gtk_container_add(GTK_CONTAINER(hbox2jj),label2jj_3);
	gtk_container_add(GTK_CONTAINER(hbox2jj),label2jj_4);
	gtk_container_add(GTK_CONTAINER(hbox2jj),label2jj_5);
	gtk_container_add(GTK_CONTAINER(hbox2jj),label2jj_6);
		
	gtk_container_add(GTK_CONTAINER(hbox3jj),label3jj_1);
	gtk_container_add(GTK_CONTAINER(hbox3jj),label3jj_2);
	gtk_container_add(GTK_CONTAINER(hbox3jj),label3jj_3);
	gtk_container_add(GTK_CONTAINER(hbox3jj),label3jj_4);
	gtk_container_add(GTK_CONTAINER(hbox3jj),label3jj_5);
	gtk_container_add(GTK_CONTAINER(hbox3jj),label3jj_6);
	
	gtk_container_add(GTK_CONTAINER(hbox4jj),label4jj_1);
	gtk_container_add(GTK_CONTAINER(hbox4jj),label4jj_2);
	gtk_container_add(GTK_CONTAINER(hbox4jj),label4jj_3);
	gtk_container_add(GTK_CONTAINER(hbox4jj),label4jj_4);
	gtk_container_add(GTK_CONTAINER(hbox4jj),label4jj_5);
	gtk_container_add(GTK_CONTAINER(hbox4jj),label4jj_6);

	gtk_container_add(GTK_CONTAINER(hbox5jj),label5jj_1);
	gtk_container_add(GTK_CONTAINER(hbox5jj),label5jj_2);
	gtk_container_add(GTK_CONTAINER(hbox5jj),label5jj_3);
	gtk_container_add(GTK_CONTAINER(hbox5jj),label5jj_4);
	gtk_container_add(GTK_CONTAINER(hbox5jj),label5jj_5);
	gtk_container_add(GTK_CONTAINER(hbox5jj),label5jj_6);
	
	gtk_container_add(GTK_CONTAINER(hbox6jj),label6jj_1);
	gtk_container_add(GTK_CONTAINER(hbox6jj),label6jj_2);
	gtk_container_add(GTK_CONTAINER(hbox6jj),label6jj_3);
	gtk_container_add(GTK_CONTAINER(hbox6jj),label6jj_4);
	gtk_container_add(GTK_CONTAINER(hbox6jj),label6jj_5);
	gtk_container_add(GTK_CONTAINER(hbox6jj),label6jj_6);

	gtk_container_add(GTK_CONTAINER(hbox7jj),label7jj_1);
	gtk_container_add(GTK_CONTAINER(hbox7jj),label7jj_2);
	gtk_container_add(GTK_CONTAINER(hbox7jj),label7jj_3);
	gtk_container_add(GTK_CONTAINER(hbox7jj),label7jj_4);
	gtk_container_add(GTK_CONTAINER(hbox7jj),label7jj_5);
	gtk_container_add(GTK_CONTAINER(hbox7jj),label7jj_6);
	
	gtk_container_add(GTK_CONTAINER(hbox8jj),label8jj_1);
	gtk_container_add(GTK_CONTAINER(hbox8jj),label8jj_2);
	gtk_container_add(GTK_CONTAINER(hbox8jj),label8jj_3);
	gtk_container_add(GTK_CONTAINER(hbox8jj),label8jj_4);
	gtk_container_add(GTK_CONTAINER(hbox8jj),label8jj_5);
	gtk_container_add(GTK_CONTAINER(hbox8jj),label8jj_6);

	gtk_container_add(GTK_CONTAINER(hbox9jj),label9jj_1);
	gtk_container_add(GTK_CONTAINER(hbox9jj),label9jj_2);
	gtk_container_add(GTK_CONTAINER(hbox9jj),label9jj_3);
	gtk_container_add(GTK_CONTAINER(hbox9jj),label9jj_4);
	gtk_container_add(GTK_CONTAINER(hbox9jj),label9jj_5);
	gtk_container_add(GTK_CONTAINER(hbox9jj),label9jj_6);

	gtk_container_add(GTK_CONTAINER(hbox1jj0),label1jj0_1);
	gtk_container_add(GTK_CONTAINER(hbox1jj0),label1jj0_2);
	gtk_container_add(GTK_CONTAINER(hbox1jj0),label1jj0_3);
	gtk_container_add(GTK_CONTAINER(hbox1jj0),label1jj0_4);
	gtk_container_add(GTK_CONTAINER(hbox1jj0),label1jj0_5);
	gtk_container_add(GTK_CONTAINER(hbox1jj0),label1jj0_6);

	gtk_container_add(GTK_CONTAINER(hbox1jj1),label1jj1_1);
	gtk_container_add(GTK_CONTAINER(hbox1jj1),label1jj1_2);
	gtk_container_add(GTK_CONTAINER(hbox1jj1),label1jj1_3);
	gtk_container_add(GTK_CONTAINER(hbox1jj1),label1jj1_4);
	gtk_container_add(GTK_CONTAINER(hbox1jj1),label1jj1_5);
	gtk_container_add(GTK_CONTAINER(hbox1jj1),label1jj1_6);
	
	gtk_container_add(GTK_CONTAINER(hbox1jj2),label1jj2_1);
	gtk_container_add(GTK_CONTAINER(hbox1jj2),label1jj2_2);
	gtk_container_add(GTK_CONTAINER(hbox1jj2),label1jj2_3);
	gtk_container_add(GTK_CONTAINER(hbox1jj2),label1jj2_4);
	gtk_container_add(GTK_CONTAINER(hbox1jj2),label1jj2_5);
	gtk_container_add(GTK_CONTAINER(hbox1jj2),label1jj2_6);

	gtk_container_add(GTK_CONTAINER(hbox1jj3),label1jj3_1);
	gtk_container_add(GTK_CONTAINER(hbox1jj3),label1jj3_2);
	gtk_container_add(GTK_CONTAINER(hbox1jj3),label1jj3_3);
	gtk_container_add(GTK_CONTAINER(hbox1jj3),label1jj3_4);
	gtk_container_add(GTK_CONTAINER(hbox1jj3),label1jj3_5);
	gtk_container_add(GTK_CONTAINER(hbox1jj3),label1jj3_6);
	
	
	gtk_container_add(GTK_CONTAINER(vbox_timetable),hbox1jj);
	gtk_container_add(GTK_CONTAINER(vbox_timetable),hbox2jj);
	gtk_container_add(GTK_CONTAINER(vbox_timetable),hbox3jj);
	gtk_container_add(GTK_CONTAINER(vbox_timetable),hbox4jj);	
	gtk_container_add(GTK_CONTAINER(vbox_timetable),hbox5jj);
	gtk_container_add(GTK_CONTAINER(vbox_timetable),hbox6jj);	
	gtk_container_add(GTK_CONTAINER(vbox_timetable),hbox7jj);
	gtk_container_add(GTK_CONTAINER(vbox_timetable),hbox8jj);	
	gtk_container_add(GTK_CONTAINER(vbox_timetable),hbox9jj);
	gtk_container_add(GTK_CONTAINER(vbox_timetable),hbox1jj0);	
	gtk_container_add(GTK_CONTAINER(vbox_timetable),hbox1jj1);
	gtk_container_add(GTK_CONTAINER(vbox_timetable),hbox1jj2);	
	gtk_container_add(GTK_CONTAINER(vbox_timetable),hbox1jj3);
		
	gtk_container_add(GTK_CONTAINER(window_timetable),vbox_timetable);
		
	gtk_widget_show_all(window_timetable);
	gtk_main();

	return;
}

