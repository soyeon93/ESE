#include "define.h"
#include<gtk/gtk.h>
int flag=-1;
void destroy_cal()
{
flag=0;
	gtk_widget_destroy(window_main);
	gtk_widget_show_all(window);	//창에 있는 모든 위젯들을 보여줍니다.
gtk_main();

}
void destroy_show()
{
flag=1;
	gtk_widget_destroy(window_main);
	gtk_widget_show_all(window);	//창에 있는 모든 위젯들을 보여줍니다.
gtk_main();

}

void destroy_calMajor()
{
	gtk_widget_destroy(window_main);	//창에 있는 모든 위젯들을 보여줍니다.

	calMajor();
gtk_main();

}
void destroy_timetable()
{
	gtk_widget_destroy(window_main);//창에 있는 모든 위젯들을 보여줍니다.

	timetable();
gtk_main();

}

