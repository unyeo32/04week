#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int input;
	int hour, sec, min;
	
	printf("input sec:");
	scanf("%i", &input);
	
	hour=input/3600;
	min=input%3600/60;
	sec=input%60;
	
	printf("the time is %i : %i : %i\n", hour, min, sec);
	
	return 0;
}
