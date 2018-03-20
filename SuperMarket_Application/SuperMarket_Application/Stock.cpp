#include "Stock.h"

using namespace std;

void Stock::read_FromFile(string inputFileName) {
	ifstream inputFile(inputFileName);
	while (inputFile) {
		string s;
		if (!getline(inputFile, s)) break;

		if (s[0] != '#') {
			istringstream ss(s);
			//
			int count = 0;
			string line;
			string key;
			string val1;
			string val2;
			vector<string> temp_vec;
			//
			while (ss) {
				if (!getline(ss, line, ' ')) break;
				try {
					if (count == 0) {
						key = line;
						//product_num_vec.push_back(line);
					}
					else temp_vec.push_back(line);

					//else if (count == 1) temp_vec.push_back(line);
					//else if (count == 2) val2 = line;

					count++;
				}
				catch (const std::invalid_argument e) {
					e.what();
				}
			}
			//cout << key<<" ";
			stock_data.insert(pair<string, vector<string>>(key, temp_vec));
		}
	}
	if (!inputFile.eof()) {
		cerr << "Could not read file " << inputFileName << "\n";
	}
}

void Stock::print_Stock() {
	for (map<string, vector<string>>::iterator it = stock_data.begin(); it != stock_data.end(); ++it) {
		cout << it->first << " ";
		for (int i = 0; i < stock_data[it->first].size(); i++)
		{
			cout << stock_data[it->first][i] << " ";
		}
		cout << endl;
	}
}