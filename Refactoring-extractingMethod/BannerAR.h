#pragma once
#include <iostream>
using namespace std;
class BannerAR
{
private:
	string _content;
	void printBorder()
	{
		//print border
		cout << "+";
		for (int i = 0; i < _content.size(); i++) {
			cout << "-";
		}
		cout << "+" << endl;
	}
	void printContents(int times)
	{
		//print contents
		for (int i = 0; i < times; i++) {
			cout << "|" + _content + "|" << endl;
		}
	}
public:
	BannerAR(string content) : _content(content) {}
	~BannerAR() {}

	void print(int times) {
		printBorder();
		//void printBorder()
		//{
		//	//print border
		//	cout << "+";
		//	for (int i = 0; i < _content.size(); i++) {
		//		cout << "-";
		//	}
		//	cout << "+" << endl;
		//}

		printContents(times);
		////print contents
		//for (int i = 0; i < times; i++) {
		//	cout << "|" + _content + "|" << endl;
		//}

		printBorder();
		////print border
		//cout << "+";
		//for (int i = 0; i < _content.size(); i++) {
		//	cout << "-";
		//}
		//cout << "+" << endl;
	}

};

