#include <iostream>
#include <string>

using namespace std;

int main(void){
	int a,b;
	string op;
	cin >> a >> op >> b;
	if(op == "+")
		cout << a + b << endl;
	else
		cout << a - b << endl;
}
