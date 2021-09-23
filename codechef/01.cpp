#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t=0){
	    t--;
	    int n;
	    int sum=0;
	    cin>>n;
	    int arr[n];
	    for (int i =0 ;i<n;i++) {
	        cin>>arr[i];
	    }
	    for(int i=0;i<n;i++){
	        sum=sum+arr[i];
	    }
	    if(sum>5){
	        cout<<"Yes";
	    }
	    else
	    {
	        cout<<"No";
	    }
	}
	return 0;
}
