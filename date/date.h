#ifndef DATE_H  				//	헤더파일의 내용이 한번만 갖다붙이기 위해 1번2번조건을씀
#define DATE_H

struct date {
	int year;
	int month;
	int day;
};

//void printDate(struct date d);			 		//선언할땐 가독성을위해 쓴다 안써도되긴함
void printDate(const struct date *pd);

#endif
