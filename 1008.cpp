#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int a , b ;
    double c  ;

    scanf("%d %d %lf", &a , &b , &c);

    double sal = 1.0 * b * c ;

    printf("NUMBER = %d\n", a);
    printf("SALARY = U$ %.2f\n", sal);
    return 0 ;
}
