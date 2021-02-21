Q. Maximum and minimum of an array using minimum number of comparisons

Divide the array into two parts and compare the maximums and minimums of the two parts to get the maximum and the minimum of the whole array.

#include <iostream>
using namespace std;

struct Pair{
    int min;
    int max;
};

struct Pair getMinMax(int ar[],int low,int high){
    struct Pair minmax;
    
    if(low==high){
        minmax.min=ar[low];
        minmax.max=ar[low];
        return minmax;
    }
    
    if(high==low+1){
        if(ar[low]>ar[high]){
            minmax.min=ar[high];
            minmax.max=ar[low];
        }
        else{
            minmax.max=ar[high];
            minmax.min=ar[low];
        }
        return minmax;
    }
    
    int mid=(low+high)/2;
    struct Pair mmin=getMinMax(ar,low,mid);
    struct Pair mmax=getMinMax(ar,mid+1,high);
    if(mmin.min>mmax.min){
        minmax.min=mmax.min;
    }
    else
        minmax.min=mmin.min;
        
    if(mmin.max>mmax.max){
        minmax.max=mmin.max;
    }
    else
        minmax.max=mmax.min;
        
    return minmax;
}

int main() {
	int n;
	cin>>n;
	int ar[n];
	for(int i=0;i<n;i++)
	    cin>>ar[i];
	
	struct Pair minmax=getMinMax(ar,0,n-1);
	cout<<"Min Number: "<<minmax.min<<endl;
	cout<<"Max Number: "<<minmax.max<<endl;
}
