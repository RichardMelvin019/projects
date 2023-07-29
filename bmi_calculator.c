#include "melvin.h"

/**
 * _bmi_calc - Calculates the bmi of a patient
 * @weight: the weight of the patient
 * @height: the height of the patient
 * Return: the bmi of the patient
*/

float _bmi_calc(unsigned int weight, float height)
{
	float bmi = bmi = weight / (height * height);

	if (bmi < 18)
		printf("Under weight\n");
	else if (bmi >= 18 && bmi <= 25)
		printf("Normal weight\n");
	else if (bmi >= 26 && bmi <= 29)
		printf("Over weight\n");
	else if (bmi >= 30)
	{
		printf("Obesity\n");
		if (bmi >= 30 && bmi <= 34)
			printf("Class 1 Obesity\n");
		else if (bmi >= 35 && bmi <= 39)
			printf("Class 2 Obesity\n");
		else if (bmi >= 40)
			printf("Class 3 Obesity\n");
	}
	return(bmi = weight / (height * height));
}
