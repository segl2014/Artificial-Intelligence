//Ray T
//Artificial Intelligence
//8 Puzzle Program
//Part 1

#include <iostream>
#include <queue>
#include <iomanip>
#include <string>

using namespace std;
using std :: cout;
using std :: endl;
using std :: cin;

int x, y, result;
int box1, box2, box3, box4, box5, box6, box7, box8, box9;
int box [3][3];

void setArray ()
{
if (box [0][0] == 0)
{
x=0;
y=0;
}

if (box [0][1] == 0)
{
x=0;
y=1;
}

if (box [0][2] == 0)
{
x=0;
y=2;
}

if (box [1][0] == 0)
{
x=1;
y=0;
}

if (box [1][1] == 0)
{
x=1;
y=1;
}

if (box [1][2] == 0)
{
x=1;
y=2;
}

if (box [2][0] == 0)
{
x=2;
y=0;
}

if (box [2][1] == 0)
{
x=2;
y=1;
}

if (box [2][2] == 0)
{
x=2;
y=2;
}

for (int i = 0; i < 3; ++i)
for (int j = 0; j < 3; ++j)


void take ()

box [x][y];
}

void showpuzzle ()
{
cout << " -----------" << endl;
cout << " | " << box1 << " | " << box2 << " | " << box3 << " | " << endl;
cout << " -----------" << endl;
cout << " | " << box4 << " | " << box5 << " | " << box6 << " | " << endl;
cout << " -----------" << endl;
cout << " | " << box7 << " | " << box8 << " | " << box9 << " | " << endl;
cout << " -----------" << endl;
}

void showupdatedpuzzle ()
{
cout << " -----------" << endl;
cout << " | " << box [0][0] << " | " << box [0][1] << " | " << box [0][2] << " | " << endl;
cout << " -----------" << endl;
cout << " | " << box [1][0] << " | " << box [1][1] << " | " << box [1][2] << " | " << endl;
cout << " -----------" << endl;
cout << " | " << box [2][0] << " | " << box [2][1] << " | " << box [2][2] << " | " << endl;
cout << " -----------" << endl;
}

void up ()
{
setArray();
take ();
box [x][y+1];
result = box [x][y+1];
showupdatedpuzzle ();
}

void down ()
{
setArray();
take ();
box [x][y-1];
result = box [x][y-1];
}

void left ()
{
setArray();
take();
box [x-1][y];
result = box [x-1] [y];
}

void right ()
{
setArray();
take();
box [x+1][y];
result = box [x+1][y];
}

int main ()
{
cout << " Welcome to the 8 puzzle solver" << endl;
cout << " Please enter the values for the 3x3 puzzle" << endl;
cout << " All values must be between 0 and 8, where 0 represents a blank" << endl;
cout << " Enter the value of column 1 row 1" << endl;
cin >> box1;
cout << " Enter the value of column 1 row 2" << endl;
cin >> box2;
cout << " Enter the value of column 1 row 3" << endl;
cin >> box3;
cout << " Enter the value of column 2 row 1" << endl;
cin >> box4;
cout << " Enter the value of column 2 row 2" << endl;
cin >> box5;
cout << " Enter the value of column 2 row 3" << endl;
cin >> box6;
cout << " Enter the value of column 3 row 1" << endl;
cin >> box7;
cout << " Enter the value of column 3 row 2" << endl;
cin >> box8;
cout << " Enter the value of column 3 row 3" << endl;
cin >> box9;
cout << " Thanks. Below is the initial puzzle configuration" << endl;
showpuzzle();

box [0][0] = box1;
box [0][1] = box2;
box [0][2] = box3;
box [1][0] = box4;
box [1][1] = box5;
box [1][2] = box6;
box [2][0] = box7;
box [2][1] = box8;
box [2][2] = box9;

char choice;
cout << "How would you like to move the blank? (select #)" << endl;
cout << "1: Up" << endl;
cout << "2: Down" << endl;
cout << "3: Left" << endl;
cout << "4: Right" << endl;
cin>> choice; cout<<endl;
switch (choice)
{
case '1': up(); break;
case '2': down(); break;
case '3': left (); break;
case '4': right (); break;
}

return 0;
}
