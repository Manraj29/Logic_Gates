//Co's 1,2,3,4,5.
#include <graphics.h>
#include <iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<fstream.h>

void gate(int a[],int b[],int);
void gate(int a[]);
int i=0;
//Class Logic
class logic
{
    public:
	//function show()
	void show()
	{
	    int gd=DETECT,gm;
	    initgraph(&gd,&gm,"C:\\TC\\BGI");
	    int x=10;
	    int y=10;
	    int f=8,s=20,d=0;
	    settextstyle(f,d,s);
	    int font=7;
	    for (font = 7; font <=7; font++)
	    {
		settextstyle(font, HORIZ_DIR, 1);
		setcolor(9);
		outtextxy(x,y,"                Micro-Project of Group12[46-49]");

	    }
	    //Menu
	    cout << "\n\n\n\t\t  Welcome To Logic Gates Concept Application";
	    cout << "\n1. AND Gate\n2. OR Gate\n3. NOT Gate\n4. NAND Gate\n5. NOR Gate\n6. EXOR Gate\n7. EXNOR Gate";
	    cout << "\n8. Information of Group\n9. EXIT";


	}
	//function getinfo() of group members
	void getinfo()
	{
		int gd=DETECT,gm;
		initgraph(&gd,&gm,"C:\\TC\\BGI");
		int font=10;
		int x=15;
		int y=15;
		settextstyle(font, HORIZ_DIR, 1);
		setcolor(10);
		outtextxy(x,y,"                      Information");

		    font=6;
		    settextstyle(font, 0, 2);

		    y=y+35;
		    setcolor(3);
		    outtextxy(x,y,"                        Compiled By GROUP 12(46-49)");
		    y=y+35;

		    setcolor(15);
		    outtextxy(x,y, "                  ===========================");
		    y=y+35;

		    font=4;
		    settextstyle(font, 0, 2);
		    setcolor(13);
		    outtextxy(x,y,"Members:");
		    y=y+35;
		    outtextxy(x,y," Roll no | Name");
		    y=y+35;
		    font= 3;
		    setcolor(5);
		    settextstyle(font, 0, 2);

		    outtextxy(x,y,"46      | Tejashree Likhar");
		    y=y+30;
		    outtextxy(x,y,"47      | Manraj Singh Virdi");
		    y=y+30;
		    outtextxy(x,y,"48      | Dhara Bhatia");
		    y=y+30;
		    outtextxy(x,y,"49      | Yukta Bhatia");
		    y=y+40;
		    font=7;
		    settextstyle(font, 0, 2);

		    setcolor(YELLOW);
		    outtextxy(x,y,"              Subject Teacher : Mrs Jaishree Anerao");
		    y=y+60;
		    setcolor(15);
		    font=5;
		    settextstyle(font, 0, 2);

		    setcolor(11);
		    outtextxy(x,y,"                          Press Enter to continue...");
		    y=y+25;

	}
};
//End of Class Logic.

//Class AND
class AND : public logic
{
    protected:
	int i,product;
    public:
	//function mul() for displaying Info of AND Gates
	void mul()
	{
	    int gd = DETECT, gm;
	    int x = 120;
	    int y = 210;
	    int start_angle = 275;
	    int end_angle = 85;
	    int radius = 30;
	    int gate_no=1;
	    initgraph(&gd,&gm,"C:\\TC\\BGI");
	    int font=0;
	    int xe=15;
	    int ye=15;
	     // arc function
	    setcolor(GREEN);

	    arc(x, y, start_angle, end_angle, radius);


	    line(125,180,90,180);      //upper horizontal line
	    line(125,240,90,240);        //bottom horizontal line
	    line(90,240,90,180);        //verticle line
	    line(150,210,185,210);
	    line(60,220,90,220);        //top horizontal line
	    setcolor(GREEN);

	    line(60,200,90,200);        //top hori line
	    int a[5]={0,0,1,1};
	    int b[5]={0,1,0,1};
	    setcolor(YELLOW);
	    settextstyle(0, 0, 2);
	    outtextxy(xe,ye, "     ******* AND GATE *******");

	    cout << "\n\n\n";
	    //Display File's content
	    ifstream MyFile("and.txt");
	    char ch;

	    while(!MyFile.eof())
	    {
		MyFile.get (ch);
		cout<<ch;
	    }
	    MyFile.close();
	    //getch();
	    cout << "\n\n==================================\nLogic Circuit:";

	    cout<< "\n\n     A\n     B\n\nOutput: Q\n\n==================================\nTruth Table:\n\n\t Input | Output\n\t A | B | Q";
	    cout << "\n\t-----------";
	    //Calculate the output
	    gate(a,b,gate_no);
	    cout << "\n-----------------------\nRead as A AND B GIVES Q\nEquation of AND Gate is: Q=A*B";
	    cout << "\t\tPress Enter to menu";

	}


};
//End of class AND

//Class OR
class OR : public logic
{
    protected:
	int i, or_ans;
    public:
	//function add() for displaying Info of OR gate
	void add()
	{

	    int gd = DETECT, gm;
	    int x = 120;
	    int y = 210;
	    int start_angle = 275;
	    int end_angle = 85;
	    int radius = 30;
	    initgraph(&gd, &gm, "C:\\TC\\BGI");
	    int gate_no=2;
	     // arc function
	    int start_angle1 = 270;
	    int end_angle1 = 85;
	    int radius1 = 30;
	    int x1=90,y1=210;
	    int xe=15,ye=15;
	    setcolor(YELLOW);
	    arc(x1, y1, start_angle1, end_angle1, radius1);
	    arc(x, y, start_angle, end_angle, radius);
	    setcolor(YELLOW);

	    line(125,180,90,180);      //upper horizontal line
	    line(125,240,90,240);        //bottom horizontal line
	    line(150,210,185,210);
	    line(80,220,117,220);        //bottom horizontal line
	    line(80,200,117,200);        //top hori line
	    setcolor(YELLOW);
	    int a[5] = { 0, 0, 1, 1 };
	    int b[5] = { 0, 1, 0, 1 };
	    setcolor(LIGHTBLUE);
	    settextstyle(0, 0, 2);
	    outtextxy(xe,ye, "     ******* OR GATE *******");

	    cout << "\n\n\n";
	    //Display File's content
	    ifstream MyFile("or.txt");
	    char ch;

	    while(!MyFile.eof())
	    {
		MyFile.get (ch);
		cout<<ch;
	    }
	    MyFile.close();
	    //getch();
	    cout << "\n\n==================================\nLogic Circuit:";
	    cout<< "\n\n     A\n     B\n\nOutput: Q\n\n==================================\nTruth Table:\n\n\t Input | Output\n\t A | B | Q";
	    cout << "\n\t-----------";
	    //Calculate the output
	    gate(a,b,gate_no);
	    cout << "\n-----------------------\nRead as A OR B GIVES Q\nEquation of AND Gate is: Q=A+B";
	    cout << "\t\tPress Enter to menu";

	}


};
//End of Class OR

//Class NOT
class NOT : public logic
{
    protected:
	int i, ans;
    public:
	//function not() for displaying info of NOT gate
	void not()
	{

	    int gd = DETECT, gm;
	    initgraph(&gd, &gm, "C:\\TC\\BGI");
	     // arc function
	    int x1 = 130;
	    int y1 = 200;
	    int xe=15,ye=15;
	    int start_angle1 = 275;
	    int end_angle1 = 2780;
	    int radius1 = 2;
	    int gate_no=3;
	    setcolor(LIGHTGRAY);

	    arc(x1,y1,start_angle1, end_angle1,radius1);
	    setcolor(LIGHTGRAY);

	    line(130,200,90,170);      //upper horizontal line
	    line(130,200,90,230);        //bottom horizontal line
	    line(90,170,90,230);        //verticle line
	    line(130,200,165,200);
	    setcolor(LIGHTGRAY);

	    line(60,200,90,200);        //top horizontal line
	    int a[5] = { 0, 1 };
	    setcolor(RED);
	    settextstyle(0, 0, 2);
	    outtextxy(xe,ye, "     ******* NOT GATE *******");

	    cout << "\n\n\n";
	    //Display File's content

	    ifstream MyFile("not.txt");
	    char ch;

	    while(!MyFile.eof())
	    {
		MyFile.get (ch);
		cout<<ch;
	    }
	    MyFile.close();
	    //getch();
	    cout << "\n\n==================================\nLogic Circuit:";

	    cout<< "\n\n\n     A\n\n\nOutput: Q\n\n==================================\nTruth Table:\n\n\t Input | Output\n\t A     |  Q";
	    cout << "\n\t-----------";
	    //Calculate the output
	    gate(a);
	    cout << "\n-----------------------\nRead as NOT A GIVES Q\nEquation of NOT Gate is: Q=A'";
	    cout << "\t\tPress Enter to menu";

	}


};
//End of Class NOT

//Class NAND
class NAND : public logic
{
    protected:
	int i, ans;
    public:
	//function mulcomp() for displaying info of NAND gate
	void mulcomp()
	{

	    int gd = DETECT, gm;
	    int x = 120;
	    int y = 210;
	    int xe=15,ye=15;
	    int start_angle = 275;
	    int end_angle = 85;
	    int radius = 30;
	    int x1 = 152;
	    int y1 = 210;
	    int start_angle1 = 275;
	    int end_angle1 = 2780;
	    int radius1 = 2;
	    initgraph(&gd, &gm, "C:\\TC\\BGI");
	    int gate_no=4;
	     // arc function
	    setcolor(LIGHTBLUE);

	    arc(x1,y1,start_angle1, end_angle1,radius1);
	    arc(x, y, start_angle, end_angle, radius);
	    setcolor(LIGHTBLUE);

	    line(125,180,90,180);      //upper horizontal line
	    line(125,240,90,240);        //bottom horizontal line
	    line(90,240,90,180);        //verticle line
	    line(150,210,185,210);
	    line(60,220,90,220);        //top horizontal line
	    setcolor(LIGHTBLUE);

	    line(60,200,90,200);        //top hori line

	    int a[5]={0,0,1,1};
	    int b[5]={0,1,0,1};
	    setcolor(MAGENTA);
	    settextstyle(0, 0, 2);
	    outtextxy(xe,ye, "     ******* NAND GATE *******");

	    cout << "\n\n\n";
	    //Display File's content

	    ifstream MyFile("nand.txt");
	    char ch;

	    while(!MyFile.eof())
	    {
		MyFile.get (ch);
		cout<<ch;
	    }
	    MyFile.close();
	    //getch();
	    cout << "\n\n\n==================================\nLogic Circuit:";

	    cout<< "\n\n     A\n     B\n\nOutput: Q\n\n==================================\nTruth Table:\n\n\t Input | Output\n\t A | B | Q";
	    cout << "\n\t-----------";
	    //Calculate the output
	    gate(a,b,gate_no);
	    cout << "\n-----------------------\nRead as A AND B GIVES NOT Q\nEquation of NAND Gate is: Q=(A.B)'";
	    cout << "\t\tPress Enter to menu";

	}


};
//End of Class NAND

//Class NOR
class NOR : public logic
{
    protected:
	int i, ans;
    public:
	//function addcomp() for displaying info of NOR gate
	void addcomp()
	{

	    int gd = DETECT, gm;
	    int x = 120;
	    int y = 210;
	    int start_angle = 275;
	    int end_angle = 85;
	    int radius = 30;
	    initgraph(&gd, &gm, "C:\\TC\\BGI");
	    int gate_no=5;
	     // arc function
	    int start_angle1 = 270;
	    int end_angle1 = 85;
	    int radius1 = 30;
	    int x1=90,y1=210;
	    int x2 = 152;
	    int y2 = 210;
	    int xe=15,ye=15;
	    int start_angle2 = 275;
	    int end_angle2 = 2780;
	    int radius2 = 2;
	    initgraph(&gd, &gm, "C:\\TC\\BIN");
	     // arc function
	    setcolor(RED);
	    arc(x2,y2,start_angle2, end_angle2,radius2);

	    arc(x1, y1, start_angle1, end_angle1, radius1);
	    arc(x, y, start_angle, end_angle, radius);
	    setcolor(RED);

	    line(125,180,90,180);      //upper horizontal line
	    line(125,240,90,240);        //bottom horizontal line
	    line(150,210,185,210);
	    line(80,220,117,220);        //bottom horizontal line
	    line(80,200,117,200);        //top hori line

	    int a[5] = { 0, 0, 1, 1 };
	    int b[5] = { 0, 1, 0, 1 };
	    setcolor(LIGHTCYAN);
	    settextstyle(0, 0, 2);
	    outtextxy(xe,ye, "     ******* NOR GATE *******");

	    cout << "\n\n\n";
	    //Display File's content
	    ifstream MyFile("nor.txt");
	    char ch;

	    while(!MyFile.eof())
	    {
		MyFile.get (ch);
		cout<<ch;
	    }
	    MyFile.close();
	    //getch();
	    cout << "\n\n\n\n==================================\nLogic Circuit:";

	    cout<< "\n\n     A\n     B\n\nOutput: Q\n\n==================================\nTruth Table:\n\n\t Input | Output\n\t A | B | Q";
	    cout << "\n\t-----------";
	    //Calculate the output
	    gate(a,b,gate_no);
	    cout << "\n-----------------------\nRead as A OR B GIVES NOT Q\nEquation of NOR Gate is: Q=(A+B)'";
	    cout << "\t\tPress Enter to menu";

	}


};
//End of class NOR

//Class XOR
class EXOR : public logic
{
    protected:
	int i, ans;
    public:
	//function exor() for displaying info of XOR gate
	void exor()
	{

	    int gd = DETECT, gm;
	    int x = 120;
	    int y = 210;
	    int start_angle = 275;
	    int end_angle = 85;
	    int radius = 30;
	    int gate_no=6;
	     // arc function
	    int start_angle1 = 270;
	    int end_angle1 = 85;
	    int radius1 = 30;
	    int x1=90,y1=210;
	    int x2 = 80;
	    int y2 = 210;
	    int xe=15,ye=15;
	    int start_angle2 = 280;
	    int end_angle2 = 80;
	    int radius2 = 30;
	    initgraph(&gd, &gm, "C:\\TC\\BGI");
	     // arc function
	    setcolor(CYAN);
	    arc(x2,y2,start_angle2, end_angle2,radius2);

	    arc(x1, y1, start_angle1, end_angle1, radius1);
	    arc(x, y, start_angle, end_angle, radius);
	    setcolor(CYAN);

	    line(125,180,93,180);      //upper horizontal line
	    line(125,240,93,240);        //bottom horizontal line
	    line(150,210,185,210);
	    line(80,220,117,220);        //bottom horizontal line
	    line(80,200,117,200);        //top hori line

	    int a[5] = { 0, 0, 1, 1 };
	    int b[5] = { 0, 1, 0, 1 };
	    setcolor(BROWN);
	    settextstyle(0, 0, 2);
	    outtextxy(xe,ye, "     ******* EXOR GATE *******");

	    cout << "\n\n\n";
	    //Display File's content

	    ifstream MyFile("xor.txt");
	    char ch;

	    while(!MyFile.eof())
	    {
		MyFile.get (ch);
		cout<<ch;
	    }
	    MyFile.close();
	    //getch();
	    cout << "\n\n\n==================================\nLogic Circuit:";

	    cout<< "\n\n     A\n     B\n\nOutput: Q\n\n==================================\nTruth Table:\n\n\t Input | Output\n\t A | B | Q";
	    cout << "\n\t-----------";
	    //Calculate the output
	    gate(a,b,gate_no);
	    cout << "\n-----------------------\nRead as A Exclusive-OR B GIVES Q\nEquation of EXOR Gate is: Q=A exor B";
	    cout << "\t\tPress Enter to menu";

	}


};
//End of class XOR

//Class XNOR
class EXNOR : public logic
{
    protected:
	int i, ans;
    public:
	//function exnor() for displaying info of XNOR gate
	void exnor()
	{

	    int gd = DETECT, gm;
	    initgraph(&gd, &gm, "C:\\TC\\BIN");

	    int x = 120;
	    int y = 210;
	    int start_angle = 275;
	    int end_angle = 85;
	    int radius = 30;
	    int font_no=7;
	     // arc function
	    int start_angle1 = 270;
	    int end_angle1 = 85;
	    int radius1 = 30;
	    int x1=90,y1=210;
	    int x2 = 80;
	    int y2 = 210;
	    int xe=15,ye=15;
	    int start_angle2 = 280;
	    int end_angle2 = 80;
	    int radius2 = 30;
	     // arc function
	    setcolor(GREEN);
	    arc(x2,y2,start_angle2, end_angle2,radius2);
	    int x3 = 152;
	    int y3 = 210;
	    int start_angle3 = 275;
	    int end_angle3 = 2780;
	    int radius3 = 2;
	    // arc function
	    setcolor(GREEN);
	    arc(x3,y3,start_angle3, end_angle3,radius3);
	    setcolor(GREEN);
	    arc(x1, y1, start_angle1, end_angle1, radius1);
	    setcolor(GREEN);
	    arc(x, y, start_angle, end_angle, radius);
	    setcolor(GREEN);

	    line(125,180,96,180);      //upper horizontal line
	    line(125,240,97,240);        //bottom horizontal line
	    line(150,210,185,210);
	    line(80,220,117,220);        //bottom horizontal line
	    line(80,200,117,200);        //top hori line

	    int a[5] = { 0, 0, 1, 1 };
	    int b[5] = { 0, 1, 0, 1 };
	    setcolor(BLUE);
	    settextstyle(0, 0, 2);
	    outtextxy(xe,ye, "     ******* EXNOR GATE *******");

	    cout << "\n\n\n";
	    //Display File's content

	    ifstream MyFile("xnor.txt");
	    char ch;

	    while(!MyFile.eof())
	    {
		MyFile.get (ch);
		cout<<ch;
	    }
	    MyFile.close();
	    //getch();
	    cout << "\n\n\n==================================\nLogic Circuit:";

	    cout<< "\n\n     A\n     B\n\nOutput: Q\n\n==================================\nTruth Table:\n\n\t Input | Output\n\t A | B | Q";
	    cout << "\n\t-----------";
	    //Calculate the output
	    gate(a,b,font_no);
	    cout << "\n-----------------------\nRead as A Exclusive-NOR B GIVES Q\nEquation of EXOR Gate is: Q=A exnor B";
	    cout << "\t\tPress Enter to menu";

	}


};
//End of class XNOR

//INT MAIN()
int main()
{
    clrscr();
    AND obj;
    int ch;
    //infinite while loop
    while(1)
    {

	obj.show();
	cout << "\nEnter Choice:  ";
	cin >> ch;

	switch(ch)
	{
	    case 1:
		AND obj;
		obj.mul();
		getch();
		system("cls");
		break;

	    case 2:
		OR obj1;
		obj1.add();
		getch();
		system("cls");
		break;

	    case 3:
		NOT obj2;
		obj2.not();
		getch();
		system("cls");
		break;

	    case 4:
		NAND obj3;
		obj3.mulcomp();
		getch();
		system("cls");
		break;

	    case 5:
		NOR obj4;
		obj4.addcomp();
		getch();
		system("cls");
		break;

	    case 6:
		EXOR obj5;
		obj5.exor();
		getch();
		system("cls");
		break;

	    case 7:
		EXNOR obj6;
		obj6.exnor();
		getch();
		system("cls");
		break;

	    case 8:
		clrscr();
		obj.getinfo();
		getch();
		system("cls");
		break;


	    case 9:
		int gd1=DETECT,gm1,x1=15,y1=250;
		initgraph(&gd1,&gm1,"C:\\TC\\BGI");
		int font1=  7;
		settextstyle(font1, 0, 1);
		setcolor(CYAN);
		outtextxy(x1,y1," THANK U!");
		y1=y1+30;
		outtextxy(x1,y1," Hope it was Helpful!!");
		y1=y1+60;
		outtextxy(x1,y1,"                           Press Any key to EXIT...");
		getch();
		exit(1);
		break;

	    default:
		int gd=DETECT,gm,x=15,y=250;
		initgraph(&gd,&gm,"C:\\TC\\BGI");
		int font=  7;
		settextstyle(font, 0, 2);
		setcolor(CYAN);
		outtextxy(x,y,"    Invalid Choice.");
		y=y+30;
		setcolor(LIGHTBLUE);
		outtextxy(x,y,"    Please enter a valid number!");
		setcolor(YELLOW);
		font=6;
		settextstyle(font, 0, 2);
		y=y+40;
		outtextxy(x,y,"                 Press ENTER to contiue...");
		getch();
		clrscr();

	}

    }

    getch();

    return 0;
}

//function gate with 3 args
void gate(int a[],int b[],int x)
{
    //if x==1 then it is and gate
	if(x==1)
	{
		for( i=0;i<4;i++)
		{
			int product = a[i] * b[i];
			cout <<"\n\t "<<a[i] <<" | "<< b[i] << " | "<< product;
		}
	}
	//if x==2 then it is or gate
	else if(x==2)
	{
		for (i = 0; i < 4; i++)
		{
			// using the + operator
			int or_ans=(a[i] + b[i] > 0) ? 1:0;
			cout<<"\n\t "<< a[i]<< " | "<< b[i]<< " | "<< or_ans;
		}
	}
	//if x==4 then it is nand gate
	else if(x==4)
	{
		for(i=0;i<4;i++)
		{
			int nand_ans=(a[i] == 1 && b[i] == 1) ?0:1;
			cout << "\n\t "<< a[i] <<" | "<<b[i] <<" | "<< nand_ans;
		}
	}
	//if x==5 then it is nor gate
	else if(x==5)
	{
		for (i = 0; i < 4; i++)
		{
			int nor_ans=(a[i] == 0 && b[i] == 0) ? 1:0;
			cout<<"\n\t "<< a[i]<< " | "<< b[i]<< " | "<< nor_ans;
		}
	}
	//if x==6 then it is exor gate
	else if(x==6)
	{
		for (i = 0; i < 4; i++)
		{
			int exor_ans=(a[i] ==0 && b[i]==0 || a[i] == 1 && b[i] == 1) ? 0:1;
			//ans=1;
			cout<<"\n\t "<< a[i]<< " | "<< b[i]<< " | "<< exor_ans;
		}
	}
	//if x==7 then it is exnor gate
	else if(x==7)
	{
		for ( i = 0; i < 4; i++)
		{
			int exnor_ans=(a[i] ==0 && b[i]==0 || a[i] == 1 && b[i] == 1) ? 1:0;
			//ans=1;
			cout<<"\n\t "<< a[i]<< " | "<< b[i]<< " | "<< exnor_ans;
		}                                               ,

	}
}

//Gate function with 1 args
void gate(int a[])
{
	//it is not gate
		for( i=0;i<2;i++)
		{
			int not_ans=(a[i] == 0) ? 1:0;
			cout << "\n\t "<< a[i] <<"    "<<" |  "<< not_ans;
		}
}
//END
