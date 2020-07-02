// generating a random sequence of distinct elements
#include <bits/stdc++.h>
using namespace std;

int rand(int a, int b) {
    return a + rand() % (b - a + 1);
}

int main(int argc, char* argv[]) {
    srand(atoi(argv[1])); // atoi(s) converts an array of chars to int
    int n = rand(2, 10);
    printf("%d ", n);
    int ff = rand(1, n - 1);
    printf("%d\n", ff);
    set<int> used;
    for(int i = 0; i < n; ++i) {
        int x;
        do {
            x = rand(1, 110);
        } while(used.count(x));
        printf("%d ", x);
        used.insert(x);
        x = rand(0, (int)1e9);
        printf("%d ", x);
        x = rand(0, (int)1e9);
        printf("%d", x);
        x = rand(0, (int)1e9);
        printf("%d ", x);
        x = rand(0, (int)1e9);
        printf("%d", x);
        if(i < n - 1)printf("\n");
    }
    puts("");
}