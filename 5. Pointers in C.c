#include <stdio.h>

void update(int *a,int *b) {
    int temp = *a;
    int *s;
    *s = *a + *b;
    if(temp > *b){
        *b = *a - *b;
    }
    else {
        *b = *b - *a;
    }
    *a = *s;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
