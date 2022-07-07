#include<iostream>

using namespace std;

class Box
{
    private:
        int l, b, h;
        friend bool operator < (Box &obj1, Box &obj2);
        friend ostream& operator << (ostream &out, Box& obj3);
};

ostream& operator << (ostream &out, Box& obj3){
    out<<obj3.l<<" "<<obj3.b<<" "<<obj3.h;
    return out;
}

bool operator < (Box &obj1, Box &obj2){
    if(obj1.l < obj2.l)
        return true;
    else if(obj1.b < obj2.b && obj1.l == obj2.l)
        return true;
    else if(obj1.h < obj2.h && obj1.b == obj2.b && obj1.l == obj2.l)
        return true;
    else return false;
}
        
// Complex operator + (const Complex& obj1){
//     Complex res;
//     res.real = real + obj1.real;
//     res.imag = imag + obj1.imag;    direct real or imag ki jagah this->real or 
//                                     this->imag bhi likh skte h
//     return res;
// }

int main(){
	
	return 0;
}