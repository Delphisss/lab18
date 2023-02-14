#include<iostream>
#include<cstdlib>
#include<ctime>
#include<vector>
using namespace std;

vector<int> randomVector(int);
void showVector(vector<int>);
int dotProduct(vector<int>,vector<int>);

int main(){
	srand(time(0));
	vector<int> x = randomVector(5);
	vector<int> y = randomVector(5);
	int z = dotProduct(x,y);
	showVector(x);
	cout << " . ";
	showVector(y);
	cout << " = " << z;
	
	return 0;
}
//โครงสร้างจากโจทย์เอามาเพิ่มส่วนที่หาย 
vector<int> randomVector(unsigned int N){	//เพิ่ม vector<int> 
    vector<int> v; 
    for(unsigned int i = 0; i < N; i++) v.push_back(rand()%10); //เพิ่ม push_back
    return v; // เพิ่ม return v เพื่อเก็บค่ากลับไปไว้ใน v
}

 void showVector(vector<int> v){ //เพิ่ม void กับ vector<int> v
	cout << "[";
	for(unsigned int i = 0; i<v.size() ; i++){ // เพิ่มเงื่อนไข i < v.size
		cout << v[i]; //เพิ่ม v[i]
		if(i == v.size()-1) cout << "]"; //เพิ่มเงื่อนไข i == v.size()-1
		else cout << " ";
	}
}

int dotProduct(vector<int> A,vector<int> B){ //เพิ่ม int กับ vector<int> A,vector<int> B
	int sum = 0;
	for(unsigned int i = 0; i<A.size() ; i++) sum += A[i]*B[i];	//เพิ่มเงื่อนไข i<A.size() กับ sum += A[i]*B[i]
	return sum; // return ค่าเก็บไว้ใน sum
}
//Write Definition of randomVector() showVector() and dotProduct() here
