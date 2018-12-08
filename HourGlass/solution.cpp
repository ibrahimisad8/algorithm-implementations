#include <bits/stdc++.h>

using namespace std;

// Complete the hourglassSum function below.
int hourglassSum(vector<vector<int>> arr) 
{
    int maxsum = -1000,jj = 0;
    for(int i = 0;i < 4;i++) {
        int sum = 0;
        for(int j = jj;j < jj+3;j++) {
            sum += arr[i][j];
            if(j==jj) sum += arr[i+1][jj+1];
            sum += arr[i+2][j];
        }
        jj = (jj < 3) ? jj+1 : 0;
        if(sum > maxsum) maxsum = sum;
        if(jj != 0) i--;
    }
    return maxsum;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = hourglassSum(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}
