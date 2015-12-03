#include <stdio.h>
#include <gtk/gtk.h>

GtkWidget *window;
GtkWidget *vbox;
GtkWidget *label1;
GtkWidget *label2;
GtkWidget *button;
	
int table(void)
{
	int tableArray[13][6];
	/*
	information about grade put into tableArray. 
	*/
}

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
	
	vbox=gtk_vbox_new(TRUE,0);
	label1=gtk_label_new("Time Table");
	gtk_widget_set_size_request(label1,200,50);
	label2=gtk_label_new("201002641");
	gtk_widget_set_size_request(label2,100,20);
	
	button=gtk_button_new_with_label("save");
	gtk_widget_set_size_request(button,200,50);
	g_signal_connect(G_OBJECT(button), "clicked",G_CALLBACK(saveButton),NULL);
		
	gtk_container_add(GTK_CONTAINER(vbox),label1);
	gtk_container_add(GTK_CONTAINER(vbox),label2);
	gtk_container_add(GTK_CONTAINER(vbox),button);
	gtk_container_add(GTK_CONTAINER(window),vbox);
	gtk_widget_show_all(window);
	gtk_main();

	return 0;
}
