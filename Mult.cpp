#include <iostream>
using namespace std;

int main(){
	for (int a = 1; a < 9; a++){
		for (int b; b < 9; b++){
			cout << a << " * " << b << " = " << a*b << endl;
		}
	}
	return 0;
}