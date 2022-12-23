#include <bits/stdc++.h>

using namespace std;
// #define int long long;

int closestToLeft(vector<int>A, int target){
    int first = 0, last = A.size()-1;

    while (first<=last){
        int mid = first + (last - first)/2;
        if(target>A[mid]){
            first = mid+1;
        }
        else if(target<=A[mid]){
            if(target<A[mid-1])
            last = mid-1;
        }
    }
    return 0;
    
}

=
signed main(){
    int n, k;
    cin>>n>>k;

    vector<int>A(n);

    for(int i = 0; i<n; i++) cin>>A[i];

    int a;

    while (k--)
    {
        cin>>a;
        cout<<closestToLeft(A, a)<<endl;

    }
    return 0;
}
