#pragma once
#include <string>

using namespace std;
class Song
{
private:
	int tsec;
	int tmin;
public:
	string name;
	Song();
	Song(string n, int m, int s);
	int ToSec();
	bool HasTheSameTime(Song s);
};

