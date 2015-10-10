#include <iostream>
#include <Windows.h>
#include <cstdio>
using namespace std;

//-----------------------------------------------------
// Color definition
#define		COL_BLACK		0x00
#define		COL_DARK_BLUE		0x01
#define		COL_DARK_GREEN		0x02
#define		COL_DARK_CYAN		0x03
#define		COL_DARK_RED		0x04
#define		COL_DARK_VIOLET		0x05
#define		COL_DARK_YELLOW		0x06
#define		COL_GRAY		0x07
#define		COL_LIGHT_GRAY		0x08
#define		COL_BLUE		0x09
#define		COL_GREEN		0x0a
#define		COL_CYAN		0x0b
#define		COL_RED			0x0c
#define		COL_VIOLET		0x0d
#define		COL_YELLOW		0x0e
#define		COL_WHITE		0x0f
#define		COL_INTENSITY		0x08
#define		COL_RED_MASK		0x04
#define		COL_GREEN_MASK		0x02
#define		COL_BLUE_MASK		0x01

// set color
void setColor(int col) {

	HANDLE hCons = GetStdHandle( STD_OUTPUT_HANDLE );
	WORD attr = 0;
	if ( col & COL_INTENSITY )
		attr |= FOREGROUND_INTENSITY;
	if ( col & COL_RED_MASK )
		attr |= FOREGROUND_RED;
	if ( col & COL_GREEN_MASK )
		attr |= FOREGROUND_GREEN;
	if ( col & COL_BLUE_MASK )
		attr |= FOREGROUND_BLUE;
	SetConsoleTextAttribute(hCons, attr);
}
void setColor(int col) {

	HANDLE hCons = GetStdHandle( STD_OUTPUT_HANDLE );
	WORD attr = 0;
	if ( fg & COL_INTENSITY )
		attr |= FOREGROUND_INTENSITY;
	if ( fg & COL_RED_MASK )
		attr |= FOREGROUND_RED;
	if ( fg & COL_GREEN_MASK )
		attr |= FOREGROUND_GREEN;
	if ( fg & COL_BLUE_MASK )
		attr |= FOREGROUND_BLUE;
	if ( bg & COL_INTENSITY )
		attr |= FOREGROUND_INTENSITY;
	if ( bg & COL_RED_MASK )
		attr |= FOREGROUND_RED;
	if ( bg & COL_GREEN_MASK )
		attr |= FOREGROUND_GREEN;
	if ( bg & COL_BLUE_MASK )
		attr |= FOREGROUND_BLUE;
	SetConsoleTextAttribute(hCons, attr);
}
int main() {

#if	0
	setColor(COL_BLACK, COL_LIGHT_GRAY);
	cout << "hoge  hoge\n";
	setColor(COL_YELLOW);
	cout << "hoge  hoge\n";
#endif
	setColor(COL_WHITE);
	cout << "white\t";
	setColor(COL_CYAN);
	cout << "cyan\t";
	setColor(COL_YELLOW);
	cout << "yellow\t";
	setColor(COL_VIOLET);
	cout << "violet\t";
	setColor(COL_GREEN);
	cout << "green\t";
	setColor(COL_RED);
	cout << "red\t";
	setColor(COL_BLUE);
	cout << "blue\t";
	cout << "\n";

	setColor(COL_WHITE, COL_BLACK);
	cout << "BG:white\t";
	setColor(COL_WHITE, COL_BLACK);
	cout << "white\t";
	setColor(COL_CYAN, COL_BLACK);
	cout << "cyan\t";
	setColor(COL_YELLOW, COL_BLACK);
	cout << "yellow\t";
	setColor(COL_VIOLET, COL_BLACK);
	cout << "violet\t";
	setColor(COL_GREEN, COL_BLACK);
	cout << "green\t";
	setColor(COL_RED, COL_BLACK);
	cout << "red\t";
	setColor(COL_BLUE, COL_BLACK);
	cout << "blue\t";
	cout << "\n";
	
	setColor(COL_WHITE, COL_BLACK);
	cout << "BG:gray\t";
	setColor(COL_WHITE, COL_GRAY);
	cout << "white\t";
	setColor(COL_CYAN, COL_GRAY);
	cout << "cyan\t";
	setColor(COL_YELLOW, COL_GRAY);
	cout << "yellow\t";
	setColor(COL_VIOLET, COL_GRAY);
	cout << "violet\t";
	setColor(COL_GREEN, COL_GRAY);
	cout << "green\t";
	setColor(COL_RED, COL_GRAY);
	cout << "red\t";
	setColor(COL_BLUE, COL_GRAY);
	cout << "blue\t";
	cout << "\n";

	setColor(COL_WHITE, COL_BLACK);
	cout << "BG:light-gray\t";
	setColor(COL_WHITE, COL_LIGHT_GRAY);
	cout << "white\t";
	setColor(COL_CYAN, COL_LIGHT_GRAY);
	cout << "cyan\t";
	setColor(COL_YELLOW, COL_LIGHT_GRAY);
	cout << "yellow\t";
	setColor(COL_VIOLET, COL_LIGHT_GRAY);
	cout << "violet\t";
	setColor(COL_GREEN, COL_LIGHT_GRAY);
	cout << "green\t";
	setColor(COL_RED, COL_LIGHT_GRAY);
	cout << "red\t";
	setColor(COL_BLUE, COL_LIGHT_GRAY);
	cout << "blue\t";
	cout << "\n";

	setColor(COL_WHITE, COL_BLACK);
	cout << "BG:dark-yellow\t";
	setColor(COL_WHITE, COL_DARK_YELLOW);
	cout << "white\t";
	setColor(COL_CYAN, COL_DARK_YELLOW);
	cout << "cyan\t";
	setColor(COL_YELLOW, COL_DARK_YELLOW);
	cout << "yellow\t";
	setColor(COL_VIOLET, COL_DARK_YELLOW);
	cout << "violet\t";
	setColor(COL_GREEN, COL_DARK_YELLOW);
	cout << "green\t";
	setColor(COL_RED, COL_DARK_YELLOW);
	cout << "red\t";
	setColor(COL_BLUE, COL_DARK_YELLOW);
	cout << "blue\t";
	cout << "\n";

	setColor(COL_WHITE, COL_BLACK);
	cout << "BG:dark-blue\t";
	setColor(COL_WHITE, COL_DARK_BLUE);
	cout << "white\t";
	setColor(COL_CYAN, COL_DARK_BLUE);
	cout << "cyan\t";
	setColor(COL_YELLOW, COL_DARK_BLUE);
	cout << "yellow\t";
	setColor(COL_VIOLET, COL_DARK_BLUE);
	cout << "violet\t";
	setColor(COL_GREEN, COL_DARK_BLUE);
	cout << "green\t";
	setColor(COL_RED, COL_DARK_BLUE);
	cout << "red\t";
	setColor(COL_BLUE, COL_DARK_BLUE);
	cout << "blue\t";
	cout << "\n";

	setColor(COL_WHITE, COL_BLACK);
	cout << "BG:cyan\t";
	setColor(COL_WHITE, COL_DARK_CYAN);
	cout << "white\t";
	setColor(COL_CYAN, COL_DARK_CYAN);
	cout << "cyan\t";
	setColor(COL_YELLOW, COL_DARK_CYAN);
	cout << "yellow\t";
	setColor(COL_VIOLET, COL_DARK_CYAN);
	cout << "violet\t";
	setColor(COL_GREEN, COL_DARK_CYAN);
	cout << "green\t";
	setColor(COL_RED, COL_DARK_CYAN);
	cout << "red\t";
	setColor(COL_BLUE, COL_DARK_CYAN);
	cout << "blue\t";
	cout << "\n";

	getChar();
	return 0;
}
