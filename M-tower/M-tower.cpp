#include "m-tower.h"
#include <iostream>
#include "SDL.h"
#include <SDL_gfxPrimitives.h>

using namespace std;

///////////////

////Tower::Tower(int pow,int dam,int rad){
//	power = pow;
//	damage = dam;
//	radiuse = rad;
//}

//

//void Tower::set_tower(int, int, int){




//void get_tower(int, int, int);

/////////


Enemy::Enemy(int x,int y){

	xy[0] = x;
	xy[1] = y;

}

void Enemy::set_xy(int x, int y)
{
	xy[0] = x;
	xy[1]= y;
}

int Enemy::get_xy1()
{
	return xy[0];
}

int Enemy::get_xy2()
{
	return xy[1];
}


void Enemy :: move(){
	map[get_xy1()][get_xy2()] = 2;
	if (map[get_xy1() + 1][get_xy2()] == 1)
	{
		map[get_xy1()][get_xy2()] = 1;
		set_xy(get_xy1() + 1, get_xy2());
		
	}
	if (map[get_xy1()][get_xy2() + 1] == 1)
	{
		map[get_xy1()][get_xy2()] = 1;
		set_xy(get_xy1() , get_xy2()+1);
		
	}


}






/*This source code copyrighted by Lazy Foo' Productions (2004-2013)
and may not be redistributed without written permission.*/

//Include SDL functions and datatypes
int main()
{
	//The images
	SDL_Surface* screen = NULL;

	//Start SDL
	SDL_Init(SDL_INIT_EVERYTHING);

	//Set up screen
	screen = SDL_SetVideoMode(600,600, 32, SDL_SWSURFACE);
	Enemy enemy1;
	Enemy enemy2;
	Enemy enemy3;
	Enemy enemy4;
	Enemy enemy5;

	while (true)
	{


		for (int i = 0; i < map_size; i++)
		{
			for (int j = 0; j < map_size; j++)
			{
				switch (map[i][j])
				{
				case 0:	boxRGBA(screen, i * 60, j * 60, i * 60 + 60, j * 60 + 60, 0, 255, 0, 255); break;
				case 1:	boxRGBA(screen, i * 60, j * 60, i * 60 + 60, j * 60 + 60, 170, 170, 0, 255); break;
				case 2: filledEllipseRGBA(screen, i * 60+30, j * 60+30, 30, 30, 255, 0, 0, 255); break;
				case 3: break;
				}
			}
		}


		//Update Screen
		SDL_Flip(screen);
		SDL_Delay(100);
		enemy1.move();
	}
	//Pause
	SDL_Delay(2000);

	//Free the loaded image
	

	//Quit SDL
	SDL_Quit();

	return 0;
}
