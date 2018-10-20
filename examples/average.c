//calculating average

#include <stdio.h>

float average(float a, float b);

int main(){
	printf("Enter 3 numbers: ");
	float x,y,z;
	scanf("%f%f%f",&x,&y,&z);

	printf("Average of %.1f and %.1f: %.2f\n",x,y,average(x,y));
	printf("Average of %.1f and %.1f: %.2f\n",x,z,average(x,z));
	printf("Average of %.1f and %.1f: %.2f\n",y,z,average(y,z));

	return 0;
}

float average(float a, float b){
	float avg = (a+b)/2;
	return avg;
}
