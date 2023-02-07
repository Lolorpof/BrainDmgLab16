#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &,int &,int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int &a, int &b, int &c, int &d){
	int arr[4] = {a, b, c, d};
	bool check[4] = {0, 0, 0, 0};
	int count = 1;
	while(check[0] == 0 || check[1] == 0 || check[2] == 0 || check[3] == 0){
		int i = rand() % 4 + 1;
		if(check[i-1] == 0){
			if(count == 1){
				a = arr[i-1];
				check[i-1] = 1;
			}
			if(count == 2){
				b = arr[i-1];
				check[i-1] = 1;
			}
			if(count == 3){
				c = arr[i-1];
				check[i-1] = 1;
			}
			if(count == 4){
				d = arr[i-1];
				check[i-1] = 1;
			}
			count++;
		}
		
	}
}
