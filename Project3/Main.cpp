#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main() {
	stack<char> stack;

	bool first = false;
	double buffer;
	double second;
	double action;
	bool act = false;
	bool sec = false;
	string str;
	cin >> str;

	for (int i = 0; i < str.size(); i++) {

		if (str[i] >= '0' && str[i] <= '9') {
			if (first) {
				sec = true;
				second = str[i] - 48;
			}
			else {
				first = true;
				buffer = str[i] - 48;

			}
		}

		if (str[i] == '/') {
			if (second && action) {
				buffer = second / buffer;
			}
			else action = true;
		}

	}

	cout << buffer;
}