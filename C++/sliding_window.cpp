// Maximum sum of k consecutive integers from an array
// Sliding window 
#include<iostream>
#include<numeric>
#include<vector>
using namespace std;
template <typename T>
T max_sum(vector<T>& v, int k){
    T m = INT32_MIN;
    int l = v.size();
    T s = accumulate(v.begin(),v.begin()+k,0);
    for(int i=0; i<=l-k; ++i){
        m = max(m,s);
        s += v[i+k]-v[i];
    }
    return m;
}
int main(){
    vector<double> v = {3.3,2.3,5.6,4,5.-3,7.8,9.1,-7.6,5.5,3.9};
    cout << max_sum<double> (v,5) << endl;
}