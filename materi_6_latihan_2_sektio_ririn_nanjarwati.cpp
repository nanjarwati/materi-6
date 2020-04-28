#include<iostream>

using namespace std;

int main()
{
	
string kucing[2][3]={{"anggora","persia","himalaya"},{"sphynx","bengal","savanna"}};

cout<<"menampilkan secara manual :"<<endl;
cout<<"kucing :"<<kucing[0][0]<<endl;
cout<<"kucing :"<<kucing[0][1]<<endl;
cout<<"kucing :"<<kucing[0][2]<<endl;
cout<<"kucing :"<<kucing[1][0]<<endl;
cout<<"kucing :"<<kucing[1][1]<<endl;
cout<<"kucing :"<<kucing[1][2]<<endl;

cout<<"menampilkan dengan menggunakan for :"<<endl;

for(int x=0;x<=1;x++)
{
	for(int y=0;y<=2;y++)
	{
		cout<<"kucing :"<<kucing[x][y]<<endl;
	}
}

system("pause");
return 0;
}
