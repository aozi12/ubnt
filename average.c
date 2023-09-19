#include <stdio.h>

int main(void)
{
	int kor, mat, eng;
	printf("input kor mat eng : ");
	scanf("%d %d %d", &kor, &mat, &eng);
	
	int sum = kor + mat + eng;
	
	//double average = sum / 3.0;
	double average = (double) sum / 3.0;
	printf("sum: %d\taverage: %.2f\n", sum, average);
	
	return 0;


}
