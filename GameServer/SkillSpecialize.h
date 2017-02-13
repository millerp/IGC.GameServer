#ifndef SKILLSPECIALIZE_H
#define SKILLSPECIALIZE_H

#include "user.h"
#include "MuLua.h"

#pragma once
class CSkillSpecialize
{
public:
	CSkillSpecialize(void);
	virtual ~CSkillSpecialize(void);

	void LoadScript();
	int CalcStatBonus(OBJECTSTRUCT *lpObj, int iSkill);

private:
	MULua m_Lua;
};

extern CSkillSpecialize g_SkillSpec;

#endif