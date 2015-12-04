#include <gtk/gtk.h>
#define X 150 //axis x
#define Y 30	//axis y

GtkWidget* window;	//프로그램을 작성하는데 필요한 전역변수들을 선언합니다.
GtkWidget* label;
GtkWidget* vbox, *vbox1, *vbox2;
GtkWidget* hbox, *hbox0, *hbox1, *hbox2, *hbox3, *hbox4, *hbox5, *hbox6, *hbox7; GtkWidget* hbox8, *hbox9, *hbox10;
GtkWidget* sub, *sub1, *sub2, *sub3, *sub4, *sub5, *sub6, *sub7, *sub8, *sub9, *sub10, *sub11, *sub12, *sub13, *sub14, *sub15, *sub16;

GtkWidget* grade, *grade1, *grade2, *grade3, *grade4, *grade5, *grade6, *grade7, *grade8, *grade9, *grade10, *grade11, *grade12, *grade13, *grade14, *grade15, *grade16;

GtkWidget* credit, *credit1, *credit2, *credit3, *credit4, *credit5, *credit6, *credit7, *credit8, *credit9, *credit10, *credit11, *credit12, *credit13, *credit14, *credit15, *credit16;

GtkWidget* majer, *majer1, *majer2, *majer3, *majer4, *majer5, *majer6, *majer7, *majer8, *majer9, *majer10, *majer11, *majer12, *majer13, *majer14, *majer15, *majer16;

GtkWidget* calculate, *empty, *empty1;
char *subA[16];		//name of subject
int gradeA[16]={0,};	//what i get point
int creditA[16]={0,};	//credit of subject (sth-point)
int majerA[16]={0,};	//is it majer or not
char buf[30];	
int counter = 0;	//the number of subject

void buttonClicked(GtkWidget *widget)
{

	if(widget == calculate)
	{
		counter++;
	}
	/*else if(widget == buttonReset)
	{
		//reset버튼을 눌럿을시 stop경우일때만 reset을 시켜줍니다.
		if(stop == 1)	
		{
			//시간을 0으로 초기화시켜주고 check를 0으로 초기화시켜줍니다.
			 
			time1 = 0;
			sprintf(buf,  "%02d : %02d : %02d : %02d ",0 ,0 ,0 ,0 );
			gtk_label_set_text(GTK_LABEL(label1),buf);
			//reset을 시켜주고 00:00:00:00을 출력해줍니다.
		}			
	}*/
}
void clear()
{
	int i;	
	
	for(i=0;i<16;i++){ *subA[i] = 0;}
	for(i=0;i<16;i++){gradeA[16]=0;}
	for(i=0;i<16;i++){creditA[16]=0;}
	for(i=0;i<16;i++){majerA[16]=0;}

	counter = 0;
	gtk_button_set_label(GTK_BUTTON(calculate),"calculate");
	gtk_button_set_label(GTK_BUTTON(empty),"");
	gtk_button_set_label(GTK_BUTTON(empty1),"");

	gtk_button_set_label(GTK_BUTTON(sub1),"sub1");	//button setting
	gtk_button_set_label(GTK_BUTTON(sub2),"sub2");
	gtk_button_set_label(GTK_BUTTON(sub3),"sub3");
	gtk_button_set_label(GTK_BUTTON(sub4),"sub4");
	gtk_button_set_label(GTK_BUTTON(sub5),"sub5");
	gtk_button_set_label(GTK_BUTTON(sub6),"sub6");
	gtk_button_set_label(GTK_BUTTON(sub7),"sub7");
	gtk_button_set_label(GTK_BUTTON(sub8),"sub8");
	gtk_button_set_label(GTK_BUTTON(sub9),"sub9");
	gtk_button_set_label(GTK_BUTTON(sub10),"sub10");
	gtk_button_set_label(GTK_BUTTON(sub11),"sub11");
	gtk_button_set_label(GTK_BUTTON(sub12),"sub12");
	gtk_button_set_label(GTK_BUTTON(sub13),"sub13");
	gtk_button_set_label(GTK_BUTTON(sub14),"sub14");
	gtk_button_set_label(GTK_BUTTON(sub15),"sub15");
	gtk_button_set_label(GTK_BUTTON(sub16),"sub16");

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
	gtk_button_set_label(GTK_BUTTON(grade11),"grd11");
	gtk_button_set_label(GTK_BUTTON(grade12),"grd12");
	gtk_button_set_label(GTK_BUTTON(grade13),"grd13");
	gtk_button_set_label(GTK_BUTTON(grade14),"grd14");
	gtk_button_set_label(GTK_BUTTON(grade15),"grd15");
	gtk_button_set_label(GTK_BUTTON(grade16),"grd16");

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
	gtk_button_set_label(GTK_BUTTON(credit11),"crd11");
	gtk_button_set_label(GTK_BUTTON(credit12),"crd12");
	gtk_button_set_label(GTK_BUTTON(credit13),"crd13");
	gtk_button_set_label(GTK_BUTTON(credit14),"crd14");
	gtk_button_set_label(GTK_BUTTON(credit15),"crd15");
	gtk_button_set_label(GTK_BUTTON(credit16),"crd16");

	gtk_button_set_label(GTK_BUTTON(majer1),"mjr1");
	gtk_button_set_label(GTK_BUTTON(majer2),"mjr2");
	gtk_button_set_label(GTK_BUTTON(majer3),"mjr3");
	gtk_button_set_label(GTK_BUTTON(majer4),"mjr4");
	gtk_button_set_label(GTK_BUTTON(majer5),"mjr5");
	gtk_button_set_label(GTK_BUTTON(majer6),"mjr6");
	gtk_button_set_label(GTK_BUTTON(majer7),"mjr7");
	gtk_button_set_label(GTK_BUTTON(majer8),"mjr8");
	gtk_button_set_label(GTK_BUTTON(majer9),"mjr9");
	gtk_button_set_label(GTK_BUTTON(majer10),"mjr10");
	gtk_button_set_label(GTK_BUTTON(majer11),"mjr11");
	gtk_button_set_label(GTK_BUTTON(majer12),"mjr12");
	gtk_button_set_label(GTK_BUTTON(majer13),"mjr13");
	gtk_button_set_label(GTK_BUTTON(majer14),"mjr14");
	gtk_button_set_label(GTK_BUTTON(majer15),"mjr15");
	gtk_button_set_label(GTK_BUTTON(majer16),"mjr16");

}

int main (int argc, char *argv[])
{//box size - 
	gtk_init(&argc, &argv);	// GTK 기능을 사용하기전에 필요한 모든것을 초기화합니다
	window = gtk_window_new(GTK_WINDOW_TOPLEVEL);	//새로운 창을 만듭니다.

	g_signal_connect(G_OBJECT(window), "destroy", G_CALLBACK(gtk_main_quit), NULL);
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


	/*-------------------------------------------------------*/
	//make label
	sub = gtk_label_new("subject");	//creating and setting size of label
	gtk_widget_set_size_request(sub, X, Y);

	grade = gtk_label_new("grade");
	gtk_widget_set_size_request(grade, X, Y);

	credit = gtk_label_new("credit");
	gtk_widget_set_size_request(credit, X, Y);

	majer = gtk_label_new("majer");
	gtk_widget_set_size_request(majer, X, Y);

	empty = gtk_label_new("");
	gtk_widget_set_size_request(empty, X, Y);
	empty1 = gtk_label_new("");
	gtk_widget_set_size_request(empty1, X, Y);

	calculate = gtk_button_new_with_label("calculate");
	gtk_widget_set_size_request(grade1, X, Y);

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

	majer1 = gtk_button_new_with_label("majer1");
	gtk_widget_set_size_request(majer1, X, Y);

	majer2 = gtk_button_new_with_label("majer2");
	gtk_widget_set_size_request(majer2, X, Y);

	majer3 = gtk_button_new_with_label("majer3");
	gtk_widget_set_size_request(majer3, X, Y);

	majer4 = gtk_button_new_with_label("majer4");
	gtk_widget_set_size_request(majer4, X, Y);

	majer5 = gtk_button_new_with_label("majer5");
	gtk_widget_set_size_request(majer5, X, Y);

	majer6 = gtk_button_new_with_label("majer6");
	gtk_widget_set_size_request(majer6, X, Y);

	majer7 = gtk_button_new_with_label("majer7");
	gtk_widget_set_size_request(majer7, X, Y);

	majer8 = gtk_button_new_with_label("majer8");
	gtk_widget_set_size_request(majer8, X, Y);

	majer9 = gtk_button_new_with_label("majer9");
	gtk_widget_set_size_request(majer9, X, Y);

	majer10 = gtk_button_new_with_label("majer10");
	gtk_widget_set_size_request(majer10, X, Y);

	majer11 = gtk_button_new_with_label("majer11");
	gtk_widget_set_size_request(majer11, X, Y);

	majer12 = gtk_button_new_with_label("majer12");
	gtk_widget_set_size_request(majer12, X, Y);

	majer13 = gtk_button_new_with_label("majer13");
	gtk_widget_set_size_request(majer13, X, Y);

	majer14 = gtk_button_new_with_label("majer14");
	gtk_widget_set_size_request(majer14, X, Y);

	majer15 = gtk_button_new_with_label("majer15");
	gtk_widget_set_size_request(majer15, X, Y);

	majer16 = gtk_button_new_with_label("majer16");
	gtk_widget_set_size_request(majer16, X, Y);



	/*-------------------------------------------------------*/
	//버튼을 v박스에 포함시킵니다.
	
	gtk_container_add(GTK_CONTAINER(hbox),empty);
	gtk_container_add(GTK_CONTAINER(hbox),label);
	gtk_container_add(GTK_CONTAINER(hbox),empty1);
	gtk_container_add(GTK_CONTAINER(hbox),calculate);

	gtk_container_add(GTK_CONTAINER(hbox0),sub);
	gtk_container_add(GTK_CONTAINER(hbox0),grade);
	gtk_container_add(GTK_CONTAINER(hbox0),credit);
	gtk_container_add(GTK_CONTAINER(hbox0),majer);

	gtk_container_add(GTK_CONTAINER(hbox1),sub1);
	gtk_container_add(GTK_CONTAINER(hbox1),grade1);
	gtk_container_add(GTK_CONTAINER(hbox1),credit1);
	gtk_container_add(GTK_CONTAINER(hbox1),majer1);

	gtk_container_add(GTK_CONTAINER(hbox2),sub2);
	gtk_container_add(GTK_CONTAINER(hbox2),grade2);
	gtk_container_add(GTK_CONTAINER(hbox2),credit2);
	gtk_container_add(GTK_CONTAINER(hbox2),majer2);

	gtk_container_add(GTK_CONTAINER(hbox3),sub3);
	gtk_container_add(GTK_CONTAINER(hbox3),grade3);
	gtk_container_add(GTK_CONTAINER(hbox3),credit3);
	gtk_container_add(GTK_CONTAINER(hbox3),majer3);

	gtk_container_add(GTK_CONTAINER(hbox4),sub4);
	gtk_container_add(GTK_CONTAINER(hbox4),grade4);
	gtk_container_add(GTK_CONTAINER(hbox4),credit4);
	gtk_container_add(GTK_CONTAINER(hbox4),majer4);

	gtk_container_add(GTK_CONTAINER(hbox5),sub5);
	gtk_container_add(GTK_CONTAINER(hbox5),grade5);
	gtk_container_add(GTK_CONTAINER(hbox5),credit5);
	gtk_container_add(GTK_CONTAINER(hbox5),majer5);

	gtk_container_add(GTK_CONTAINER(hbox6),sub6);
	gtk_container_add(GTK_CONTAINER(hbox6),grade6);
	gtk_container_add(GTK_CONTAINER(hbox6),credit6);
	gtk_container_add(GTK_CONTAINER(hbox6),majer6);

	gtk_container_add(GTK_CONTAINER(hbox7),sub7);
	gtk_container_add(GTK_CONTAINER(hbox7),grade7);
	gtk_container_add(GTK_CONTAINER(hbox7),credit7);
	gtk_container_add(GTK_CONTAINER(hbox7),majer7);

	gtk_container_add(GTK_CONTAINER(hbox8),sub8);
	gtk_container_add(GTK_CONTAINER(hbox8),grade8);
	gtk_container_add(GTK_CONTAINER(hbox8),credit8);
	gtk_container_add(GTK_CONTAINER(hbox8),majer8);

	gtk_container_add(GTK_CONTAINER(hbox9),sub9);
	gtk_container_add(GTK_CONTAINER(hbox9),grade9);
	gtk_container_add(GTK_CONTAINER(hbox9),credit9);
	gtk_container_add(GTK_CONTAINER(hbox9),majer9);

	gtk_container_add(GTK_CONTAINER(hbox10),sub10);
	gtk_container_add(GTK_CONTAINER(hbox10),grade10);
	gtk_container_add(GTK_CONTAINER(hbox10),credit10);
	gtk_container_add(GTK_CONTAINER(hbox10),majer10);

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


	/*-------------------------------------------------------*/
	//버튼이 클릭될경우 buttonClocked 함수를 callback합니다.
	/*g_signal_connect(G_OBJECT(buttonStart), "clicked", G_CALLBACK(buttonClicked), NULL);
	g_signal_connect(G_OBJECT(buttonStop) , "clicked", G_CALLBACK(buttonClicked), NULL);
	g_signal_connect(G_OBJECT(buttonReset), "clicked", G_CALLBACK(buttonClicked), NULL);*/
	
	gtk_container_add(GTK_CONTAINER(window),vbox);
	//만들어둔 창에 v박스를 포함시킵니다.

	gtk_widget_show_all(window);	//창에 있는 모든 위젯들을 보여줍니다.

	gtk_main();	//다음 입력이 있을때까지 기다립니다.

	return 0;
}





















	
