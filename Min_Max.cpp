#include <iostream>
using namespace std;
	    
	struct Pair{
	    int min;
	    int max;
	};
	
	struct Pair getMinMax(int ar[],int n){
	    struct Pair minmax;
	    if(n==1){
	        minmax.min=ar[0];
	        minmax.max=ar[0];
	        return minmax;
	    }
	    
	    if(ar[0]>ar[1]){
	        minmax.min=ar[1];
	        minmax.max=ar[0];
	    }
	    else{
	        minmax.min=ar[0];
	        minmax.max=ar[1];
	    }
	    
	    for(int i=0;i<n;i++){
	        if(ar[i]>minmax.max){
	            minmax.max=ar[i];
	        }
	        else if(ar[i]<minmax.min){
	            minmax.min=ar[i];
	        }
	       
	    }
	   return minmax;
	}
	
int main() {
	int n;
	cin>>n;
	
	int ar[n];
	for(int i=0;i<=n;i++)
	    cin>>ar[i];
	    
	 struct Pair minmax=getMinMax(ar,n);
	 cout<<"Min Number: "<<minmax.min<<endl;
	 cout<<"Max Number: "<<minmax.max<<endl;
}