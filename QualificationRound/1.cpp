#include <bits/stdc++.h>

using namespace std;

vector<int> calculate(vector<vector<int>> matrix){
    int n = matrix.size();
    int trace = 0;
    int num_rows = n;
    int num_colms = n;

    for(int i=0;i<n;i++){
        trace +=  matrix[i][i];
    }
    for(int r=0;r<n;r++){
        int count_r = 0;
        int count_c = 0;
        for(int i=0;i<n-1;i++){
            int temp_r  = matrix[r][i];
            int temp_c  = matrix[i][r];
            for(int j=i+1;j<n;j++){
                if(temp_r == matrix[r][j]) count_r++;
                if(temp_c == matrix[j][r]) count_c++;
            }
        }
        if(count_r == 0) num_rows--;
        if(count_c == 0) num_colms--;
    }

    vector<int> output;
    output.push_back(trace);
    output.push_back(num_rows);
    output.push_back(num_colms);

    return output;
}

int main(){
    int t;
    cin >> t;
    vector<int> c_store;

    for(int i=0;i<t;i++){
        int n;
        cin>> n;
        vector<vector<int>> matrix;

        for(int j =0; j<n; j++){
          vector<int> row;
          for(int k=0; k<n; k++){
            int temp;
            cin >> temp;
            row.push_back(temp);
          }
          matrix.push_back(row);
        }

        c_store = calculate(matrix);
        cout<< "Case " <<"#"<<(i+1) <<": "<< c_store[0]<< " " << c_store[1] << " " << c_store[2] << endl;
    }
}
