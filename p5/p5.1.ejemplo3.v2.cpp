#include <iostream>
using namespace std;
int main () {
	int x, y, i, p;
	cout << "Dame los límites (x y) para [2^x,2^y] ";
	cin >> x >> y;
	p = 1;
	
	for (i = 1; i <= y; i++) {//x+1-->y
		p = p*2;
		if (i>=x){
			cout << "2^" << i << "=" << p << endl;
		}
	}
	return 0;
}






