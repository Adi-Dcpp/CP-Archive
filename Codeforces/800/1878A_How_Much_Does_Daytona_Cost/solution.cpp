#include<bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
static inline void fast_io(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n , k;
        cin >> n >> k;
        int arr[n];
        for(int i = 0 ; i < n ; i++){
            cin >> arr[i];
        }
        bool found = false;
        for(int i = 0 ; i < n ; i++){
            if(k == arr[i]){
                found = true;
                break;
            }
        }
        if(found){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}