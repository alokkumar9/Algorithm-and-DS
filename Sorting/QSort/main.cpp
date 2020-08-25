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

void swapFun(int a[], int i, int j)
{ int temp;
    temp=a[i];
    a[i]=a[j];
    a[j]=temp;
}

int partitionFun(int a[],int start, int endindex)
{
    int pivotIndex=endindex,pindex=start;
    for(int i=start;i<endindex;i++)
    {
        if(a[i]<=a[pivotIndex])
        {

            swapFun(a,i,pindex);
            pindex++;
        }
    }
    swapFun(a,pindex, pivotIndex);
    return pindex;
}

int randomizedPartition(int a[],int start, int endindex)
{
    int pivotIndex= (rand() % ((endindex - start) + 1) + start); //generate random number from start to endindex
    swapFun(a,pivotIndex, endindex);
    return partitionFun(a, start, endindex);
}

void QSort(int a[], int start, int endindex)
{ int pindex;
if(start>=endindex) {return;}
//pindex= partitionFun(a,start, endindex);
pindex=randomizedPartition(a,start,endindex);
QSort(a,start, pindex-1);
QSort(a, pindex+1, endindex);
}
int main()
{

int a[]={19,9,12,5,2,20,16,8,5,11,3,2,15};

int n=sizeof(a)/sizeof(a[0]);
   cout<<"before sorting "<<endl;
   display(a,n);

  QSort(a,0,n-1);
      cout<<"array after sorting: "<<endl;
      display(a,n);
}
