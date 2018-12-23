#include <stdio.h>
#include <locale.h>
#include <iostream>
#include <math.h>
#include <time.h>
#include <string>
using namespace std;

void task1() {
	int a = 1, b = 10;
	int count = 0;
	for (int i = b; i >= a; i--) {
		count = count + i;
		printf("%d\n", i);
	}
	printf("%d\n", count);
}

void task2() {
	int a, b, n, h, i, x;
	float f;
	printf("ââåäèòå íà÷àëî îòðåçêà:");
	scanf_s("%d", &a);
	printf("ââåäèòå êîíåö îòðåçêà:");
	scanf_s("%d", &b);
	printf("ââåäèòå êîë-âî ÷àñòåé îòðåçêà:");
	scanf_s("%d", &n);
	if (n > 2 && a < b) {
		for (i = 0; i <= n; i++)
		{
			h = (b - a) / n;
			x = a + i * h;
			f = 1 - sin(x);
			printf("çíà÷åíèå ôóíêöèè: %f\n", f);
		}
	}
}

void task3() {
	for (int i = 10; i <= 1000; i++) {
		if (i % 2 == 0 && i % 5 == 0) {
			printf("%d\n", i);
		}
	}
}

void task4() {
	int n = 0;
	for (int i = 11; i <= 99; i++) {

		printf("%d\n", int(pow(i, 2)));
	}
}




int main() {
	setlocale(LC_ALL, "");
	int task;
	do {
		printf("ââåäèòå íîìåð çàäàíèÿ:");
		scanf_s("%d", &task);
		switch (task) {
		case 1:
		{task1(); }
		break;
		case 2:
		{task2(); }
		break;
		case 3:
		{task3(); }
		break;
		case 4:
		{task4(); }
		break;
		default:
			break;
		}
		printf("âû õîòèòå ïîäîëæèòü 1/0?\n");
		scanf_s("%d", &task);

	} while (task != 0);
	system("pause");
}
