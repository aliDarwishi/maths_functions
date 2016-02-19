#include <stdio.h>

int main()
{	
	int x = 0;
	int add =0;
	printf("X = %i", x)
	
	printf("Add something to X");
	scanf(&add);
	
	x += add;
	
	int subtract =0;
	printf("X = %i", x)
	
	printf("Subtract from X");
	scanf(&subtract);
	
	x -= subtract;
	
	
	int multiply =0;
	printf("X = %i", x)
	
	printf("Multipply X by input");
	scanf(&multiply);
	
	
	x = x*multiply;
	
	
	
	int devide =0;
	printf("X = %i", x)
	
	printf("Devide X by input");
	scanf(&devide);
	
	
	x = x/devide;
	
	printf("X = %i", x)
	
	
	int remainder =0;
	printf("X = %i", x)
	
	printf("remainder of X from input");
	scanf(&remainder);
	
	
	x = x%devide;
	
	printf("X = %i", x)
	
	
	
	
	
	int[] array =5;
		
	for(int i= 0 i<array.size; i++)
	{
		int x = 0;
		
		printf("Enter an int");
		scanf(&x);
		
		array[i] = x;
		
	}
	
	for(int i=0; i<5; i++)
	{
		int min= 0;
		int max =200;
		
		if(array[i] > min)
		{
		
			min = array[i];
		}
		else if(array[i] < max)
		{
			max = array[i];
		}
		
	}
	
	printf("Min = %i", min);
	printf("Max = %i", max);
		
}
