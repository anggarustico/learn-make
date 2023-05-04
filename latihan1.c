/*
* latihan1.c
* source code ini copy-paste dari sebuah
* thread di stackoverflow
*/
#include <stdio.h>
#include <time.h>

void what_time_is_it()
{
    time_t timer;
    char buffer[26];
    struct tm *tm_info;

    time(&timer);
    tm_info = localtime(&timer);

    strftime(buffer, 26, "%H:%M:%S", tm_info);
    puts(buffer);
}

int main (int argc, char *argv[])
{
    printf("Haayy saya sedang belajar GNU Make!\n");
    printf("by the way, jam berapa ya sekarang? \n");
    printf("Ok.. sekarang jam ");
    what_time_is_it();

    return 0;
}