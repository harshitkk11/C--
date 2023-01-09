// Program for count the unique keys

#include <bits/stdc++.h>
using namespace std;

void getcountofuniquestring(vector<string>A){
    unordered_map<string, int> wordfrq;

    for(int i=0;i<A.size(); i++){
        wordfrq[A[i]]++;
    }

    unordered_map<string, int>:: iterator p;
    int count=0;
    for (p = wordfrq.begin(); p != wordfrq.end(); p++){
       if(p->second == 1){
        count++;
       }
    }
       cout<<count<<endl;
}

int main(){
    vector<string>A = {"akhilesh", "sirohi", "akhilesh", "a", "b", "a"};
    getcountofuniquestring(A);
    return 0;
}