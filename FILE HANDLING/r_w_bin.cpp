/*CPP PROGRAM TO WRITE AND READ CHARACTER FORM THE BINARY FILE
-GESHWAR KUMAR
-3/10/2016*/

#include<fstream.h>
//#include<conio.h>
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