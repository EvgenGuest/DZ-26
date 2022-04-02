#include <iostream>
#include "Products.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");	

	cout << "Домашнее задание №26\n\nСписок товаров:";
	cout << endl;

	product one = { "Apple", 2, 5 };
	product two = { "Milk", 1, 10 };
	product three = { "Biscuit", 3, 7 };
	product four = { "Sugar", 5, 100 };

	product* p1 = &one;
	product* p2 = &two;
	product* p3 = &three;
	product* p4 = &four;
	
	printProd(*p1);	
	printProd(*p2);
	printProd(*p3);	
	printProd(*p4);
	cout << endl;
	cout << "Полная стоимость оставшегося товара: "<<product(*p3).name << " = "<< fullPrice(*p3) << "$" << endl;
	sell(* p3, 2);
	cout << endl;
	printProd(*p3);
	cout << endl;
	cout << "Полная стоимость оставшегося товара: " << product(*p3).name << " = " << fullPrice(*p3) << "$" << endl;

	return 0;
}
