#include <stdio.h>

int main(void)
{
	int score;
	printf("input score : ");
	scanf("%d", &score);
	
	char grade;
	switch(score / 10 ){
	case 10:
	case 9:
		grade = 'A' ;
		printf("score : %d --- grade : A\n", score);
		break;
		printf("score : %d --- grade : A\n", score);
	case 8:
		grade = 'B' ;
		printf("score : %d --- grade : B\n", score);
		break;	
	case 7:
		grade = 'C' ;
		printf("score : %d --- grade : C\n", score);
		break;
	case 6:
		grade = 'D' ;
		printf("score : %d --- grade : D\n", score);
		break;
	default:	// 5 4 3 2 1 0
		grade = 'F' ;
		printf("score : %d --- grade : F\n", score);

   
	}
	
	return 0;
	
}
