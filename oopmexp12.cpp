#include<iostream>
using namespace std;

int main()
{
	int vowel=0,cons=0,nums=0,space=0;
	string line;
	
	cout<<"@Author - Yash Lade \n";
	
	cout<<"\nEnter any string/name :";
	getline(cin,line);
	
	for(int i=0;i<line.length();i++)
	{
		if(line[i]=='a' || line[i]=='e' || line[i]=='i' ||line[i]=='o' || line[i]=='u'
		|| line[i]=='A' || line[i]=='E' || line[i]=='I' ||line[i]=='O' || line[i]=='U')
		++vowel;
		
		else if ((line[i]>='a' && line[i]<='z') || (line[i]>='A' && line[i]<='Z'))
		++cons;
		
		else if (line[i]>='0' && line[i]<='9')
		++nums;
		
		else if (line[i]==' ')
		++space;
	}
	
	cout<<"\nThe number of vowels in entered string are :"<<vowel<<endl;
	cout<<"The number of consonants in entered string are :"<<cons<<endl;
	cout<<"The number of digits in entered string are :"<<nums<<endl;
	cout<<"The number of spaces in entered string are :"<<space<<endl;
}
