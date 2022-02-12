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
        void display();
        friend Box operator<(Box&, Box&);
        // Box 1 < Box 2 if l1<l2 and b1<=b2, h1<=h2
};
Box operator<(Box& b1, Box& b2){
    if((b1.l<b2.l)&&(b1.b<=b2.b)&&(b1.h<=b2.h)){
        return b2;
    }
    else
        return b1;
}
void Box::display(){
    cout << "The length is " << l << endl;
    cout << "The breadth is " << b << endl;
    cout << "The height is " << h << endl;
}
int main()
{
    Box B1(3, 4, 5), B2(3, 6, 5), B3;
    B3 = B1 < B2;
    B3.display();
}