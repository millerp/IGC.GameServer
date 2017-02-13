#ifndef PLUGINSYSTEM_H
#define PLUGINSYSTEM_H
#pragma once

struct plugins
{
	bool active;
	int mask;
};

class CPluginSystem
{
public:
	CPluginSystem();

	~CPluginSystem();

	bool CheckPlugin(int code);
	plugins m_Data;
}; extern CPluginSystem g_IGCPlugins;


#endif