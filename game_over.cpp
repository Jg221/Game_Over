// game_over.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	int points = 0;
	cout << "Game Over!\n";
	double a = 7.0;
	int b = 3;
	cout << "7/3=" << a / b << endl;
	int score = 4294967295;
	score++;
	cout << score<<endl;
	if (true) 
	{
		cout << "yay" << endl;
	}
	if (points == 0) 
	{
		cout << "Youre Rubbish\n";
	}
	else if (points <= 2000) 
	{
		cout << "meh\n";
	}
	else if (points <= 3000) 
	{
		cout << "not bad\n";
	}
	else if (points <= 4000) 
	{
		cout << "impressive";
	}
	else {
		cout << "youre the man";
	}
    return 0;
}

