#include <iostream>
using namespace std;
int main() {
	/* 
	//for5
	double c, k;
	cout << "cost:" << endl;
	cin >> c;
	cout << "cost 2" << endl;
	for (k = 0.1; k < 1.1; k += 0.1)
		cout << k << "kg = " << c * k << endl;*/
	/*
	//for6 
	double c, k;
	cout << "cost:" << endl;
	cin >> c;
	cout << "cost 2" << endl;
	for (k = 1.2; k < 2.1; k += 1.2)
		cout << k << "kg = " << c * k << endl; */
	/* 
	//for 7
	int a, b;
	cout << "A:";
	cin >> a;
	cout << "B:";
	cin >> b;
	int sum = 0;
	for (int i = a; i <= b; ++i){
		sum +=i;
	}
		cout << sum;*/
		/* 
	//for 8
	int a, b;
	cout << "A:";
	cin >> a;
	cout << "B:";
	cin >> b;
	int qty = 1;
	for (int i = a; i <= b; ++i) {
		qty *= i;
	}
	cout << qty;*/
	//For9.Даны два целых числа A и B(A < B).Найти сумму квадратов всех целых
		//чисел от A до B включительно.
	int a, b;
	cout << "A:";
	cin >> a;
	cout << "B:";
	cin >> b;
	int qty = 0;
	for (int i = a; i <= b; ++i) {
		qty += i * i;
	}
	cout << qty;
}