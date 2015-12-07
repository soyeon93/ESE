#define _DEF_H_
#include <gtk/gtk.h>
#define X 150 //axis x
#define Y 30	//axis y

GtkWidget* window, *window_main, window_saved_info;	//프로그램을 작성하는데 필요한 전역변수들을 선언합니다.

GtkWidget* window_main_btn, *window_saved_btn;
GtkWidget* window_main_label;
GtkWidget* window_vbox;
GtkWidget* window_hbox1, *window_hbox2;

GtkWidget* back, *major_result;

GtkWidget* label;
GtkWidget* vbox, *vbox1, *vbox2;
GtkWidget* hbox, *hbox0, *hbox1, *hbox2, *hbox3, *hbox4, *hbox5, *hbox6, *hbox7,* hbox8, *hbox9, *hbox10, *hbox_fresh, *hbox_sophomore, *hbox_junior, *hbox_senior, *hbox_label, *hbox_back;
GtkWidget* sub, *sub1, *sub2, *sub3, *sub4, *sub5, *sub6, *sub7, *sub8, *sub9, *sub10, *sub11, *sub12, *sub13, *sub14, *sub15, *sub16;

GtkWidget* grade, *grade1, *grade2, *grade3, *grade4, *grade5, *grade6, *grade7, *grade8, *grade9, *grade10, *grade11, *grade12, *grade13, *grade14, *grade15, *grade16;

GtkWidget* credit, *credit1, *credit2, *credit3, *credit4, *credit5, *credit6, *credit7, *credit8, *credit9, *credit10, *credit11, *credit12, *credit13, *credit14, *credit15, *credit16;

GtkWidget* major, *major1, *major2, *major3, *major4, *major5, *major6, *major7, *major8, *major9, *major10, *major11, *major12, *major13, *major14, *major15, *major16;

GtkWidget* calculate, *empty, *result, *clear;

GtkWidget* fresh_first, *fresh_second, *sophomore_first, *sophomore_second, *junior_first, *junior_second, *senior_first, *senior_second, *info;

char *subA[16];		//name of subject
double gradeA[16]={0,};	//what i get point
int creditA[16]={0,};	//credit of subject (sth-point)
int majorA[16]={0,};	//is it major or not
int buf_grd[16]={0,};
int buf_crd[16]={0,};
int buf_maj[16]={0,};	
int cntA=0;
int mjr_cntA=0;

char *sub_fresh_first[16];
int grade_fresh_first[16]={0,};
int credit_fresh_first[16]={0,};
int major_fresh_first[16]={0,};	
double re_fresh_first=0;
double mjr_fresh_first=0;  

char *sub_fresh_second[16];
int grade_fresh_second[16]={0,};
int credit_fresh_second[16]={0,};
int major_fresh_second[16]={0,}; 
double re_fresh_second=0;
double mjr_fresh_second=0; 

char *sub_sophomore_first[16];
int grade_sophomore_first[16]={0,};
int credit_sophomore_first[16]={0,};
int major_sophomore_first[16]={0,};
double re_sophomore_first=0;
double mjr_sophomore_first=0;  

char *sub_sophomore_second[16];
int grade_sophomore_second[16]={0,};
int credit_sophomore_second[16]={0,};
int major_sophomore_second[16]={0,};
double re_sophomore_second=0;
double mjr_sophomore_second=0;  

char *sub_junior_first[16];
int grade_junior_first[16]={0,};
int credit_junior_first[16]={0,};
int major_junior_first[16]={0,}; 
double re_junior_first=0;
double mjr_junior_first=0; 

char *sub_junior_second[16];
int grade_junior_second[16]={0,};
int credit_junior_second[16]={0,};
int major_junior_second[16]={0,};
double re_junior_second=0;
double mjr_junior_second=0;  

char *sub_senior_first[16];
int grade_senior_first[16]={0,};
int credit_senior_first[16]={0,};
int major_senior_first[16]={0,}; 
double re_senior_first=0;
double mjr_senior_first=0; 

char *sub_senior_second[16];
int grade_senior_second[16]={0,};
int credit_senior_second[16]={0,};
int major_senior_second[16]={0,};
double re_senior_second=0;
double mjr_senior_second=0;  

int counter = 0;	//the number of subject
double total_score=0;
double major_score=0;
int flag=-1;

