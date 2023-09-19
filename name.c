#include <stdio.h>

int main(void)
{
	char name[21]; 				//c언어에서는 문자열 배열받을때 배열이름을쓴다 
	//char buf[100];
	//char *name;
	//name = buf;
	
	scanf("%20s", name);			// scanf("%s", &name[0]);   %s는 주소값 받아와서 해당하는문자의 아스키코드랑 끝문자까지
	
	printf("%s\n", name);			// printf("%s", &name[0]);  주소값받아서 해당하는 아스키코드를 출력 \백슬레시까지 
	return 0;
}
