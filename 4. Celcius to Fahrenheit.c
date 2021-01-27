#include<stdio.h>
main(){
	float f;
	float c;
	int step = 20;
	int end = 300;
	printf("Celcius\t\tFahrenheit\n");
	while(c <= end){
		f = ((9.0/5.0)*c) + 32.0;
		printf("%f\t%f\n", c, f);
		c += step;
	}
}
