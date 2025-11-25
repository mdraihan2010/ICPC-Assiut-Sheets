#include <stdio.h>

int main(void)
{
    int num = 0;
    long long int l = 0;
    char s;
    float f;
    double d;
    scanf("%d %lld %c %f %lf", &num, &l, &s, &f, &d);
    printf("%d\n", num);
    printf("%lld\n", l);
    printf("%c\n", s);
    printf("%f\n", f);
    printf("%lf", d);
    return 0;
}