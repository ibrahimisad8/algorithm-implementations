#include <bits/stdc++.h>
using namespace std;
// Complete the countingValleys function below.
int countingValleys(int n, string s) 
{
    int result = 0; int level = 0;
    // Loop through string
    for (int i = 0; i<n ; i++)
    {
        if(s[i]=='U')
        {
            level += 1;
        }
        else
        {
            if (level==0) 
                result += 1;
            level -= 1;
        }
    }
    
    return result;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    int result = countingValleys(n, s);

    fout << result << "\n";

    fout.close();

    return 0;
}
