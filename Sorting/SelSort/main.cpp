#include <iostream>

using namespace std;

void display(int a[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<"  ";
    }
    cout<<endl;
}

void selSort(int a[], int n)
{ int minpos; int temp;
     for(int i=0;i<n-1; i++)
    {  minpos=i;
        for(int j=i+2; j<n; j++ )
        {
            if(a[j]<a[minpos])
            {
                minpos=j;
            }
        }
        temp= a[minpos];
        a[minpos]= a[i];
        a[i]=temp;

        cout<<"i= "<<i<<" =>  "; display(a,n);
    }
}




int main()
{
    int minpos, temp;
    int a[10]={6,9,2,10,4,6,2,9,1,5};
    int n=sizeof(a)/sizeof(a[0]);
cout<<"before sorting"<<endl;
    display(a,n);
    cout<<"sorting process"<<endl;
    selSort(a,sizeof(a)/sizeof(a[0]));
cout<<endl<<"final sorting "<<endl;
    display(a,n);
}
