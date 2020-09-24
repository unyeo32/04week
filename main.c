#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x;
	
	printf("input the year:");
	scanf("%i", &x);
	
	
	printf("is the year %i the leap year? %i\n:", x,
	                                              (x%4==0 && x%100!=0)||(x%400==0));
	
	return 0;
}
