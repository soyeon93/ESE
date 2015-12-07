#include<gtk/gtk.h>
#include "define.h"
double major_score;
double total_score;
int buf_grd[16];
int buf_crd[16];
int buf_maj[16];

char *subA[16];		
double gradeA[16];	
int creditA[16];	
int majorA[16];	
void function_calculate()
{
	double score=0;
	double mjr_score=0;
	char _total_score[10]={0};
	char _major_score[10]={0};
	int i;
	int cnt=0;
	int mjr_cnt=0;
	for(i=0;i<16;i++)
	{
		if(buf_grd[i] == 1 && buf_crd[i] ==1 && buf_maj[i] == 1)
		{
			score += gradeA[i]*creditA[i];
			
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
}


