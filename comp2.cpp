#include<iostream>
using namespace std;

class complex{
	public:
	int real;
	int img;
	
	void display(complex X){
		cout << X.real << " + " << X.img << "i" << endl;
	}
	int add(complex X,complex Y){
		int a = X.real + Y.real;
		int b = X.img + Y.img;
		cout << a << " + " << b << "i" << endl;
		return 0;
	}
};

int main()
{
	complex A,B;
	cout << "Enter the real number : " << endl;
	cin >> A.real;
	cin >> B.real;
	cout << "Enter imaginary number : " << endl;
	cin >> A.img;
	cin >> B.img;
//	cout << A.real << " + " << A.img << "i" << endl;
	A.display(A);
	B.display(B);
	cout << A.add(A,B);
	return 0;
}
