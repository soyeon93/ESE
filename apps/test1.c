#include<gtk/gtk.h>
#include "define.h"
int main (int argc, char *argv[])
{
	gtk_init(&argc, &argv);	
	window = gtk_window_new(GTK_WINDOW_TOPLEVEL);	
	window_main = gtk_window_new(GTK_WINDOW_TOPLEVEL);	

	g_signal_connect(G_OBJECT(window), "destroy", G_CALLBACK(gtk_main_quit), NULL);
	g_signal_connect(G_OBJECT(window_main), "destroy", G_CALLBACK(gtk_main_quit), NULL);	
	g_signal_connect(G_OBJECT(window_timetable), "destroy", G_CALLBACK(gtk_main_quit), NULL);
	g_signal_connect(G_OBJECT(window_calMajor), "destroy", G_CALLBACK(gtk_main_quit), NULL);
	/*-------------------------------------------------------*/

	label = gtk_label_new("grade calculation");
	gtk_widget_set_size_request(label, X, Y);

	/*-------------------------------------------------------*/
	vbox = gtk_vbox_new(TRUE, 0);
	vbox1 = gtk_vbox_new(TRUE, 0);
	vbox2 = gtk_vbox_new(TRUE, 0);
	hbox = gtk_hbox_new(TRUE, 0);
	hbox0 = gtk_hbox_new(TRUE, 0);
	hbox1 = gtk_hbox_new(TRUE, 0);
	hbox2 = gtk_hbox_new(TRUE, 0);
	hbox3 = gtk_hbox_new(TRUE, 0);
	hbox4 = gtk_hbox_new(TRUE, 0);
	hbox5 = gtk_hbox_new(TRUE, 0);
	hbox6 = gtk_hbox_new(TRUE, 0);
	hbox7 = gtk_hbox_new(TRUE, 0);
	hbox8 = gtk_hbox_new(TRUE, 0);
	hbox9 = gtk_hbox_new(TRUE, 0);
	hbox10 = gtk_hbox_new(TRUE, 0);
	hbox_back = gtk_hbox_new(TRUE, 0);
	hbox_fresh = gtk_hbox_new(TRUE, 0);
	hbox_sophomore = gtk_hbox_new(TRUE, 0);
	hbox_junior = gtk_hbox_new(TRUE, 0);
	hbox_senior = gtk_hbox_new(TRUE, 0);
	hbox_label = gtk_hbox_new(TRUE, 0);
	hbox_graduate = gtk_hbox_new(TRUE, 0);

	window_vbox = gtk_vbox_new(TRUE, 0);
	vbox_timetable = gtk_vbox_new(TRUE, 0);
	vbox_calMajor = gtk_vbox_new(TRUE, 0);
	window_hbox1 = gtk_hbox_new(TRUE, 0);
	window_hbox2 = gtk_hbox_new(TRUE, 0);
	

		
	gtk_container_add(GTK_CONTAINER(window_calMajor),vbox_calMajor);
	gtk_container_add(GTK_CONTAINER(window_timetable),vbox_timetable);
	//gtk_widget_show_all(window_calMajor);

	btn_setting();

	addToVbox();

	callback();

	g_signal_connect(G_OBJECT(buttonj), "clicked",G_CALLBACK(saveButton),NULL);
	gtk_container_add(GTK_CONTAINER(window_main),window_vbox);
	gtk_container_add(GTK_CONTAINER(window),vbox);

	gtk_widget_show_all(window_main);
	gtk_widget_set_size_request(window_main, 500, 500);	

	gtk_main();	//다음 입력이 있을때까지 기다립니다.

	return 0;
}

