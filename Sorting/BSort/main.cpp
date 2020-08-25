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

void BSort(int a[], int n)  // O(n^2)
{ int temp; int flag;
    for(int i=0;i<n-1;i++) //n-1 times
    {flag=0;
        for(int j=0; j<n-1-i;j++)
        {
            if(a[j+1]<a[j])
            {
                temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
                flag=1; // to indicate swapping occured
            }
        }
        if(flag==0) // if no swapping occured=> meaning remaining part are already sorted, So no further loop require
        {
            break;
        }
    }
}
int main()
{
   int a[]={7,9,4,12,8,3,1,6,3,7};
int n=sizeof(a)/sizeof(a[0]);
   cout<<"before sorting "<<endl;
   display(a,n);


   BSort(a, n);
      cout<<"array after sorting: "<<endl;
      display(a,n);

}
