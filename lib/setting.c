#include "define.h"
#include<gtk/gtk.h>

int buf_grd[16];
int buf_crd[16];
int buf_maj[16];
char *subA[16];		
double gradeA[16];	
int creditA[16];	
int majorA[16];	
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

