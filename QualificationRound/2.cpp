#include <bits/stdc++.h>

using namespace std;


string calculate(string input){
    int n = input.length();
    string output = input;
    int add = 0;
    if(input[0] == '1'){
        output.insert(0,"(");
        add++;
    }
    for(int i=0;i<n;i++){
        if((i>0 && input[i] == '1' && input[i-1] != '1')){
            output.insert(i+add,"(" );
            add++;
        }
        if(i < (n-1) && input[i] == '1' && (input[i+1] != '1')){
            add++;
            output.insert(i+add,")");
        }
        if(input[i] == '1' && i == n-1){
            add++;
            output.insert(i+add,")");
        }
    }
    return output;
}

string nesting_main(string input){
    queue<char> s;
    int n = input.length();
    int start_num  = input[0] - '0';
    int end_num  = input[n-1] - '0';
    for(int j=0; j< start_num;j++){
        s.push('(');
    }
    s.push(input[0]);

    for(int i=1;i<input.length();i++){

        if(input[i] == input[i-1]) s.push(input[i]);

        else if(input[i] < input[i-1]){
            int temp = (input[i-1] - '0') - (input[i] - '0');
            for(int j=0; j< temp;j++){
                s.push(')');
            }
            s.push(input[i]);
        }

        else if(input[i]> input[i-1]){
            int temp = (input[i] - '0') - (input[i-1] - '0');
            for(int j=0; j< temp;j++){
                s.push('(');
            }
            s.push(input[i]);
        }
    }

    for(int j=0; j< end_num;j++){
        s.push(')');
    }

    string output = "";
    while(!s.empty()){
        char out = s.front();
        s.pop();
        output += out;
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
        // output = calculate(input);
        output = nesting_main(input);
        cout<< "Case " <<"#"<<(i+1) <<": "<< output << endl;
    }
}
