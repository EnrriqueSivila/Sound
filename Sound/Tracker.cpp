#include "Tracker.h"
#include <iostream>

void Tracker::AddHistorical(TrackSong ts)
{
	historicalTrack.push_back(ts);
}

float Tracker::getBestReating()
{
	if (historicalTrack.size() > 0)
	{
		float sum = 0;
		for (int i = 0; i < historicalTrack.size(); i++)
		{
			sum += historicalTrack[i].raeting;
		}
		return sum / historicalTrack.size();
	}
	return 0.0f;
}

float Tracker::getNumberSongPlayed(float porcent)
{
	int counter = 0;
	for (int i = 0; i < historicalTrack.size(); i++) {
		float p = historicalTrack[i].getRaetingPorcent(trackedSong);
		if (p >= porcent)
		{
			counter++;
		}
	}
	return counter;
}

void Tracker::setSong(Song s)
{
	trackedSong = s;
}


void Tracker::CLearHistorial()
{
	historicalTrack.clear();
	cout << "Historial Limpio" << endl;
}

void Tracker::printStars()
{
	for (int i = 0; i < historicalTrack.size(); i++)
	{
		cout << "Cancion: " << trackedSong.name << " ";
		for (int j = 0; j < historicalTrack[i].raeting; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}

void Tracker::printHistorialwithReate(int reat)
{
	for (int i = 0; i < historicalTrack.size(); i++)
	{
		if (historicalTrack[i].raeting == reat)
		{
			cout << "Cancion: " << trackedSong.name << " ";
			for (int j = 0; j < historicalTrack[i].raeting; j++)
			{
				cout << "#";
			}
			cout << endl;
		}
	}
}


void Tracker::printBarPercent()
{
	for (int i = 0; i < historicalTrack.size(); i++)
	{
		float p = historicalTrack[i].getRaetingPorcent(trackedSong);
		int bar = p / 10;
		cout << "Cancion: " << trackedSong.name << " ";
		for (int j = 0; j < bar; j++)
		{
			cout << "|";
		}
		cout << endl;
	}
}


