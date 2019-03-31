/*CPP PROGRAM TO IMPLEMENT GRAPHICS USING VIRTUAL FUNCTION
-GESHWAR KUMAR
-23/08/2016*/
#include <iostream.h>
#include <graphics.h>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>

class Graphics{
	protected :
		 /* request auto detection */
		int gdriver,gmode,errorcode ;
	public :
		Graphics(){
			gdriver = DETECT, gmode, errorcode;
			/* initialize graphics and local variables */
			initgraph(&gdriver, &gmode, "C:\\TURBOC3\\BGI");
		}
		virtual void Draw(){}
	    ~Graphics(){
			/* clean up */
			closegraph();
	    }
};
class Circle : public Graphics{
	public :
		void Draw(){
			/* draw the circle */
			//circle(midx, midy, radius);
			circle(20,20,10);
		}
};
class Rectangle : public Graphics{
	public :
		void Draw(){
			/* draw the rectangle */
		   rectangle(50,0,0,70);
		}
};
int main(void)
{
	Graphics *ptr ;
	Circle cir ;
	ptr = &cir ;
	ptr -> Draw();
	Rectangle rec ;
	//ptr = &cir ;
	//gotoxy(25,25);
	ptr = &rec ;
	//ptr -> Draw();
	ptr -> Draw();
//closegraph();
getch();
return 0;
}
