#include <stdio.h>
#include "date.h"
/*
void printDate(struct date d)
{
	printf("(%d/%d/%d)\n", d.year, d.month, d.day);
	
}
*/

void printDate(const struct date *pd)
{
	//printf("(%d/%d/%d)\n", (*pd).year, (*pd).month, (*pd).day);
	printf("(%d/%d/%d)\n", pd->year, pd->month, pd->day);  	//구조체자료를 가리키는 포인터를 쓸떈  화살표로접근가능
}
