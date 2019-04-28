#include <iostream>

using namespace std;

int a[5] = { 0,1, 2, 3, 4 };

void backtrack(int i)
{
	int j, t;
	if (i > 4)
	{
		if (a[0] * a[1] - a[2] * a[3] + a[4] == 1)
		{
			printf("%d * %d - %d * %d + %d = 1\n", a[0],a[1],a[2],a[3],a[4]);
		}
	}
	else
	{
		for (j = i; j <= 4; j++)
		{
			t = a[i];
			a[i] = a[j];
			a[j] = t;
			
			backtrack(i + 1);

			t = a[i];
			a[i] = a[j];
			a[j] = t;

		}
	}
}

void main()
{
	backtrack(0);
}