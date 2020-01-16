#include <iostream>

using namespace std;

int los;
int Tab[2][3];
int Tab2[2][3];
int Tab3 [2][3];
int main(int argc, char** argv) {
	for(int i = 0; i < 2; i++){
		for(int x = 0; x < 3; x++){
			cout << "Podaj liczbe: " << endl;
			cin >> los;
			Tab[i][x] = los;
		}
		cout << endl;
	}
	cout << endl;
	for(int y = 0; y < 2; y++){
		for(int z = 0; z < 3; z++){
			cout << "Podaj liczbe: " << endl;
			cin >> los;
			Tab2[y][z] = los;		
		}
		cout << endl;
	}
	cout << endl;
	
	for(int i = 0; i < 2; i++){
		for(int x = 0; x < 3; x++){
			Tab3[i][x] = Tab[i][x] + Tab2[i][x];
			cout << Tab3 [i][x];
		}
		cout << endl;
	}
	return 0;
}
