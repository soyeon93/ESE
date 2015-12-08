#define _DEF_H_
#include <gtk/gtk.h>
#define X 150 //axis x
#define Y 30	//axis y

GtkWidget* window, *window_main, *window_timetable, *window_calMajor;	//프로그램을 작성하는데 필요한 전역변수들을 선언합니다.

GtkWidget* window_main_btn, *window_saved_btn;
GtkWidget* window_main_label;
GtkWidget* window_vbox;
GtkWidget* window_hbox1, *window_hbox2, *hbox_graduate;

GtkWidget* vbox_timetable, *vbox_calMajor;

GtkWidget* back, *major_result;

GtkWidget* label;
GtkWidget* vbox, *vbox1, *vbox2;
GtkWidget* hbox, *hbox0, *hbox1, *hbox2, *hbox3, *hbox4, *hbox5, *hbox6, *hbox7,* hbox8, *hbox9, *hbox10, *hbox_fresh, *hbox_sophomore, *hbox_junior, *hbox_senior, *hbox_label, *hbox_back;
GtkWidget* sub, *sub1, *sub2, *sub3, *sub4, *sub5, *sub6, *sub7, *sub8, *sub9, *sub10, *sub11, *sub12, *sub13, *sub14, *sub15, *sub16;

GtkWidget* grade, *grade1, *grade2, *grade3, *grade4, *grade5, *grade6, *grade7, *grade8, *grade9, *grade10, *grade11, *grade12, *grade13, *grade14, *grade15, *grade16;

GtkWidget* credit, *credit1, *credit2, *credit3, *credit4, *credit5, *credit6, *credit7, *credit8, *credit9, *credit10, *credit11, *credit12, *credit13, *credit14, *credit15, *credit16;

GtkWidget* major, *major1, *major2, *major3, *major4, *major5, *major6, *major7, *major8, *major9, *major10, *major11, *major12, *major13, *major14, *major15, *major16;

GtkWidget* calculate, *empty, *result, *clear;

GtkWidget* timetable_btn, *calMajor_btn;

GtkWidget* fresh_first, *fresh_second, *sophomore_first, *sophomore_second, *junior_first, *junior_second, *senior_first, *senior_second, *info;

extern char *subA[16];		//name of subject
extern double gradeA[16];	//what i get point
extern int creditA[16];	//credit of subject (sth-point)
extern int majorA[16];	//is it major or not
extern int buf_grd[16];
extern int buf_crd[16];
extern int buf_maj[16];	
extern int cntA;
extern int mjr_cntA;

extern char *sub_fresh_first[16];
extern int grade_fresh_first[16];
extern int credit_fresh_first[16];
extern int major_fresh_first[16];	
extern double re_fresh_first;
extern double mjr_fresh_first;  

extern char *sub_fresh_second[16];
extern int grade_fresh_second[16];
extern int credit_fresh_second[16];
extern int major_fresh_second[16]; 
extern double re_fresh_second;
extern double mjr_fresh_second; 

extern char *sub_sophomore_first[16];
extern int grade_sophomore_first[16];
extern int credit_sophomore_first[16];
extern int major_sophomore_first[16];
extern double re_sophomore_first;
extern double mjr_sophomore_first;  

extern char *sub_sophomore_second[16];
extern int grade_sophomore_second[16];
extern int credit_sophomore_second[16];
extern int major_sophomore_second[16];
extern double re_sophomore_second;
extern double mjr_sophomore_second;  

extern char *sub_junior_first[16];
extern int grade_junior_first[16];
extern int credit_junior_first[16];
extern int major_junior_first[16]; 
extern double re_junior_first;
extern double mjr_junior_first; 

extern char *sub_junior_second[16];
extern int grade_junior_second[16];
extern int credit_junior_second[16];
extern int major_junior_second[16];
extern double re_junior_second;
extern double mjr_junior_second;  

extern char *sub_senior_first[16];
extern int grade_senior_first[16];
extern int credit_senior_first[16];
extern int major_senior_first[16]; 
extern double re_senior_first;
extern double mjr_senior_first; 

extern char *sub_senior_second[16];
extern int grade_senior_second[16];
extern int credit_senior_second[16];
extern int major_senior_second[16];
extern double re_senior_second;
extern double mjr_senior_second;  

extern int counter;	//the number of subject
extern double total_score;
extern double major_score;
extern int flag;

void buttonClicked(GtkWidget *widget);
void function_calculate();
void function_clear();
void destroy_cal();
void destroy_show();
void destroy_calMajor();
void destroy_timetable();
void btn_setting();
void addToVbox();
void callback();
void save_fresh_first();
void function_back();
void save_fresh_second();
void save_sophomore_first();
void save_sophomore_second();
void save_junior_first();
void save_junior_second();
void save_senior_first();
void save_senior_second();
void setGrade(int n);
void setCredit(int n);
void setMajor(int n);

