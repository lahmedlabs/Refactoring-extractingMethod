#pragma once
#include <iostream>

using namespace std;
class Banner
{
private:
	string _content;

public:
	Banner(string content) : _content(content) {}
	~Banner() {}

	void print(int times) {
		//print border
		cout << "+";
		for (int i =0 ; i < _content.size(); i++) {
			cout << "-";
		}
		cout << "+" << endl;

		//print contents
		for (int i = 0; i < times; i++) {
			cout << "|" + _content + "|" << endl;
		}

		//print border
		cout << "+";
		for (int i = 0; i < _content.size(); i++) {
			cout << "-";
		}
		cout << "+" << endl;

	}

};

