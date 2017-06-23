#include<iostream>
using namespace std;

int main(){
	int a;
	cin>>a;
	int arr[10] = {0};
	while(a>0){
		int k = a%10;
		arr[k]++;
		a/=10;
	}
	
	for(int i=9; i>=0; i--){
		if(arr[i]>0){
			int num = arr[i];
			for(int j=0; j<num; j++){
				cout<<i;
			}
		}
	}
	cout<<endl;
	
	for(int i=1;i<10;i++){
		while(arr[i]>0){
			cout<<i;
			arr[i]--;
			while(arr[0] > 0){
				cout<<0;
				arr[0]--;
			}
		}
		
	}
}
