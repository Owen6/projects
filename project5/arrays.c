/**
This Program will take an input and put it into an  array
Program to pracice using arrays in C
**/


#include <stdio.h>

int main(void){
	int row, col,i,j;
	printf("This program counts occurrences of digits 0 through 9 in an NxM array.\n");
	printf("Enter the size of the array (Row Column): ");
	scanf("%d %d",&row,&col);	
	char arturo[row][col];
	int digits[10];

	for(i=0;i<10;i++){
		digits[i] = 0;
	}

	for(i=0;i<row;i++){
		printf("Enter row %d: ",i);
		for(j=0;j<col;j++){
			scanf("%s",&arturo[i][j]);

			switch(arturo[i][j]){
				case '0':	digits[0]++;
					break;
				case '1':	digits[1]++;
					break;
				case '2':	digits[2]++;
					break;
				case '3':	digits[3]++;
					break;
				case '4':	digits[4]++;
					break;
				case '5':	digits[5]++;
					break;
				case '6':	digits[6]++;
					break;
				case '7':	digits[7]++;
					break;
				case '8':	digits[8]++;
					break;
				case '9':	digits[9]++;
					break;
			}
		}
	}

	printf("Total counts for each digit:\n");
	for(i=0;i<10;i++){
		printf("Digit %d occurs %d times\n",i,digits[i]);
	}

	printf("The digit counts directly from the 1D array:\n");
	for(i=0;i<10;i++){
		printf("%d ", digits[i]);
	}

	printf("\nThe original 2D array entered by the user:\n");
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("%c ", arturo[i][j]);
		}
		printf("\n");
	}

	return 0;
}