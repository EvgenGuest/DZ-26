#pragma once
#include <string>
#include <iostream>

struct product {
	std::string name;
	int number = 0;
	int price;
};

void printProd(product& d);
int fullPrice(product& d);
void sell(product& d, int n);