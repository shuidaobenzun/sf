#include <bits/stdc++.h>
using namespace std;
int n;
double s[10000];
int main(){
    cin >> n;
    s[0]=1;
    s[1]=2;
    double sum=(1.000/1.000) + (1.000/2.000);
    for (int i = 2; i < n; i++)
    {
        s[i]=s[i-2]+s[i-1];
        sum=sum+(s[i-1]/s[i]);
        
    }
    printf("%.3lf",sum);
    return 0;
}