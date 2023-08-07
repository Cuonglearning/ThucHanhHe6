#include<iostream>
#include<cstring>
using namespace std;
int main(){
	char s[100];
	cout<<"Nhap mang ky tu:";
	cin.getline(s,100);
	if(s==strrev(s)){
		cout<<"Mang doi xung";
	}else{
	cout<<"Mang khong doi xung";
	}
}
