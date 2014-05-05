#ifndef M_tower
#define M_tower

using namespace std;

//class God{
//
//private:
//
//
//
//};

//
const int map_size = 10;
	int map[map_size][map_size] = { 
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
		{1, 1, 1, 1, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 1, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 1, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 1, 1, 1, 1, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 1, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 1, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 1, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 1, 1, 1, 1}};
	
//

//class Tower
//{
//private:
//	int power;
//	int damage;
//	int radiuse;
//
//	pair <int, int> xy_tower;
//
//public:
//	Tower();
//	Tower(int, int, int);
//
//	void draw_tower(int, int, int, int, int);
//	void set_tower(int, int, int);
//	void get_tower(int, int, int);
//
//};

//

class Enemy
{
private:
	int power;
	int damage;
	int xy[2];

public:
	Enemy();
	Enemy(int, int);
	//Enemy(int, int);

	//void draw_enemy(int, int, int, int);
	void set_xy(int, int);
	int get_xy1();
	int get_xy2();
	void move();


};



#endif




