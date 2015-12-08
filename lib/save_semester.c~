#include "define.h"
#include<gtk/gtk.h>
void save_fresh_first()
{
	int n;
	int i;
	char *_sub[16];
	char _grade[16][16]={0,};
	char _credit[16][16]={0,};
	char _major[16][16]={0,};
	char total_fresh_first[5]={0,};
	char _major_fresh_first[5]={0,};
	if(flag==0){
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
		}
		re_fresh_second = total_score;
		mjr_fresh_second = major_score;
		gtk_button_set_label(GTK_BUTTON(fresh_first),"save_fresh_first");
		gtk_button_set_label(GTK_BUTTON(fresh_second),"fresh_second");
		gtk_button_set_label(GTK_BUTTON(sophomore_first),"sophomore_first");
		gtk_button_set_label(GTK_BUTTON(sophomore_second),"sophomore_second");
		gtk_button_set_label(GTK_BUTTON(junior_first),"junior_first");
		gtk_button_set_label(GTK_BUTTON(junior_second),"junior_second");
		gtk_button_set_label(GTK_BUTTON(senior_first),"senior_first");
		gtk_button_set_label(GTK_BUTTON(senior_second),"senior_second");
	}
	else if(flag == 1)
	{
		for(i=0;i<16;i++)
		{	

			sprintf(total_fresh_first,"%f",re_fresh_first);
			sprintf(_major_fresh_first,"%f",mjr_fresh_first);
			_sub[i] = sub_fresh_first[i];
			sprintf(_grade[i],"%d",grade_fresh_first[i]);
			sprintf(_credit[i],"%d",credit_fresh_first[i]);
			sprintf(_major[i],"%d",major_fresh_first[i]);
		}
		gtk_label_set_text(GTK_LABEL(sub1),_sub[1]);	//button setting
		gtk_label_set_text(GTK_LABEL(sub2),_sub[2]);
		gtk_label_set_text(GTK_LABEL(sub3),_sub[3]);
		gtk_label_set_text(GTK_LABEL(sub4),_sub[4]);
		gtk_label_set_text(GTK_LABEL(sub5),_sub[5]);
		gtk_label_set_text(GTK_LABEL(sub6),_sub[6]);
		gtk_label_set_text(GTK_LABEL(sub7),_sub[7]);
		gtk_label_set_text(GTK_LABEL(sub8),_sub[8]);
		gtk_label_set_text(GTK_LABEL(sub9),_sub[9]);
		gtk_label_set_text(GTK_LABEL(sub10),_sub[10]);

		gtk_button_set_label(GTK_BUTTON(grade1),_grade[1]);
		gtk_button_set_label(GTK_BUTTON(grade2),_grade[2]);
		gtk_button_set_label(GTK_BUTTON(grade3),_grade[3]);
		gtk_button_set_label(GTK_BUTTON(grade4),_grade[4]);
		gtk_button_set_label(GTK_BUTTON(grade5),_grade[5]);
		gtk_button_set_label(GTK_BUTTON(grade6),_grade[6]);
		gtk_button_set_label(GTK_BUTTON(grade7),_grade[7]);
		gtk_button_set_label(GTK_BUTTON(grade8),_grade[8]);
		gtk_button_set_label(GTK_BUTTON(grade9),_grade[9]);
		gtk_button_set_label(GTK_BUTTON(grade10),_grade[10]);

		gtk_button_set_label(GTK_BUTTON(credit1),_credit[1]);
		gtk_button_set_label(GTK_BUTTON(credit2),_credit[2]);
		gtk_button_set_label(GTK_BUTTON(credit3),_credit[3]);
		gtk_button_set_label(GTK_BUTTON(credit4),_credit[4]);
		gtk_button_set_label(GTK_BUTTON(credit5),_credit[5]);
		gtk_button_set_label(GTK_BUTTON(credit6),_credit[6]);
		gtk_button_set_label(GTK_BUTTON(credit7),_credit[7]);
		gtk_button_set_label(GTK_BUTTON(credit8),_credit[8]);
		gtk_button_set_label(GTK_BUTTON(credit9),_credit[9]);
		gtk_button_set_label(GTK_BUTTON(credit10),_credit[10]);

		gtk_button_set_label(GTK_BUTTON(major1),_major[1]);
		gtk_button_set_label(GTK_BUTTON(major2),_major[2]);
		gtk_button_set_label(GTK_BUTTON(major3),_major[3]);
		gtk_button_set_label(GTK_BUTTON(major4),_major[4]);
		gtk_button_set_label(GTK_BUTTON(major5),_major[5]);
		gtk_button_set_label(GTK_BUTTON(major6),_major[6]);
		gtk_button_set_label(GTK_BUTTON(major7),_major[7]);
		gtk_button_set_label(GTK_BUTTON(major8),_major[8]);
		gtk_button_set_label(GTK_BUTTON(major9),_major[9]);
		gtk_button_set_label(GTK_BUTTON(major10),_major[10]);
	}
	printf("wait\n");
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
	int i;
	char *_sub[16];
	char _grade[16][16]={0,};
	char _credit[16][16]={0,};
	char _major[16][16]={0,};
	char total_fresh_second[5]={0,};
	char _major_fresh_second[5]={0,};
	if(flag==0){
		for(n=0;n<16;n++)
		{
	 		sub_fresh_second[n] = subA[n];
		}
		for(n=0;n<16;n++)
		{
			grade_fresh_second[n]= gradeA[n];
		}
		for(n=0;n<16;n++)
		{
			credit_fresh_second[n]=creditA[n];
		}
		for(n=0;n<16;n++)
		{
			major_fresh_second[n]=majorA[n];  
		}
		re_fresh_second = total_score;
		mjr_fresh_second = major_score;
		gtk_button_set_label(GTK_BUTTON(fresh_first),"fresh_first");
		gtk_button_set_label(GTK_BUTTON(fresh_second),"saved_fresh_second");
		gtk_button_set_label(GTK_BUTTON(sophomore_first),"sophomore_first");
		gtk_button_set_label(GTK_BUTTON(sophomore_second),"sophomore_second");
		gtk_button_set_label(GTK_BUTTON(junior_first),"junior_first");
		gtk_button_set_label(GTK_BUTTON(junior_second),"junior_second");
		gtk_button_set_label(GTK_BUTTON(senior_first),"senior_first");
		gtk_button_set_label(GTK_BUTTON(senior_second),"senior_second");
	}
	else if(flag == 1)
	{
		for(i=0;i<16;i++)
		{	

			sprintf(total_fresh_second,"%f",re_fresh_second);
			sprintf(_major_fresh_second,"%f",mjr_fresh_second);
			_sub[i] = sub_fresh_second[i];
			sprintf(_grade[i],"%d",grade_fresh_second[i]);
			sprintf(_credit[i],"%d",credit_fresh_second[i]);
			sprintf(_major[i],"%d",major_fresh_second[i]);
		}
		gtk_label_set_text(GTK_LABEL(sub1),_sub[1]);	//button setting
		gtk_label_set_text(GTK_LABEL(sub2),_sub[2]);
		gtk_label_set_text(GTK_LABEL(sub3),_sub[3]);
		gtk_label_set_text(GTK_LABEL(sub4),_sub[4]);
		gtk_label_set_text(GTK_LABEL(sub5),_sub[5]);
		gtk_label_set_text(GTK_LABEL(sub6),_sub[6]);
		gtk_label_set_text(GTK_LABEL(sub7),_sub[7]);
		gtk_label_set_text(GTK_LABEL(sub8),_sub[8]);
		gtk_label_set_text(GTK_LABEL(sub9),_sub[9]);
		gtk_label_set_text(GTK_LABEL(sub10),_sub[10]);

		gtk_button_set_label(GTK_BUTTON(grade1),_grade[1]);
		gtk_button_set_label(GTK_BUTTON(grade2),_grade[2]);
		gtk_button_set_label(GTK_BUTTON(grade3),_grade[3]);
		gtk_button_set_label(GTK_BUTTON(grade4),_grade[4]);
		gtk_button_set_label(GTK_BUTTON(grade5),_grade[5]);
		gtk_button_set_label(GTK_BUTTON(grade6),_grade[6]);
		gtk_button_set_label(GTK_BUTTON(grade7),_grade[7]);
		gtk_button_set_label(GTK_BUTTON(grade8),_grade[8]);
		gtk_button_set_label(GTK_BUTTON(grade9),_grade[9]);
		gtk_button_set_label(GTK_BUTTON(grade10),_grade[10]);

		gtk_button_set_label(GTK_BUTTON(credit1),_credit[1]);
		gtk_button_set_label(GTK_BUTTON(credit2),_credit[2]);
		gtk_button_set_label(GTK_BUTTON(credit3),_credit[3]);
		gtk_button_set_label(GTK_BUTTON(credit4),_credit[4]);
		gtk_button_set_label(GTK_BUTTON(credit5),_credit[5]);
		gtk_button_set_label(GTK_BUTTON(credit6),_credit[6]);
		gtk_button_set_label(GTK_BUTTON(credit7),_credit[7]);
		gtk_button_set_label(GTK_BUTTON(credit8),_credit[8]);
		gtk_button_set_label(GTK_BUTTON(credit9),_credit[9]);
		gtk_button_set_label(GTK_BUTTON(credit10),_credit[10]);

		gtk_button_set_label(GTK_BUTTON(major1),_major[1]);
		gtk_button_set_label(GTK_BUTTON(major2),_major[2]);
		gtk_button_set_label(GTK_BUTTON(major3),_major[3]);
		gtk_button_set_label(GTK_BUTTON(major4),_major[4]);
		gtk_button_set_label(GTK_BUTTON(major5),_major[5]);
		gtk_button_set_label(GTK_BUTTON(major6),_major[6]);
		gtk_button_set_label(GTK_BUTTON(major7),_major[7]);
		gtk_button_set_label(GTK_BUTTON(major8),_major[8]);
		gtk_button_set_label(GTK_BUTTON(major9),_major[9]);
		gtk_button_set_label(GTK_BUTTON(major10),_major[10]);
	}
}
void save_sophomore_first()
{
	int n;
	int i;
	char *_sub[16];
	char _grade[16][16]={0,};
	char _credit[16][16]={0,};
	char _major[16][16]={0,};
	char total_sophomore_first[5]={0,};
	char _major_sophomore_first[5]={0,};
if(flag==0){
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
		major_sophomore_first[n]=majorA[n];  
	}
	re_sophomore_first = total_score;
	mjr_sophomore_first = major_score;
	gtk_button_set_label(GTK_BUTTON(fresh_first),"fresh_first");
	gtk_button_set_label(GTK_BUTTON(fresh_second),"fresh_second");
	gtk_button_set_label(GTK_BUTTON(sophomore_first),"saved_sophomore_first");
	gtk_button_set_label(GTK_BUTTON(sophomore_second),"sophomore_second");
	gtk_button_set_label(GTK_BUTTON(junior_first),"junior_first");
	gtk_button_set_label(GTK_BUTTON(junior_second),"junior_second");
	gtk_button_set_label(GTK_BUTTON(senior_first),"senior_first");
	gtk_button_set_label(GTK_BUTTON(senior_second),"senior_second");
}

	else if(flag == 1)
	{
		for(i=0;i<16;i++)
		{	

			sprintf(total_sophomore_first,"%f",re_sophomore_first);
			sprintf(_major_sophomore_first,"%f",mjr_sophomore_first);
			_sub[i] = sub_sophomore_first[i];
			sprintf(_grade[i],"%d",grade_sophomore_first[i]);
			sprintf(_credit[i],"%d",credit_sophomore_first[i]);
			sprintf(_major[i],"%d",major_sophomore_first[i]);
		}
		gtk_label_set_text(GTK_LABEL(sub1),_sub[1]);	//button setting
		gtk_label_set_text(GTK_LABEL(sub2),_sub[2]);
		gtk_label_set_text(GTK_LABEL(sub3),_sub[3]);
		gtk_label_set_text(GTK_LABEL(sub4),_sub[4]);
		gtk_label_set_text(GTK_LABEL(sub5),_sub[5]);
		gtk_label_set_text(GTK_LABEL(sub6),_sub[6]);
		gtk_label_set_text(GTK_LABEL(sub7),_sub[7]);
		gtk_label_set_text(GTK_LABEL(sub8),_sub[8]);
		gtk_label_set_text(GTK_LABEL(sub9),_sub[9]);
		gtk_label_set_text(GTK_LABEL(sub10),_sub[10]);

		gtk_button_set_label(GTK_BUTTON(grade1),_grade[1]);
		gtk_button_set_label(GTK_BUTTON(grade2),_grade[2]);
		gtk_button_set_label(GTK_BUTTON(grade3),_grade[3]);
		gtk_button_set_label(GTK_BUTTON(grade4),_grade[4]);
		gtk_button_set_label(GTK_BUTTON(grade5),_grade[5]);
		gtk_button_set_label(GTK_BUTTON(grade6),_grade[6]);
		gtk_button_set_label(GTK_BUTTON(grade7),_grade[7]);
		gtk_button_set_label(GTK_BUTTON(grade8),_grade[8]);
		gtk_button_set_label(GTK_BUTTON(grade9),_grade[9]);
		gtk_button_set_label(GTK_BUTTON(grade10),_grade[10]);

		gtk_button_set_label(GTK_BUTTON(credit1),_credit[1]);
		gtk_button_set_label(GTK_BUTTON(credit2),_credit[2]);
		gtk_button_set_label(GTK_BUTTON(credit3),_credit[3]);
		gtk_button_set_label(GTK_BUTTON(credit4),_credit[4]);
		gtk_button_set_label(GTK_BUTTON(credit5),_credit[5]);
		gtk_button_set_label(GTK_BUTTON(credit6),_credit[6]);
		gtk_button_set_label(GTK_BUTTON(credit7),_credit[7]);
		gtk_button_set_label(GTK_BUTTON(credit8),_credit[8]);
		gtk_button_set_label(GTK_BUTTON(credit9),_credit[9]);
		gtk_button_set_label(GTK_BUTTON(credit10),_credit[10]);

		gtk_button_set_label(GTK_BUTTON(major1),_major[1]);
		gtk_button_set_label(GTK_BUTTON(major2),_major[2]);
		gtk_button_set_label(GTK_BUTTON(major3),_major[3]);
		gtk_button_set_label(GTK_BUTTON(major4),_major[4]);
		gtk_button_set_label(GTK_BUTTON(major5),_major[5]);
		gtk_button_set_label(GTK_BUTTON(major6),_major[6]);
		gtk_button_set_label(GTK_BUTTON(major7),_major[7]);
		gtk_button_set_label(GTK_BUTTON(major8),_major[8]);
		gtk_button_set_label(GTK_BUTTON(major9),_major[9]);
		gtk_button_set_label(GTK_BUTTON(major10),_major[10]);
	}
}
void save_sophomore_second()
{
	int n;
	int i;
	char *_sub[16];
	char _grade[16][16]={0,};
	char _credit[16][16]={0,};
	char _major[16][16]={0,};
	char total_sophomore_second[5]={0,};
	char _major_sophomore_second[5]={0,};
if(flag==0){
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
		major_sophomore_second[n]=majorA[n];  
	}
	re_sophomore_second = total_score;
	mjr_sophomore_second = major_score;
	gtk_button_set_label(GTK_BUTTON(fresh_first),"fresh_first");
	gtk_button_set_label(GTK_BUTTON(fresh_second),"fresh_second");
	gtk_button_set_label(GTK_BUTTON(sophomore_first),"sophomore_first");
	gtk_button_set_label(GTK_BUTTON(sophomore_second),"saved_sophomore_second");
	gtk_button_set_label(GTK_BUTTON(junior_first),"junior_first");
	gtk_button_set_label(GTK_BUTTON(junior_second),"junior_second");
	gtk_button_set_label(GTK_BUTTON(senior_first),"senior_first");
	gtk_button_set_label(GTK_BUTTON(senior_second),"senior_second");
}
	else if(flag == 1)
	{
		for(i=0;i<16;i++)
		{	

			sprintf(total_sophomore_second,"%f",re_sophomore_second);
			sprintf(_major_sophomore_second,"%f",mjr_sophomore_second);
			_sub[i] = sub_sophomore_second[i];
			sprintf(_grade[i],"%d",grade_sophomore_second[i]);
			sprintf(_credit[i],"%d",credit_sophomore_second[i]);
			sprintf(_major[i],"%d",major_sophomore_second[i]);
		}
		gtk_label_set_text(GTK_LABEL(sub1),_sub[1]);	//button setting
		gtk_label_set_text(GTK_LABEL(sub2),_sub[2]);
		gtk_label_set_text(GTK_LABEL(sub3),_sub[3]);
		gtk_label_set_text(GTK_LABEL(sub4),_sub[4]);
		gtk_label_set_text(GTK_LABEL(sub5),_sub[5]);
		gtk_label_set_text(GTK_LABEL(sub6),_sub[6]);
		gtk_label_set_text(GTK_LABEL(sub7),_sub[7]);
		gtk_label_set_text(GTK_LABEL(sub8),_sub[8]);
		gtk_label_set_text(GTK_LABEL(sub9),_sub[9]);
		gtk_label_set_text(GTK_LABEL(sub10),_sub[10]);

		gtk_button_set_label(GTK_BUTTON(grade1),_grade[1]);
		gtk_button_set_label(GTK_BUTTON(grade2),_grade[2]);
		gtk_button_set_label(GTK_BUTTON(grade3),_grade[3]);
		gtk_button_set_label(GTK_BUTTON(grade4),_grade[4]);
		gtk_button_set_label(GTK_BUTTON(grade5),_grade[5]);
		gtk_button_set_label(GTK_BUTTON(grade6),_grade[6]);
		gtk_button_set_label(GTK_BUTTON(grade7),_grade[7]);
		gtk_button_set_label(GTK_BUTTON(grade8),_grade[8]);
		gtk_button_set_label(GTK_BUTTON(grade9),_grade[9]);
		gtk_button_set_label(GTK_BUTTON(grade10),_grade[10]);

		gtk_button_set_label(GTK_BUTTON(credit1),_credit[1]);
		gtk_button_set_label(GTK_BUTTON(credit2),_credit[2]);
		gtk_button_set_label(GTK_BUTTON(credit3),_credit[3]);
		gtk_button_set_label(GTK_BUTTON(credit4),_credit[4]);
		gtk_button_set_label(GTK_BUTTON(credit5),_credit[5]);
		gtk_button_set_label(GTK_BUTTON(credit6),_credit[6]);
		gtk_button_set_label(GTK_BUTTON(credit7),_credit[7]);
		gtk_button_set_label(GTK_BUTTON(credit8),_credit[8]);
		gtk_button_set_label(GTK_BUTTON(credit9),_credit[9]);
		gtk_button_set_label(GTK_BUTTON(credit10),_credit[10]);

		gtk_button_set_label(GTK_BUTTON(major1),_major[1]);
		gtk_button_set_label(GTK_BUTTON(major2),_major[2]);
		gtk_button_set_label(GTK_BUTTON(major3),_major[3]);
		gtk_button_set_label(GTK_BUTTON(major4),_major[4]);
		gtk_button_set_label(GTK_BUTTON(major5),_major[5]);
		gtk_button_set_label(GTK_BUTTON(major6),_major[6]);
		gtk_button_set_label(GTK_BUTTON(major7),_major[7]);
		gtk_button_set_label(GTK_BUTTON(major8),_major[8]);
		gtk_button_set_label(GTK_BUTTON(major9),_major[9]);
		gtk_button_set_label(GTK_BUTTON(major10),_major[10]);
	}
}
void save_junior_first()
{
	int n;
	int i;
	char *_sub[16];
	char _grade[16][16]={0,};
	char _credit[16][16]={0,};
	char _major[16][16]={0,};
	char total_junior_first[5]={0,};
	char _major_junior_first[5]={0,};
if(flag==0){
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
		major_junior_first[n]=majorA[n];  
	}
	re_junior_first = total_score;
	mjr_junior_first = major_score;
	gtk_button_set_label(GTK_BUTTON(fresh_first),"fresh_first");
	gtk_button_set_label(GTK_BUTTON(fresh_second),"fresh_second");
	gtk_button_set_label(GTK_BUTTON(sophomore_first),"sophomore_first");
	gtk_button_set_label(GTK_BUTTON(sophomore_second),"sophomore_second");
	gtk_button_set_label(GTK_BUTTON(junior_first),"saved_junior_first");
	gtk_button_set_label(GTK_BUTTON(junior_second),"junior_second");
	gtk_button_set_label(GTK_BUTTON(senior_first),"senior_first");
	gtk_button_set_label(GTK_BUTTON(senior_second),"senior_second");
}
	else if(flag == 1)
	{
		for(i=0;i<16;i++)
		{	

			sprintf(total_junior_first,"%f",re_junior_first);
			sprintf(_major_junior_first,"%f",mjr_junior_first);
			_sub[i] = sub_junior_first[i];
			sprintf(_grade[i],"%d",grade_junior_first[i]);
			sprintf(_credit[i],"%d",credit_junior_first[i]);
			sprintf(_major[i],"%d",major_junior_first[i]);
		}
		gtk_label_set_text(GTK_LABEL(sub1),_sub[1]);	//button setting
		gtk_label_set_text(GTK_LABEL(sub2),_sub[2]);
		gtk_label_set_text(GTK_LABEL(sub3),_sub[3]);
		gtk_label_set_text(GTK_LABEL(sub4),_sub[4]);
		gtk_label_set_text(GTK_LABEL(sub5),_sub[5]);
		gtk_label_set_text(GTK_LABEL(sub6),_sub[6]);
		gtk_label_set_text(GTK_LABEL(sub7),_sub[7]);
		gtk_label_set_text(GTK_LABEL(sub8),_sub[8]);
		gtk_label_set_text(GTK_LABEL(sub9),_sub[9]);
		gtk_label_set_text(GTK_LABEL(sub10),_sub[10]);

		gtk_button_set_label(GTK_BUTTON(grade1),_grade[1]);
		gtk_button_set_label(GTK_BUTTON(grade2),_grade[2]);
		gtk_button_set_label(GTK_BUTTON(grade3),_grade[3]);
		gtk_button_set_label(GTK_BUTTON(grade4),_grade[4]);
		gtk_button_set_label(GTK_BUTTON(grade5),_grade[5]);
		gtk_button_set_label(GTK_BUTTON(grade6),_grade[6]);
		gtk_button_set_label(GTK_BUTTON(grade7),_grade[7]);
		gtk_button_set_label(GTK_BUTTON(grade8),_grade[8]);
		gtk_button_set_label(GTK_BUTTON(grade9),_grade[9]);
		gtk_button_set_label(GTK_BUTTON(grade10),_grade[10]);

		gtk_button_set_label(GTK_BUTTON(credit1),_credit[1]);
		gtk_button_set_label(GTK_BUTTON(credit2),_credit[2]);
		gtk_button_set_label(GTK_BUTTON(credit3),_credit[3]);
		gtk_button_set_label(GTK_BUTTON(credit4),_credit[4]);
		gtk_button_set_label(GTK_BUTTON(credit5),_credit[5]);
		gtk_button_set_label(GTK_BUTTON(credit6),_credit[6]);
		gtk_button_set_label(GTK_BUTTON(credit7),_credit[7]);
		gtk_button_set_label(GTK_BUTTON(credit8),_credit[8]);
		gtk_button_set_label(GTK_BUTTON(credit9),_credit[9]);
		gtk_button_set_label(GTK_BUTTON(credit10),_credit[10]);

		gtk_button_set_label(GTK_BUTTON(major1),_major[1]);
		gtk_button_set_label(GTK_BUTTON(major2),_major[2]);
		gtk_button_set_label(GTK_BUTTON(major3),_major[3]);
		gtk_button_set_label(GTK_BUTTON(major4),_major[4]);
		gtk_button_set_label(GTK_BUTTON(major5),_major[5]);
		gtk_button_set_label(GTK_BUTTON(major6),_major[6]);
		gtk_button_set_label(GTK_BUTTON(major7),_major[7]);
		gtk_button_set_label(GTK_BUTTON(major8),_major[8]);
		gtk_button_set_label(GTK_BUTTON(major9),_major[9]);
		gtk_button_set_label(GTK_BUTTON(major10),_major[10]);
	}
}
void save_junior_second()
{
	int n;
	int i;
	char *_sub[16];
	char _grade[16][16]={0,};
	char _credit[16][16]={0,};
	char _major[16][16]={0,};
	char total_junior_second[5]={0,};
	char _major_junior_second[5]={0,};
if(flag==0){
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
		major_junior_second[n]=majorA[n];  
	}
	re_junior_second = total_score;
	mjr_junior_second = major_score;
	gtk_button_set_label(GTK_BUTTON(fresh_first),"fresh_first");
	gtk_button_set_label(GTK_BUTTON(fresh_second),"fresh_second");
	gtk_button_set_label(GTK_BUTTON(sophomore_first),"sophomore_first");
	gtk_button_set_label(GTK_BUTTON(sophomore_second),"sophomore_second");
	gtk_button_set_label(GTK_BUTTON(junior_first),"junior_first");
	gtk_button_set_label(GTK_BUTTON(junior_second),"saved_junior_second");
	gtk_button_set_label(GTK_BUTTON(senior_first),"senior_first");
	gtk_button_set_label(GTK_BUTTON(senior_second),"senior_second");
}
	else if(flag == 1)
	{
		for(i=0;i<16;i++)
		{	

			sprintf(total_junior_second,"%f",re_junior_second);
			sprintf(_major_junior_second,"%f",mjr_junior_second);
			_sub[i] = sub_junior_second[i];
			sprintf(_grade[i],"%d",grade_junior_second[i]);
			sprintf(_credit[i],"%d",credit_junior_second[i]);
			sprintf(_major[i],"%d",major_junior_second[i]);
		}
		gtk_label_set_text(GTK_LABEL(sub1),_sub[1]);	//button setting
		gtk_label_set_text(GTK_LABEL(sub2),_sub[2]);
		gtk_label_set_text(GTK_LABEL(sub3),_sub[3]);
		gtk_label_set_text(GTK_LABEL(sub4),_sub[4]);
		gtk_label_set_text(GTK_LABEL(sub5),_sub[5]);
		gtk_label_set_text(GTK_LABEL(sub6),_sub[6]);
		gtk_label_set_text(GTK_LABEL(sub7),_sub[7]);
		gtk_label_set_text(GTK_LABEL(sub8),_sub[8]);
		gtk_label_set_text(GTK_LABEL(sub9),_sub[9]);
		gtk_label_set_text(GTK_LABEL(sub10),_sub[10]);

		gtk_button_set_label(GTK_BUTTON(grade1),_grade[1]);
		gtk_button_set_label(GTK_BUTTON(grade2),_grade[2]);
		gtk_button_set_label(GTK_BUTTON(grade3),_grade[3]);
		gtk_button_set_label(GTK_BUTTON(grade4),_grade[4]);
		gtk_button_set_label(GTK_BUTTON(grade5),_grade[5]);
		gtk_button_set_label(GTK_BUTTON(grade6),_grade[6]);
		gtk_button_set_label(GTK_BUTTON(grade7),_grade[7]);
		gtk_button_set_label(GTK_BUTTON(grade8),_grade[8]);
		gtk_button_set_label(GTK_BUTTON(grade9),_grade[9]);
		gtk_button_set_label(GTK_BUTTON(grade10),_grade[10]);

		gtk_button_set_label(GTK_BUTTON(credit1),_credit[1]);
		gtk_button_set_label(GTK_BUTTON(credit2),_credit[2]);
		gtk_button_set_label(GTK_BUTTON(credit3),_credit[3]);
		gtk_button_set_label(GTK_BUTTON(credit4),_credit[4]);
		gtk_button_set_label(GTK_BUTTON(credit5),_credit[5]);
		gtk_button_set_label(GTK_BUTTON(credit6),_credit[6]);
		gtk_button_set_label(GTK_BUTTON(credit7),_credit[7]);
		gtk_button_set_label(GTK_BUTTON(credit8),_credit[8]);
		gtk_button_set_label(GTK_BUTTON(credit9),_credit[9]);
		gtk_button_set_label(GTK_BUTTON(credit10),_credit[10]);

		gtk_button_set_label(GTK_BUTTON(major1),_major[1]);
		gtk_button_set_label(GTK_BUTTON(major2),_major[2]);
		gtk_button_set_label(GTK_BUTTON(major3),_major[3]);
		gtk_button_set_label(GTK_BUTTON(major4),_major[4]);
		gtk_button_set_label(GTK_BUTTON(major5),_major[5]);
		gtk_button_set_label(GTK_BUTTON(major6),_major[6]);
		gtk_button_set_label(GTK_BUTTON(major7),_major[7]);
		gtk_button_set_label(GTK_BUTTON(major8),_major[8]);
		gtk_button_set_label(GTK_BUTTON(major9),_major[9]);
		gtk_button_set_label(GTK_BUTTON(major10),_major[10]);
	}
}
void save_senior_first()
{
	int n;
	int i;
	char *_sub[16];
	char _grade[16][16]={0,};
	char _credit[16][16]={0,};
	char _major[16][16]={0,};
	char total_senior_first[5]={0,};
	char _major_senior_first[5]={0,};
if(flag==0){
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
		major_senior_first[n]=majorA[n];  
	}
	re_senior_first = total_score;
	mjr_senior_first = major_score;
	gtk_button_set_label(GTK_BUTTON(fresh_first),"fresh_first");
	gtk_button_set_label(GTK_BUTTON(fresh_second),"fresh_second");
	gtk_button_set_label(GTK_BUTTON(sophomore_first),"sophomore_first");
	gtk_button_set_label(GTK_BUTTON(sophomore_second),"sophomore_second");
	gtk_button_set_label(GTK_BUTTON(junior_first),"junior_first");
	gtk_button_set_label(GTK_BUTTON(junior_second),"junior_second");
	gtk_button_set_label(GTK_BUTTON(senior_first),"saved_senior_first");
	gtk_button_set_label(GTK_BUTTON(senior_second),"senior_second");
}
	else if(flag == 1)
	{
		for(i=0;i<16;i++)
		{	

			sprintf(total_senior_first,"%f",re_senior_first);
			sprintf(_major_senior_first,"%f",mjr_senior_first);
			_sub[i] = sub_senior_first[i];
			sprintf(_grade[i],"%d",grade_senior_first[i]);
			sprintf(_credit[i],"%d",credit_senior_first[i]);
			sprintf(_major[i],"%d",major_senior_first[i]);
		}
		gtk_label_set_text(GTK_LABEL(sub1),_sub[1]);	//button setting
		gtk_label_set_text(GTK_LABEL(sub2),_sub[2]);
		gtk_label_set_text(GTK_LABEL(sub3),_sub[3]);
		gtk_label_set_text(GTK_LABEL(sub4),_sub[4]);
		gtk_label_set_text(GTK_LABEL(sub5),_sub[5]);
		gtk_label_set_text(GTK_LABEL(sub6),_sub[6]);
		gtk_label_set_text(GTK_LABEL(sub7),_sub[7]);
		gtk_label_set_text(GTK_LABEL(sub8),_sub[8]);
		gtk_label_set_text(GTK_LABEL(sub9),_sub[9]);
		gtk_label_set_text(GTK_LABEL(sub10),_sub[10]);

		gtk_button_set_label(GTK_BUTTON(grade1),_grade[1]);
		gtk_button_set_label(GTK_BUTTON(grade2),_grade[2]);
		gtk_button_set_label(GTK_BUTTON(grade3),_grade[3]);
		gtk_button_set_label(GTK_BUTTON(grade4),_grade[4]);
		gtk_button_set_label(GTK_BUTTON(grade5),_grade[5]);
		gtk_button_set_label(GTK_BUTTON(grade6),_grade[6]);
		gtk_button_set_label(GTK_BUTTON(grade7),_grade[7]);
		gtk_button_set_label(GTK_BUTTON(grade8),_grade[8]);
		gtk_button_set_label(GTK_BUTTON(grade9),_grade[9]);
		gtk_button_set_label(GTK_BUTTON(grade10),_grade[10]);

		gtk_button_set_label(GTK_BUTTON(credit1),_credit[1]);
		gtk_button_set_label(GTK_BUTTON(credit2),_credit[2]);
		gtk_button_set_label(GTK_BUTTON(credit3),_credit[3]);
		gtk_button_set_label(GTK_BUTTON(credit4),_credit[4]);
		gtk_button_set_label(GTK_BUTTON(credit5),_credit[5]);
		gtk_button_set_label(GTK_BUTTON(credit6),_credit[6]);
		gtk_button_set_label(GTK_BUTTON(credit7),_credit[7]);
		gtk_button_set_label(GTK_BUTTON(credit8),_credit[8]);
		gtk_button_set_label(GTK_BUTTON(credit9),_credit[9]);
		gtk_button_set_label(GTK_BUTTON(credit10),_credit[10]);

		gtk_button_set_label(GTK_BUTTON(major1),_major[1]);
		gtk_button_set_label(GTK_BUTTON(major2),_major[2]);
		gtk_button_set_label(GTK_BUTTON(major3),_major[3]);
		gtk_button_set_label(GTK_BUTTON(major4),_major[4]);
		gtk_button_set_label(GTK_BUTTON(major5),_major[5]);
		gtk_button_set_label(GTK_BUTTON(major6),_major[6]);
		gtk_button_set_label(GTK_BUTTON(major7),_major[7]);
		gtk_button_set_label(GTK_BUTTON(major8),_major[8]);
		gtk_button_set_label(GTK_BUTTON(major9),_major[9]);
		gtk_button_set_label(GTK_BUTTON(major10),_major[10]);
	}
}
void save_senior_second()
{
	int n;
	int i;
	char *_sub[16];
	char _grade[16][16]={0,};
	char _credit[16][16]={0,};
	char _major[16][16]={0,};
	char total_senior_second[5]={0,};
	char _major_senior_second[5]={0,};
if(flag==0){
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
		major_senior_second[n]=majorA[n];  
	}
	re_senior_second = total_score;
	mjr_senior_second = major_score;
	gtk_button_set_label(GTK_BUTTON(fresh_first),"fresh_first");
	gtk_button_set_label(GTK_BUTTON(fresh_second),"fresh_second");
	gtk_button_set_label(GTK_BUTTON(sophomore_first),"sophomore_first");
	gtk_button_set_label(GTK_BUTTON(sophomore_second),"sophomore_second");
	gtk_button_set_label(GTK_BUTTON(junior_first),"junior_first");
	gtk_button_set_label(GTK_BUTTON(junior_second),"junior_second");
	gtk_button_set_label(GTK_BUTTON(senior_first),"senior_first");
	gtk_button_set_label(GTK_BUTTON(senior_second),"saved_senior_second");

}
	else if(flag == 1)
	{
		for(i=0;i<16;i++)
		{	

			sprintf(total_senior_second,"%f",re_senior_second);
			sprintf(_major_senior_second,"%f",mjr_senior_second);
			_sub[i] = sub_senior_second[i];
			sprintf(_grade[i],"%d",grade_senior_second[i]);
			sprintf(_credit[i],"%d",credit_senior_second[i]);
			sprintf(_major[i],"%d",major_senior_second[i]);
		}
		gtk_label_set_text(GTK_LABEL(sub1),_sub[1]);	//button setting
		gtk_label_set_text(GTK_LABEL(sub2),_sub[2]);
		gtk_label_set_text(GTK_LABEL(sub3),_sub[3]);
		gtk_label_set_text(GTK_LABEL(sub4),_sub[4]);
		gtk_label_set_text(GTK_LABEL(sub5),_sub[5]);
		gtk_label_set_text(GTK_LABEL(sub6),_sub[6]);
		gtk_label_set_text(GTK_LABEL(sub7),_sub[7]);
		gtk_label_set_text(GTK_LABEL(sub8),_sub[8]);
		gtk_label_set_text(GTK_LABEL(sub9),_sub[9]);
		gtk_label_set_text(GTK_LABEL(sub10),_sub[10]);

		gtk_button_set_label(GTK_BUTTON(grade1),_grade[1]);
		gtk_button_set_label(GTK_BUTTON(grade2),_grade[2]);
		gtk_button_set_label(GTK_BUTTON(grade3),_grade[3]);
		gtk_button_set_label(GTK_BUTTON(grade4),_grade[4]);
		gtk_button_set_label(GTK_BUTTON(grade5),_grade[5]);
		gtk_button_set_label(GTK_BUTTON(grade6),_grade[6]);
		gtk_button_set_label(GTK_BUTTON(grade7),_grade[7]);
		gtk_button_set_label(GTK_BUTTON(grade8),_grade[8]);
		gtk_button_set_label(GTK_BUTTON(grade9),_grade[9]);
		gtk_button_set_label(GTK_BUTTON(grade10),_grade[10]);

		gtk_button_set_label(GTK_BUTTON(credit1),_credit[1]);
		gtk_button_set_label(GTK_BUTTON(credit2),_credit[2]);
		gtk_button_set_label(GTK_BUTTON(credit3),_credit[3]);
		gtk_button_set_label(GTK_BUTTON(credit4),_credit[4]);
		gtk_button_set_label(GTK_BUTTON(credit5),_credit[5]);
		gtk_button_set_label(GTK_BUTTON(credit6),_credit[6]);
		gtk_button_set_label(GTK_BUTTON(credit7),_credit[7]);
		gtk_button_set_label(GTK_BUTTON(credit8),_credit[8]);
		gtk_button_set_label(GTK_BUTTON(credit9),_credit[9]);
		gtk_button_set_label(GTK_BUTTON(credit10),_credit[10]);

		gtk_button_set_label(GTK_BUTTON(major1),_major[1]);
		gtk_button_set_label(GTK_BUTTON(major2),_major[2]);
		gtk_button_set_label(GTK_BUTTON(major3),_major[3]);
		gtk_button_set_label(GTK_BUTTON(major4),_major[4]);
		gtk_button_set_label(GTK_BUTTON(major5),_major[5]);
		gtk_button_set_label(GTK_BUTTON(major6),_major[6]);
		gtk_button_set_label(GTK_BUTTON(major7),_major[7]);
		gtk_button_set_label(GTK_BUTTON(major8),_major[8]);
		gtk_button_set_label(GTK_BUTTON(major9),_major[9]);
		gtk_button_set_label(GTK_BUTTON(major10),_major[10]);
	}
}

