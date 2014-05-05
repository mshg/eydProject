#include "m-tower.h"
#include <iostream>
#include "SDL/SDL.h"
#include <SDL/SDL_gfxPrimitives.h>

SDL_Event event;

using namespace std;


map - size = 10;


Map::Map(map - lst){
	map = map - lst;

}

//

void Map::draw - map(ma = map){
	for (int i = 0; i < map - size; i++)
	{
		for (int j = 0; j < map - size; j++)
		{
			switch (map[i][j])
			case 0:	break;
			case 1:	break;
			case 2: break;
			case 3: break;

		}
	}
}

//

void Map::set - map(ma = map, i, j, x){
	ma[i][j] = x;
}

//

void Map::get - map(ma = map, i, j){
	return ma[i][j];
}

///////////////

Tower::Tower(pow, dam, rad){
	power = pow;
	damage = dam;
	radiuse = rad;
}

//

void Tower::set - tower(int, int, int){




	void get - tower(int, int, int);




	int main()
	{

		SDL_Surface* screen = SDL_SetVideoMode(1200, 600, 32, 0);



		return 0;
	}


