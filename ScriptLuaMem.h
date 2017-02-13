#pragma once
class CScriptLuaMem
{
public:

	CScriptLuaMem();
	virtual		~CScriptLuaMem();

	bool		LoadScript(LPSTR pchFileName);

	char*		GetScript();
	bool		IsScriptLoaded();

private:
	bool		bScriptLoaded;
	char*		chScriptData;
};

