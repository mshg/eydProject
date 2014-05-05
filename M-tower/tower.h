#ifndef M-tower
#define M-tower

using namespace std;

class God{

private:



};

//

class Map
{
private:
	int**map = new int*[10];
	for (int i = 0; i<20; i++)
		map[i] = new int[10];




public:
	Map();
	Map(int);

	void draw_map(int);
	void set - map(int, int, int, int);
	void get - map(int, int, int);


};

//

class Tower
{
private:
	int power;
	int damage;
	int radius;

	pair <int, int> xy_tower;

public:
	Tower();
	Tower(int, int, int);

	void draw_tower(int, int, int, int, int);
	void set - tower(int, int, int);
	void get - tower(int, int, int);

};

//

class Enemy
{
private:
	int power;
	int damage;
	pair <int, int> xy_enemy;

public:
	Enemy();
	Enemy(int, int);

	void draw_enemy(int, int, int, int);

	void move();


};



#endif




