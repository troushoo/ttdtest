#include "stdafx.h"

int myfunccatched(int b) {
	__try {
		printf("%d", 10 / (b - 10));
	}
	__except(1) {

	}
	return 0;
}

int myfuncuncatched(int* dividedby) {
	printf("%d", 10 / *dividedby); // Exception
	return 0;
}

void changedtozero(int* value) {
	printf("Changed the value to zero");
	*value = 0;
}

int main()
{
	int a = 10;
	myfunccatched(a);

	changedtozero(&a);
	myfuncuncatched(&a);

    return 0;
}
