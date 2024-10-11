#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAXCHAR 1000
int main()
{
    FILE *fp;
    time_t ct;
    char str[MAXCHAR];
    char* filename = "../3rdpart/Part3.txt";

    fp = fopen(filename, "r");
    if (fp == NULL){
        printf("Could not open file %s",filename);
        return 1;
    }
    while (fgets(str, MAXCHAR, fp) != NULL){
        time(&ct);
        printf("%s New Time is  %s \n", str,ctime(&ct));
    }
    fclose(fp);
    return 0;
}

