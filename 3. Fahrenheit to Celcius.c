#include<stdio.h>

main(){
	float f = 0;
	float c = 0;
	int step = 20;
	int end = 300;
	printf("Fahrenheit\tCelcius\n");
	while(f <= end){
		c = (5.0/9.0)*(f-32.0);
		printf("%0.2f\t\t%0.2f\n",f,c);
		f += step;
	}
	
}

