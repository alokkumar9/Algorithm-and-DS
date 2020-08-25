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

void Merge(int left[], int right[], int a[], int nleft, int nright)
{ int i=0,j=0,k=0;
    while(i<nleft && j<nright)
        {
        if(left[i]<=right[j])
            {a[k]=left[i]; i++;k++;}
        else
            {a[k]=right[j]; j++;k++;}
    }
    while(i<nleft)
    {
        a[k]=left[i]; i++; k++;
    }
    while(j<nright)
    {
        a[k]=right[j]; j++; k++;
    }
}


/*void Merge(int left[], int right[], int a[], int nleft, int nright){
    int *temp = new int[hi-lo+1];//temporary merger array
    int i = lo, j = mi + 1;//i is for left-hand,j is for right-hand
    int k = 0;//k is for the temporary array
    while(i <= mi && j <=hi){
        if(arr[i] <= arr[j])
            temp[k++] = arr[i++];
        else
            temp[k++] = arr[j++];
    }
    //rest elements of left-half
    while(i <= mi)
        temp[k++] = arr[i++];
    //rest elements of right-half
    while(j <= hi)
        temp[k++] = arr[j++];
    //copy the mergered temporary array to the original array
    for(k = 0, i = lo; i <= hi; ++i, ++k)
        arr[i] = temp[k];

    delete []temp;
}
*/

/*
void Merge(int* L,int* R, int* ALR, int left_length,int right_length) {
    int l = 0;
    int r = 0;
    for (int i = 0; i < left_length + right_length;) {

        if (l == left_length)ALR[i++] = R[r++];
        else if (r == right_length)ALR[i++] = L[l++];
        else ALR[i++] = (R[r] > L[l]) ? L[l++] : R[r++];

    }
}
*/
 void MSort(int a[], int n)
{
    if(n<2)
        {
            return;
        }
        int mid=n/2;
        int left[mid], right[n-mid];
        for(int i=0;i<mid;i++)
        {
            left[i]=a[i];
        }
        for(int i=mid;i<n;i++)
        {
            right[i-mid]=a[i];
        }
        MSort(left, mid);
        MSort(right, n-mid);
        Merge(left,right,a, mid, n-mid);

        delete(left);
        delete(right);

}
int main()
{
    int a[]={18,5,12,8,9,21,0,17,14,10,13,1,18,11};

int n=sizeof(a)/sizeof(a[0]);

   cout<<"array a "<<endl;
   display(a,n);

   MSort(a,n);
      cout<<"new array after Msort: "<<endl;
      display(a,n);
}
