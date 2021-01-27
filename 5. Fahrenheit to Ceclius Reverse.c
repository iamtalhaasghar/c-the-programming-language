#include<stdio.h>
main(){
	
	float c = 0;
	int f = 0;
	printf("Fahrenheit\tCelcius\n");
	for(f=300; f>=0; f-=20){
		c = (5.0/9.0) * (f - 32.0);
		printf("%d\t\t%f\n",f,c);
	}
	
}
