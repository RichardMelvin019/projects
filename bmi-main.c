#include <stdio.h>
float _bmi_calc(unsigned int weight, float height);

int main(void)
{
	unsigned int weight;
	float height;
	float bmi;

	printf("\n______This is BMI Calculator______\n");
	printf("\nInput patients weight in Kilogram\n");
	scanf("%x", &weight);
	printf("Input patients height in Metre\n");
	scanf("%f", &height);
	bmi = _bmi_calc(weight, height);
	printf("Patients BMI: %fkg/m2\n", bmi);
	return (0);
}
