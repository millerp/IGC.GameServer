#ifndef GAMESECURITY_H
#define GAMESECURITY_H

struct ATTACK_SPEED
{
	int iPenaltyCount;
	DWORD64 LastAttackTime;
};

class CGameSecurity
{
public:
	CGameSecurity();
	~CGameSecurity();

	void DebugInfo(int aIndex);
	
	std::map<int,ATTACK_SPEED> m_ASData;
	CRITICAL_SECTION lpCritiASData;
}; extern CGameSecurity gGameSecurity;

#endif