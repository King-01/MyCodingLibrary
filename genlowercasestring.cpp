#include <bits/stdc++.h>

using namespace std;

int rand(int a, int b)
{
	return a + rand() % (b - a + 1);
}

int main(int argc, char *argv[])
{
	srand(atoi(argv[1]));
	int n = rand(1, 1e5);
	printf("%d\n", n);
	for(int i = 0; i < n; i++)
	{
		int k = rand(0, 25);
		char ok = 'a' + k;
		printf("%c", ok);
	}
	printf("\n");
	return 0;
}