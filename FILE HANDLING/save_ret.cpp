/*CPP PROGRAM TOSAVING AND RECIEVING THE OBJECT
-GESHWAR KUMAR
-3/10/2016*/

#include<fstream.h>
#include<ctype.h>
#include<string.h>
#define MAX 40
class Person
{
	private :
		char name[MAX];
		int age;
	public :
		void write(ofstream &os)
		{
			os.write(name,strlen(name));
			os<<endl;
			os.write((char *) &age,sizeof(age));
		}
		int read(ifstream &is)
		{
			is.get(name,MAX,0);
			name[is.gcount()]==0;
			is.ignore(1);
			is.read((char *)&age,sizeof(age));
			return is.good();
		}
		friend ostream & operator << (ostream &os,Person &b);
		friend istream & operator >> (istream &is,Person &b);

		friend ofstream &operator << (ofstream &fos,Person &b)
		{
			b.write(fos);
			return fos;
		}
		friend ifstream &operator >> (ifstream &fis,Person &b)
		{
			b.read(fis);
			return fis;
		}
};

int main()
{
	int num1=530;
	float num2=1050.25;
	/*WRITE*/
	ofstream out_file("number.bin",ios::binary);
	out_file.write((char *)&num1,sizeof(num1));
	//out_file.write((char *)&num2,sizeof(num2));
	out_file.write((char *)&num2,sizeof(float));
	out_file.close();
	/*READ*/
	ifstream in_file("number.bin",ios::binary);
	//in_file.read((char *)&num1,sizeof(num1));
	in_file.read((char *)&num1,sizeof(int));
	in_file.read((char *)&num2,sizeof(float));

	cout<<num1<<" "<<num2<<endl;

	in_file.close();
 //getch();
return 0;
}