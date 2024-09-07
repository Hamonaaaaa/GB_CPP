#ifndef PLAYER_H
#define PLAYER_H
#include <string>

using namespace std;

class Player
{
public:
	
	string Name;
	int Score;

	Player() : Name(""), Score(0) {}
	Player(string n, int s) : Name(n), Score(s) {}


};

#endif // !PLAYER_H
