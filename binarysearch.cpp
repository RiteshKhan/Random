/* Binary search */
#include<iostream>
#include<vector>
#include<algorithm>
int BinarySearch(std::vector<int>& v,int key){
    int l,m,h;
    int n = v.size();   // Make sure 'v' is sorted when it enters.
    l = 0;              // l=lower position
    h = n-1;            // h=higher position
    while(l<=h){
        m = (l+h)/2;    // m=middle position
        if(key < v[m]){
            h = m-1;
        }
        if(key > v[m]){
            l = m+1;
        }
        if(key==v[m]) return m;
    }
    return -1;
}
bool isSorted(std::vector<int>& v){
    bool flag = true;
    for(int i=0; i<v.size()-1; ++i){
        if(v[i]>v[i+1]) flag = false;
    }
    return flag;
}
int main(){
    std::vector<int> v;
    int c,p,m,x;
    int key;
    std::cout << "Enter the size of vector " << std::endl;
    std::cin >> p;
    std::cout << "Enter the "<< p <<" entries of the vector(must be distinct) " << std::endl;
    for(int i=0; i<p; ++i){
        std::cin >> x;
        v.push_back(x);
    }
    std::cout << "You've entered the vector " << std::endl;
    for(auto i : v){
        std::cout << i << std::endl;
    }
    if(!isSorted(v)){
        std::cout << "The entered vector is not sorted!! " << std::endl << std::endl;
    }
    std::cout << "Press '0' if you want to sort and proceed further otherwise press '1' to exit " << std::endl;
    std::cin >> c;
    if(c==0){
        sort(v.begin(),v.end());
        std::cout << "The sorted vector is " << std::endl;
        for(auto i : v){
            std::cout << i << std::endl;
        }
    }
    else exit(1);
    std::cout << "Enter the KEY element" << std::endl;
    std::cin >> key;
    m = BinarySearch(v,key);
    if(m < 0){
        std::cout << "The KEY not found!!" << std::endl;
    }
    else
        std::cout << "The KEY found at position " << m << std::endl;
    return 0;
}