#include <stdio.h>
#include <gtk/gtk.h>
#include "define.h"

int myTotalNum=0;
int myMajorNum=0;
int myCultureNum=0;

int originTotalNum=140;
int originMajorNum=75;
int originCultureNum=30;

int mustTotalNum;
int mustMajorNum;
int mustCultureNum;

char myTotalNum1[5]={0,};
char myMajorNum1[5]={0,};
char myCultureNum1[5]={0,};
char originTotalNum1[5]={0,};
char originMajorNum1[5]={0,};
char originCultureNum1[5]={0,};
char mustTotalNum1[5]={0,};
char mustMajorNum1[5]={0,};
char mustCultureNum1[5]={0,};


//
//callback function by OS
void saveButton(void)
{
	int i,mtn=0,mmn=0,mcn=0;
	//for mytotalnum
	for(i=0;i<16;i++)
	{
		if(credit_fresh_first[i]!=0)
		{
			mtn=mtn+grade_fresh_first[i];
		}
	}
	for(i=0;i<16;i++)
	{
		if(credit_fresh_second[i]!=0)
		{
			mtn=mtn+grade_fresh_first[i];
		}
	}
	for(i=0;i<16;i++)
	{
		if(credit_sophomore_first[i]!=0)
		{
			mtn=mtn+grade_fresh_first[i];
		}
	}
	for(i=0;i<16;i++)
	{
		if(credit_sophomore_second[i]!=0)
		{
			mtn=mtn+grade_fresh_first[i];
		}
	}
	for(i=0;i<16;i++)
	{
		if(credit_junior_first[i]!=0)
		{
			mtn=mtn+grade_fresh_first[i];
		}
	}
	for(i=0;i<16;i++)
	{
		if(credit_junior_second[i]!=0)
		{
			mtn=mtn+grade_fresh_first[i];
		}
	}
	for(i=0;i<16;i++)
	{
		if(credit_senior_first[i]!=0)
		{
			mtn=mtn+grade_fresh_first[i];
		}
	}
	for(i=0;i<16;i++)
	{
		if(credit_senior_second[i]!=0)
		{
			mtn=mtn+grade_fresh_first[i];
		}
	}

	//for mymajornum
	for(i=0;i<16;i++)
	{
		if(credit_fresh_first[i]!=0 && major_fresh_first[i]!=0)
		{
			mmn=mmn+grade_fresh_first[i];
		}
	}
	for(i=0;i<16;i++)
	{
		if(credit_fresh_second[i]!=0 && major_fresh_first[i]!=0)
		{
			mmn=mmn+grade_fresh_first[i];
		}
	}
	for(i=0;i<16;i++)
	{
		if(credit_sophomore_first[i]!=0 && major_fresh_first[i]!=0)
		{
			mmn=mmn+grade_fresh_first[i];
		}
	}
	for(i=0;i<16;i++)
	{
		if(credit_sophomore_second[i]!=0 && major_fresh_first[i]!=0)
		{
			mmn=mmn+grade_fresh_first[i];
		}
	}
	for(i=0;i<16;i++)
	{
		if(credit_junior_first[i]!=0 && major_fresh_first[i]!=0)
		{
			mmn=mmn+grade_fresh_first[i];
		}
	}
	for(i=0;i<16;i++)
	{
		if(credit_junior_second[i]!=0 && major_fresh_first[i]!=0)
		{
			mmn=mmn+grade_fresh_first[i];
		}
	}
	for(i=0;i<16;i++)
	{
		if(credit_senior_first[i]!=0 && major_fresh_first[i]!=0)
		{
			mmn=mmn+grade_fresh_first[i];
		}
	}
	for(i=0;i<16;i++)
	{
		if(credit_senior_second[i]!=0 && major_fresh_first[i]!=0)
		{
			mmn=mmn+grade_fresh_first[i];
		}
	}

	
	//for myculturenum
	for(i=0;i<16;i++)
	{
		if(credit_fresh_first[i]!=0 && major_fresh_first[i]==0)
		{
			mcn=mcn+grade_fresh_first[i];
		}
	}
	for(i=0;i<16;i++)
	{
		if(credit_fresh_second[i]!=0 && major_fresh_first[i]==0)
		{
			mcn=mcn+grade_fresh_first[i];
		}
	}
	for(i=0;i<16;i++)
	{
		if(credit_sophomore_first[i]!=0 && major_fresh_first[i]==0)
		{
			mcn=mcn+grade_fresh_first[i];
		}
	}
	for(i=0;i<16;i++)
	{
		if(credit_sophomore_second[i]!=0 && major_fresh_first[i]==0)
		{
			mcn=mcn+grade_fresh_first[i];
		}
	}
	for(i=0;i<16;i++)
	{
		if(credit_junior_first[i]!=0 && major_fresh_first[i]==0)
		{
			mcn=mcn+grade_fresh_first[i];
		}
	}
	for(i=0;i<16;i++)
	{
		if(credit_junior_second[i]!=0 && major_fresh_first[i]==0)
		{
			mcn=mcn+grade_fresh_first[i];
		}
	}
	for(i=0;i<16;i++)
	{
		if(credit_senior_first[i]!=0 && major_fresh_first[i]==0)
		{
			mcn=mcn+grade_fresh_first[i];
		}
	}
	for(i=0;i<16;i++)
	{
		if(credit_senior_second[i]!=0 && major_fresh_first[i]==0)
		{
			mcn=mcn+grade_fresh_first[i];
		}
	}

	myTotalNum=mtn;
	myMajorNum=mmn;
	myCultureNum=mcn;
	
	
	//
	mustTotalNum = originTotalNum-myTotalNum;
	mustMajorNum=originMajorNum-myMajorNum;
	mustCultureNum=originCultureNum-myCultureNum;
	
	sprintf(myTotalNum1,"%d",myTotalNum);
	sprintf(myMajorNum1,"%d",myMajorNum);
	sprintf(myCultureNum1,"%d",myCultureNum);
	sprintf(originTotalNum1,"%d",originTotalNum);
	sprintf(originMajorNum1,"%d",originMajorNum);
	sprintf(originCultureNum1,"%d",originCultureNum);
	sprintf(mustTotalNum1,"%d",mustTotalNum);
	sprintf(mustMajorNum1,"%d",mustMajorNum);
	sprintf(mustCultureNum1,"%d",mustCultureNum);

	gtk_label_set_text(GTK_LABEL(label3j_2),myTotalNum1);
	gtk_label_set_text(GTK_LABEL(label4j_2),myMajorNum1);
	gtk_label_set_text(GTK_LABEL(label5j_2),myCultureNum1);

	gtk_label_set_text(GTK_LABEL(label6j_2_1),originTotalNum1);
	gtk_label_set_text(GTK_LABEL(label7j_2),originMajorNum1);
	gtk_label_set_text(GTK_LABEL(label8j_2),originCultureNum1);

	gtk_label_set_text(GTK_LABEL(label9j_2_1),mustTotalNum1);
	gtk_label_set_text(GTK_LABEL(label1j0_2),mustMajorNum1);
	gtk_label_set_text(GTK_LABEL(label1j1_2),mustCultureNum1);
	printf("calculation completed\n");
}

void calMajor(void)
{
	


	sprintf(myTotalNum1,"%d",myTotalNum);
	sprintf(myMajorNum1,"%d",myMajorNum);
	sprintf(myCultureNum1,"%d",myCultureNum);
	sprintf(originTotalNum1,"%d",originTotalNum);
	sprintf(originMajorNum1,"%d",originMajorNum);
	sprintf(originCultureNum1,"%d",originCultureNum);
	sprintf(mustTotalNum1,"%d",mustTotalNum);
	sprintf(mustMajorNum1,"%d",mustMajorNum);
	sprintf(mustCultureNum1,"%d",mustCultureNum);


	window_calMajor=gtk_window_new(GTK_WINDOW_TOPLEVEL);
	g_signal_connect(G_OBJECT(window_calMajor), "destroy",G_CALLBACK(gtk_main_quit),NULL);
	vbox_calMajor=gtk_vbox_new(TRUE,0);
	hbox1j=gtk_hbox_new(TRUE,0);
	label1j_1=gtk_label_new("학점 계산기");
	gtk_widget_set_size_request(label1j_1,100,50);
	
	hbox2j=gtk_hbox_new(TRUE,0);
	label2j_1=gtk_label_new("현재 나의 학점");
	gtk_widget_set_size_request(label2j_1,100,50);
	
	hbox3j=gtk_hbox_new(TRUE,0);
	label3j_1=gtk_label_new("총");
	gtk_widget_set_size_request(label3j_1,100,50);
	label3j_2=gtk_label_new(myTotalNum1);
	gtk_widget_set_size_request(label3j_2,100,50);
	label3j_3=gtk_label_new("학점");
	gtk_widget_set_size_request(label3j_3,100,50);

	hbox4j=gtk_hbox_new(TRUE,0);
	label4j_1=gtk_label_new("전공");
	gtk_widget_set_size_request(label4j_1,100,50);
	label4j_2=gtk_label_new(myMajorNum1);
	gtk_widget_set_size_request(label4j_2,100,50);
	label4j_3=gtk_label_new("학점");
	gtk_widget_set_size_request(label4j_3,100,50);
	
	hbox5j=gtk_hbox_new(TRUE,0);
	label5j_1=gtk_label_new("교양");
	gtk_widget_set_size_request(label5j_1,100,50);
	label5j_2=gtk_label_new(myCultureNum1);
	gtk_widget_set_size_request(label5j_2,100,50);
	label5j_3=gtk_label_new("학점");
	gtk_widget_set_size_request(label5j_3,100,50);

	hbox6j=gtk_hbox_new(TRUE,0);
	label6j_1=gtk_label_new("졸업 요건");
	gtk_widget_set_size_request(label6j_1,100,50);
	
	hbox6j_1=gtk_hbox_new(TRUE,0);
	label6j_1_1=gtk_label_new("총");
	gtk_widget_set_size_request(label6j_1_1,100,50);
	label6j_2_1=gtk_label_new(originTotalNum1);
	gtk_widget_set_size_request(label6j_2_1,100,50);
	label6j_3_1=gtk_label_new("학점");
	gtk_widget_set_size_request(label6j_3_1,100,50);

	hbox7j=gtk_hbox_new(TRUE,0);
	label7j_1=gtk_label_new("전공");
	gtk_widget_set_size_request(label7j_1,100,50);
	label7j_2=gtk_label_new(originMajorNum1);
	gtk_widget_set_size_request(label7j_2,100,50);
	label7j_3=gtk_label_new("학점");
	gtk_widget_set_size_request(label7j_3,100,50);

	hbox8j=gtk_hbox_new(TRUE,0);
	label8j_1=gtk_label_new("교양");
	gtk_widget_set_size_request(label8j_1,100,50);
	label8j_2=gtk_label_new(originCultureNum1);
	gtk_widget_set_size_request(label8j_2,100,50);
	label8j_3=gtk_label_new("학점");
	gtk_widget_set_size_request(label8j_3,100,50);
	
	hbox9j=gtk_hbox_new(TRUE,0);
	label9j_1=gtk_label_new("이수해야할 학점");
	gtk_widget_set_size_request(label9j_1,100,50);
	
	hbox9j_1=gtk_hbox_new(TRUE,0);
	label9j_1_1=gtk_label_new("총");
	gtk_widget_set_size_request(label9j_1_1,100,50);
	label9j_2_1=gtk_label_new(mustTotalNum1);
	gtk_widget_set_size_request(label9j_2_1,100,50);
	label9j_3_1=gtk_label_new("학점");
	gtk_widget_set_size_request(label9j_3_1,100,50);

	hbox1j0=gtk_hbox_new(TRUE,0);
	label1j0_1=gtk_label_new("전공");
	gtk_widget_set_size_request(label1j0_1,100,50);
	label1j0_2=gtk_label_new(mustMajorNum1);
	gtk_widget_set_size_request(label1j0_2,100,50);
	label1j0_3=gtk_label_new("학점");

	
	
	hbox1j1=gtk_hbox_new(TRUE,0);
	label1j1_1=gtk_label_new("교양");
	gtk_widget_set_size_request(label1j1_1,100,50);
	label1j1_2=gtk_label_new(mustCultureNum1);
	gtk_widget_set_size_request(label1j1_2,100,50);
	label1j1_3=gtk_label_new("학점");
	gtk_widget_set_size_request(label1j1_3,100,50);

	
	hbox1j2=gtk_hbox_new(TRUE,0);
	buttonj=gtk_button_new_with_label("계산시작");
	gtk_widget_set_size_request(buttonj,50,50);
	g_signal_connect(G_OBJECT(buttonj), "clicked",G_CALLBACK(saveButton),NULL);
		
	gtk_container_add(GTK_CONTAINER(hbox1j),label1j_1);
	
	gtk_container_add(GTK_CONTAINER(hbox2j),label2j_1);
	
	gtk_container_add(GTK_CONTAINER(hbox3j),label3j_1);
	gtk_container_add(GTK_CONTAINER(hbox3j),label3j_2);
	gtk_container_add(GTK_CONTAINER(hbox3j),label3j_3);
	
	gtk_container_add(GTK_CONTAINER(hbox4j),label4j_1);
	gtk_container_add(GTK_CONTAINER(hbox4j),label4j_2);
	gtk_container_add(GTK_CONTAINER(hbox4j),label4j_3);
	
	gtk_container_add(GTK_CONTAINER(hbox5j),label5j_1);
	gtk_container_add(GTK_CONTAINER(hbox5j),label5j_2);
	gtk_container_add(GTK_CONTAINER(hbox5j),label5j_3);
	
	gtk_container_add(GTK_CONTAINER(hbox6j),label6j_1);

	gtk_container_add(GTK_CONTAINER(hbox6j_1),label6j_1_1);
	gtk_container_add(GTK_CONTAINER(hbox6j_1),label6j_2_1);
	gtk_container_add(GTK_CONTAINER(hbox6j_1),label6j_3_1);

	gtk_container_add(GTK_CONTAINER(hbox7j),label7j_1);
	gtk_container_add(GTK_CONTAINER(hbox7j),label7j_2);
	gtk_container_add(GTK_CONTAINER(hbox7j),label7j_3);

	
	gtk_container_add(GTK_CONTAINER(hbox8j),label8j_1);
	gtk_container_add(GTK_CONTAINER(hbox8j),label8j_2);
	gtk_container_add(GTK_CONTAINER(hbox8j),label8j_3);
	
	gtk_container_add(GTK_CONTAINER(hbox9j),label9j_1);	

	gtk_container_add(GTK_CONTAINER(hbox9j_1),label9j_1_1);
	gtk_container_add(GTK_CONTAINER(hbox9j_1),label9j_2_1);
	gtk_container_add(GTK_CONTAINER(hbox9j_1),label9j_3_1);

	gtk_container_add(GTK_CONTAINER(hbox1j0),label1j0_1);
	gtk_container_add(GTK_CONTAINER(hbox1j0),label1j0_2);
	gtk_container_add(GTK_CONTAINER(hbox1j0),label1j0_3);

	gtk_container_add(GTK_CONTAINER(hbox1j1),label1j1_1);
	gtk_container_add(GTK_CONTAINER(hbox1j1),label1j1_2);
	gtk_container_add(GTK_CONTAINER(hbox1j1),label1j1_3);
	
	gtk_container_add(GTK_CONTAINER(hbox1j2),buttonj);

	
	
	gtk_container_add(GTK_CONTAINER(vbox_calMajor),hbox1j);
	gtk_container_add(GTK_CONTAINER(vbox_calMajor),hbox2j);
	gtk_container_add(GTK_CONTAINER(vbox_calMajor),hbox3j);
	gtk_container_add(GTK_CONTAINER(vbox_calMajor),hbox4j);	
	gtk_container_add(GTK_CONTAINER(vbox_calMajor),hbox5j);
	gtk_container_add(GTK_CONTAINER(vbox_calMajor),hbox6j);
	gtk_container_add(GTK_CONTAINER(vbox_calMajor),hbox6j_1);	
	gtk_container_add(GTK_CONTAINER(vbox_calMajor),hbox7j);
	gtk_container_add(GTK_CONTAINER(vbox_calMajor),hbox8j);	
	gtk_container_add(GTK_CONTAINER(vbox_calMajor),hbox9j);
	gtk_container_add(GTK_CONTAINER(vbox_calMajor),hbox9j_1);
	gtk_container_add(GTK_CONTAINER(vbox_calMajor),hbox1j0);	
	gtk_container_add(GTK_CONTAINER(vbox_calMajor),hbox1j1);
	gtk_container_add(GTK_CONTAINER(vbox_calMajor),hbox1j2);	

		
	gtk_container_add(GTK_CONTAINER(window_calMajor),vbox_calMajor);
		
	gtk_widget_show_all(window_calMajor);
	gtk_main();

	return;
}



