#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;
int main() {
	string tekst;
	int n;
	cout << "Podaj slowo: ";
    cin >> tekst;
	n = tekst.size();
	
	for(int i = 0; i < n / 2; i++){
		swap(tekst[i],tekst[n-i-1]);
	}
	cout << tekst;
	return 0;
}
