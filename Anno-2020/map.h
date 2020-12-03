#ifndef MAP_H
#define MAP_H
#include <vector>
#include <Qt>
#include <QString>

class Tile{
private:
	//TODO: Replace int with the appropiate class, once made
	int* building;
	int* unit;
public:
	Tile();
	QString getDisplay();
};

class Map{
private:
	std::vector<std::vector<Tile*>> mapVector;
public:
	Map(int);
	Tile* getTile(int,int);
};

#endif // MAP_H