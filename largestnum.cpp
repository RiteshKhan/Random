#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int firstUniqChar(string s) {
    int l = s.length();
    vector<char> v;
    int i, j, c;
    for (i = 0; i < l; ++i)
    {
        v.push_back(s[i]);
    }
    for (j = 0; j < l; ++j){
        c = count(v.begin(), v.end(), v[j]);
        if (c==1)
            return j;
    }
    return -1;
}
int main()
{
    string s = "loveleetcode";
    cout << firstUniqChar(s) << endl;
}