/*CPP PROGRAM TO WRITE AND READ CHARACTER FORM THE FILE
-GESHWAR KUMAR
-3/10/2016*/

#include<fstream.h>

int main()
{
	char c,str[75];
	fstream file("student.txt",ios::in|ios::out);

	cout<< "Enter string:";
	cin.getline(str,75);
	for(int i=0;str[i];i++)
	{
		file.put(str[i]);
	}
	file.seekg(0);

	cout<< "Output String:";
	while(file)
	{
		file.get(c);
		cout<<c;
	}
return 0;
}