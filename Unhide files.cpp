#include <cstdlib>
#include <ctime>
#include <conio.h>
#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
void sleep(int ms){
	clock_t t = clock();
	while ((clock() - t) / (double)CLOCKS_PER_SEC * 1000<ms);
}
int main(int argc, char *argv[])
{
    printf("\n\n             <<<~~~***///   PROGRAMMED BY SAMI EMAD   \\\\\\***~~~>>>\n\n");
    if(argv[1]==NULL){
        printf("Operation failed. No file attached.\n\nplease close this window and drag the file you'd like to unhide to the unhide.exe program icon\n");
        printf("\nPress Enter key to exit...");
        getchar();
        return 1;
    }
//    printf("argc = %d\n",argc);
//    for(int i=0; i<argc; ++i ){
//        printf("argv[%d] = %s\n",i,argv[i]);
//    }
	sleep(500);
	printf("unhiding %d file%s... \nthis might take few seconds, please wait...\n",argc-1, argc==2?"":"s");
    for( int i=1; i<argc; ++i ){
        char s[10000]="";
        strcat(s,"attrib -s -h \"");
        strcat(s,argv[i]);
        strcat(s,"\" /S /D");
//        printf("s=%s\n",s);
        system(s);
    }
    sleep(1000);
	printf("\nOperation success!\nplease refresh the folder to see the changes.\n");
	printf("\nPress Enter key to exit...");
	getchar();
	sleep(2000);
    return 0;
}
