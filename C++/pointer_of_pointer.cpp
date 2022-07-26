#include <iostream>
using namespace std;
int main()
{
    int x = 5;
    int *p = NULL;
    p = &x;

    int **q = &p;
    ////// The below 3 are same //////
    cout << *q << endl;
    cout << p << endl;
    cout << &x << endl;
    //////////////////////////////////
    cout << endl;
    
    ///// The below 2 are same ///////
    cout << &p << endl;
    cout << q << endl;
    //////////////////////////////////
    return 0;
}
