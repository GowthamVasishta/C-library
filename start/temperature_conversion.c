/*
 * Converting centigrade value to Fahrenheit value
 */
#include<stdio.h>
void main() {

	float centi, fahren;
	
	printf("Enter temperature (in centigrade)\n");
	scanf("%f", &centi);

	fahren = 9/5.0*centi+32;

	printf("The fahrenheit temperature of %f (centigrade) is %f. \n", centi, fahren);


}
