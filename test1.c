<<<<<<< HEAD
#include <gtk/gtk.h>
#define X 150 //axis x
#define Y 30	//axis y

<<<<<<< HEAD
GtkWidget* window, *window_main, window_saved_info;	//프로그램을 작성하는데 필요한 전역변수들을 선언합니다.

GtkWidget* window_main_btn, *window_saved_btn;
GtkWidget* window_main_label;
GtkWidget* window_vbox;
GtkWidget* window_hbox1, *window_hbox2;

GtkWidget* label;
GtkWidget* vbox, *vbox1, *vbox2;
GtkWidget* hbox, *hbox0, *hbox1, *hbox2, *hbox3, *hbox4, *hbox5, *hbox6, *hbox7,* hbox8, *hbox9, *hbox10, *hbox_fresh, *hbox_sophomore, *hbox_junior, *hbox_senior, *hbox_label;
=======
GtkWidget* window, *window_main, *window_saved_info;	//프로그램을 작성하는데 필요한 전역변수들을 선언합니다.

GtkWidget* window_main_btn, *window_saved_btn;
GtkWidget* window_main_label;
GtkWidget* window_vbox, *window_vbox_info;
GtkWidget* window_hbox1, *window_hbox2;

GtkWidget* back, *major_result;

GtkWidget* label;
GtkWidget* vbox, *vbox1, *vbox2;
GtkWidget* hbox, *hbox0, *hbox1, *hbox2, *hbox3, *hbox4, *hbox5, *hbox6, *hbox7,* hbox8, *hbox9, *hbox10, *hbox_fresh, *hbox_sophomore, *hbox_junior, *hbox_senior, *hbox_label, *hbox_back;

GtkWidget* show_hbox, *show_hbox0, *show_hbox1, *show_hbox2, *show_hbox3, *show_hbox4, *show_hbox5, *show_hbox6, *show_hbox7, *show_hbox8, *show_hbox9, *show_hbox10, *show_hbox_fresh, *show_hbox_sophomore, *show_hbox_junior, *show_hbox_senior, *show_hbox_label, *show_hbox_back;


>>>>>>> 6d998e4084af7fbdb83a5189b5173e8d94427bea
GtkWidget* sub, *sub1, *sub2, *sub3, *sub4, *sub5, *sub6, *sub7, *sub8, *sub9, *sub10, *sub11, *sub12, *sub13, *sub14, *sub15, *sub16;

GtkWidget* grade, *grade1, *grade2, *grade3, *grade4, *grade5, *grade6, *grade7, *grade8, *grade9, *grade10, *grade11, *grade12, *grade13, *grade14, *grade15, *grade16;

GtkWidget* credit, *credit1, *credit2, *credit3, *credit4, *credit5, *credit6, *credit7, *credit8, *credit9, *credit10, *credit11, *credit12, *credit13, *credit14, *credit15, *credit16;

GtkWidget* major, *major1, *major2, *major3, *major4, *major5, *major6, *major7, *major8, *major9, *major10, *major11, *major12, *major13, *major14, *major15, *major16;

//////////////////////

GtkWidget* show_sub, *show_sub1, *show_sub2, *show_sub3, *show_sub4, *show_sub5, *show_sub6, *show_sub7, *show_sub8, *show_sub9, *show_sub10, *show_sub11, *show_sub12, *show_sub13, *show_sub14, *show_sub15, *show_sub16;

GtkWidget* grade, *grade1, *grade2, *grade3, *grade4, *grade5, *grade6, *grade7, *grade8, *grade9, *grade10, *grade11, *grade12, *grade13, *grade14, *grade15, *grade16;

GtkWidget* credit, *credit1, *credit2, *credit3, *credit4, *credit5, *credit6, *credit7, *credit8, *credit9, *credit10, *credit11, *credit12, *credit13, *credit14, *credit15, *credit16;

GtkWidget* major, *major1, *major2, *major3, *major4, *major5, *major6, *major7, *major8, *major9, *major10, *major11, *major12, *major13, *major14, *major15, *major16;

/////////////////////////
GtkWidget* calculate, *empty, *result, *clear;

GtkWidget* fresh_first, *fresh_second, *sophomore_first, *sophomore_second, *junior_first, *junior_second, *senior_first, *senior_second, *info;
GtkWidget* show_fresh_first, *show_fresh_second, *show_sophomore_first, *show_sophomore_second, *show_junior_first, *show_junior_second, *show_senior_first, *show_senior_second;


<<<<<<< HEAD
GtkWidget* calculate, *empty, *result, *clear;

GtkWidget* fresh_first, *fresh_second, *sophomore_first, *sophomore_second, *junior_first, *junior_second, *senior_first, *senior_second, *info;
char *subA[16];		//name of subject
double gradeA[16]={0,};	//what i get point
int creditA[16]={0,};	//credit of subject (sth-point)
int majerA[16]={0,};	//is it majer or not
int buf_grd[16]={0,};
int buf_crd[16]={0,};
int buf_maj[16]={0,};	
=======
char *subA[16];		//name of subject
double gradeA[16]={0,};	//what i get point
int creditA[16]={0,};	//credit of subject (sth-point)
int majorA[16]={0,};	//is it major or not
int buf_grd[16]={0,};
int buf_crd[16]={0,};
int buf_maj[16]={0,};	
int cntA=0;
int mjr_cntA=0;
>>>>>>> 6d998e4084af7fbdb83a5189b5173e8d94427bea

char *sub_fresh_first[16];
int grade_fresh_first[16]={0,};
int credit_fresh_first[16]={0,};
<<<<<<< HEAD
int majer_fresh_first[16]={0,};  
=======
int major_fresh_first[16]={0,};	
int fresh_first=0;
int mjr_fresh_first=0;  
>>>>>>> 6d998e4084af7fbdb83a5189b5173e8d94427bea

char *sub_fresh_second[16];
int grade_fresh_second[16]={0,};
int credit_fresh_second[16]={0,};
<<<<<<< HEAD
int majer_fresh_second[16]={0,};  
=======
int major_fresh_second[16]={0,}; 
int fresh_second=0;
int mjr_fresh_second=0; 
>>>>>>> 6d998e4084af7fbdb83a5189b5173e8d94427bea

char *sub_sophomore_first[16];
int grade_sophomore_first[16]={0,};
int credit_sophomore_first[16]={0,};
<<<<<<< HEAD
int majer_sophomore_first[16]={0,};  
=======
int major_sophomore_first[16]={0,};
int sophomore_first=0;
int mjr_sophomore_first=0;  
>>>>>>> 6d998e4084af7fbdb83a5189b5173e8d94427bea

char *sub_sophomore_second[16];
int grade_sophomore_second[16]={0,};
int credit_sophomore_second[16]={0,};
<<<<<<< HEAD
int majer_sophomore_second[16]={0,};  
=======
int major_sophomore_second[16]={0,};
int sophomore_second=0;
int mjr_sophomore_second=0;  
>>>>>>> 6d998e4084af7fbdb83a5189b5173e8d94427bea

char *sub_junior_first[16];
int grade_junior_first[16]={0,};
int credit_junior_first[16]={0,};
<<<<<<< HEAD
int majer_junior_first[16]={0,};  
=======
int major_junior_first[16]={0,}; 
int junior_first=0;
int mjr_junior_first=0; 
>>>>>>> 6d998e4084af7fbdb83a5189b5173e8d94427bea

char *sub_junior_second[16];
int grade_junior_second[16]={0,};
int credit_junior_second[16]={0,};
<<<<<<< HEAD
int majer_junior_second[16]={0,};  
=======
int major_junior_second[16]={0,};
int junior_second=0;
int mjr_junior_second=0;  
>>>>>>> 6d998e4084af7fbdb83a5189b5173e8d94427bea

char *sub_senior_first[16];
int grade_senior_first[16]={0,};
int credit_senior_first[16]={0,};
<<<<<<< HEAD
int majer_senior_first[16]={0,};  
=======
int major_senior_first[16]={0,}; 
int senior_first=0;
int mjr_senior_first=0; 
>>>>>>> 6d998e4084af7fbdb83a5189b5173e8d94427bea

char *sub_senior_second[16];
int grade_senior_second[16]={0,};
int credit_senior_second[16]={0,};
<<<<<<< HEAD
int majer_senior_second[16]={0,};  

int counter = 0;	//the number of subject
double total_score=0;
//fresh_first, *fresh_second, *sophomore_first, *sophomore_second, *junior_first, *junior_second, *senior_first, *senior_second
void destroy()
{
	gtk_widget_destroy(window_main);
	gtk_widget_show_all(window);	//창에 있는 모든 위젯들을 보여줍니다.
gtk_main();

}

void save_fresh_first()
{
	int n;
	for(n=0;n<16;n++)
	{
 		sub_fresh_first[n] = subA[n];
	}
	for(n=0;n<16;n++)
	{
		grade_fresh_first[n]= gradeA[n];
	}
	for(n=0;n<16;n++)
	{
		credit_fresh_first[n]=creditA[n];
	}
	for(n=0;n<16;n++)
	{
		majer_fresh_first[n]=majerA[n];  
	}
	gtk_button_set_label(GTK_BUTTON(fresh_first),"saved_fresh_first");
	gtk_button_set_label(GTK_BUTTON(fresh_second),"fresh_second");
	gtk_button_set_label(GTK_BUTTON(sophomore_first),"sophomore_first");
	gtk_button_set_label(GTK_BUTTON(sophomore_second),"sophomore_second");
	gtk_button_set_label(GTK_BUTTON(junior_first),"junior_first");
	gtk_button_set_label(GTK_BUTTON(junior_second),"junior_second");
	gtk_button_set_label(GTK_BUTTON(senior_first),"senior_first");
	gtk_button_set_label(GTK_BUTTON(senior_second),"senior_second");
}
void save_fresh_second()
=======
int major_senior_second[16]={0,};
int senior_second=0;
int mjr_senior_second=0;  

int counter = 0;	//the number of subject
double total_score=0;
double major_score=0;
//fresh_first, *fresh_second, *sophomore_first, *sophomore_second, *junior_first, *junior_second, *senior_first, *senior_second
void show_grade_fresh_first()
{

	int i;
	char *_sub[16];
	char _grade[16]={0,};
	char _credit[16]={0,};
	char _major[16]={0,};
	char total;
	char major;

	for(i=0;i<10;i++)
	{	

		sprintf(total_fresh_first[0],"%f",fresh_first);
		sprintf(major_fresh_first[0],"%f",mjr_fresh_first);

		sub_fresh_first[i] = _sub[i];
		sprintf(_grade[i],"%f",grade_fresh_first[i]);
		sprintf(_credit[i],"%f",credit_fresh_first[i]);
		sprintf(_major[i],"%f",major_fresh_first[i]);
	}

//	sprintf(_total_score,"%f",total_score);
	gtk_label_set_text(GTK_LABEL(major_result),total);
	gtk_label_set_text(GTK_LABEL(result),major);
	gtk_label_set_text(GTK_LABEL(sub1),_sub[0]);	//button setting
	gtk_label_set_text(GTK_LABEL(sub2),_sub[1]);
	gtk_label_set_text(GTK_LABEL(sub3),_sub[2]);
	gtk_label_set_text(GTK_LABEL(sub4),_sub[3]);
	gtk_label_set_text(GTK_LABEL(sub5),_sub[4]);
	gtk_label_set_text(GTK_LABEL(sub6),_sub[5]);
	gtk_label_set_text(GTK_LABEL(sub7),_sub[6]);
	gtk_label_set_text(GTK_LABEL(sub8),_sub[7]);
	gtk_label_set_text(GTK_LABEL(sub9),_sub[8]);
	gtk_label_set_text(GTK_LABEL(sub10),_sub[9]);

	gtk_button_set_label(GTK_BUTTON(grade1),_grade[0]);
	gtk_button_set_label(GTK_BUTTON(grade2),_grade[1]);
	gtk_button_set_label(GTK_BUTTON(grade3),_grade[2]);
	gtk_button_set_label(GTK_BUTTON(grade4),_grade[3]);
	gtk_button_set_label(GTK_BUTTON(grade5),_grade[4]);
	gtk_button_set_label(GTK_BUTTON(grade6),_grade[5]);
	gtk_button_set_label(GTK_BUTTON(grade7),_grade[6]);
	gtk_button_set_label(GTK_BUTTON(grade8),_grade[7]);
	gtk_button_set_label(GTK_BUTTON(grade9),_grade[8]);
	gtk_button_set_label(GTK_BUTTON(grade10),_grade[9]);

	gtk_button_set_label(GTK_BUTTON(credit1),_credit[0]);
	gtk_button_set_label(GTK_BUTTON(credit2),_credit[1]);
	gtk_button_set_label(GTK_BUTTON(credit3),_credit[2]);
	gtk_button_set_label(GTK_BUTTON(credit4),_credit[3]);
	gtk_button_set_label(GTK_BUTTON(credit5),_credit[4]);
	gtk_button_set_label(GTK_BUTTON(credit6),_credit[5]);
	gtk_button_set_label(GTK_BUTTON(credit7),_credit[6]);
	gtk_button_set_label(GTK_BUTTON(credit8),_credit[7]);
	gtk_button_set_label(GTK_BUTTON(credit9),_credit[8]);
	gtk_button_set_label(GTK_BUTTON(credit10),_credit[9]);

	gtk_button_set_label(GTK_BUTTON(major1),_major[0]);
	gtk_button_set_label(GTK_BUTTON(major2),_major[1]);
	gtk_button_set_label(GTK_BUTTON(major3),_major[2]);
	gtk_button_set_label(GTK_BUTTON(major4),_major[3]);
	gtk_button_set_label(GTK_BUTTON(major5),_major[4]);
	gtk_button_set_label(GTK_BUTTON(major6),_major[5]);
	gtk_button_set_label(GTK_BUTTON(major7),_major[6]);
	gtk_button_set_label(GTK_BUTTON(major8),_major[7]);
	gtk_button_set_label(GTK_BUTTON(major9),_major[8]);
	gtk_button_set_label(GTK_BUTTON(major10),_major[9]);
	return;

}
void show_grade_fresh_second()
>>>>>>> 6d998e4084af7fbdb83a5189b5173e8d94427bea
{
	  
	int i;
	char *_sub[16];
	char _grade[16]={0,};
	char _credit[16]={0,};
	char _major[16]={0,};
	char total;
	char major;

	for(i=0;i<10;i++)
	{	

		sprintf(total_fresh_second[0],"%f",fresh_second);
		sprintf(major_fresh_second[0],"%f",mjr_fresh_second);

		sub_fresh_second[i] = _sub[i];
		sprintf(_grade[i],"%f",grade_fresh_second[i]);
		sprintf(_credit[i],"%f",credit_fresh_second[i]);
		sprintf(_major[i],"%f",major_fresh_second[i]);
	}

<<<<<<< HEAD
	int n;
	for(n=0;n<16;n++)
	{
 		sub_fresh_second[n] = subA[n];
	}
	for(n=0;n<16;n++)
	{
=======
//	sprintf(_total_score,"%f",total_score);
	gtk_label_set_text(GTK_LABEL(major_result),total);
	gtk_label_set_text(GTK_LABEL(result),major);
	gtk_label_set_text(GTK_LABEL(sub1),_sub[0]);	//button setting
	gtk_label_set_text(GTK_LABEL(sub2),_sub[1]);
	gtk_label_set_text(GTK_LABEL(sub3),_sub[2]);
	gtk_label_set_text(GTK_LABEL(sub4),_sub[3]);
	gtk_label_set_text(GTK_LABEL(sub5),_sub[4]);
	gtk_label_set_text(GTK_LABEL(sub6),_sub[5]);
	gtk_label_set_text(GTK_LABEL(sub7),_sub[6]);
	gtk_label_set_text(GTK_LABEL(sub8),_sub[7]);
	gtk_label_set_text(GTK_LABEL(sub9),_sub[8]);
	gtk_label_set_text(GTK_LABEL(sub10),_sub[9]);

	gtk_button_set_label(GTK_BUTTON(grade1),_grade[0]);
	gtk_button_set_label(GTK_BUTTON(grade2),_grade[1]);
	gtk_button_set_label(GTK_BUTTON(grade3),_grade[2]);
	gtk_button_set_label(GTK_BUTTON(grade4),_grade[3]);
	gtk_button_set_label(GTK_BUTTON(grade5),_grade[4]);
	gtk_button_set_label(GTK_BUTTON(grade6),_grade[5]);
	gtk_button_set_label(GTK_BUTTON(grade7),_grade[6]);
	gtk_button_set_label(GTK_BUTTON(grade8),_grade[7]);
	gtk_button_set_label(GTK_BUTTON(grade9),_grade[8]);
	gtk_button_set_label(GTK_BUTTON(grade10),_grade[9]);

	gtk_button_set_label(GTK_BUTTON(credit1),_credit[0]);
	gtk_button_set_label(GTK_BUTTON(credit2),_credit[1]);
	gtk_button_set_label(GTK_BUTTON(credit3),_credit[2]);
	gtk_button_set_label(GTK_BUTTON(credit4),_credit[3]);
	gtk_button_set_label(GTK_BUTTON(credit5),_credit[4]);
	gtk_button_set_label(GTK_BUTTON(credit6),_credit[5]);
	gtk_button_set_label(GTK_BUTTON(credit7),_credit[6]);
	gtk_button_set_label(GTK_BUTTON(credit8),_credit[7]);
	gtk_button_set_label(GTK_BUTTON(credit9),_credit[8]);
	gtk_button_set_label(GTK_BUTTON(credit10),_credit[9]);

	gtk_button_set_label(GTK_BUTTON(major1),_major[0]);
	gtk_button_set_label(GTK_BUTTON(major2),_major[1]);
	gtk_button_set_label(GTK_BUTTON(major3),_major[2]);
	gtk_button_set_label(GTK_BUTTON(major4),_major[3]);
	gtk_button_set_label(GTK_BUTTON(major5),_major[4]);
	gtk_button_set_label(GTK_BUTTON(major6),_major[5]);
	gtk_button_set_label(GTK_BUTTON(major7),_major[6]);
	gtk_button_set_label(GTK_BUTTON(major8),_major[7]);
	gtk_button_set_label(GTK_BUTTON(major9),_major[8]);
	gtk_button_set_label(GTK_BUTTON(major10),_major[9]);
	return;

}
void show_grade_sophomore_first()
{ 
	
	int i;
	char *_sub[16];
	char _grade[16]={0,};
	char _credit[16]={0,};
	char _major[16]={0,};
	char total;
	char major;

	for(i=0;i<10;i++)
	{	

		sprintf(total_sophomore_first[0],"%f",sophomore_first);
		sprintf(major_sophomore_first[0],"%f",mjr_sophomore_first);

		sub_sophomore_first[i] = _sub[i];
		sprintf(_grade[i],"%f",grade_sophomore_first[i]);
		sprintf(_credit[i],"%f",credit_sophomore_first[i]);
		sprintf(_major[i],"%f",major_sophomore_first[i]);
	}

//	sprintf(_total_score,"%f",total_score);
	gtk_label_set_text(GTK_LABEL(major_result),total);
	gtk_label_set_text(GTK_LABEL(result),major);
	gtk_label_set_text(GTK_LABEL(sub1),_sub[0]);	//button setting
	gtk_label_set_text(GTK_LABEL(sub2),_sub[1]);
	gtk_label_set_text(GTK_LABEL(sub3),_sub[2]);
	gtk_label_set_text(GTK_LABEL(sub4),_sub[3]);
	gtk_label_set_text(GTK_LABEL(sub5),_sub[4]);
	gtk_label_set_text(GTK_LABEL(sub6),_sub[5]);
	gtk_label_set_text(GTK_LABEL(sub7),_sub[6]);
	gtk_label_set_text(GTK_LABEL(sub8),_sub[7]);
	gtk_label_set_text(GTK_LABEL(sub9),_sub[8]);
	gtk_label_set_text(GTK_LABEL(sub10),_sub[9]);

	gtk_button_set_label(GTK_BUTTON(grade1),_grade[0]);
	gtk_button_set_label(GTK_BUTTON(grade2),_grade[1]);
	gtk_button_set_label(GTK_BUTTON(grade3),_grade[2]);
	gtk_button_set_label(GTK_BUTTON(grade4),_grade[3]);
	gtk_button_set_label(GTK_BUTTON(grade5),_grade[4]);
	gtk_button_set_label(GTK_BUTTON(grade6),_grade[5]);
	gtk_button_set_label(GTK_BUTTON(grade7),_grade[6]);
	gtk_button_set_label(GTK_BUTTON(grade8),_grade[7]);
	gtk_button_set_label(GTK_BUTTON(grade9),_grade[8]);
	gtk_button_set_label(GTK_BUTTON(grade10),_grade[9]);

	gtk_button_set_label(GTK_BUTTON(credit1),_credit[0]);
	gtk_button_set_label(GTK_BUTTON(credit2),_credit[1]);
	gtk_button_set_label(GTK_BUTTON(credit3),_credit[2]);
	gtk_button_set_label(GTK_BUTTON(credit4),_credit[3]);
	gtk_button_set_label(GTK_BUTTON(credit5),_credit[4]);
	gtk_button_set_label(GTK_BUTTON(credit6),_credit[5]);
	gtk_button_set_label(GTK_BUTTON(credit7),_credit[6]);
	gtk_button_set_label(GTK_BUTTON(credit8),_credit[7]);
	gtk_button_set_label(GTK_BUTTON(credit9),_credit[8]);
	gtk_button_set_label(GTK_BUTTON(credit10),_credit[9]);

	gtk_button_set_label(GTK_BUTTON(major1),_major[0]);
	gtk_button_set_label(GTK_BUTTON(major2),_major[1]);
	gtk_button_set_label(GTK_BUTTON(major3),_major[2]);
	gtk_button_set_label(GTK_BUTTON(major4),_major[3]);
	gtk_button_set_label(GTK_BUTTON(major5),_major[4]);
	gtk_button_set_label(GTK_BUTTON(major6),_major[5]);
	gtk_button_set_label(GTK_BUTTON(major7),_major[6]);
	gtk_button_set_label(GTK_BUTTON(major8),_major[7]);
	gtk_button_set_label(GTK_BUTTON(major9),_major[8]);
	gtk_button_set_label(GTK_BUTTON(major10),_major[9]);
	return;

}
void show_grade_sophomore_second()
{
	
	int i;
	char *_sub[16];
	char _grade[16]={0,};
	char _credit[16]={0,};
	char _major[16]={0,};
	char total;
	char major;

	for(i=0;i<10;i++)
	{	

		sprintf(total_sophomore_second[0],"%f",sophomore_second);
		sprintf(major_sophomore_second[0],"%f",mjr_sophomore_second);

		sub_sophomore_second[i] = _sub[i];
		sprintf(_grade[i],"%f",grade_sophomore_second[i]);
		sprintf(_credit[i],"%f",credit_sophomore_second[i]);
		sprintf(_major[i],"%f",major_sophomore_second[i]);
	}

//	sprintf(_total_score,"%f",total_score);
	gtk_label_set_text(GTK_LABEL(major_result),total);
	gtk_label_set_text(GTK_LABEL(result),major);
	gtk_label_set_text(GTK_LABEL(sub1),_sub[0]);	//button setting
	gtk_label_set_text(GTK_LABEL(sub2),_sub[1]);
	gtk_label_set_text(GTK_LABEL(sub3),_sub[2]);
	gtk_label_set_text(GTK_LABEL(sub4),_sub[3]);
	gtk_label_set_text(GTK_LABEL(sub5),_sub[4]);
	gtk_label_set_text(GTK_LABEL(sub6),_sub[5]);
	gtk_label_set_text(GTK_LABEL(sub7),_sub[6]);
	gtk_label_set_text(GTK_LABEL(sub8),_sub[7]);
	gtk_label_set_text(GTK_LABEL(sub9),_sub[8]);
	gtk_label_set_text(GTK_LABEL(sub10),_sub[9]);

	gtk_button_set_label(GTK_BUTTON(grade1),_grade[0]);
	gtk_button_set_label(GTK_BUTTON(grade2),_grade[1]);
	gtk_button_set_label(GTK_BUTTON(grade3),_grade[2]);
	gtk_button_set_label(GTK_BUTTON(grade4),_grade[3]);
	gtk_button_set_label(GTK_BUTTON(grade5),_grade[4]);
	gtk_button_set_label(GTK_BUTTON(grade6),_grade[5]);
	gtk_button_set_label(GTK_BUTTON(grade7),_grade[6]);
	gtk_button_set_label(GTK_BUTTON(grade8),_grade[7]);
	gtk_button_set_label(GTK_BUTTON(grade9),_grade[8]);
	gtk_button_set_label(GTK_BUTTON(grade10),_grade[9]);

	gtk_button_set_label(GTK_BUTTON(credit1),_credit[0]);
	gtk_button_set_label(GTK_BUTTON(credit2),_credit[1]);
	gtk_button_set_label(GTK_BUTTON(credit3),_credit[2]);
	gtk_button_set_label(GTK_BUTTON(credit4),_credit[3]);
	gtk_button_set_label(GTK_BUTTON(credit5),_credit[4]);
	gtk_button_set_label(GTK_BUTTON(credit6),_credit[5]);
	gtk_button_set_label(GTK_BUTTON(credit7),_credit[6]);
	gtk_button_set_label(GTK_BUTTON(credit8),_credit[7]);
	gtk_button_set_label(GTK_BUTTON(credit9),_credit[8]);
	gtk_button_set_label(GTK_BUTTON(credit10),_credit[9]);

	gtk_button_set_label(GTK_BUTTON(major1),_major[0]);
	gtk_button_set_label(GTK_BUTTON(major2),_major[1]);
	gtk_button_set_label(GTK_BUTTON(major3),_major[2]);
	gtk_button_set_label(GTK_BUTTON(major4),_major[3]);
	gtk_button_set_label(GTK_BUTTON(major5),_major[4]);
	gtk_button_set_label(GTK_BUTTON(major6),_major[5]);
	gtk_button_set_label(GTK_BUTTON(major7),_major[6]);
	gtk_button_set_label(GTK_BUTTON(major8),_major[7]);
	gtk_button_set_label(GTK_BUTTON(major9),_major[8]);
	gtk_button_set_label(GTK_BUTTON(major10),_major[9]);
	return;

}
void show_grade_junior_first()
{
	
	int i;
	char *_sub[16];
	char _grade[16]={0,};
	char _credit[16]={0,};
	char _major[16]={0,};
	char total;
	char major;

	for(i=0;i<10;i++)
	{	

		sprintf(total_junior_first[0],"%f",junior_first);
		sprintf(major_junior_first[0],"%f",mjr_junior_first);

		sub_junior_first[i] = _sub[i];
		sprintf(_grade[i],"%f",grade_junior_first[i]);
		sprintf(_credit[i],"%f",credit_junior_first[i]);
		sprintf(_major[i],"%f",major_junior_first[i]);
	}

//	sprintf(_total_score,"%f",total_score);
	gtk_label_set_text(GTK_LABEL(major_result),total);
	gtk_label_set_text(GTK_LABEL(result),major);
	gtk_label_set_text(GTK_LABEL(sub1),_sub[0]);	//button setting
	gtk_label_set_text(GTK_LABEL(sub2),_sub[1]);
	gtk_label_set_text(GTK_LABEL(sub3),_sub[2]);
	gtk_label_set_text(GTK_LABEL(sub4),_sub[3]);
	gtk_label_set_text(GTK_LABEL(sub5),_sub[4]);
	gtk_label_set_text(GTK_LABEL(sub6),_sub[5]);
	gtk_label_set_text(GTK_LABEL(sub7),_sub[6]);
	gtk_label_set_text(GTK_LABEL(sub8),_sub[7]);
	gtk_label_set_text(GTK_LABEL(sub9),_sub[8]);
	gtk_label_set_text(GTK_LABEL(sub10),_sub[9]);

	gtk_button_set_label(GTK_BUTTON(grade1),_grade[0]);
	gtk_button_set_label(GTK_BUTTON(grade2),_grade[1]);
	gtk_button_set_label(GTK_BUTTON(grade3),_grade[2]);
	gtk_button_set_label(GTK_BUTTON(grade4),_grade[3]);
	gtk_button_set_label(GTK_BUTTON(grade5),_grade[4]);
	gtk_button_set_label(GTK_BUTTON(grade6),_grade[5]);
	gtk_button_set_label(GTK_BUTTON(grade7),_grade[6]);
	gtk_button_set_label(GTK_BUTTON(grade8),_grade[7]);
	gtk_button_set_label(GTK_BUTTON(grade9),_grade[8]);
	gtk_button_set_label(GTK_BUTTON(grade10),_grade[9]);

	gtk_button_set_label(GTK_BUTTON(credit1),_credit[0]);
	gtk_button_set_label(GTK_BUTTON(credit2),_credit[1]);
	gtk_button_set_label(GTK_BUTTON(credit3),_credit[2]);
	gtk_button_set_label(GTK_BUTTON(credit4),_credit[3]);
	gtk_button_set_label(GTK_BUTTON(credit5),_credit[4]);
	gtk_button_set_label(GTK_BUTTON(credit6),_credit[5]);
	gtk_button_set_label(GTK_BUTTON(credit7),_credit[6]);
	gtk_button_set_label(GTK_BUTTON(credit8),_credit[7]);
	gtk_button_set_label(GTK_BUTTON(credit9),_credit[8]);
	gtk_button_set_label(GTK_BUTTON(credit10),_credit[9]);

	gtk_button_set_label(GTK_BUTTON(major1),_major[0]);
	gtk_button_set_label(GTK_BUTTON(major2),_major[1]);
	gtk_button_set_label(GTK_BUTTON(major3),_major[2]);
	gtk_button_set_label(GTK_BUTTON(major4),_major[3]);
	gtk_button_set_label(GTK_BUTTON(major5),_major[4]);
	gtk_button_set_label(GTK_BUTTON(major6),_major[5]);
	gtk_button_set_label(GTK_BUTTON(major7),_major[6]);
	gtk_button_set_label(GTK_BUTTON(major8),_major[7]);
	gtk_button_set_label(GTK_BUTTON(major9),_major[8]);
	gtk_button_set_label(GTK_BUTTON(major10),_major[9]);
	return;

}
void show_grade_junior_second()
{
	int i;
	char *_sub[16];
	char _grade[16]={0,};
	char _credit[16]={0,};
	char _major[16]={0,};
	char total;
	char major;

	for(i=0;i<10;i++)
	{	

		sprintf(total_junior_second[0],"%f",junior_second);
		sprintf(major_junior_second[0],"%f",mjr_junior_second);

		sub_junior_second[i] = _sub[i];
		sprintf(_grade[i],"%f",grade_junior_second[i]);
		sprintf(_credit[i],"%f",credit_junior_second[i]);
		sprintf(_major[i],"%f",major_junior_second[i]);
	}

//	sprintf(_total_score,"%f",total_score);
	gtk_label_set_text(GTK_LABEL(major_result),total);
	gtk_label_set_text(GTK_LABEL(result),major);
	gtk_label_set_text(GTK_LABEL(sub1),_sub[0]);	//button setting
	gtk_label_set_text(GTK_LABEL(sub2),_sub[1]);
	gtk_label_set_text(GTK_LABEL(sub3),_sub[2]);
	gtk_label_set_text(GTK_LABEL(sub4),_sub[3]);
	gtk_label_set_text(GTK_LABEL(sub5),_sub[4]);
	gtk_label_set_text(GTK_LABEL(sub6),_sub[5]);
	gtk_label_set_text(GTK_LABEL(sub7),_sub[6]);
	gtk_label_set_text(GTK_LABEL(sub8),_sub[7]);
	gtk_label_set_text(GTK_LABEL(sub9),_sub[8]);
	gtk_label_set_text(GTK_LABEL(sub10),_sub[9]);

	gtk_button_set_label(GTK_BUTTON(grade1),_grade[0]);
	gtk_button_set_label(GTK_BUTTON(grade2),_grade[1]);
	gtk_button_set_label(GTK_BUTTON(grade3),_grade[2]);
	gtk_button_set_label(GTK_BUTTON(grade4),_grade[3]);
	gtk_button_set_label(GTK_BUTTON(grade5),_grade[4]);
	gtk_button_set_label(GTK_BUTTON(grade6),_grade[5]);
	gtk_button_set_label(GTK_BUTTON(grade7),_grade[6]);
	gtk_button_set_label(GTK_BUTTON(grade8),_grade[7]);
	gtk_button_set_label(GTK_BUTTON(grade9),_grade[8]);
	gtk_button_set_label(GTK_BUTTON(grade10),_grade[9]);

	gtk_button_set_label(GTK_BUTTON(credit1),_credit[0]);
	gtk_button_set_label(GTK_BUTTON(credit2),_credit[1]);
	gtk_button_set_label(GTK_BUTTON(credit3),_credit[2]);
	gtk_button_set_label(GTK_BUTTON(credit4),_credit[3]);
	gtk_button_set_label(GTK_BUTTON(credit5),_credit[4]);
	gtk_button_set_label(GTK_BUTTON(credit6),_credit[5]);
	gtk_button_set_label(GTK_BUTTON(credit7),_credit[6]);
	gtk_button_set_label(GTK_BUTTON(credit8),_credit[7]);
	gtk_button_set_label(GTK_BUTTON(credit9),_credit[8]);
	gtk_button_set_label(GTK_BUTTON(credit10),_credit[9]);

	gtk_button_set_label(GTK_BUTTON(major1),_major[0]);
	gtk_button_set_label(GTK_BUTTON(major2),_major[1]);
	gtk_button_set_label(GTK_BUTTON(major3),_major[2]);
	gtk_button_set_label(GTK_BUTTON(major4),_major[3]);
	gtk_button_set_label(GTK_BUTTON(major5),_major[4]);
	gtk_button_set_label(GTK_BUTTON(major6),_major[5]);
	gtk_button_set_label(GTK_BUTTON(major7),_major[6]);
	gtk_button_set_label(GTK_BUTTON(major8),_major[7]);
	gtk_button_set_label(GTK_BUTTON(major9),_major[8]);
	gtk_button_set_label(GTK_BUTTON(major10),_major[9]);
	return;
}
void show_grade_senior_first()
{
	int i;
	char *_sub[16];
	char _grade[16]={0,};
	char _credit[16]={0,};
	char _major[16]={0,};
	char total;
	char major;

	for(i=0;i<10;i++)
	{	

		sprintf(total_senior_first[0],"%f",senior_first);
		sprintf(major_senior_first[0],"%f",mjr_senior_first);

		sub_senior_first[i] = _sub[i];
		sprintf(_grade[i],"%f",grade_senior_first[i]);
		sprintf(_credit[i],"%f",credit_senior_first[i]);
		sprintf(_major[i],"%f",major_senior_first[i]);
	}

//	sprintf(_total_score,"%f",total_score);
	gtk_label_set_text(GTK_LABEL(major_result),total);
	gtk_label_set_text(GTK_LABEL(result),major);
	gtk_label_set_text(GTK_LABEL(sub1),_sub[0]);	//button setting
	gtk_label_set_text(GTK_LABEL(sub2),_sub[1]);
	gtk_label_set_text(GTK_LABEL(sub3),_sub[2]);
	gtk_label_set_text(GTK_LABEL(sub4),_sub[3]);
	gtk_label_set_text(GTK_LABEL(sub5),_sub[4]);
	gtk_label_set_text(GTK_LABEL(sub6),_sub[5]);
	gtk_label_set_text(GTK_LABEL(sub7),_sub[6]);
	gtk_label_set_text(GTK_LABEL(sub8),_sub[7]);
	gtk_label_set_text(GTK_LABEL(sub9),_sub[8]);
	gtk_label_set_text(GTK_LABEL(sub10),_sub[9]);

	gtk_button_set_label(GTK_BUTTON(grade1),_grade[0]);
	gtk_button_set_label(GTK_BUTTON(grade2),_grade[1]);
	gtk_button_set_label(GTK_BUTTON(grade3),_grade[2]);
	gtk_button_set_label(GTK_BUTTON(grade4),_grade[3]);
	gtk_button_set_label(GTK_BUTTON(grade5),_grade[4]);
	gtk_button_set_label(GTK_BUTTON(grade6),_grade[5]);
	gtk_button_set_label(GTK_BUTTON(grade7),_grade[6]);
	gtk_button_set_label(GTK_BUTTON(grade8),_grade[7]);
	gtk_button_set_label(GTK_BUTTON(grade9),_grade[8]);
	gtk_button_set_label(GTK_BUTTON(grade10),_grade[9]);

	gtk_button_set_label(GTK_BUTTON(credit1),_credit[0]);
	gtk_button_set_label(GTK_BUTTON(credit2),_credit[1]);
	gtk_button_set_label(GTK_BUTTON(credit3),_credit[2]);
	gtk_button_set_label(GTK_BUTTON(credit4),_credit[3]);
	gtk_button_set_label(GTK_BUTTON(credit5),_credit[4]);
	gtk_button_set_label(GTK_BUTTON(credit6),_credit[5]);
	gtk_button_set_label(GTK_BUTTON(credit7),_credit[6]);
	gtk_button_set_label(GTK_BUTTON(credit8),_credit[7]);
	gtk_button_set_label(GTK_BUTTON(credit9),_credit[8]);
	gtk_button_set_label(GTK_BUTTON(credit10),_credit[9]);

	gtk_button_set_label(GTK_BUTTON(major1),_major[0]);
	gtk_button_set_label(GTK_BUTTON(major2),_major[1]);
	gtk_button_set_label(GTK_BUTTON(major3),_major[2]);
	gtk_button_set_label(GTK_BUTTON(major4),_major[3]);
	gtk_button_set_label(GTK_BUTTON(major5),_major[4]);
	gtk_button_set_label(GTK_BUTTON(major6),_major[5]);
	gtk_button_set_label(GTK_BUTTON(major7),_major[6]);
	gtk_button_set_label(GTK_BUTTON(major8),_major[7]);
	gtk_button_set_label(GTK_BUTTON(major9),_major[8]);
	gtk_button_set_label(GTK_BUTTON(major10),_major[9]);
	return;
}
void show_grade_senior_second()
{
	//maybe	

	int i;
	char *_sub[16];
	char _grade[16]={0,};
	char _credit[16]={0,};
	char _major[16]={0,};
	char total;
	char major;

	for(i=0;i<10;i++)
	{	

		sprintf(total_senior_second[0],"%f",senior_second);
		sprintf(major_senior_second[0],"%f",mjr_senior_second);

		sub_senior_second[i] = _sub[i];
		sprintf(_grade[i],"%f",grade_senior_second[i]);
		sprintf(_credit[i],"%f",credit_senior_second[i]);
		sprintf(_major[i],"%f",major_senior_second[i]);
	}

//	sprintf(_total_score,"%f",total_score);
	gtk_label_set_text(GTK_LABEL(major_result),total);
	gtk_label_set_text(GTK_LABEL(result),major);
	gtk_label_set_text(GTK_LABEL(sub1),_sub[0]);	//button setting
	gtk_label_set_text(GTK_LABEL(sub2),_sub[1]);
	gtk_label_set_text(GTK_LABEL(sub3),_sub[2]);
	gtk_label_set_text(GTK_LABEL(sub4),_sub[3]);
	gtk_label_set_text(GTK_LABEL(sub5),_sub[4]);
	gtk_label_set_text(GTK_LABEL(sub6),_sub[5]);
	gtk_label_set_text(GTK_LABEL(sub7),_sub[6]);
	gtk_label_set_text(GTK_LABEL(sub8),_sub[7]);
	gtk_label_set_text(GTK_LABEL(sub9),_sub[8]);
	gtk_label_set_text(GTK_LABEL(sub10),_sub[9]);

	gtk_button_set_label(GTK_BUTTON(grade1),_grade[0]);
	gtk_button_set_label(GTK_BUTTON(grade2),_grade[1]);
	gtk_button_set_label(GTK_BUTTON(grade3),_grade[2]);
	gtk_button_set_label(GTK_BUTTON(grade4),_grade[3]);
	gtk_button_set_label(GTK_BUTTON(grade5),_grade[4]);
	gtk_button_set_label(GTK_BUTTON(grade6),_grade[5]);
	gtk_button_set_label(GTK_BUTTON(grade7),_grade[6]);
	gtk_button_set_label(GTK_BUTTON(grade8),_grade[7]);
	gtk_button_set_label(GTK_BUTTON(grade9),_grade[8]);
	gtk_button_set_label(GTK_BUTTON(grade10),_grade[9]);

	gtk_button_set_label(GTK_BUTTON(credit1),_credit[0]);
	gtk_button_set_label(GTK_BUTTON(credit2),_credit[1]);
	gtk_button_set_label(GTK_BUTTON(credit3),_credit[2]);
	gtk_button_set_label(GTK_BUTTON(credit4),_credit[3]);
	gtk_button_set_label(GTK_BUTTON(credit5),_credit[4]);
	gtk_button_set_label(GTK_BUTTON(credit6),_credit[5]);
	gtk_button_set_label(GTK_BUTTON(credit7),_credit[6]);
	gtk_button_set_label(GTK_BUTTON(credit8),_credit[7]);
	gtk_button_set_label(GTK_BUTTON(credit9),_credit[8]);
	gtk_button_set_label(GTK_BUTTON(credit10),_credit[9]);

	gtk_button_set_label(GTK_BUTTON(major1),_major[0]);
	gtk_button_set_label(GTK_BUTTON(major2),_major[1]);
	gtk_button_set_label(GTK_BUTTON(major3),_major[2]);
	gtk_button_set_label(GTK_BUTTON(major4),_major[3]);
	gtk_button_set_label(GTK_BUTTON(major5),_major[4]);
	gtk_button_set_label(GTK_BUTTON(major6),_major[5]);
	gtk_button_set_label(GTK_BUTTON(major7),_major[6]);
	gtk_button_set_label(GTK_BUTTON(major8),_major[7]);
	gtk_button_set_label(GTK_BUTTON(major9),_major[8]);
	gtk_button_set_label(GTK_BUTTON(major10),_major[9]);
	return;
}
void destroy()
{
	gtk_widget_destroy(window_main);
	gtk_widget_show_all(window);	//창에 있는 모든 위젯들을 보여줍니다.
	gtk_main();

}

void save_fresh_first()
{
	int n;
	for(n=0;n<16;n++)
	{
 		sub_fresh_first[n] = subA[n];
	}
	for(n=0;n<16;n++)
	{
		grade_fresh_first[n]= gradeA[n];
	}
	for(n=0;n<16;n++)
	{
		credit_fresh_first[n]=creditA[n];
	}
	for(n=0;n<16;n++)
	{
		major_fresh_first[n]=majorA[n];  
	}-
	fresh_first = total_score;
	mjr_fresh_first = major_score;
	gtk_button_set_label(GTK_BUTTON(fresh_first),"saved_fresh_first");
	gtk_button_set_label(GTK_BUTTON(fresh_second),"fresh_second");
	gtk_button_set_label(GTK_BUTTON(sophomore_first),"sophomore_first");
	gtk_button_set_label(GTK_BUTTON(sophomore_second),"sophomore_second");
	gtk_button_set_label(GTK_BUTTON(junior_first),"junior_first");
	gtk_button_set_label(GTK_BUTTON(junior_second),"junior_second");
	gtk_button_set_label(GTK_BUTTON(senior_first),"senior_first");
	gtk_button_set_label(GTK_BUTTON(senior_second),"senior_second");
}
void function_back()
{
	gtk_widget_destroy(window);
	gtk_widget_destroy(window_main);
	main();
}
void save_fresh_second()
{

	int n;
	for(n=0;n<16;n++)
	{
 		sub_fresh_second[n] = subA[n];
	}
	for(n=0;n<16;n++)
	{
>>>>>>> 6d998e4084af7fbdb83a5189b5173e8d94427bea
		grade_fresh_second[n]= gradeA[n];
	}
	for(n=0;n<16;n++)
	{
		credit_fresh_second[n]=creditA[n];
	}
	for(n=0;n<16;n++)
	{
<<<<<<< HEAD
		majer_fresh_second[n]=majerA[n];  
	}
=======
		major_fresh_second[n]=majorA[n];  
	}
	fresh_second = total_score;
	mjr_fresh_second = major_score;
>>>>>>> 6d998e4084af7fbdb83a5189b5173e8d94427bea
	gtk_button_set_label(GTK_BUTTON(fresh_first),"fresh_first");
	gtk_button_set_label(GTK_BUTTON(fresh_second),"saved_fresh_second");
	gtk_button_set_label(GTK_BUTTON(sophomore_first),"sophomore_first");
	gtk_button_set_label(GTK_BUTTON(sophomore_second),"sophomore_second");
	gtk_button_set_label(GTK_BUTTON(junior_first),"junior_first");
	gtk_button_set_label(GTK_BUTTON(junior_second),"junior_second");
	gtk_button_set_label(GTK_BUTTON(senior_first),"senior_first");
	gtk_button_set_label(GTK_BUTTON(senior_second),"senior_second");
}
void save_sophomore_first()
{
	int n;
	for(n=0;n<16;n++)
	{
 		sub_sophomore_first[n] = subA[n];
	}
	for(n=0;n<16;n++)
	{
		grade_sophomore_first[n]= gradeA[n];
	}
	for(n=0;n<16;n++)
	{
		credit_sophomore_first[n]=creditA[n];
	}
	for(n=0;n<16;n++)
	{
<<<<<<< HEAD
		majer_sophomore_first[n]=majerA[n];  
	}
=======
		major_sophomore_first[n]=majorA[n];  
	}
	sophomore_first = total_score;
	mjr_sophomore_first = major_score;
>>>>>>> 6d998e4084af7fbdb83a5189b5173e8d94427bea
	gtk_button_set_label(GTK_BUTTON(fresh_first),"fresh_first");
	gtk_button_set_label(GTK_BUTTON(fresh_second),"fresh_second");
	gtk_button_set_label(GTK_BUTTON(sophomore_first),"saved_sophomore_first");
	gtk_button_set_label(GTK_BUTTON(sophomore_second),"sophomore_second");
	gtk_button_set_label(GTK_BUTTON(junior_first),"junior_first");
	gtk_button_set_label(GTK_BUTTON(junior_second),"junior_second");
	gtk_button_set_label(GTK_BUTTON(senior_first),"senior_first");
	gtk_button_set_label(GTK_BUTTON(senior_second),"senior_second");
}
void save_sophomore_second()
{
	int n;
	for(n=0;n<16;n++)
	{
 		sub_sophomore_second[n] = subA[n];
	}
	for(n=0;n<16;n++)
	{
		grade_sophomore_second[n]= gradeA[n];
	}
	for(n=0;n<16;n++)
	{
		credit_sophomore_second[n]=creditA[n];
	}
	for(n=0;n<16;n++)
	{
<<<<<<< HEAD
		majer_sophomore_second[n]=majerA[n];  
	}
=======
		major_sophomore_second[n]=majorA[n];  
	}
	sophomore_second = total_score;
	mjr_sophomore_second = major_score;
>>>>>>> 6d998e4084af7fbdb83a5189b5173e8d94427bea
	gtk_button_set_label(GTK_BUTTON(fresh_first),"fresh_first");
	gtk_button_set_label(GTK_BUTTON(fresh_second),"fresh_second");
	gtk_button_set_label(GTK_BUTTON(sophomore_first),"sophomore_first");
	gtk_button_set_label(GTK_BUTTON(sophomore_second),"saved_sophomore_second");
	gtk_button_set_label(GTK_BUTTON(junior_first),"junior_first");
	gtk_button_set_label(GTK_BUTTON(junior_second),"junior_second");
	gtk_button_set_label(GTK_BUTTON(senior_first),"senior_first");
	gtk_button_set_label(GTK_BUTTON(senior_second),"senior_second");
}
void save_junior_first()
{
	int n;
	for(n=0;n<16;n++)
	{
 		sub_junior_first[n] = subA[n];
	}
	for(n=0;n<16;n++)
	{
		grade_junior_first[n]= gradeA[n];
	}
	for(n=0;n<16;n++)
	{
		credit_junior_first[n]=creditA[n];
	}
	for(n=0;n<16;n++)
	{
<<<<<<< HEAD
		majer_junior_first[n]=majerA[n];  
	}
=======
		major_junior_first[n]=majorA[n];  
	}
	junior_first = total_score;
	mjr_junior_first = major_score;
>>>>>>> 6d998e4084af7fbdb83a5189b5173e8d94427bea
	gtk_button_set_label(GTK_BUTTON(fresh_first),"fresh_first");
	gtk_button_set_label(GTK_BUTTON(fresh_second),"fresh_second");
	gtk_button_set_label(GTK_BUTTON(sophomore_first),"sophomore_first");
	gtk_button_set_label(GTK_BUTTON(sophomore_second),"sophomore_second");
	gtk_button_set_label(GTK_BUTTON(junior_first),"saved_junior_first");
	gtk_button_set_label(GTK_BUTTON(junior_second),"junior_second");
	gtk_button_set_label(GTK_BUTTON(senior_first),"senior_first");
	gtk_button_set_label(GTK_BUTTON(senior_second),"senior_second");
}
void save_junior_second()
{
	int n;
	for(n=0;n<16;n++)
	{
 		sub_junior_second[n] = subA[n];
	}
	for(n=0;n<16;n++)
	{
		grade_junior_second[n]= gradeA[n];
	}
	for(n=0;n<16;n++)
	{
		credit_junior_second[n]=creditA[n];
	}
	for(n=0;n<16;n++)
	{
<<<<<<< HEAD
		majer_junior_second[n]=majerA[n];  
	}
=======
		major_junior_second[n]=majorA[n];  
	}
	junior_second = total_score;
	mjr_junior_second = major_score;
>>>>>>> 6d998e4084af7fbdb83a5189b5173e8d94427bea
	gtk_button_set_label(GTK_BUTTON(fresh_first),"fresh_first");
	gtk_button_set_label(GTK_BUTTON(fresh_second),"fresh_second");
	gtk_button_set_label(GTK_BUTTON(sophomore_first),"sophomore_first");
	gtk_button_set_label(GTK_BUTTON(sophomore_second),"sophomore_second");
	gtk_button_set_label(GTK_BUTTON(junior_first),"junior_first");
	gtk_button_set_label(GTK_BUTTON(junior_second),"saved_junior_second");
	gtk_button_set_label(GTK_BUTTON(senior_first),"senior_first");
	gtk_button_set_label(GTK_BUTTON(senior_second),"senior_second");
}
void save_senior_first()
{
	int n;
	for(n=0;n<16;n++)
	{
 		sub_senior_first[n] = subA[n];
	}
	for(n=0;n<16;n++)
	{
		grade_senior_first[n]= gradeA[n];
	}
	for(n=0;n<16;n++)
	{
		credit_senior_first[n]=creditA[n];
	}
	for(n=0;n<16;n++)
	{
<<<<<<< HEAD
		majer_senior_first[n]=majerA[n];  
	}
=======
		major_senior_first[n]=majorA[n];  
	}
	senior_first = total_score;
	mjr_senior_first = major_score;
>>>>>>> 6d998e4084af7fbdb83a5189b5173e8d94427bea
	gtk_button_set_label(GTK_BUTTON(fresh_first),"fresh_first");
	gtk_button_set_label(GTK_BUTTON(fresh_second),"fresh_second");
	gtk_button_set_label(GTK_BUTTON(sophomore_first),"sophomore_first");
	gtk_button_set_label(GTK_BUTTON(sophomore_second),"sophomore_second");
	gtk_button_set_label(GTK_BUTTON(junior_first),"junior_first");
	gtk_button_set_label(GTK_BUTTON(junior_second),"junior_second");
	gtk_button_set_label(GTK_BUTTON(senior_first),"saved_senior_first");
	gtk_button_set_label(GTK_BUTTON(senior_second),"senior_second");
}
void save_senior_second()
{
	int n;
	for(n=0;n<16;n++)
	{
 		sub_senior_second[n] = subA[n];
	}
	for(n=0;n<16;n++)
	{
		grade_senior_second[n]= gradeA[n];
	}
	for(n=0;n<16;n++)
	{
		credit_senior_second[n]=creditA[n];
	}
	for(n=0;n<16;n++)
	{
<<<<<<< HEAD
		majer_senior_second[n]=majerA[n];  
	}
=======
		major_senior_second[n]=majorA[n];  
	}
	senior_second = total_score;
	mjr_senior_second = major_score;
>>>>>>> 6d998e4084af7fbdb83a5189b5173e8d94427bea
	gtk_button_set_label(GTK_BUTTON(fresh_first),"fresh_first");
	gtk_button_set_label(GTK_BUTTON(fresh_second),"fresh_second");
	gtk_button_set_label(GTK_BUTTON(sophomore_first),"sophomore_first");
	gtk_button_set_label(GTK_BUTTON(sophomore_second),"sophomore_second");
	gtk_button_set_label(GTK_BUTTON(junior_first),"junior_first");
	gtk_button_set_label(GTK_BUTTON(junior_second),"junior_second");
	gtk_button_set_label(GTK_BUTTON(senior_first),"senior_first");
	gtk_button_set_label(GTK_BUTTON(senior_second),"saved_senior_second");

}


void function_calculate()
{
	double score=0;
<<<<<<< HEAD
	char _total_score[1]={0};
	int i;
	int cnt=0;
=======
	double mjr_score=0;
	char _total_score[10]={0};
	char _major_score[10]={0};
	int i;
	int cnt=0;
	int mjr_cnt=0;
>>>>>>> 6d998e4084af7fbdb83a5189b5173e8d94427bea
	for(i=0;i<16;i++)
	{
		if(buf_grd[i] == 1 && buf_crd[i] ==1 && buf_maj[i] == 1)
		{
			score += gradeA[i]*creditA[i];
<<<<<<< HEAD
			printf("%f = %f * %d \n",score,gradeA[i],creditA[i]);
			//total_score +=score;
			cnt += creditA[i];	
		}
	}
	total_score = (score / cnt);//+(score % cnt);
	sprintf(_total_score,"%f",total_score);
	gtk_label_set_text(GTK_LABEL(result),_total_score);
=======
			
			//total_score +=score;
			cnt += creditA[i];
			if(majorA[i]==1)
			{
				mjr_score += gradeA[i]*creditA[i];
				mjr_cnt += creditA[i];
			}	
		}
printf("%d. %f = %f * %d ->%f major %d. %f = %f * %d ->%f\n",cnt, score,gradeA[i],creditA[i],(score/cnt), mjr_cnt, mjr_score, gradeA[i], creditA[i],(mjr_score / mjr_cnt));
	}
	total_score = (score/cnt);//+(score % cnt);
	major_score = (mjr_score / mjr_cnt);

	printf("\ntotal %f\nmajor_score %f", total_score,major_score);
	sprintf(_total_score,"%f",total_score);
	sprintf(_major_score,"%f",major_score);
	gtk_label_set_text(GTK_LABEL(result),_total_score);
	gtk_label_set_text(GTK_LABEL(major_result),_major_score);
>>>>>>> 6d998e4084af7fbdb83a5189b5173e8d94427bea
}

void function_clear()
{
	int i;	
	
	for(i=0;i<16;i++){ *(subA+i) = 0;}
	for(i=0;i<16;i++){gradeA[i]=0;}
	for(i=0;i<16;i++){creditA[i]=0;}
<<<<<<< HEAD
	for(i=0;i<16;i++){majerA[i]=0;}
	for(i=0;i<16;i++){buf_grd[i]=0;}
	for(i=0;i<16;i++){buf_crd[i]=0;}
	for(i=0;i<16;i++){buf_maj[i]=0;}


	counter = 0;
/*
	gtk_button_set_label(GTK_BUTTON(calculate),"calculate");
	gtk_button_set_label(GTK_BUTTON(empty),"");
	gtk_button_set_label(GTK_BUTTON(clear),"clear");
*/
=======
	for(i=0;i<16;i++){majorA[i]=0;}
	for(i=0;i<16;i++){buf_grd[i]=0;}
	for(i=0;i<16;i++){buf_crd[i]=0;}
	for(i=0;i<16;i++){buf_maj[i]=0;}

	counter = 0;

	gtk_label_set_text(GTK_LABEL(major_result),"0.0");
	gtk_label_set_text(GTK_LABEL(result),"0.0");
>>>>>>> 6d998e4084af7fbdb83a5189b5173e8d94427bea
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
<<<<<<< HEAD
/*	gtk_button_set_label(GTK_BUTTON(sub11),"sub11");
	gtk_button_set_label(GTK_BUTTON(sub12),"sub12");
	gtk_button_set_label(GTK_BUTTON(sub13),"sub13");
	gtk_button_set_label(GTK_BUTTON(sub14),"sub14");
	gtk_button_set_label(GTK_BUTTON(sub15),"sub15");
	gtk_button_set_label(GTK_BUTTON(sub16),"sub16");
*/
=======

>>>>>>> 6d998e4084af7fbdb83a5189b5173e8d94427bea
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
<<<<<<< HEAD
/*	gtk_button_set_label(GTK_BUTTON(grade11),"grd11");
	gtk_button_set_label(GTK_BUTTON(grade12),"grd12");
	gtk_button_set_label(GTK_BUTTON(grade13),"grd13");
	gtk_button_set_label(GTK_BUTTON(grade14),"grd14");
	gtk_button_set_label(GTK_BUTTON(grade15),"grd15");
	gtk_button_set_label(GTK_BUTTON(grade16),"grd16");
*/
=======

>>>>>>> 6d998e4084af7fbdb83a5189b5173e8d94427bea
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
<<<<<<< HEAD
/*	gtk_button_set_label(GTK_BUTTON(credit11),"crd11");
	gtk_button_set_label(GTK_BUTTON(credit12),"crd12");
	gtk_button_set_label(GTK_BUTTON(credit13),"crd13");
	gtk_button_set_label(GTK_BUTTON(credit14),"crd14");
	gtk_button_set_label(GTK_BUTTON(credit15),"crd15");
	gtk_button_set_label(GTK_BUTTON(credit16),"crd16");
*/
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
/*	gtk_button_set_label(GTK_BUTTON(majer11),"mjr11");
	gtk_button_set_label(GTK_BUTTON(majer12),"mjr12");
	gtk_button_set_label(GTK_BUTTON(majer13),"mjr13");
	gtk_button_set_label(GTK_BUTTON(majer14),"mjr14");
	gtk_button_set_label(GTK_BUTTON(majer15),"mjr15");
	gtk_button_set_label(GTK_BUTTON(majer16),"mjr16");
*/
	return;
}

void setGrade(int n)
{
	if(buf_grd[n]==0)
		{
			gradeA[n]=0;
			buf_grd[n]=1;
		}
		else
		{
			if(gradeA[n] == 0)
			{
				gradeA[n]=1;
			}
			else
			{	
				gradeA[n] +=0.5;				
			}
			if(gradeA[n]==5.0)
			{
				gradeA[n]=0;
			}
		}
	

=======

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

void setGrade(int n)
{
	if(buf_grd[n]==0)
		{
			gradeA[n]=0;
			buf_grd[n]=1;
		}
		else
		{
			if(gradeA[n] == 0)
			{
				gradeA[n]=1;
			}
			else
			{	
				gradeA[n] +=0.5;				
			}
			if(gradeA[n]==5.0)
			{
				gradeA[n]=0;
			}
		}
	

>>>>>>> 6d998e4084af7fbdb83a5189b5173e8d94427bea
		if(gradeA[n]==0)
		{
			if(n==1)
			{
				gtk_button_set_label(GTK_BUTTON(grade1),"F");
			}
			else if(n==2)
			{
				gtk_button_set_label(GTK_BUTTON(grade2),"F");
			}
			else if(n==3)
			{
				gtk_button_set_label(GTK_BUTTON(grade3),"F");
			}
			else if(n==4)
			{
				gtk_button_set_label(GTK_BUTTON(grade4),"F");
			}
			else if(n==5)
			{
				gtk_button_set_label(GTK_BUTTON(grade5),"F");
			}
			else if(n==6)
			{
				gtk_button_set_label(GTK_BUTTON(grade6),"F");
			}
			else if(n==7)
			{
				gtk_button_set_label(GTK_BUTTON(grade7),"F");
			}
			else if(n==8)
			{
				gtk_button_set_label(GTK_BUTTON(grade8),"F");
			}
			else if(n==9)
			{
				gtk_button_set_label(GTK_BUTTON(grade9),"F");
			}
			else if(n==10)
			{
				gtk_button_set_label(GTK_BUTTON(grade10),"F");
			}	
		}
		else if(gradeA[n]==1)
		{
			if(n==1)
			{
				gtk_button_set_label(GTK_BUTTON(grade1),"D");
			}
			else if(n==2)
			{
				gtk_button_set_label(GTK_BUTTON(grade2),"D");
			}
			else if(n==3)
			{
				gtk_button_set_label(GTK_BUTTON(grade3),"D");
			}
			else if(n==4)
			{
				gtk_button_set_label(GTK_BUTTON(grade4),"D");
			}
			else if(n==5)
			{
				gtk_button_set_label(GTK_BUTTON(grade5),"D");
			}
			else if(n==6)
			{
				gtk_button_set_label(GTK_BUTTON(grade6),"D");
			}
			else if(n==7)
			{
				gtk_button_set_label(GTK_BUTTON(grade7),"D");
			}
			else if(n==8)
			{
				gtk_button_set_label(GTK_BUTTON(grade8),"D");
			}
			else if(n==9)
			{
				gtk_button_set_label(GTK_BUTTON(grade9),"D");
			}
			else if(n==10)
			{
				gtk_button_set_label(GTK_BUTTON(grade10),"D");
			}
		}
		else if(gradeA[n]==1.5)
		{
			if(n==1)
			{
				gtk_button_set_label(GTK_BUTTON(grade1),"D+");
			}
			else if(n==2)
			{
				gtk_button_set_label(GTK_BUTTON(grade2),"D+");
			}
			else if(n==3)
			{
				gtk_button_set_label(GTK_BUTTON(grade3),"D+");
			}
			else if(n==4)
			{
				gtk_button_set_label(GTK_BUTTON(grade4),"D+");
			}
			else if(n==5)
			{
				gtk_button_set_label(GTK_BUTTON(grade5),"D+");
			}
			else if(n==6)
			{
				gtk_button_set_label(GTK_BUTTON(grade6),"D+");
			}
			else if(n==7)
			{
				gtk_button_set_label(GTK_BUTTON(grade7),"D+");
			}
			else if(n==8)
			{
				gtk_button_set_label(GTK_BUTTON(grade8),"D+");
			}
			else if(n==9)
			{
				gtk_button_set_label(GTK_BUTTON(grade9),"D+");
			}
			else if(n==10)
			{
				gtk_button_set_label(GTK_BUTTON(grade10),"D+");
			}
		}
		else if(gradeA[n]==2)
		{
			if(n==1)
			{
				gtk_button_set_label(GTK_BUTTON(grade1),"C");
			}
			else if(n==2)
			{
				gtk_button_set_label(GTK_BUTTON(grade2),"C");
			}
			else if(n==3)
			{
				gtk_button_set_label(GTK_BUTTON(grade3),"C");
			}
			else if(n==4)
			{
				gtk_button_set_label(GTK_BUTTON(grade4),"C");
			}
			else if(n==5)
			{
				gtk_button_set_label(GTK_BUTTON(grade5),"C");
			}
			else if(n==6)
			{
				gtk_button_set_label(GTK_BUTTON(grade6),"C");
			}
			else if(n==7)
			{
				gtk_button_set_label(GTK_BUTTON(grade7),"C");
			}
			else if(n==8)
			{
				gtk_button_set_label(GTK_BUTTON(grade8),"C");
			}
			else if(n==9)
			{
				gtk_button_set_label(GTK_BUTTON(grade9),"C");
			}
			else if(n==10)
			{
				gtk_button_set_label(GTK_BUTTON(grade10),"C");
			}
		}
		else if(gradeA[n]==2.5)
		{
			if(n==1)
			{
				gtk_button_set_label(GTK_BUTTON(grade1),"C+");
			}
			else if(n==2)
			{
				gtk_button_set_label(GTK_BUTTON(grade2),"C+");
			}
			else if(n==3)
			{
				gtk_button_set_label(GTK_BUTTON(grade3),"C+");
			}
			else if(n==4)
			{
				gtk_button_set_label(GTK_BUTTON(grade4),"C+");
			}
			else if(n==5)
			{
				gtk_button_set_label(GTK_BUTTON(grade5),"C+");
			}
			else if(n==6)
			{
				gtk_button_set_label(GTK_BUTTON(grade6),"C+");
			}
			else if(n==7)
			{
				gtk_button_set_label(GTK_BUTTON(grade7),"C+");
			}
			else if(n==8)
			{
				gtk_button_set_label(GTK_BUTTON(grade8),"C+");
			}
			else if(n==9)
			{
				gtk_button_set_label(GTK_BUTTON(grade9),"C+");
			}
			else if(n==10)
			{
				gtk_button_set_label(GTK_BUTTON(grade10),"C+");
			}
		}
		else if(gradeA[n]==3)
		{
			if(n==1)
			{
				gtk_button_set_label(GTK_BUTTON(grade1),"B");
			}
			else if(n==2)
			{
				gtk_button_set_label(GTK_BUTTON(grade2),"B");
			}
			else if(n==3)
			{
				gtk_button_set_label(GTK_BUTTON(grade3),"B");
			}
			else if(n==4)
			{
				gtk_button_set_label(GTK_BUTTON(grade4),"B");
			}
			else if(n==5)
			{
				gtk_button_set_label(GTK_BUTTON(grade5),"B");
			}
			else if(n==6)
			{
				gtk_button_set_label(GTK_BUTTON(grade6),"B");
			}
			else if(n==7)
			{
				gtk_button_set_label(GTK_BUTTON(grade7),"B");
			}
			else if(n==8)
			{
				gtk_button_set_label(GTK_BUTTON(grade8),"B");
			}
			else if(n==9)
			{
				gtk_button_set_label(GTK_BUTTON(grade9),"B");
			}
			else if(n==10)
			{
				gtk_button_set_label(GTK_BUTTON(grade10),"B");
			}
		}
		else if(gradeA[n]==3.5)
		{
			if(n==1)
			{
				gtk_button_set_label(GTK_BUTTON(grade1),"B+");
			}
			else if(n==2)
			{
				gtk_button_set_label(GTK_BUTTON(grade2),"B+");
			}
			else if(n==3)
			{
				gtk_button_set_label(GTK_BUTTON(grade3),"B+");
			}
			else if(n==4)
			{
				gtk_button_set_label(GTK_BUTTON(grade4),"B+");
			}
			else if(n==5)
			{
				gtk_button_set_label(GTK_BUTTON(grade5),"B+");
			}
			else if(n==6)
			{
				gtk_button_set_label(GTK_BUTTON(grade6),"B+");
			}
			else if(n==7)
			{
				gtk_button_set_label(GTK_BUTTON(grade7),"B+");
			}
			else if(n==8)
			{
				gtk_button_set_label(GTK_BUTTON(grade8),"B+");
			}
			else if(n==9)
			{
				gtk_button_set_label(GTK_BUTTON(grade9),"B+");
			}
			else if(n==10)
			{
				gtk_button_set_label(GTK_BUTTON(grade10),"B+");
			}
		}
		else if(gradeA[n]==4)
		{
			if(n==1)
			{
				gtk_button_set_label(GTK_BUTTON(grade1),"A");
			}
			else if(n==2)
			{
				gtk_button_set_label(GTK_BUTTON(grade2),"A");
			}
			else if(n==3)
			{
				gtk_button_set_label(GTK_BUTTON(grade3),"A");
			}
			else if(n==4)
			{
				gtk_button_set_label(GTK_BUTTON(grade4),"A");
			}
			else if(n==5)
			{
				gtk_button_set_label(GTK_BUTTON(grade5),"A");
			}
			else if(n==6)
			{
				gtk_button_set_label(GTK_BUTTON(grade6),"A");
			}
			else if(n==7)
			{
				gtk_button_set_label(GTK_BUTTON(grade7),"A");
			}
			else if(n==8)
			{
				gtk_button_set_label(GTK_BUTTON(grade8),"A");
			}
			else if(n==9)
			{
				gtk_button_set_label(GTK_BUTTON(grade9),"A");
			}
			else if(n==10)
			{
				gtk_button_set_label(GTK_BUTTON(grade10),"A");
			}
		}
		else if(gradeA[n]==4.5)
		{
			if(n==1)
			{
				gtk_button_set_label(GTK_BUTTON(grade1),"A+");
			}
			else if(n==2)
			{
				gtk_button_set_label(GTK_BUTTON(grade2),"A+");
			}
			else if(n==3)
			{
				gtk_button_set_label(GTK_BUTTON(grade3),"A+");
			}
			else if(n==4)
			{
				gtk_button_set_label(GTK_BUTTON(grade4),"A+");
			}
			else if(n==5)
			{
				gtk_button_set_label(GTK_BUTTON(grade5),"A+");
			}
			else if(n==6)
			{
				gtk_button_set_label(GTK_BUTTON(grade6),"A+");
			}
			else if(n==7)
			{
				gtk_button_set_label(GTK_BUTTON(grade7),"A+");
			}
			else if(n==8)
			{
				gtk_button_set_label(GTK_BUTTON(grade8),"A+");
			}
			else if(n==9)
			{
				gtk_button_set_label(GTK_BUTTON(grade9),"A+");
			}
			else if(n==10)
			{
				gtk_button_set_label(GTK_BUTTON(grade10),"A+");
			}
		}
}
void setCredit(int n)
{
	if(buf_crd[n]==0)
	{
		buf_crd[n]=1;
	}
	creditA[n] +=1;
	creditA[n] = creditA[n]%4;
	if(creditA[n]==0)
	{
		creditA[n]=1;
	}
	if(creditA[n]==1)
	{
		if(n==1)
		{
			gtk_button_set_label(GTK_BUTTON(credit1),"1");
		}
		else if(n==2)
		{
			gtk_button_set_label(GTK_BUTTON(credit2),"1");
		}
		else if(n==3)
		{
			gtk_button_set_label(GTK_BUTTON(credit3),"1");
		}
		else if(n==4)
		{
			gtk_button_set_label(GTK_BUTTON(credit4),"1");
		}
		else if(n==5)
		{
			gtk_button_set_label(GTK_BUTTON(credit5),"1");
		}
		else if(n==6)
		{
			gtk_button_set_label(GTK_BUTTON(credit6),"1");
		}
		else if(n==7)
		{
			gtk_button_set_label(GTK_BUTTON(credit7),"1");
		}
		else if(n==8)
		{
			gtk_button_set_label(GTK_BUTTON(credit8),"1");
		}
		else if(n==9)
		{
			gtk_button_set_label(GTK_BUTTON(credit9),"1");
		}
		else if(n==10)
		{
			gtk_button_set_label(GTK_BUTTON(credit10),"1");
		}
	}
	else if(creditA[n]==2)
	{
		if(n==1)
		{
			gtk_button_set_label(GTK_BUTTON(credit1),"2");
		}
		else if(n==2)
		{
			gtk_button_set_label(GTK_BUTTON(credit2),"2");
		}
		else if(n==3)
		{
			gtk_button_set_label(GTK_BUTTON(credit3),"2");
		}
		else if(n==4)
		{
			gtk_button_set_label(GTK_BUTTON(credit4),"2");
		}
		else if(n==5)
		{
			gtk_button_set_label(GTK_BUTTON(credit5),"2");
		}
		else if(n==6)
		{
			gtk_button_set_label(GTK_BUTTON(credit6),"2");
		}
		else if(n==7)
		{
			gtk_button_set_label(GTK_BUTTON(credit7),"2");
		}
		else if(n==8)
		{
			gtk_button_set_label(GTK_BUTTON(credit8),"2");
		}
		else if(n==9)
		{
			gtk_button_set_label(GTK_BUTTON(credit9),"2");
		}
		else if(n==10)
		{
			gtk_button_set_label(GTK_BUTTON(credit10),"2");
		}
	}
	else if(creditA[n]==3)
	{
		if(n==1)
		{
			gtk_button_set_label(GTK_BUTTON(credit1),"3");
		}
		else if(n==2)
		{
			gtk_button_set_label(GTK_BUTTON(credit2),"3");
		}
		else if(n==3)
		{
			gtk_button_set_label(GTK_BUTTON(credit3),"3");
		}
		else if(n==4)
		{
			gtk_button_set_label(GTK_BUTTON(credit4),"3");
		}
		else if(n==5)
		{
			gtk_button_set_label(GTK_BUTTON(credit5),"3");
		}
		else if(n==6)
		{
			gtk_button_set_label(GTK_BUTTON(credit6),"3");
		}
		else if(n==7)
		{
			gtk_button_set_label(GTK_BUTTON(credit7),"3");
		}
		else if(n==8)
		{
			gtk_button_set_label(GTK_BUTTON(credit8),"3");
		}
		else if(n==9)
		{
			gtk_button_set_label(GTK_BUTTON(credit9),"3");
		}
		else if(n==10)
		{
			gtk_button_set_label(GTK_BUTTON(credit10),"3");
		}
	}
<<<<<<< HEAD
}
void setMajer(int n)
{
	if(buf_maj[n]==0)
	{
		buf_maj[n]=1;
	}
	majerA[n] += 1;
	majerA[n] = majerA[n] % 2;
	if(majerA[n]==0)
	{		
		if(n==1)
		{
			gtk_button_set_label(GTK_BUTTON(majer1),"O");
		}
		else if(n==2)
		{
			gtk_button_set_label(GTK_BUTTON(majer2),"O");
		}
		else if(n==3)
		{
			gtk_button_set_label(GTK_BUTTON(majer3),"O");
		}
		else if(n==4)
		{
			gtk_button_set_label(GTK_BUTTON(majer4),"O");
		}
		else if(n==5)
		{
			gtk_button_set_label(GTK_BUTTON(majer5),"O");
		}
		else if(n==6)
		{
			gtk_button_set_label(GTK_BUTTON(majer6),"O");
		}
		else if(n==7)
		{
			gtk_button_set_label(GTK_BUTTON(majer7),"O");
		}
		else if(n==8)
		{
			gtk_button_set_label(GTK_BUTTON(majer8),"O");
		}
		else if(n==9)
		{
			gtk_button_set_label(GTK_BUTTON(majer9),"O");
		}
		else if(n==10)
		{
			gtk_button_set_label(GTK_BUTTON(majer10),"O");
		}
	}
	else if(majerA[n]==1)
	{
		if(n==1)
		{
			gtk_button_set_label(GTK_BUTTON(majer1),"X");
		}
		else if(n==2)
		{
			gtk_button_set_label(GTK_BUTTON(majer2),"X");
		}
		else if(n==3)
		{
			gtk_button_set_label(GTK_BUTTON(majer3),"X");
		}
		else if(n==4)
		{
			gtk_button_set_label(GTK_BUTTON(majer4),"X");
		}
		else if(n==5)
		{
			gtk_button_set_label(GTK_BUTTON(majer5),"X");
		}
		else if(n==6)
		{
			gtk_button_set_label(GTK_BUTTON(majer6),"X");
		}
		else if(n==7)
		{
			gtk_button_set_label(GTK_BUTTON(majer7),"X");
		}
		else if(n==8)
		{
			gtk_button_set_label(GTK_BUTTON(majer8),"X");
		}
		else if(n==9)
		{
			gtk_button_set_label(GTK_BUTTON(majer9),"X");
		}
		else if(n==10)
		{
			gtk_button_set_label(GTK_BUTTON(majer10),"X");
		}
	}
}
=======
}
void setMajor(int n)
{
	if(buf_maj[n]==0)
	{
		buf_maj[n]=1;
	}
	majorA[n] += 1;
	majorA[n] = majorA[n] % 2;
	if(majorA[n]==1)
	{		
		if(n==1)
		{
			gtk_button_set_label(GTK_BUTTON(major1),"O");
		}
		else if(n==2)
		{
			gtk_button_set_label(GTK_BUTTON(major2),"O");
		}
		else if(n==3)
		{
			gtk_button_set_label(GTK_BUTTON(major3),"O");
		}
		else if(n==4)
		{
			gtk_button_set_label(GTK_BUTTON(major4),"O");
		}
		else if(n==5)
		{
			gtk_button_set_label(GTK_BUTTON(major5),"O");
		}
		else if(n==6)
		{
			gtk_button_set_label(GTK_BUTTON(major6),"O");
		}
		else if(n==7)
		{
			gtk_button_set_label(GTK_BUTTON(major7),"O");
		}
		else if(n==8)
		{
			gtk_button_set_label(GTK_BUTTON(major8),"O");
		}
		else if(n==9)
		{
			gtk_button_set_label(GTK_BUTTON(major9),"O");
		}
		else if(n==10)
		{
			gtk_button_set_label(GTK_BUTTON(major10),"O");
		}
	}
	else if(majorA[n]==0)
	{
		if(n==1)
		{
			gtk_button_set_label(GTK_BUTTON(major1),"X");
		}
		else if(n==2)
		{
			gtk_button_set_label(GTK_BUTTON(major2),"X");
		}
		else if(n==3)
		{
			gtk_button_set_label(GTK_BUTTON(major3),"X");
		}
		else if(n==4)
		{
			gtk_button_set_label(GTK_BUTTON(major4),"X");
		}
		else if(n==5)
		{
			gtk_button_set_label(GTK_BUTTON(major5),"X");
		}
		else if(n==6)
		{
			gtk_button_set_label(GTK_BUTTON(major6),"X");
		}
		else if(n==7)
		{
			gtk_button_set_label(GTK_BUTTON(major7),"X");
		}
		else if(n==8)
		{
			gtk_button_set_label(GTK_BUTTON(major8),"X");
		}
		else if(n==9)
		{
			gtk_button_set_label(GTK_BUTTON(major9),"X");
		}
		else if(n==10)
		{
			gtk_button_set_label(GTK_BUTTON(major10),"X");
		}
	}
}
>>>>>>> 6d998e4084af7fbdb83a5189b5173e8d94427bea
void buttonClicked(GtkWidget *widget)
{

	if(widget == calculate)
	{
		//calculate
	}
	else if(widget == grade1)
	{
		setGrade(1);
	}
	else if(widget == grade2)
	{
		setGrade(2);
	}
	else if(widget == grade3)
	{
		setGrade(3);
	}
	else if(widget == grade4)
	{
		setGrade(4);
	}
	else if(widget == grade5)
	{
		setGrade(5);
	}
	else if(widget == grade6)
	{
		setGrade(6);
	}
	else if(widget == grade7)
	{
		setGrade(7);
	}
	else if(widget == grade8)
	{
		setGrade(8);
	}
	else if(widget == grade9)
	{
		setGrade(9);
	}
	else if(widget == grade10)
	{
		setGrade(10);
	}
	else if(widget == credit1)
	{
		setCredit(1);
	}
	else if(widget == credit2)
	{
		setCredit(2);
	}
	else if(widget == credit3)
	{
		setCredit(3);
	}
	else if(widget == credit4)
	{
		setCredit(4);
	}
	else if(widget == credit5)
	{
		setCredit(5);
	}
	else if(widget == credit6)
	{
		setCredit(6);
	}
	else if(widget == credit7)
	{
		setCredit(7);
	}
	else if(widget == credit8)
	{
		setCredit(8);
	}
	else if(widget == credit9)
	{
		setCredit(9);
	}
	else if(widget == credit10)
	{
		setCredit(10);
	}
<<<<<<< HEAD
	else if(widget == majer1)
	{
		setMajer(1);
	}
	else if(widget == majer2)
	{
		setMajer(2);
	}
	else if(widget == majer3)
	{
		setMajer(3);
	}
	else if(widget == majer4)
	{
		setMajer(4);
	}
	else if(widget == majer5)
	{
		setMajer(5);
	}
	else if(widget == majer6)
	{
		setMajer(6);
	}
	else if(widget == majer7)
	{
		setMajer(7);
	}
	else if(widget == majer8)
	{
		setMajer(8);
	}
	else if(widget == majer9)
	{
		setMajer(9);
	}
	else if(widget == majer10)
	{
		setMajer(10);
=======
	else if(widget == major1)
	{
		setMajor(1);
	}
	else if(widget == major2)
	{
		setMajor(2);
	}
	else if(widget == major3)
	{
		setMajor(3);
	}
	else if(widget == major4)
	{
		setMajor(4);
	}
	else if(widget == major5)
	{
		setMajor(5);
	}
	else if(widget == major6)
	{
		setMajor(6);
	}
	else if(widget == major7)
	{
		setMajor(7);
	}
	else if(widget == major8)
	{
		setMajor(8);
	}
	else if(widget == major9)
	{
		setMajor(9);
	}
	else if(widget == major10)
	{
		setMajor(10);
>>>>>>> 6d998e4084af7fbdb83a5189b5173e8d94427bea
	}
	else if(widget == clear)
	{
		function_clear();
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
=======
#include<gtk/gtk.h>
>>>>>>> 3e291c04d8f07773353b25d0ed45a93690fd2b71
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
<<<<<<< HEAD
=======
	hbox_back = gtk_hbox_new(TRUE, 0);
>>>>>>> 6d998e4084af7fbdb83a5189b5173e8d94427bea
	hbox_fresh = gtk_hbox_new(TRUE, 0);
	hbox_sophomore = gtk_hbox_new(TRUE, 0);
	hbox_junior = gtk_hbox_new(TRUE, 0);
	hbox_senior = gtk_hbox_new(TRUE, 0);
<<<<<<< HEAD
<<<<<<< HEAD
=======
	show_hbox_fresh = gtk_hbox_new(TRUE, 0);
	show_hbox_sophomore = gtk_hbox_new(TRUE, 0);
	show_hbox_junior = gtk_hbox_new(TRUE, 0);
	show_hbox_senior = gtk_hbox_new(TRUE, 0);
>>>>>>> 6d998e4084af7fbdb83a5189b5173e8d94427bea
=======
>>>>>>> 3e291c04d8f07773353b25d0ed45a93690fd2b71
	hbox_label = gtk_hbox_new(TRUE, 0);


	window_vbox = gtk_vbox_new(TRUE, 0);
<<<<<<< HEAD
<<<<<<< HEAD
=======
	window_vbox_info = gtk_vbox_new(TRUE, 0);
>>>>>>> 6d998e4084af7fbdb83a5189b5173e8d94427bea
=======
>>>>>>> 3e291c04d8f07773353b25d0ed45a93690fd2b71
	window_hbox1 = gtk_hbox_new(TRUE, 0);
	window_hbox2 = gtk_hbox_new(TRUE, 0);


	/*-------------------------------------------------------*/
	//make label
<<<<<<< HEAD
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
<<<<<<< HEAD
=======
	major_result = gtk_label_new("major_result");
	gtk_widget_set_size_request(major_result, X, Y);
>>>>>>> 6d998e4084af7fbdb83a5189b5173e8d94427bea

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

<<<<<<< HEAD
=======


	show_fresh_first = gtk_button_new_with_label("show_fresh_first");
	gtk_widget_set_size_request(show_fresh_first, X, Y);

	show_fresh_second = gtk_button_new_with_label("show_fresh_second");
	gtk_widget_set_size_request(show_fresh_second, X, Y);

	show_sophomore_first = gtk_button_new_with_label("show_sophomore_first");
	gtk_widget_set_size_request(show_sophomore_first, X, Y);

	show_sophomore_second = gtk_button_new_with_label("show_sophomore_second");
	gtk_widget_set_size_request(show_sophomore_second, X, Y);

	show_junior_first = gtk_button_new_with_label("show_junior_first");
	gtk_widget_set_size_request(show_junior_first, X, Y);

	show_junior_second = gtk_button_new_with_label("show_junior_second");
	gtk_widget_set_size_request(show_junior_second, X, Y);

	show_senior_first = gtk_button_new_with_label("show_senior_first");
	gtk_widget_set_size_request(show_senior_first, X, Y);

	show_senior_second = gtk_button_new_with_label("show_senior_second");
	gtk_widget_set_size_request(show_senior_second, X, Y);



>>>>>>> 6d998e4084af7fbdb83a5189b5173e8d94427bea
	window_main_btn = gtk_button_new_with_label("window_main_btn");
	gtk_widget_set_size_request(window_main_btn, X, Y);

	window_saved_btn = gtk_button_new_with_label("window_saved_btn");
	gtk_widget_set_size_request(window_saved_btn, X, Y);
<<<<<<< HEAD
=======

	back = gtk_button_new_with_label("back");
	gtk_widget_set_size_request(back, X, Y);
>>>>>>> 6d998e4084af7fbdb83a5189b5173e8d94427bea

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



	/*-------------------------------------------------------*/
	//버튼을 v박스에 포함시킵니다.
<<<<<<< HEAD
	gtk_container_add(GTK_CONTAINER(hbox),label);
	gtk_container_add(GTK_CONTAINER(hbox),result);
=======
	gtk_container_add(GTK_CONTAINER(hbox_back),result);
	gtk_container_add(GTK_CONTAINER(hbox_back),label);
	gtk_container_add(GTK_CONTAINER(hbox_back),back);
	gtk_container_add(GTK_CONTAINER(hbox),major_result);
>>>>>>> 6d998e4084af7fbdb83a5189b5173e8d94427bea
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

	gtk_container_add(GTK_CONTAINER(show_hbox_fresh),show_fresh_first);
	gtk_container_add(GTK_CONTAINER(show_hbox_sophomore),show_sophomore_first);
	gtk_container_add(GTK_CONTAINER(show_hbox_junior),show_junior_first);
	gtk_container_add(GTK_CONTAINER(show_hbox_senior),show_senior_first);

	gtk_container_add(GTK_CONTAINER(show_hbox_fresh),show_fresh_second);
	gtk_container_add(GTK_CONTAINER(show_hbox_sophomore),show_sophomore_second);
	gtk_container_add(GTK_CONTAINER(show_hbox_junior),show_junior_second);
	gtk_container_add(GTK_CONTAINER(show_hbox_senior),show_senior_second);

	gtk_container_add(GTK_CONTAINER(hbox_fresh),fresh_first);
	gtk_container_add(GTK_CONTAINER(hbox_sophomore),sophomore_first);
	gtk_container_add(GTK_CONTAINER(hbox_junior),junior_first);
	gtk_container_add(GTK_CONTAINER(hbox_senior),senior_first);

	gtk_container_add(GTK_CONTAINER(hbox_fresh),fresh_second);
	gtk_container_add(GTK_CONTAINER(hbox_sophomore),sophomore_second);
	gtk_container_add(GTK_CONTAINER(hbox_junior),junior_second);
	gtk_container_add(GTK_CONTAINER(hbox_senior),senior_second);

	gtk_container_add(GTK_CONTAINER(hbox_label),info);

	gtk_container_add(GTK_CONTAINER(window_hbox1),window_main_label);
	gtk_container_add(GTK_CONTAINER(window_hbox2),window_main_btn);
	gtk_container_add(GTK_CONTAINER(window_hbox2),window_saved_btn);
///////////////////////////////////////////////////////////////////////////////////////////////

	gtk_container_add(GTK_CONTAINER(show_hbox),back);

	gtk_container_add(GTK_CONTAINER(show_hbox0),sub);
	gtk_container_add(GTK_CONTAINER(show_hbox0),grade);
	gtk_container_add(GTK_CONTAINER(show_hbox0),credit);
	gtk_container_add(GTK_CONTAINER(show_hbox0),major);

	gtk_container_add(GTK_CONTAINER(show_hbox1),sub1);
	gtk_container_add(GTK_CONTAINER(show_hbox1),grade1);
	gtk_container_add(GTK_CONTAINER(show_hbox1),credit1);
	gtk_container_add(GTK_CONTAINER(show_hbox1),major1);

	gtk_container_add(GTK_CONTAINER(show_hbox2),sub2);
	gtk_container_add(GTK_CONTAINER(show_hbox2),grade2);
	gtk_container_add(GTK_CONTAINER(show_hbox2),credit2);
	gtk_container_add(GTK_CONTAINER(show_hbox2),major2);

	gtk_container_add(GTK_CONTAINER(show_hbox3),sub3);
	gtk_container_add(GTK_CONTAINER(show_hbox3),grade3);
	gtk_container_add(GTK_CONTAINER(show_hbox3),credit3);
	gtk_container_add(GTK_CONTAINER(show_hbox3),major3);

	gtk_container_add(GTK_CONTAINER(show_hbox4),sub4);
	gtk_container_add(GTK_CONTAINER(show_hbox4),grade4);
	gtk_container_add(GTK_CONTAINER(show_hbox4),credit4);
	gtk_container_add(GTK_CONTAINER(show_hbox4),major4);

	gtk_container_add(GTK_CONTAINER(show_hbox5),sub5);
	gtk_container_add(GTK_CONTAINER(show_hbox5),grade5);
	gtk_container_add(GTK_CONTAINER(show_hbox5),credit5);
	gtk_container_add(GTK_CONTAINER(show_hbox5),major5);

	gtk_container_add(GTK_CONTAINER(show_hbox6),sub6);
	gtk_container_add(GTK_CONTAINER(show_hbox6),grade6);
	gtk_container_add(GTK_CONTAINER(show_hbox6),credit6);
	gtk_container_add(GTK_CONTAINER(show_hbox6),major6);

	gtk_container_add(GTK_CONTAINER(show_hbox7),sub7);
	gtk_container_add(GTK_CONTAINER(show_hbox7),grade7);
	gtk_container_add(GTK_CONTAINER(show_hbox7),credit7);
	gtk_container_add(GTK_CONTAINER(show_hbox7),major7);

	gtk_container_add(GTK_CONTAINER(show_hbox8),sub8);
	gtk_container_add(GTK_CONTAINER(show_hbox8),grade8);
	gtk_container_add(GTK_CONTAINER(show_hbox8),credit8);
	gtk_container_add(GTK_CONTAINER(show_hbox8),major8);

	gtk_container_add(GTK_CONTAINER(show_hbox9),sub9);
	gtk_container_add(GTK_CONTAINER(show_hbox9),grade9);
	gtk_container_add(GTK_CONTAINER(show_hbox9),credit9);
	gtk_container_add(GTK_CONTAINER(show_hbox9),major9);

	gtk_container_add(GTK_CONTAINER(show_hbox10),sub10);
	gtk_container_add(GTK_CONTAINER(show_hbox10),grade10);
	gtk_container_add(GTK_CONTAINER(show_hbox10),credit10);
	gtk_container_add(GTK_CONTAINER(show_hbox10),major10);



	gtk_container_add(GTK_CONTAINER(window_vbox_info),hbox);
	gtk_container_add(GTK_CONTAINER(window_vbox_info),hbox0);
	gtk_container_add(GTK_CONTAINER(window_vbox_info),hbox1);
	gtk_container_add(GTK_CONTAINER(window_vbox_info),hbox2);
	gtk_container_add(GTK_CONTAINER(window_vbox_info),hbox3);
	gtk_container_add(GTK_CONTAINER(window_vbox_info),hbox4);
	gtk_container_add(GTK_CONTAINER(window_vbox_info),hbox5);
	gtk_container_add(GTK_CONTAINER(window_vbox_info),hbox6);
	gtk_container_add(GTK_CONTAINER(window_vbox_info),hbox7);
	gtk_container_add(GTK_CONTAINER(window_vbox_info),hbox8);
	gtk_container_add(GTK_CONTAINER(window_vbox_info),hbox9);
	gtk_container_add(GTK_CONTAINER(window_vbox_info),hbox10);

<<<<<<< HEAD
	gtk_container_add(GTK_CONTAINER(hbox_fresh),fresh_first);
	gtk_container_add(GTK_CONTAINER(hbox_sophomore),sophomore_first);
	gtk_container_add(GTK_CONTAINER(hbox_junior),junior_first);
	gtk_container_add(GTK_CONTAINER(hbox_senior),senior_first);

	gtk_container_add(GTK_CONTAINER(hbox_fresh),fresh_second);
	gtk_container_add(GTK_CONTAINER(hbox_sophomore),sophomore_second);
	gtk_container_add(GTK_CONTAINER(hbox_junior),junior_second);
	gtk_container_add(GTK_CONTAINER(hbox_senior),senior_second);

	gtk_container_add(GTK_CONTAINER(hbox_label),info);

	gtk_container_add(GTK_CONTAINER(window_hbox1),window_main_label);
	gtk_container_add(GTK_CONTAINER(window_hbox2),window_main_btn);
	gtk_container_add(GTK_CONTAINER(window_hbox2),window_saved_btn);

	

=======
	
///////////////////////////////////////////////////////////////////////////////////////////////
	gtk_container_add(GTK_CONTAINER(vbox),hbox_back);
>>>>>>> 6d998e4084af7fbdb83a5189b5173e8d94427bea
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




	/*-------------------------------------------------------*/
	//버튼이 클릭될경우 buttonClocked 함수를 callback합니다.
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

<<<<<<< HEAD
	g_signal_connect(G_OBJECT(majer1), "clicked", G_CALLBACK(buttonClicked), NULL);
	g_signal_connect(G_OBJECT(majer2), "clicked", G_CALLBACK(buttonClicked), NULL);
	g_signal_connect(G_OBJECT(majer3), "clicked", G_CALLBACK(buttonClicked), NULL);
	g_signal_connect(G_OBJECT(majer4), "clicked", G_CALLBACK(buttonClicked), NULL);
	g_signal_connect(G_OBJECT(majer5), "clicked", G_CALLBACK(buttonClicked), NULL);
	g_signal_connect(G_OBJECT(majer6), "clicked", G_CALLBACK(buttonClicked), NULL);
	g_signal_connect(G_OBJECT(majer7), "clicked", G_CALLBACK(buttonClicked), NULL);
	g_signal_connect(G_OBJECT(majer8), "clicked", G_CALLBACK(buttonClicked), NULL);
	g_signal_connect(G_OBJECT(majer9), "clicked", G_CALLBACK(buttonClicked), NULL);
	g_signal_connect(G_OBJECT(majer10), "clicked", G_CALLBACK(buttonClicked), NULL);

	g_signal_connect(G_OBJECT(window_main_btn), "clicked", G_CALLBACK(destroy), NULL);
	g_signal_connect(G_OBJECT(window_saved_btn), "clicked", G_CALLBACK(destroy), NULL);
=======
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

	g_signal_connect(G_OBJECT(window_main_btn), "clicked", G_CALLBACK(destroy), NULL);
	g_signal_connect(G_OBJECT(window_saved_btn), "clicked", G_CALLBACK(destroy), NULL);
	g_signal_connect(G_OBJECT(back), "clicked", G_CALLBACK(function_back), NULL);
>>>>>>> 6d998e4084af7fbdb83a5189b5173e8d94427bea




	gtk_container_add(GTK_CONTAINER(window_main),window_vbox);
<<<<<<< HEAD
=======
	gtk_container_add(GTK_CONTAINER(window_saved_info),window_vbox_info);
>>>>>>> 6d998e4084af7fbdb83a5189b5173e8d94427bea
=======
	btn_setting();

	/*-------------------------------------------------------*/
	//버튼을 v박스에 포함시킵니다.
	addToVbox();

	/*-------------------------------------------------------*/
	//버튼이 클릭될경우 buttonClocked 함수를 callback합니다.
	callback();


	gtk_container_add(GTK_CONTAINER(window_main),window_vbox);
>>>>>>> 3e291c04d8f07773353b25d0ed45a93690fd2b71
	gtk_container_add(GTK_CONTAINER(window),vbox);
	//만들어둔 창에 v박스를 포함시킵니다.

	gtk_widget_show_all(window_main);
	gtk_widget_set_size_request(window_main, 500, 500);	
	//gtk_widget_show_all(window);	//창에 있는 모든 위젯들을 보여줍니다.

	gtk_main();	//다음 입력이 있을때까지 기다립니다.

	return 0;
}
<<<<<<< HEAD
=======

>>>>>>> 6d998e4084af7fbdb83a5189b5173e8d94427bea
