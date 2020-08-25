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

void Merge(int a[], int b[], int c[], int an, int bn)
{ int i=0,j=0,k=0;
    while(i<an && j<bn){
        if(a[i]<=b[j])
            {c[k]=a[i]; i++;k++;}
        else
            {c[k]=b[j]; j++;k++;}
    }
    while(i<an)
    {
        c[k]=a[i]; i++; k++;
    }
    while(j<bn)
    {
        c[k]=b[j]; j++; k++;
    }
}
int main()
{
    int a[]={1,4,7,9,12,18};
    int b[]={3,5,7,13,16,20};
    int c[12];
int an=sizeof(a)/sizeof(a[0]);
int bn=sizeof(b)/sizeof(b[0]);
   cout<<"array a "<<endl;
   display(a,an);
     cout<<"array b "<<endl;
   display(b,bn);
   Merge(a,b,c,an,bn);
      cout<<"new array after merging: "<<endl;
      display(c,an+bn);
}
