#pragma once
#include <iostream>
using namespace std;

class PromptAR
{
private:
	string _name = "";

	int const RETRY = 3;
	//
public:
	PromptAR() {}
	~PromptAR() {}

	void processUserReqest() {
//		bool flag;

		//get Host Name
		//		string HostName = "";
		////		flag = true;
		string hostName = getStringWithPrompt("Host");
		//		//get User Name
		//		string userName = "";
		////		flag = true;
		string userName = getStringWithPrompt("User");

////		for (int i = 0; flag && i < 3; i++) {
//		for (int i = 0; i < RETRY; i++) {
//				showPrompt("User");
//			userName = getString();
//			if (userName.empty()) {
////				flag = false;
//				break;
//			}
//		}
////		if (flag) {
//			cout << " exception! " << endl;
////		}

		postRequest(hostName, userName);
	}

	string getStringWithPrompt(string prompt)
	{
		for (int i = 0; i < RETRY; i++) {
			showPrompt(prompt);
			string input = getString();
			if (!input.empty()) {
				return input;
			}
		}
		cout << " exception! " << endl;
	}

	void showPrompt(string name) {
		_name = name;
		cout << " name is: " + _name << endl;
	}

	string getString() {
		return _name;
	}

	void postRequest(string hName, string uName) {
		//
	}

};

