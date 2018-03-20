#pragma once
#include "Stock.h"

class SuperMarket {
	Stock* S;

public:
	SuperMarket() {
		S = new Stock;
		S->read_FromFile("stock_data.txt");
		S->print_Stock();
	}
	//void Add_Sample_Orders();
	//void check_Network();
};