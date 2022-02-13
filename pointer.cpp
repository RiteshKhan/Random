#include<iostream>
using namespace std;
void pass_as_value(int* p){
    p = new int(7);
}
void pass_as_ref_pointer(int*& p){
    p = new int(9);
}
int main(){
    int* p1 = NULL;
    int* p2 = NULL;
    int x = 5;
    p1 = &x;
    p2 = p1;
    pass_as_value(p1);
    pass_as_ref_pointer(p2);
    cout << *p1 << endl;
    cout << *p2 << endl;
}