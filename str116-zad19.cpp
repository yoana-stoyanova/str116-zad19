//Програмата разменя местата на максималния и минималния елемент от даден масив и извежда новополучения масив
#include <iostream>
using namespace std;
int main ()
{
    int n;
    while(n<2 || n>125){cout<<"n = "; cin>>n;}

    int a[n];
    for(int i=0; i<n; i++) cin>>a[i];

    int max=a[0];
    int min=a[0];

    int maxindex;
    int minindex;
    for(int j=1; j<n; j++)
     {
        if(a[j]>max) {max=a[j]; maxindex=j;}
        if(a[j]<min) {min=a[j]; minindex=j;}
     }

     swap(a[maxindex], a[minindex]);
     for(int f=0; f<n; f++) cout<<a[f];


    return 0;
}
