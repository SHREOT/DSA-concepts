#include <iostream>
using namespace std;

void sort(int *arr){
    for(int i =0;i<3;i++){
        int minindex=i;
        for(int j =i+1;j<3;j++){
            if(arr[i]<arr[minindex]){
                minindex=j;
            }
        }
        swap(arr[i],arr[minindex]);
    }
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t>0){
	int arr[3];
	int brr[3];
    // cout<<"teen"<<endl;
	for(int i=0;i<=2;i++){
	   // int a;
	    cin>>arr[i];
	}
    // cout<<"nextteen"<<endl;
	for(int i=0;i<=2;i++){
	    
	    cin>>brr[i];
	    
	}
	sort(arr);
	int sum = arr[0]+arr[1];
	
	
	sort(brr);
	int bsum=brr[0]+brr[1];
	
	if(sum>bsum){
	    cout<<"Bob"<<endl;
	}
	else if(sum<bsum){
	    cout<<"Alice"<<endl;
	}
	else{
	    cout<<"tie"<<endl;
	}
	t--;
	}
	return 0;
}
