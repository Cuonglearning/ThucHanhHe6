#include<iostream>
#include<cstring>
using namespace std;
int main(){
	char HoaThuong[100];
	int i;
	cout<<"Nhap chuoi ky tu:";
	cin.getline(HoaThuong,100);
	for(i=0;i<strlen(HoaThuong);i++){
		if(i==0||i%2==0){
			HoaThuong[i]=toupper(HoaThuong[i]);
		}else{
			HoaThuong[i]=tolower(HoaThuong[i]);
		}
	}
	cout<<"Chuoi sau khi doi la:"<<HoaThuong;
}
