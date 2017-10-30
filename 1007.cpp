#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int  a , b , c , d , ans;

    scanf("%lld %lld %lld %lld", &a , &b , &c , &d);

    ans = a * b - c * d ;

    printf("DIFERENCA = %lld\n", ans);
    return 0;
}
