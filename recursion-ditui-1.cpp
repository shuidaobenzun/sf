#include <bits/stdc++.h>
using namespace std;
int tz[10000]={0};
int main(){
    tz[0]=1;
    for (int i = 1; i < 10; i++)
    {
        tz[i]=(tz[i-1]+1)*2;
    }
    cout << tz[9];
}