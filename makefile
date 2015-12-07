timetable: timetable.c
	gcc timetable.c -o timetable `pkg-config --cflags --libs gtk+-2.0`
