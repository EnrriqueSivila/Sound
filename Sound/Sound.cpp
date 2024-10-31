#include <iostream>
#include "Song.h"
#include "TrackSong.h"
#include "Tracker.h"

using namespace std;	
int main()
{
	Song s1("Cancion A", 3, 30);
	Song s2("Cancion B", 2, 30);
	Song s3("Cancion C", 4, 30);

		
	Tracker t1;
	t1.setSong(s1);
	t1.AddHistorical(TrackSong(3, 30, 5));
	t1.AddHistorical(TrackSong(2, 30, 4));
	t1.AddHistorical(TrackSong(4, 30, 10));
	t1.AddHistorical(TrackSong(3, 30, 5));

	float np = t1.getNumberSongPlayed(80);
	cout << "Reproducciones Validas: " << np << endl;

	float mp = t1.getBestReating();
	cout << "Promedio de las Calificaciones: " << mp << endl;

	t1.printStars();
	t1.printBarPercent();
	t1.printHistorialwithReate(10);

	return 0;
}
