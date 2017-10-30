#include <bits/stdc++.h>

using namespace std ;

int main()
{
    string name ;

    double sal , sale;

    cin >> name >> sal >> sale ;

    double ans = sal + sale * 15.0/100.0;

    printf("TOTAL = R$ %.2f\n", ans);
}
