#include <bits/stdc++.h>

using namespace std;

int rand(int a, int b)
{
	return a + rand() % (b - a + 1);
}

int main(int argc, char *argv[])
{
	srand(atoi(argv[1]));
	int tests = 1;
	// For multiple test cases
	// tests = rand(1, 100);
	// printf("%d\n", tests);
	for(int test = 0; test < tests; test++)
	{
		int n = rand(1 ,(int)1e5);
		printf("%d\n", n);
		//for distinct elements
		// {
		// 	set<int> s;
		// 	int k;
		// 	do{
		// 		k = rand(1, (int)1e5);
		// 		if(s,find(k) == s.end())
		// 		{
		// 			printf("%d ", k);
		// 			s.insert(k);
		// 		}
		// 	}while((int)s.size() < n);
		// }
		//for gerneral array
		{
			int k;
			for(int i = 0; i < n; i++)
			{
				k = rand(1, (int)1e5);
				printf("%d ", k);
			}
		}
		printf("\n");
	}
	return 0;
}