#include <bits/stdc++.h>

using namespace std;

int rand(int a, int b)
{
	return a + rand() % (b - a + 1);
}

int main(int argc, char *argv[])
{
	srand(atoi(argv[1]));
	int n = rand(1, (int)1e5);
	printf("%d\n", n);
	for(int i = 0; i < n; i++)
	{
		int k = rand(0, 25);
		if(rand(0, 1)%2)
		{
			printf("%c", 'a' + k);
		}
		else printf("%c", 'A' + k);
	}
	printf("\n");
	return 0;
}