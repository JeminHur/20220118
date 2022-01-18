#pragma once
#include <iostream>

using namespace std;

class Player
{
private:
	int HP;
	int MP;
	int Gold;

public:
	Player() 
	{
		cout << "플레이어 생성" << endl;
	}
	~Player()
	{
		cout << "플레이어 사라짐" << endl;
	}
	void SetHP(int NewHP);
	int GetHP() const;
	void Move();
	void Collect();
	void Run();
	void Attack();

};

