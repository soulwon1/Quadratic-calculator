#include<iostream>
#include<cmath>
#include<ctime>
#include<string>
#include<cstring>
#pragma warning(disable : 4996)

using namespace std; 

int main() {
	double a, b, c, root1, root2, discr;
	cout << "Welcome to the quadratic calculator\n";
	cout << "In this you will input the integers a, b, c in accordance to ax^2 + bx + c: \n";
	cout << "Please input your integers below: ";
	cin >> a >> b >> c;
	cout << "Thank you, I will now calculate:\n";
	cout << "-------------------------------¬\n";
	//calc discriminant:
	discr = (pow(b, 2)) - (4 * a * c);
	//checks discr and does as follow: 
	if (discr > 0) {
		cout << "There are two real roots, Let me calculate it:\n";
		root1 = (-b + sqrt(discr)) / (2 * a);
		root2 = (-b - sqrt(discr)) / (2 * a);
		cout << "Your first root is: " << root1 << " and your second root is: " << root2; 
	}
	else if (discr == 0) {
		cout << "This quadratic only has one soluion, let me calculate it: \n";
		root1 = (-b + sqrt(discr)) / (2 * a);
		cout << "Your root is : " << root1;
	}
	else if (discr < 0 ) {
		cout << "There are no real roots, sorry :c ";
	}
	return 0;
}


