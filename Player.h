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
		cout << "�÷��̾� ����" << endl;
	}
	~Player()
	{
		cout << "�÷��̾� �����" << endl;
	}
	void SetHP(int NewHP);
	int GetHP() const;
	void Move();
	void Collect();
	void Run();
	void Attack();

};

