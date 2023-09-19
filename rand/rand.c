
static int seed;      				//static은 .c 파일 안에서만사용가능

void my_srand(int s)						//func. definition함수정의
{
	seed = s;
}

int my_rand(void)
{
	seed = seed * 1103515245 + 12345;

	return ( (unsigned)(seed / 65536) % 32768);
}
