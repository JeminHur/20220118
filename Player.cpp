#include "Player.h"

void Player::SetHP(int NewHP)
{
	if (NewHP >= 0)
	{
		HP = NewHP;
	}
}

int Player::GetHP() const
{
	return HP;
}

void Player::Move()
{
}

void Player::Collect()
{
}

void Player::Run()
{
}

void Player::Attack()
{
}
