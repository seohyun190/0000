#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define MAX_TASKS 100 
#define MAX_TITLE_LEN 100
#define MAX_DATE_LEN 11
#define MAX_TIME_LEN 20
typedef struct {
    int id;
    char title[MAX_TITLE_LEN];
    char target_completion_date[MAX_DATE_LEN];

    char creation_time[MAX_TIME_LEN];
    char completion_time[MAX_TIME_LEN];
    int is_completed;
