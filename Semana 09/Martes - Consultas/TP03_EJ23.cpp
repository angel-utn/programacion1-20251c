#include<iostream>
using namespace std;

int main() {
	int cduplas;
	int cimpar;
	int i;
	int num;
	cduplas = 0;
	cimpar = 0;
	for (i=1;i<=10;i++) {
		cout << "Ingrese #"<<i<<": ";
		cin >> num;
		if ((num%2!=0)) {
			cimpar = cimpar+1;
		} else {
			cimpar = 0;
		}
		if ((cimpar==2)) {
			cduplas = cduplas+1;
			cimpar = 1;
		}
	}
	cout << "Total de duplas: " << cduplas << endl;
	return 0;
}