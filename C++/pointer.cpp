#include<iostream>
using namespace std;
void pass_as_value(int* p){
    p = new int(7);
    cout << "Adrs pass by val" << endl;
    cout << p << endl;
}
void pass_as_ref_pointer(int*& p){
    p = new int(9);
    cout << "Adrs pass by ref" << endl;
    cout << p << endl;
}
int main(){
    int* p1 = NULL;
    int* p2 = NULL;
    int x = 5;
    p1 = &x;
    p2 = p1;
    pass_as_value(p1);
    cout << "Adrs pass by val updated p1" << endl;
    cout << p1 << endl;
    cout << *p1 << endl;
    pass_as_ref_pointer(p2);
    cout << "Adrs pass by ref updated p2" << endl;
    cout << p2 << endl;
    cout << *p2 << endl;
}