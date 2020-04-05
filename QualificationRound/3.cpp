#include <bits/stdc++.h>

using namespace std;

string calculate(vector<vector<int>> matrix){

    int n = matrix.size();
    for(int i=0;i<n;i++){
        matrix[i].push_back(i);
    }

    sort(matrix.begin(), matrix.end());
    string output[n];
    output[matrix[0][2]] = 'C';
    int track_c = matrix[0][1];
    int track_j = 0;

    for(int r=1;r<n;r++){
        int start = matrix[r][0];
        int stop = matrix[r][1];
        int index = matrix[r][2];

        if(start >= track_c){
            output[index] = 'C';
            track_c = stop;
        }

        else if(start >= track_j){
            output[index] = 'J';
            track_j = stop;
        }
        else return "IMPOSSIBLE";
    }

    string temp = "";
    for(int i=0;i<n;i++){
        temp += output[i];
    }

    return temp;
}

int main(){
    int t;
    cin >> t;
    string output;

    for(int i=0;i<t;i++){
        int n;
        cin>> n;
        vector<vector<int>> matrix;

        for(int j =0; j<n; j++){
          vector<int> row;
            int temp1,temp2;
            cin >> temp1 >> temp2;
            row.push_back(temp1);
            row.push_back(temp2);

          matrix.push_back(row);
      }
        output = calculate(matrix);
        cout<< "Case " <<"#"<<(i+1) <<": "<< output << endl;
    }
}
