#include<iostream>
using namespace std;
int main()
{
    char a[100], b[200];
    int i,j,count=0;
    cout<<"Enter Input Frame:";
    cin>>a;
    i=0;
    j=0;
    while(a[i]!='\0')
    {
        b[j]=a[i];
        if(a[i]=='1')
           count++;
        else
           count=0;
        if(count==5)
        {
            j++;
            b[j]='0';
            count=0;
        }
        i++;
        j++;
    }
    b[j]='\0';
    cout<<"Stuffed Frame:"<<b;
    return 0;
}
