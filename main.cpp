#include "iostream"
#include "stdio.h"
#define n 5
using namespace std;

    void QuickSort(int a[],int start,int end)
    {
        if(start < end) {
            int i, j;
            i = start;
            j = end;
            int key = a[i];
            while (i < j) {
                while (i < j && a[j] >= key) {
                    j--;
                }
                if (i < j) {
                    a[i] = a[j];
                }
                while (i < j && a[i] < key) {
                    i++;
                }
                if (i < j) {
                    a[j] = a[i];
                }
            }
                a[i] = key;
                QuickSort(a, i + 1, end);
                QuickSort(a, start, j - 1);
            }
    }
int main()
{
    int a[n];

    cout<<"请输入数组各个数据："<<endl;
    for(int i =0; i < n; i++)
        cin>>a[i];
    cout<<"排序的结果是： "<<endl;
    QuickSort(a,0,n-1);

    for(int i = 0;i < n; i++)
        cout<<a[i]<<" ";
    return 0;
}