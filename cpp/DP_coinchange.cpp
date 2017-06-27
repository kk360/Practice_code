#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

#define MAX 99999

int min(int a, int b){
    return a<b?a:b;
}

boolean isvectorSame(vector<int> vec){
    int size = vec.size();
    for(int i=0; i<size-1; i++){
        if(vec[i] != vec[i+1]){
            return false;
        }
    }
    return true;
}

vector<int> minAdd(int num){
    int coin[3] = {1,2,5};
    vector<int> sum(num+1);
    fill(sum.begin()+1, sum.end(), MAX);
    vector<int> count(num+2);
    fill(count.begin(), count.end(), -1);
    sum[0] = 0;
    for(int i=0; i<3; i++){
        for(int j=1; j< num+1; j++){
            int temp = sum[j];
            sum[j] = min(sum[j], 1+sum[j-coin[i]]);
            if(sum[j] < temp){
                count[j] = i;   
            }
        }
    }
    count[num+1] = sum[num];
    return count;
}

vector<int> findminmax(vec<int> arr){
    int n = vec.size();
    vector<int> vec(2);
    vec[0] = arr[0];
    vec[1] = arr[0];
    for(int i=1; i<n; i++){
        if(arr[i] < vec[0]){
            vec[0] = arr[i];
        }
        if(arr[i] > vec[1]){
            vec[1] = arr[i];
        }
    }
    return vec;
}

int main() {
    
    int T,n;
    cin>>T;
    int vector<int> ans;
    vector<int> V(2);
    while(T--){
        cin>>n;
        vec<int> vec(n);
        for(int i=0; i<n; i++){
            cin>>vec[i];
        }
        
        while(!isvectorSame){
            V = findminmax(vec);
            int diff = v[1] - v[0];
            ans = minAdd(diff);
            
        }
    }
    
    return 0;
}

