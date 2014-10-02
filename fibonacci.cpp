#include<iostream>
using namespace std;

int count;
//get the nth fibonacci number, starts from 1 1 2 ...
int fibonacci(int n){
	count++;
	if(n==2||n==1)
		return 1;
	else
		return fibonacci(n-1)+fibonacci(n-2);
}

int main(){
	int input;
	while(1){
		count=0;
		cout<<"Input a number(-1 for exit): ";
		cin>>input;
		if(input==-1) return 0;
		cout<<"The "<<input<<"th fibonacci number is: "<<fibonacci(input)<<endl;
		cout<<"function called: "<<count<<" times"<<endl<<endl;
	}	
}
