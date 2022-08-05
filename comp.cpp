#include<iostream>
using namespace std;

class Complex{
	int real,img;
	public:
	Complex(){
		real = 0;
		img = 0;
	}
	Complex(int r,int i){
		real = r;
		img = i;
	}
	void display(){
		cout << real << " + " << img << "i" << endl;
	}
	Complex operator +(Complex x){
		Complex t;
		t.real = real + x.real;
		t.img = img + x.img;
		return t;
	}
	Complex operator ()(int a,int b,int c,int d){
		Complex t;
		t.real = a + b + c;
		t.img = b + c + d;
		return t;
	}
};

int main(){
	Complex a(5,3),b(2,3),c,d;
	c = a + b;
	d = a(1,2,3,4);
	c.display();
	d.display();
	return 0;
}
