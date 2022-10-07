#ifndef SNAKE_H
#define SNAKE_H

#include<windows.h>
#define WIDTH 50
#define HEIGHT 25
#include<vector>
using namespace std;
class Snake
{
	private:
		COORD pos;
		int len;
		int vel;
		char direction;
		vector<COORD> body;
		
	public:
		Snake(COORD pos,int vel);
		void change_dir(char dir);
		void move_snake();
		COORD get_Pos();
		vector<COORD> get_body();
		bool eaten(COORD food_pos);
		void grow();
		bool collided();
};
#endif