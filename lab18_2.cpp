#include<iostream>
using namespace std;

void myString(char *&a, int N){
	a = new char [N];    
	for(int i = 0; i < N;i++) a[i] = 'A'+i;
	a[N] = 0;
}

int main(){
	char *p;
	int N;	
	cout << "N = ";
	cin >> N;		
	myString(p,N);
	cout << p;	
	delete [] p;
	return 0;
}
