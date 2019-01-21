#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
int n=0;
cin>>n;
string a[n];
for(int i=0;i<n;i++)  cin>>a[i];
for(int i=0;i<n;i++){
string b, c;
char s;
  for(int j=0;j<a[i].length();j++){
       switch(a[i][j]){
                case '0':c+="0000";break;
                case '1':c+="0001";break;
                case '2':c+="0010";break;
                case '3':c+="0011";break;
                case '4':c+="0100";break;
                case '5':c+="0101";break;
                case '6':c+="0110";break;
                case '7':c+="0111";break;
                case '8':c+="1000";break;
                case '9':c+="1001";break;
                case 'A':c+="1010";break;
                case 'B':c+="1011";break;
                case 'C':c+="1100";break;
                case 'D':c+="1101";break;
                case 'E':c+="1110";break;
                case 'F':c+="1111";break;
      }
  } 
int m=c.length()%3;
if(m!=0) for(int i=0;i<3-m;i++) c.insert(0,"0");
if(!(c[0]=='0' && c[1]=='0' && c[2]=='0')){
s=(c[0]-'0')*4+(c[1]-'0')*2+(c[2]);
b=b+s;
}
for(int k=3;k<c.length();k=k+3){
if(c.substr(k,3)=="000")
b+="0";
else if(c.substr(k,3)=="001")
b+="1";
else if(c.substr(k,3)=="010")
b+="2";
else if(c.substr(k,3)=="011")
b+="3";
else if(c.substr(k,3)=="100")
b+="4";
else if(c.substr(k,3)=="101")
b+="5";
else if(c.substr(k,3)=="110")
b+="6";
else if(c.substr(k,3)=="111")
b+="7";
}
cout<<b<<endl;
}
return 0;
}
