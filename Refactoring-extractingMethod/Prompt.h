#pragma once
#include <iostream>
using namespace std;

class Prompt
{
private:
	string _name = "";
	//
public:
	Prompt() {}
	~Prompt() {}

	void processUserReqest() {
		bool flag;

		//get Host Name
		string hostName = "";
		flag = true;

		for (int i = 0; flag && i < 3; i++) {
			showPrompt("Host");
			hostName = getString();

			if (!hostName.empty()) {
				flag = false;
			}
		}
		if (flag) {
			cout << " exception! " << endl;
		}

		//get User Name
		string userName = "";
		flag = true;

		for (int i = 0; flag && i < 3; i++) {
			showPrompt("User");
			userName = getString();

			if (!userName.empty()) {
				flag = false;
			}
		}
		if (flag) {
			cout << " exception! " << endl;
		}

		postRequest(hostName, userName);
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

