/*CPP PROGRAM TO DEMONSTRATE MANIPULATORS OF FILE POINTER:seekg and tailg
-GESHWAR KUMAR
-28/09/2016*/

#include<fstream.h>

/*MAIN FUNCTION*/
int main(int argc,char *argv[])
{
		if(argc < 2)
		{
			cout << "Usage: fsize <filename>" ;
		return 1;
		}
		ifstream infile(argv[1]);//FILE OPEN IN R AND W MODE
		if(!infile)//OPEN SUCCESS
		{
			cerr << "Error opening " << argv[1] << endl ;
		return 1;
		}
		infile.seekg(0,ios::end);//SET READ POINTER TO EOF
		cout << "File size: "<<infile.tellg();//READ CURRENT POSITION
return 0;
}//END MAIN