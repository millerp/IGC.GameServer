#include "StdAfx.h"
#include "CUserStatisticsData.h"

void CUserStatisticsData::IncrementMonsterKillCount(int MonsterType)
{
	InterlockedIncrement(reinterpret_cast<long *>(&this->MonsterKillCount));

	switch(MonsterType)
	{
		case 0 : InterlockedIncrement(reinterpret_cast<long *>(&this->GoldenMonsterKillCount)); break;
		case 1 : InterlockedIncrement(reinterpret_cast<long *>(&this->BossKillCount)); break;
	}
}