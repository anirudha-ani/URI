#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int p1, q1 , p2 ,q2;
    double pr1 , pr2 ;

    cin >> p1 >> q1 >> pr1 >> p2 >> q2 >> pr2 ;

    double ans = q1 * pr1  + q2 * pr2;

    printf("VALOR A PAGAR: R$ %.2f\n", ans);
    return 0;
}
