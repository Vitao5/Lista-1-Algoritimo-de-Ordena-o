#include <cstdio>
#include <vector> 
using namespace std;

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < k; i++) {
        int menor = i;
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[menor]) {
                menor = j;
            }
        }

        int aux = a[i];
        a[i] = a[menor];
        a[menor] = aux;
    }

    for (int i = 0; i < n; i++) {
        printf("%d", a[i]);
        if (i < n - 1) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}