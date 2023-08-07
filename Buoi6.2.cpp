#include<iostream>
#include<cstring>
using namespace std;
int main(){
	char Hoa[100];
	cout<<"Nhap mang ky tu:";
	cin.getline(Hoa,100);
	for(int i=0;i<strlen(Hoa)-1;i++){
		if(Hoa[i]>='A'&&Hoa[i]<='Z'){
			cout<<Hoa[i]<<endl;
		}
	}
}
