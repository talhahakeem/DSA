#include<iostream>
#include<conio.h>
using namespace std;
int swap(int a, int b){
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"a and b in swap function"<<a<<" "<<b<<endl;
}
int main(){
	int a=10;
	int b=20;
	cout<<a<<" "<<b<<endl;
	swap(a,b);
	cout<<"a and b in main function"<<a<<" "<<b<<endl;
}
