#pragma once
#include "CUserStatisticsData.h"

class CUserStatistics
{
private:
	char Name[11];
	int aIndex;
public:
	CUserStatistics(char Name[11], int aIndex);
	virtual ~CUserStatistics();

	bool LoadData(CUserStatisticsData *LoadUserData);
	void SaveData();

	CUserStatisticsData *UserData;
};