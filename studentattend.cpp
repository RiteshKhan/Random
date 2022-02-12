#include<iostream>
using namespace std;
class Box{
    int l, b, h;
    public:
        Box(){}
        Box(int l, int b, int h)
        {
            this->l = l;
            this->b = b;
            this->h = h;
        }
        // Box 1 < Box 2 if l1<l2 and b1<=b2, h1<=h2
        Box operator<(Box& b1){
            if((l<b1.l)&&(b<=b1.b)&&(h<=b1.h)){
                return b1;
            }
            else
                return *this;
        }
        void display();
};
void Box::display(){
    cout << "The length is " << l << endl;
    cout << "The breadth is " << b << endl;
    cout << "The height is " << h << endl;
}
int main()
{
    Box B1(3, 4, 5), B2(4, 6, 5), B3;
    B3 = B1 < B2;
    B3.display();
}