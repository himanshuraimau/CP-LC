#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
      cin >> arr[i];
    }
    int maxi=arr[0];
    int index=0;
    int total;
    int ans;
    for(int i = 0; i < n; i++){
      if(arr[i] > arr[i+1]){
        maxi = arr[i];
        index = i;
      }
      if(n%2==0){
             total = n/2;
      }
      else{
        total = n/2 +1;
      }
    }
    ans = total +maxi;

    cout << ans << endl;
  }
}