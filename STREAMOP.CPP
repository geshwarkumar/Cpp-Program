#include<fstream.h>
#include<ctype.h>
#include<string.h>
#define MAXNAME 40
class Person
{
	private:
		char name[MAXNAME];
		int age;
	public:
		void write(ofstream &os)
		{
			os.write(name,strlen(name));
			os<<ends;
			os.write((char*) &age,sizeof(age));
		}
		int read(ifstream &is)
		{
			is.get(name,MAXNAME,0);
			name[is.gcount()]=0;
			is.ignore(1);
			is.read((char*)&age,sizeof(age));
			return is.good();
		}
		friend ostream & operator <<(ostream &os, Person &b);
		friend istream &operator >>(istream &is, Person &b);

		friend ofstream &operator <<(ofstream &fos, Person &b)
		{
			b.write(fos);
			return fos;
		}
		friend ifstream& operator >>(ifstream &fis, Person &b)
		{
			b.read(fis);
			return fis;
		}
};
istream &operator >>(istream &is, Person &b)
{
	cout<<"Name:-";
	is>>ws;
	is.get(b.name,MAXNAME);
	cout<<"Age:-";
	is>>ws>>b.age;
	return is;
}
ostream &operator <<(ostream &os, Person &b)
{
	os << b.name<<endl;
	os << b.age<<endl;
	return os;
}
void main()
{
	Person p;
	ofstream ofile("person.txt",ios::trunc | ios::binary);
	char ch;
	do
	{
		cin>>p;
		ofile<<p;
		cout<<"Another ? ";
		cin>>ch;
	}while(toupper(ch) == 'Y');
	ofile.close();
	ifstream ifile("person.txt",ios::binary);
	cout<<"The object written to the file were:...."<<endl;
	while(1)
	{
		ifile>>p;
		if(ifile.fail())
			break;
		cout<<p;
	}
}

