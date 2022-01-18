#pragma once
class Player
{
private:
	int HP;
	int MP;
	int Gold;

public:
	void SetHP(int NewHP);
	int GetHP() const;
	void Move();
	void Collect();
	void Run();
	void Attack();

};

