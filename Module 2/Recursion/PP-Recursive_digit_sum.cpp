//https://www.hackerrank.com/challenges/recursive-digit-sum/problem
#include <bits/stdc++.h>

using namespace std;
# define ll long long

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'superDigit' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. STRING n
 *  2. INTEGER k
 */
void sums(string &g,int i,ll &sum)
{   if(i==g.size())
     return;
    sum+=g[i]-'0';
    sums(g,i+1,sum);
    
}
int superDigit(string n, int k) {
    if(n.size()==1)
    return stoi(n);
    
    ll sum=0;
    sums(n,0,sum);
    n=to_string(sum*k);
    sum=0;
    sums(n,0,sum);
    if(sum>9)
    {   n=to_string(sum);
    sum=0;
        sums(n,0,sum);
    }    
    return (int)sum;
    
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string first_multiple_input_temp;
    getline(cin, first_multiple_input_temp);

    vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

    string n = first_multiple_input[0];

    int k = stoi(first_multiple_input[1]);

    int result = superDigit(n, k);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
