#include <gtk/gtk.h>
  // Window의 'destroy' Signal 발생시 호출될 Callback 함수
void cb_window_destroy (GtkWidget *widget, gpointer data)
  {
    // Main Event Loop 종료 (프로그램의 종료)
    gtk_main_quit ();
  }
  // Button1의 'button_press_event' Signal 발생시 호출될 Callback함수
gboolean cb_button1_press_event (GtkWidget *widget, GdkEventButton *event, gpointer data)
  {
    // g_signal_connect에서 넘어온 사용자 데이터(label1)를 GtkWidget의 포인터로 타입 캐스팅
    GtkWidget *label = (GtkWidget *) data;
    // GtkLabe의 Text를 변경하는 함수
    gtk_label_set_text(GTK_LABEL(label), "Button1을 마우스로 눌렀습니다.");
    return FALSE;
    /*
     * 반환값은 FALSE가 기본이다. TRUE이면 default handler가 호출되지 않는다.
     */
  }
  // Button2의 'button_release_event' Signal 발생시 호출될 Callback함수
gboolean cb_button2_release_event (GtkWidget *widget, GdkEventButton *event, gpointer data)
  {
    // g_signal_connect에서 넘어온 사용자 데이터(label2)를 GtkWidget의 포인터로 타입 캐스팅
    GtkWidget *label = (GtkWidget *) data;
    // GtkLabe의 Text를 변경하는 함수
    gtk_label_set_text(GTK_LABEL(label), "Button2를 마우스로 눌렀다가 땠습니다.");
    return FALSE;
    /*
     * 반환값은 FALSE가 기본이다. TRUE이면 default handler가 호출되지 않는다.
     */
  }
int main (int argc, char *argv[])
  {
    // 대부분 Widget의 생성후 반환값 형식은 GtkWidget이므로 GtkWidget의 포인터로 변수 선언
    GtkWidget *window = NULL;
    GtkWidget *table = NULL;
    GtkWidget *label1 = NULL;
    GtkWidget *label2 = NULL;
    GtkWidget *button1 = NULL;
    GtkWidget *button2 = NULL;
    gtk_init (&argc, &argv);
    // 기본 Window(GtkWindow) 생성
    window = gtk_window_new (GTK_WINDOW_TOPLEVEL);
    /*
     * Label1(GtkLabel) 생성
     */
    label1 = gtk_label_new ("Hi 똘츄~ 1");
    gtk_widget_show (label1);
    /*
     * Label2(GtkLabel) 생성
     */
    label2 = gtk_label_new ("Hi 똘츄~ 2");
    gtk_widget_show (label2);
    /*
     * Button1(GtkButton) 생성
     * 생성과 label변경을 한번에 처리할 수 있는 gtk_button_new_with_label 함수를 썼다.
     */
    button1 = gtk_button_new_with_label ("Button1");
    gtk_widget_show (button1);
    /*
     * Button2(GtkButton) 생성
     * 생성과 label변경을 한번에 처리할 수 있는 gtk_button_new_with_label 함수를 썼다.
     */
    button2 = gtk_button_new_with_label ("Button2");
    gtk_widget_show (button2);
    /*
     * Table 생성
     * 가로 2 x 세로 2 의 Cell을 가진 테이블을 생성한다.
     * Cell 크기의 균일화는 하지 않는다. (마지막 FALSE)
     */
    table = gtk_table_new (2, 2, FALSE);
    gtk_widget_show (table);
    // 기본 Window에 Table을 넣어준다.(GtkContainer에 대해서는 이미 설명하였으므로 생략한다)
    gtk_container_add (GTK_CONTAINER (window), table);
    /*
     * 맨 윗줄 첫번째 Cell에 label1을 child widget으로 넣는다.
     * 가로(xoptions)의 크기는 테이블의 크기에 맞춰 확장하고, Cell에 맞게 child widget을 채운다.
     * 세로(yoptions)의 크기는 테이블의 크기에 맞춰 확장한다.
     * 안 여백은 xpadding = 0, ypadding = 0으로 여백을 주지 않는다.
     */
    gtk_table_attach (GTK_TABLE (table), label1, 0, 1, 0, 1,
                (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                (GtkAttachOptions) (GTK_EXPAND),
                0, 0);
    /*
     * 맨 윗줄 두번째 Cell에 button1을 child widget으로 넣는다.
     * 가로(xoptions)의 크기는 테이블의 크기에 맞춰 확장하고, Cell에 맞게 child widget을 채운다.
     * 세로(yoptions)의 크기는 테이블의 크기에 맞춰 확장한다.
     * 안 여백은 xpadding = 0, ypadding = 0으로 여백을 주지 않는다.
     */
    gtk_table_attach (GTK_TABLE (table), button1, 1, 2, 0, 1,
                (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                (GtkAttachOptions) (GTK_EXPAND),
                0, 0);
    /*
     * 두번째줄 첫번째 Cell에 label2를 child widget으로 넣는다.
     * 가로(xoptions)의 크기는 테이블의 크기에 맞춰 확장하고, Cell에 맞게 child widget을 채운다.
     * 세로(yoptions)의 크기는 테이블의 크기에 맞춰 확장한다.
     * 안 여백은 xpadding = 0, ypadding = 0으로 여백을 주지 않는다.
     */
    gtk_table_attach (GTK_TABLE (table), label2, 0, 1, 1, 2,
                (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                (GtkAttachOptions) (GTK_EXPAND),
                0, 0);
    /*
     * 두번째줄 두번째 Cell에 button2를 child widget으로 넣는다.
     * 가로(xoptions)의 크기는 테이블의 크기에 맞춰 확장하고, Cell에 맞게 child widget을 채운다.
     * 세로(yoptions)의 크기는 테이블의 크기에 맞춰 확장하고, Cell에 맞게 child widget을 채운다.
     * 안 여백은 xpadding = 0, ypadding = 0으로 여백을 주지 않는다.
     */
    gtk_table_attach (GTK_TABLE (table), button2, 1, 2, 1, 2,
                (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                0, 0);
    // Signal 연결에 대해서는 전장인 "Signal & Callback & Handler"에서 설명하였다
    // 기본 Window의 X 버튼 클릭시 실행할 Callback 함수 연결
    g_signal_connect (G_OBJECT (window), "destroy",
                    G_CALLBACK (cb_window_destroy), NULL);
    /*
     * Button1을 마우스 버튼으로 눌렀을때 실행할 Callback 함수 연결
     * 사용자 데이터로 마지막 파라미터에 label1(포인터)을 넘긴다.
     */
    g_signal_connect (G_OBJECT (button1), "button_press_event",
                    G_CALLBACK (cb_button1_press_event), (gpointer) label1);
    /*
     * Button2를 마우스 버튼으로 눌렀다 땠을때 실행할 Callback 함수 연결
     * 사용자 데이터로 마지막 파라미터에 label2(포인터)를 넘긴다.
     */
    g_signal_connect (G_OBJECT (button2), "button_release_event",
                    G_CALLBACK (cb_button2_release_event), (gpointer) label2);
    // Window를 화면에 표시한다.
    gtk_widget_show (window);
    /*
    * Main Event Loop 생성 및 실행
    * gtk_main_quit 함수가 호출될때까지 다음 문장으로 진입할 수 없다.
    * 실질적으로 이때 화면상에 UI가 표시된다.
    */
    gtk_main ();
    // gtk_main_quit 함수가 호출되면 여기로 진입하게 된다.
    return 0;
  }
