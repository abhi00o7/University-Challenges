#include <stdio.h>/**
 * Returns the number of integers
 * between 1 and 100 inclusive that
 * are not divisible by 2, 3, or 5
 */
int main()
{

	int count = 0;

	// From 1 to 100 (inclusive)
	for (int i = 1; i <= 100; i++) {

		// If i is not divisible
		// by 2, 3 or 5 then increment
		// the count variable
		if (i % 2 != 0 ||
			i % 3 != 0 ||
			i % 5 != 0) {

			count+=1;
		}
        printf("%d\n", count);
	}

}
