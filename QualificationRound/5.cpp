// Incomplete


#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> latinSquare(int n, int t){

    vector<vector<int>> output;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            // output[i].push_back((j+i+1)%n);
            cout<< (i+j)%n + 1 << " ";
        }
        cout<<endl;
    }
    return output;
}


int main(){
    int t;
    cin >> t;

    vector<vector<int>> output;
    for(int i=0;i<t;i++){
        int n,t;
        cin>> n >> t;
            output = latinSquare(n,t);
    }
}
