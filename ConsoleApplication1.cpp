// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#define PI 3.14
#define sqr(a) (a*a)
 int max(int a1 ,int a2,int a3);
 int min(int a1 ,int a2,int a3);
 int mm(int a1 ,int a2,int a3, int c);
 int avg(int a1 ,int a2,int a3);
 bool right(int a1 ,int a2,int a3);
 int main()
{
	 int a1, a2, a3;
	 printf("Type a number: \n");

	 // Get and save the number the user types
	 scanf_s("%d \n %d \n %d ", &a1, &a2, &a3);

	 printf("sum  %d\n", a1+a2+a3);
	 printf("min  %d\n", min(a1, a2, a3));
	 printf("max  %d\n", max(a1, a2, a3));
	 printf("avg  %d\n", avg(a1, a2, a3));
	 printf("right  %d\n", right(a1, a2, a3));


	 


}
int max(int a1,int a2,int a3) {
	return mm(a1, a2, a3, 2);;
}
int min(int a1, int a2, int a3) {
	return mm(a1, a2, a3, 0);
}
int avg(int a1, int a2, int a3) {
	return (a1 + a2 + a3) / 3;
}
int mm(int a1, int a2, int a3, int c) {
	int a[] = { a1, a2, a3};
	int r = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = i; j < 3; j++)
		{
			if (a[i] >= a[j]) {
				r = a[j];
				a[j] = a[i];
				a[i] = r;
			}
		}
	}
	return a[c];
}
bool right(int a1, int a2, int a3){
	int a = mm(a1, a2, a3, 0);
	int b = mm(a1, a2, a3, 1);
	int c = mm(a1, a2, a3, 2);
	bool r = (sqr(c) == (sqr(b) + sqr(a)));
	return r;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
