#pragma once
#include "Song.h"
#include "TrackSong.h"
#include <vector>

using namespace std;	
class Tracker
{
protected:
	Song trackedSong;
	vector<TrackSong> historicalTrack;
public:
	void AddHistorical(TrackSong ts);
	float getBestReating();//me obtiene el promedio de calificiacion
	float getNumberSongPlayed(float porcent);//me devuelve la cantidad de historiaas que se han reproducido en un porcentaje esperado
	void setSong(Song s);
	void CLearHistorial();
	void printStars();
	void printHistorialwithReate(int reat);
	void printBarPercent();
};

