#include<gtk/gtk.h>
#define SZ 19
GtkWidget* window;
GtkWidget* label1;
GtkWidget* vbox;
GtkWidget* btn4_5,*btn4,*btn3_5,*btn3,*btn2_5,*btn2,*btn1_5, *btn1;
int grade[SZ] = {0,};
int *subject[SZ];
int flag=0;
int get_average(int *grade)
{
	float result;
	int i;
	for(i=0;i<SZ;i++)
	{
		result = result + grade[i];
	}
	return result;
}
void push_grade(int n,int grade)
{
	grade[n] = grade;
}
int main(int argc, char *argv[])
{
	float result =0;

 if(flag == 0)
{
	//c
}	


}
