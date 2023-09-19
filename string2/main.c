#include <stdio.h>
//#include <string.h>
#include "string.h"

int main(void)
{

	char *str1 = "hello";
	char str2[10];
	
	printf("str1 len : %d\n", my_strlen(str1));
	
	//str2 = str1;
	my_strcpy(str2, str1);					//넣고자하는곳은 배열 크기는 커야함
	
	
	
	printf("str2: %s\n", str2);
	
	//str1 == str2					//same addresss??
	
	if (my_strcmp(str1, str2) == 0 ) {
		printf("str1 and str2 are equal\n");
	} else {
		printf("str1 and str2 are not equal\n");
		
	}
	
	char *title = "just the way you are";
	char *singer = "billy joel";
	char result[100];
	my_strcpy(result, title);
	my_strcat(result, " - ");
	my_strcat(result, singer);  	// concatenation
	
	printf("result: %s\n", result);
	
	
	
	return 0;
}
