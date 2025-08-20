#include <iostream>
using namespace std;

int main(){
	int a,b;
	cin >> a >> b;
	int p1 = a+b;
	int p2 = a-b;
	int p3 = a*b;
	float p4 = (float)a/b;
	cout << p1 << " " << p2 << " " << p3 << " " << p4;
	return 0;
}