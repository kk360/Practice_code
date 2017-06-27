#include <iostream>
#include <cstring>
using namespace std;

int min(int a, int b, int c){
    int min1 = (a<b)?a:b;
    return (min1<c)?min1:c;
}

int findmin(string a, string b){
    int ab[a.size()+1][b.size()+1];
    
    for(int i=0; i<= a.size(); i++){
        for(int j=0; j<=b.size(); j++){
            if(i == 0){
                ab[i][j] = j;
            }
            else if(j==0){
                ab[i][j] = i;
            }
            else if(a[i-1] == b[j-1]){
                ab[i][j] = ab[i-1][j-1];
            }
            else{
                ab[i][j] = 1 + min(ab[i-1][j], ab[i][j-1], ab[i-1][j-1]);
            }
        }
    }
    cout<<"---------------printing the matrix --------------------"<<endl;
    for(int i=0; i<=a.size(); i++){
        for(int j=0;j<=b.size(); j++){
            cout<<ab[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"---------------------------------------"<<endl;
    return ab[a.size()][b.size()];
}

int main() {
	string a,b;
	cin>>a>>b;
	cout<<"max operation:"<<findmin(a,b)<<endl;
	return 0;
}
