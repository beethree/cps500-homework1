// CPS 500
// Bill Russell
// Homework 1, Question 1

#include <math.h>
#include <stdio.h>

int main(){
	double radius = 0.0;
	
	// get user input and repeat back
	printf("\n");
	printf("Please enter a radius: ");
	scanf("%lf", &radius);
	printf("\n");

	// display Diameter
	printf("Diameter: %.2f \n", radius * 2);

	// do some math for further calculations
	double radius_squared = radius * radius;
	double radius_cubed = radius * radius * radius;

	// display Surface Area
	printf("Surface Area: %.2f \n", 4 * M_PI * radius_squared);

	// display Volume
	printf("Volume: %.2f \n", (4 * M_PI * radius_cubed/3));

	// clean up and exit
	printf("\n");
        return 0;
}
