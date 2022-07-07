#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, e, q, a;
    cin>>n;
    vector <int> arr;
    for (int i = 0; i < n; ++i){
        cin>>e;
        arr.push_back(e);
    }
    sort(arr.begin(), arr.end());
    cin>>q;
    
    for (int i = 0; i < q; ++i){
        cin>>a;
        vector <int> :: iterator l = lower_bound(arr.begin(), arr.end(), a);
        if(arr[l - arr.begin()] == a){
            cout<<"Yes "<<(l - arr.begin())<<endl;
        }
        else cout<<"No "<<(l - arr.begin())<<endl;
    }
    return 0;
}

/* arrbegin or arrend se range dedi, a vo no. h jisko dhundna h, jis position p vo 
   milega l = vo position ho jaegi orr agar nhi mila to jo no. us se just chota hoga
   uski position = l ho jaegi */