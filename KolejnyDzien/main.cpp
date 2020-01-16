#include <iostream>

using namespace std;

double Tab[4][5][6];

int main(int argc, char** argv) {
	
	for(int i = 0; i < 4; i++){
		
		for(int x = 0; x < 5; x++){
			
			for(int y = 0; y < 6; y++){
				Tab[i][x][y] = 0;
				cout << Tab[i][x][y];
			}
		}
	}
	return 0;
}
