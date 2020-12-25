#include<iostream>
#include<string>
using namespace std;

char before(char x){
	char resuit;
	string text = "ABCDEFGHIJKLMNOPQRSTUVWXYZ" ;
	int i = 0;
	while (i < 26)
	{
		if(x == text[i]){
			if(x == text[0]){
				resuit = 'Z';
				i += 26;
			}
			else{
				resuit = x-1;
				i += 26;
			}
		}
		else{
			i++;
			if(i > 25){
				resuit = '0';
				i += 26;
			}
		}
	}
	return resuit;
}

int main(){
	//Test Case
	cout << before('A') << "\n";
	cout << before('B') << "\n";
	cout << before('P') << "\n";
	cout << before('T') << "\n";
	cout << before('Z') << "\n";
	cout << before('a') << "\n";
	cout << before('0') << "\n";
	cout << before('c') << "\n";
	return 0;
}
