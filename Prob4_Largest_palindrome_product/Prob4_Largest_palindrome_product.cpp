// Prob4_Largest_palindrome_product.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int isPalin(unsigned long long int n)
{
	int i, j, ctr = 0;
	int digits[20];
	while (n > 0)
	{
		digits[ctr] = n % 10;
		n = n / 10;
		ctr++;
	}
	for (i = 0, j = ctr - 1; i < j && digits[i] == digits[j]; i++, j--);
	return i >= j;
}

int main()
{
	int i, j;
	unsigned long int prod, largest = 1;
	for(i = 999; i >= 100; i--)
		for (j = 999; j >= 100; j--)
		{
			prod = i * j;
			if (isPalin(prod) && prod > largest)
				largest = prod;
		}
	printf("\n%d", largest);
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
