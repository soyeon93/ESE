#include<gtk/gtk.h>
#include "define.h"
int main (int argc, char *argv[])
{//box size - 
	gtk_init(&argc, &argv);	// GTK 기능을 사용하기전에 필요한 모든것을 초기화합니다
	window = gtk_window_new(GTK_WINDOW_TOPLEVEL);	//새로운 창을 만듭니다.
	window_main = gtk_window_new(GTK_WINDOW_TOPLEVEL);	

	g_signal_connect(G_OBJECT(window), "destroy", G_CALLBACK(gtk_main_quit), NULL);
	g_signal_connect(G_OBJECT(window_main), "destroy", G_CALLBACK(gtk_main_quit), NULL);
	/*-------------------------------------------------------*/
	//라벨을 만듭니다.
	label = gtk_label_new("grade calculation");
	gtk_widget_set_size_request(label, X, Y);

	/*-------------------------------------------------------*/
	//v박스를 만듭니다.
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


	window_vbox = gtk_vbox_new(TRUE, 0);
	window_hbox1 = gtk_hbox_new(TRUE, 0);
	window_hbox2 = gtk_hbox_new(TRUE, 0);


	/*-------------------------------------------------------*/
	//make label
	btn_setting();

	/*-------------------------------------------------------*/
	//버튼을 v박스에 포함시킵니다.
	addToVbox();

	/*-------------------------------------------------------*/
	//버튼이 클릭될경우 buttonClocked 함수를 callback합니다.
	callback();


	gtk_container_add(GTK_CONTAINER(window_main),window_vbox);
	gtk_container_add(GTK_CONTAINER(window),vbox);
	//만들어둔 창에 v박스를 포함시킵니다.

	gtk_widget_show_all(window_main);
	gtk_widget_set_size_request(window_main, 500, 500);	
	//gtk_widget_show_all(window);	//창에 있는 모든 위젯들을 보여줍니다.

	gtk_main();	//다음 입력이 있을때까지 기다립니다.

	return 0;
}

