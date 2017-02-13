#pragma once

class CUserStatisticsData
{
public:
	void IncrementMonsterKillCount(int MonsterType);

public:
	int GoldenMonsterKillCount;
	int BossKillCount;
	int MonsterKillCount;
};