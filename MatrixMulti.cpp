//
// Created by 安传旭 on 2019/4/4.
// 两个矩阵相乘问题。
//

#include <iostream>
using namespace std;
#define MAXX 100
int a[MAXX][MAXX];
int b[MAXX][MAXX];
int main()
{
    int m,n,l,k;
    cout<<"请输入第一个矩阵的行列： "<<endl;
    cin >> m >> n;
    cout<<"请输入第二个矩阵的行列： "<<endl;
    cin >> l >> k;
    for(int i=0; i<m; i++)
    {
        for (int j=0; j<n; j++)
        {
            cout<<"请输入第一个矩阵的第"<<i+1<<"行，第"<<j+1<<"列的数据： "<<endl;
            cin >> a[i][j];
        }
    }
    for(int i=0; i<l; i++)
        for(int j=0; j<k; j++)
        {
            cout << "请输入第二个矩阵的第" << i + 1 << "行，第" << j + 1 << "列的数据： " << endl;
            cin >> b[i][j];
        }
    int c[MAXX][MAXX];
    if(n != l)
        cout << "无法矩阵相乘" << endl;
    else
        for(int i=0; i<m; i++)
            for(int j=0; j<k; j++)
                for(int h=0; h<n; h++)
                    c[i][j] += a[i][h]*b[h][j];
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<k; j++)
        {
            cout << c[i][j] <<" ";
        }
        cout<<endl;
    }
}