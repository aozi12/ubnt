
int my_strlen(const char *s)
{
	int c = 0;
	
	while (*s++ /*!= '\0'*/) 
		++c;
	
	return c;
}

void my_strcpy(char *des, const char *src)
{
	while (*des++ = *src++)
	;					//목적문장이없을때 세미콜론을씀
}

int my_strcmp(const char *s1, const char *s2)
{

	while (*s1 || *s2 || *s1 != *s2) 
		++s1, ++s2;
	
	return *s1 - *s2;
}

void my_strcat(char *des, const char *src)
{
	my_strcpy(des + my_strlen(des), src);

}
