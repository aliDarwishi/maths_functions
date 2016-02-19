//This is the line causing issue in the master branch
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
	printf("X = %d", x);
	
	
	int remainder =0;
	printf("X = %i", x)
	
	printf("remainder of X from input");
	scanf(&remainder);
	
	
	x = x%devide;
	
	printf("X = %i", x)
	
	
	
	
	
	
	
	
	
	
}
