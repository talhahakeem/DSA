#include<iostream>
using namespace std;
int swap(int *p, int *q){
	int temp;
	temp=*p;
	*p=*q;
	*q=temp;
	cout<<*p<<" "<<*q<<endl;
}
int main(){
	int a=10 , b=20 ;
	cout<<"main"<<a<<" "<<b<<endl;
	swap(&a,&b);
	cout<<"main"<<a<<" "<<b<<endl;
	
}
