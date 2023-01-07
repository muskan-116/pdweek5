#include <iostream>
#include <windows.h>
using namespace std;

char getCharAtxy(short int x,short int y);
void gotoxy(int x,int y);
void erase(int x,int y);
void printPacman(int x,int y);
void printMaze();

main()
{
int Px=4;
int Py=4;
bool gameRunning=true;


system("cls");
printMaze();
printPacman(Px,Py);
while (gameRunning)
{
    if(GetAsyncKeyState(VK_LEFT))
{
char nextLocation=getCharAtxy(Px-1,Py);
   if( nextLocation==' ')
 {
   erase(Px,Py);
     Px=Px-1;
     printPacman(Px,Py);
}
}
if(GetAsyncKeyState(VK_RIGHT))
{
char nextLocation=getCharAtxy(Px+1,Py);
   if( nextLocation==' ')
 {
   erase(Px,Py);
     Px=Px+1;
     printPacman(Px,Py);
 }
 }
if(GetAsyncKeyState(VK_UP))
{
char nextLocation=getCharAtxy(Px,Py-1);
   if( nextLocation==' ')
 {
   erase(Px,Py);
     Py=Py-1;
     printPacman(Px,Py);
 }
}
if(GetAsyncKeyState(VK_DOWN))
{
char nextLocation=getCharAtxy(Px,Py+1);
   if( nextLocation==' ')
 {
   erase(Px,Py);
     Py=Py+1;
     printPacman(Px,Py);
 }
}
if(GetAsyncKeyState(VK_ESCAPE))
{
gameRunning=false;
}
Sleep(200);
}
}
void printMaze()
{
cout<<"###################################################################"<<endl;
cout<<"||.. ................................................  .........  ||"<<endl;
cout<<"||.. %%%%%%%%%%%%%%%%    ...   %%%%%%%%%%%%%% |%| ..   %%%%%%%    ||"<<endl;
cout<<"||..      |%|     |%| |%|...  |%|             |%| ..      |%|     ||"<<endl;
cout<<"||..      |%|     |%| |%|...  |%|             |%| ..      |%|     ||"<<endl;
cout<<"||..       %%%%%%%%% ..  |%|...   %%%%%%%%%%%%%%%%%  ..   %%%%%%  ||"<<endl;
cout<<"||..       |%|       ..  |%|...     ............. |%|..           ||"<<endl;
cout<<"||..       %%%%%%%%%%..  |%|...     %%%%%%%%%%%%  |%|..   %%%%%%%.||"<<endl;
cout<<"||..              |%|.              |%|......     |%|..       |%|.||"<<endl;
cout<<"||..    ......... |%|.       P      |%|......|%|     ..       |%|.||"<<endl;                                                                                                                                                                                                                                            
cout<<"||..|%| |%|%%%|%|.|%|. |%|             ......|%|     ..|%|        ||"<<endl;
cout<<"||..|%| |%|   |%|..    %%%%%%%%%%%%%   ......|%|      .|%|.       ||"<<endl;
cout<<"||..|%| |%|   |%|..           ...|%|     %%%%%%%     . |%|.       ||"<<endl;
cout<<"||..|%|           .           ...|%|             |%| ..|%|.       ||"<<endl;
cout<<"||..|%| %%%%%%%%%%%%%%        ...|%|%%%%%%%%%%%% |%| ..|%|%%%%%%  ||"<<endl;
cout<<"||...............................................|%| ...........  ||"<<endl;
cout<<"||   ............................................         ......  ||"<<endl;
cout<<"||..|%| |%|  |%|..       %%%%%%%%%%%   ......|%| |%| ..|%|.       ||"<<endl;
cout<<"||..|%| |%|  |%|..            ...|%|      %%%%%% |%| ..|%|.       ||"<<endl; 
cout<<"||..|%|          .       G    ...|%|             |%| ..|%|.       ||"<<endl;
cout<<"||..|%| %%%%%%%%%%%%%%        ...|%|%%%%%%%%%%%  |%| ..|%|%%%%%%  ||"<<endl;
cout<<"||.............................................     ............. ||"<<endl;
cout<<"||.............................................          ........ ||"<<endl; 
cout<<"####################################################################"<<endl;
}
void gotoxy(int x,int y)

{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
char getCharAtxy(short int x,short int y)
{
CHAR_INFO ci;
COORD xy={0,0};
SMALL_RECT rect={x,y,x,y};
COORD coordBufSize;
coordBufSize.X=1;
coordBufSize.Y=1;


return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci,coordBufSize,xy, &rect)? ci.Char.AsciiChar : ' ';
}
void erase(int x,int y)
{
gotoxy(x,y);
cout<<" ";
}
void printPacman(int x,int y)
{
gotoxy(x,y);
cout<<"P";
}
