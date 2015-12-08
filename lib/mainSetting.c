#include "define.h"
#include<gtk/gtk.h>
void btn_setting()
{
	window_main_label = gtk_label_new("select button");	
	gtk_widget_set_size_request(window_main_label, X, Y);

	sub = gtk_label_new("subject");	//creating and setting size of label
	gtk_widget_set_size_request(sub, X, Y);

	grade = gtk_label_new("grade");
	gtk_widget_set_size_request(grade, X, Y);

	credit = gtk_label_new("credit");
	gtk_widget_set_size_request(credit, X, Y);

	major = gtk_label_new("major");
	gtk_widget_set_size_request(major, X, Y);

	empty = gtk_label_new("");
	gtk_widget_set_size_request(empty, X, Y);

	result = gtk_label_new("result");
	gtk_widget_set_size_request(result, X, Y);
	major_result = gtk_label_new("major_result");
	gtk_widget_set_size_request(major_result, X, Y);

	info = gtk_label_new("click a semester if you want save the information");
	gtk_widget_set_size_request(info, X, Y);

	clear = gtk_button_new_with_label("clear");
	gtk_widget_set_size_request(clear, X, Y);

	calculate = gtk_button_new_with_label("calculate");
	gtk_widget_set_size_request(calculate, X, Y);

	fresh_first = gtk_button_new_with_label("fresh_first");
	gtk_widget_set_size_request(fresh_first, X, Y);

	fresh_second = gtk_button_new_with_label("fresh_second");
	gtk_widget_set_size_request(fresh_second, X, Y);

	sophomore_first = gtk_button_new_with_label("sophomore_first");
	gtk_widget_set_size_request(sophomore_first, X, Y);

	sophomore_second = gtk_button_new_with_label("sophomore_second");
	gtk_widget_set_size_request(sophomore_second, X, Y);

	junior_first = gtk_button_new_with_label("junior_first");
	gtk_widget_set_size_request(junior_first, X, Y);

	junior_second = gtk_button_new_with_label("junior_second");
	gtk_widget_set_size_request(junior_second, X, Y);

	senior_first = gtk_button_new_with_label("senior_first");
	gtk_widget_set_size_request(senior_first, X, Y);

	senior_second = gtk_button_new_with_label("senior_second");
	gtk_widget_set_size_request(senior_second, X, Y);

	window_main_btn = gtk_button_new_with_label("window_main_btn");
	gtk_widget_set_size_request(window_main_btn, X, Y);

	window_saved_btn = gtk_button_new_with_label("window_saved_btn");
	gtk_widget_set_size_request(window_saved_btn, X, Y);

	timetable_btn = gtk_button_new_with_label("timetable_btn");
	gtk_widget_set_size_request(timetable_btn, X, Y);

	calMajor_btn = gtk_button_new_with_label("calMajor_btn");
	gtk_widget_set_size_request(calMajor_btn, X, Y);

	back = gtk_button_new_with_label("back");
	gtk_widget_set_size_request(back, X, Y);

//////////////////////////////////////////////////////
	sub1 = gtk_label_new("subject1");
	gtk_widget_set_size_request(sub1, X, Y);

	sub2 = gtk_label_new("subject2");
	gtk_widget_set_size_request(sub2, X, Y);

	sub3 = gtk_label_new("subject3");
	gtk_widget_set_size_request(sub3, X, Y);

	sub4 = gtk_label_new("subject4");
	gtk_widget_set_size_request(sub4, X, Y);

	sub5 = gtk_label_new("subject5");
	gtk_widget_set_size_request(sub5, X, Y);

	sub6 = gtk_label_new("subject6");
	gtk_widget_set_size_request(sub6, X, Y);

	sub7 = gtk_label_new("subject7");
	gtk_widget_set_size_request(sub7, X, Y);

	sub8 = gtk_label_new("subject8");
	gtk_widget_set_size_request(sub8, X, Y);

	sub9 = gtk_label_new("subject9");
	gtk_widget_set_size_request(sub9, X, Y);

	sub10 = gtk_label_new("subject10");
	gtk_widget_set_size_request(sub10, X, Y);

	sub11 = gtk_label_new("subject11");
	gtk_widget_set_size_request(sub11, X, Y);

	sub12 = gtk_label_new("subject12");
	gtk_widget_set_size_request(sub12, X, Y);

	sub13 = gtk_label_new("subject13");
	gtk_widget_set_size_request(sub13, X, Y);

	sub14 = gtk_label_new("subject14");
	gtk_widget_set_size_request(sub14, X, Y);

	sub15 = gtk_label_new("subject15");
	gtk_widget_set_size_request(sub15, X, Y);

	sub16 = gtk_label_new("subject16");
	gtk_widget_set_size_request(sub16, X, Y);

	/*-------------------------------------------------------*/
	//버튼을 만듭니다.
	grade1 = gtk_button_new_with_label("grade1");
	gtk_widget_set_size_request(grade1, X, Y);
		
	grade2 = gtk_button_new_with_label("grade2");
	gtk_widget_set_size_request(grade2, X, Y);
		
	grade3 = gtk_button_new_with_label("grade3");
	gtk_widget_set_size_request(grade3, X, Y);
		
	grade4 = gtk_button_new_with_label("grade4");
	gtk_widget_set_size_request(grade4, X, Y);
		
	grade5 = gtk_button_new_with_label("grade5");
	gtk_widget_set_size_request(grade5, X, Y);
		
	grade6 = gtk_button_new_with_label("grade6");
	gtk_widget_set_size_request(grade6, X, Y);
		
	grade7 = gtk_button_new_with_label("grade7");
	gtk_widget_set_size_request(grade7, X, Y);
		
	grade8 = gtk_button_new_with_label("grade8");
	gtk_widget_set_size_request(grade8, X, Y);
		
	grade9 = gtk_button_new_with_label("grade9");
	gtk_widget_set_size_request(grade9, X, Y);
		
	grade10 = gtk_button_new_with_label("grade10");
	gtk_widget_set_size_request(grade10, X, Y);
		
	grade11 = gtk_button_new_with_label("grade11");
	gtk_widget_set_size_request(grade11, X, Y);
		
	grade12 = gtk_button_new_with_label("grade12");
	gtk_widget_set_size_request(grade12, X, Y);
		
	grade13 = gtk_button_new_with_label("grade13");
	gtk_widget_set_size_request(grade13, X, Y);
		
	grade14 = gtk_button_new_with_label("grade14");
	gtk_widget_set_size_request(grade14, X, Y);
		
	grade15 = gtk_button_new_with_label("grade15");
	gtk_widget_set_size_request(grade15, X, Y);
		
	grade16 = gtk_button_new_with_label("grade16");
	gtk_widget_set_size_request(grade16, X, Y);
		

////////////////////////////
	credit1 = gtk_button_new_with_label("credit1");
	gtk_widget_set_size_request(credit1, X, Y);

	credit2 = gtk_button_new_with_label("credit2");
	gtk_widget_set_size_request(credit2, X, Y);

	credit3 = gtk_button_new_with_label("credit3");
	gtk_widget_set_size_request(credit3, X, Y);

	credit4 = gtk_button_new_with_label("credit4");
	gtk_widget_set_size_request(credit4, X, Y);

	credit5 = gtk_button_new_with_label("credit5");
	gtk_widget_set_size_request(credit5, X, Y);

	credit6 = gtk_button_new_with_label("credit6");
	gtk_widget_set_size_request(credit6, X, Y);

	credit7 = gtk_button_new_with_label("credit7");
	gtk_widget_set_size_request(credit7, X, Y);

	credit8 = gtk_button_new_with_label("credit8");
	gtk_widget_set_size_request(credit8, X, Y);

	credit9 = gtk_button_new_with_label("credit9");
	gtk_widget_set_size_request(credit9, X, Y);

	credit10 = gtk_button_new_with_label("credit10");
	gtk_widget_set_size_request(credit10, X, Y);

	credit11 = gtk_button_new_with_label("credit11");
	gtk_widget_set_size_request(credit11, X, Y);

	credit12 = gtk_button_new_with_label("credit12");
	gtk_widget_set_size_request(credit12, X, Y);

	credit13 = gtk_button_new_with_label("credit13");
	gtk_widget_set_size_request(credit13, X, Y);

	credit14 = gtk_button_new_with_label("credit14");
	gtk_widget_set_size_request(credit14, X, Y);

	credit15 = gtk_button_new_with_label("credit15");
	gtk_widget_set_size_request(credit15, X, Y);

	credit16 = gtk_button_new_with_label("credit16");
	gtk_widget_set_size_request(credit16, X, Y);

//////////////////////////////////////

	major1 = gtk_button_new_with_label("major1");
	gtk_widget_set_size_request(major1, X, Y);

	major2 = gtk_button_new_with_label("major2");
	gtk_widget_set_size_request(major2, X, Y);

	major3 = gtk_button_new_with_label("major3");
	gtk_widget_set_size_request(major3, X, Y);

	major4 = gtk_button_new_with_label("major4");
	gtk_widget_set_size_request(major4, X, Y);

	major5 = gtk_button_new_with_label("major5");
	gtk_widget_set_size_request(major5, X, Y);

	major6 = gtk_button_new_with_label("major6");
	gtk_widget_set_size_request(major6, X, Y);

	major7 = gtk_button_new_with_label("major7");
	gtk_widget_set_size_request(major7, X, Y);

	major8 = gtk_button_new_with_label("major8");
	gtk_widget_set_size_request(major8, X, Y);

	major9 = gtk_button_new_with_label("major9");
	gtk_widget_set_size_request(major9, X, Y);

	major10 = gtk_button_new_with_label("major10");
	gtk_widget_set_size_request(major10, X, Y);

	major11 = gtk_button_new_with_label("major11");
	gtk_widget_set_size_request(major11, X, Y);

	major12 = gtk_button_new_with_label("major12");
	gtk_widget_set_size_request(major12, X, Y);

	major13 = gtk_button_new_with_label("major13");
	gtk_widget_set_size_request(major13, X, Y);

	major14 = gtk_button_new_with_label("major14");
	gtk_widget_set_size_request(major14, X, Y);

	major15 = gtk_button_new_with_label("major15");
	gtk_widget_set_size_request(major15, X, Y);

	major16 = gtk_button_new_with_label("major16");
	gtk_widget_set_size_request(major16, X, Y);


}
void addToVbox()
{
gtk_container_add(GTK_CONTAINER(hbox_back),result);
	gtk_container_add(GTK_CONTAINER(hbox_back),label);
	gtk_container_add(GTK_CONTAINER(hbox_back),back);
	gtk_container_add(GTK_CONTAINER(hbox),major_result);
	gtk_container_add(GTK_CONTAINER(hbox),clear);
	gtk_container_add(GTK_CONTAINER(hbox),calculate);

	gtk_container_add(GTK_CONTAINER(hbox0),sub);
	gtk_container_add(GTK_CONTAINER(hbox0),grade);
	gtk_container_add(GTK_CONTAINER(hbox0),credit);
	gtk_container_add(GTK_CONTAINER(hbox0),major);

	gtk_container_add(GTK_CONTAINER(hbox1),sub1);
	gtk_container_add(GTK_CONTAINER(hbox1),grade1);
	gtk_container_add(GTK_CONTAINER(hbox1),credit1);
	gtk_container_add(GTK_CONTAINER(hbox1),major1);

	gtk_container_add(GTK_CONTAINER(hbox2),sub2);
	gtk_container_add(GTK_CONTAINER(hbox2),grade2);
	gtk_container_add(GTK_CONTAINER(hbox2),credit2);
	gtk_container_add(GTK_CONTAINER(hbox2),major2);

	gtk_container_add(GTK_CONTAINER(hbox3),sub3);
	gtk_container_add(GTK_CONTAINER(hbox3),grade3);
	gtk_container_add(GTK_CONTAINER(hbox3),credit3);
	gtk_container_add(GTK_CONTAINER(hbox3),major3);

	gtk_container_add(GTK_CONTAINER(hbox4),sub4);
	gtk_container_add(GTK_CONTAINER(hbox4),grade4);
	gtk_container_add(GTK_CONTAINER(hbox4),credit4);
	gtk_container_add(GTK_CONTAINER(hbox4),major4);

	gtk_container_add(GTK_CONTAINER(hbox5),sub5);
	gtk_container_add(GTK_CONTAINER(hbox5),grade5);
	gtk_container_add(GTK_CONTAINER(hbox5),credit5);
	gtk_container_add(GTK_CONTAINER(hbox5),major5);

	gtk_container_add(GTK_CONTAINER(hbox6),sub6);
	gtk_container_add(GTK_CONTAINER(hbox6),grade6);
	gtk_container_add(GTK_CONTAINER(hbox6),credit6);
	gtk_container_add(GTK_CONTAINER(hbox6),major6);

	gtk_container_add(GTK_CONTAINER(hbox7),sub7);
	gtk_container_add(GTK_CONTAINER(hbox7),grade7);
	gtk_container_add(GTK_CONTAINER(hbox7),credit7);
	gtk_container_add(GTK_CONTAINER(hbox7),major7);

	gtk_container_add(GTK_CONTAINER(hbox8),sub8);
	gtk_container_add(GTK_CONTAINER(hbox8),grade8);
	gtk_container_add(GTK_CONTAINER(hbox8),credit8);
	gtk_container_add(GTK_CONTAINER(hbox8),major8);

	gtk_container_add(GTK_CONTAINER(hbox9),sub9);
	gtk_container_add(GTK_CONTAINER(hbox9),grade9);
	gtk_container_add(GTK_CONTAINER(hbox9),credit9);
	gtk_container_add(GTK_CONTAINER(hbox9),major9);

	gtk_container_add(GTK_CONTAINER(hbox10),sub10);
	gtk_container_add(GTK_CONTAINER(hbox10),grade10);
	gtk_container_add(GTK_CONTAINER(hbox10),credit10);
	gtk_container_add(GTK_CONTAINER(hbox10),major10);

	gtk_container_add(GTK_CONTAINER(hbox_fresh),fresh_first);
	gtk_container_add(GTK_CONTAINER(hbox_sophomore),sophomore_first);
	gtk_container_add(GTK_CONTAINER(hbox_junior),junior_first);
	gtk_container_add(GTK_CONTAINER(hbox_senior),senior_first);

	gtk_container_add(GTK_CONTAINER(hbox_fresh),fresh_second);
	gtk_container_add(GTK_CONTAINER(hbox_sophomore),sophomore_second);
	gtk_container_add(GTK_CONTAINER(hbox_junior),junior_second);
	gtk_container_add(GTK_CONTAINER(hbox_senior),senior_second);
	
	gtk_container_add(GTK_CONTAINER(hbox_label),info);

	gtk_container_add(GTK_CONTAINER(hbox_graduate),timetable_btn);
	gtk_container_add(GTK_CONTAINER(hbox_graduate),calMajor_btn);

	gtk_container_add(GTK_CONTAINER(window_hbox1),window_main_label);
	gtk_container_add(GTK_CONTAINER(window_hbox2),window_main_btn);
	gtk_container_add(GTK_CONTAINER(window_hbox2),window_saved_btn);


	

	gtk_container_add(GTK_CONTAINER(vbox),hbox_back);
	gtk_container_add(GTK_CONTAINER(vbox),hbox);
	gtk_container_add(GTK_CONTAINER(vbox),hbox0);
	gtk_container_add(GTK_CONTAINER(vbox),hbox1);
	gtk_container_add(GTK_CONTAINER(vbox),hbox2);
	gtk_container_add(GTK_CONTAINER(vbox),hbox3);
	gtk_container_add(GTK_CONTAINER(vbox),hbox4);
	gtk_container_add(GTK_CONTAINER(vbox),hbox5);
	gtk_container_add(GTK_CONTAINER(vbox),hbox6);
	gtk_container_add(GTK_CONTAINER(vbox),hbox7);
	gtk_container_add(GTK_CONTAINER(vbox),hbox8);
	gtk_container_add(GTK_CONTAINER(vbox),hbox9);
	gtk_container_add(GTK_CONTAINER(vbox),hbox10);
	gtk_container_add(GTK_CONTAINER(vbox),hbox_label);
	gtk_container_add(GTK_CONTAINER(vbox),hbox_fresh);
	gtk_container_add(GTK_CONTAINER(vbox),hbox_sophomore);
	gtk_container_add(GTK_CONTAINER(vbox),hbox_junior);
	gtk_container_add(GTK_CONTAINER(vbox),hbox_senior);

	gtk_container_add(GTK_CONTAINER(window_vbox),window_hbox1);
	gtk_container_add(GTK_CONTAINER(window_vbox),window_hbox2);
	gtk_container_add(GTK_CONTAINER(window_vbox),hbox_graduate);


}
void callback()
{
	g_signal_connect(G_OBJECT(grade1), "clicked", G_CALLBACK(buttonClicked), NULL);
	g_signal_connect(G_OBJECT(grade2), "clicked", G_CALLBACK(buttonClicked), NULL);
	g_signal_connect(G_OBJECT(grade3), "clicked", G_CALLBACK(buttonClicked), NULL);
	g_signal_connect(G_OBJECT(grade4), "clicked", G_CALLBACK(buttonClicked), NULL);
	g_signal_connect(G_OBJECT(grade5), "clicked", G_CALLBACK(buttonClicked), NULL);
	g_signal_connect(G_OBJECT(grade6), "clicked", G_CALLBACK(buttonClicked), NULL);
	g_signal_connect(G_OBJECT(grade7), "clicked", G_CALLBACK(buttonClicked), NULL);
	g_signal_connect(G_OBJECT(grade8), "clicked", G_CALLBACK(buttonClicked), NULL);
	g_signal_connect(G_OBJECT(grade9), "clicked", G_CALLBACK(buttonClicked), NULL);
	g_signal_connect(G_OBJECT(grade10), "clicked", G_CALLBACK(buttonClicked), NULL);

	g_signal_connect(G_OBJECT(credit1), "clicked", G_CALLBACK(buttonClicked), NULL);
	g_signal_connect(G_OBJECT(credit2), "clicked", G_CALLBACK(buttonClicked), NULL);
	g_signal_connect(G_OBJECT(credit3), "clicked", G_CALLBACK(buttonClicked), NULL);
	g_signal_connect(G_OBJECT(credit4), "clicked", G_CALLBACK(buttonClicked), NULL);
	g_signal_connect(G_OBJECT(credit5), "clicked", G_CALLBACK(buttonClicked), NULL);
	g_signal_connect(G_OBJECT(credit6), "clicked", G_CALLBACK(buttonClicked), NULL);
	g_signal_connect(G_OBJECT(credit7), "clicked", G_CALLBACK(buttonClicked), NULL);
	g_signal_connect(G_OBJECT(credit8), "clicked", G_CALLBACK(buttonClicked), NULL);
	g_signal_connect(G_OBJECT(credit9), "clicked", G_CALLBACK(buttonClicked), NULL);
	g_signal_connect(G_OBJECT(credit10), "clicked", G_CALLBACK(buttonClicked), NULL);

	g_signal_connect(G_OBJECT(clear), "clicked", G_CALLBACK(function_clear), NULL);
	g_signal_connect(G_OBJECT(calculate), "clicked", G_CALLBACK(function_calculate), NULL);

	g_signal_connect(G_OBJECT(fresh_first), "clicked", G_CALLBACK(save_fresh_first), NULL);
	g_signal_connect(G_OBJECT(fresh_second), "clicked", G_CALLBACK(save_fresh_second), NULL);
	g_signal_connect(G_OBJECT(sophomore_first), "clicked", G_CALLBACK(save_sophomore_first), NULL);
	g_signal_connect(G_OBJECT(sophomore_second), "clicked", G_CALLBACK(save_sophomore_second), NULL);
	g_signal_connect(G_OBJECT(junior_first), "clicked", G_CALLBACK(save_junior_first), NULL);
	g_signal_connect(G_OBJECT(junior_second), "clicked", G_CALLBACK(save_junior_second), NULL);
	g_signal_connect(G_OBJECT(senior_first), "clicked", G_CALLBACK(save_senior_first), NULL);
	g_signal_connect(G_OBJECT(senior_second), "clicked", G_CALLBACK(save_senior_second), NULL);

	g_signal_connect(G_OBJECT(major1), "clicked", G_CALLBACK(buttonClicked), NULL);
	g_signal_connect(G_OBJECT(major2), "clicked", G_CALLBACK(buttonClicked), NULL);
	g_signal_connect(G_OBJECT(major3), "clicked", G_CALLBACK(buttonClicked), NULL);
	g_signal_connect(G_OBJECT(major4), "clicked", G_CALLBACK(buttonClicked), NULL);
	g_signal_connect(G_OBJECT(major5), "clicked", G_CALLBACK(buttonClicked), NULL);
	g_signal_connect(G_OBJECT(major6), "clicked", G_CALLBACK(buttonClicked), NULL);
	g_signal_connect(G_OBJECT(major7), "clicked", G_CALLBACK(buttonClicked), NULL);
	g_signal_connect(G_OBJECT(major8), "clicked", G_CALLBACK(buttonClicked), NULL);
	g_signal_connect(G_OBJECT(major9), "clicked", G_CALLBACK(buttonClicked), NULL);
	g_signal_connect(G_OBJECT(major10), "clicked", G_CALLBACK(buttonClicked), NULL);

	g_signal_connect(G_OBJECT(window_main_btn), "clicked", G_CALLBACK(destroy_cal), NULL);
	g_signal_connect(G_OBJECT(window_saved_btn), "clicked", G_CALLBACK(destroy_show), NULL);

	g_signal_connect(G_OBJECT(timetable_btn), "clicked", G_CALLBACK(destroy_timetable), NULL);
	g_signal_connect(G_OBJECT(calMajor_btn), "clicked", G_CALLBACK(destroy_calMajor), NULL);
	
	g_signal_connect(G_OBJECT(back), "clicked", G_CALLBACK(function_back), NULL);

}
