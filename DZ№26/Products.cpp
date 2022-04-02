#include <iostream>
#include "Products.h"

void printProd(product& d) {
	std::cout << d.name << " - " << d.number << " things, " << d.price << "$." << std::endl;
}

int fullPrice(product& d) {
	return d.price * d.number;
}

void sell(product &d, int n) {
	d.number -= n;	
}