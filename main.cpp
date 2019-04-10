#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#include <iostream>
#define MAXSIZE 100

using namespace std;

int main(void)
{
    int  n;
    double p[MAXSIZE];
    double a[MAXSIZE];
    while(scanf("%d", &n) != EOF){
        for(int i = 0; i < n; i++)
        {
            cin>>p[i]>>a[i];
            cout<<p[i]<<" "<<a[i]<<endl;
        }
        double  ans = 1;
        for(int i = 1; i < n; ++i)
            ans =ans + ( p[i]*a[i]) ;
        printf("%f\n",ans);
    }
    return 0;
}
