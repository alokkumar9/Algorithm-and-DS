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

void InsertionSort(int a[], int n)
{ int num, itr, temp;
    for(int i=1;i<n;i++)
    {
        num=a[i]; itr=i;
        while(itr>0 && a[itr-1]>num)
        {
            a[itr]=a[itr-1];
            itr--;
        }
        a[itr]=num;

    }
}

int main()
{
      int a[]={7,9,4,12,8,3,1,6,3,7};
int n=sizeof(a)/sizeof(a[0]);
   cout<<"before sorting "<<endl;
   display(a,n);


   InsertionSort(a, sizeof(a)/sizeof(a[0]));
      cout<<"array after sorting: "<<endl;
      display(a,n);
}
