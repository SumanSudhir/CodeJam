#include <bits/stdc++.h>

using namespace std;


string calculate(string input){

    int n = input.length();
    string output;

    for(int r=0;r<n;r++){
        if(r>0 && input[i] == '0') continue;
        if(r>0 && input[i] == "1"){
            
        }
    }

    return output;
}

int main(){
    int t;
    cin >> t;
    string output;

    for(int i=0;i<t;i++){

        string input;
        cin>> input;

        output = calculate(input);
        cout<< "Case " <<"#"<<(i+1) <<": "<< output << endl;
    }
}
