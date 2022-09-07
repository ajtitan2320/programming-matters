#include<iostream>
using namespace std;
int main()
{
    long long int n;
    //scanf("%d",&n);
    int arr[4]={0,0,0,0};
    char ch[n];
    gets(ch);
    qsort(ch[0],ch[n-1]);
    puts(ch);
    return 0;
}