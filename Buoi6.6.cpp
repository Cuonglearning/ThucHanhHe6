#include<iostream>
#include<cstring>
using namespace std;
void kituxuathiennhieunhat(char *s)
{
    int a[100],n=0;
    for(int i=0;i<strlen(s);i++)
    {
        int d=1;
        for(int j=i+1;j<strlen(s);j++)
            if(s[i]==s[j])
            {    d++;
                for(int k=j;k<strlen(s);k++)
                    s[k]=s[k+1];
                        j--;
            
            }
            a[n++]=d;
    
    }
    int max=a[0];

    for(int i=1;i<strlen(s);i++)
        if(a[i]>max)
        max=a[i];
    for(int i=1;i<strlen(s);i++)
        if(a[i]==max)
        cout<<"ki tu "<<s[i]<<" xuat hien nhieu nhat la "<<a[i]<<" lan\n";

}

int main(){
	char s[100];
	cout<<"Nhap chuoi ky tu:";
	cin.getline(s,100);
	kituxuathiennhieunhat(s);
}
