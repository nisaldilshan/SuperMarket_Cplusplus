#pragma once
#include <string>
#include <vector>
#include <map>
#include <iostream>
#include <fstream> // ifstream
#include <sstream> //istringstream


using namespace std;

class Stock {
	//vector<vector<string>> stock_data;
	map<string, vector<string>> stock_data;
public:
	//Stock();
	//void incoming_Order(Item* _item);
	void print_Stock();
	void read_FromFile(string inputFileName);
	//void write_ToFile(string inputFileName);
};