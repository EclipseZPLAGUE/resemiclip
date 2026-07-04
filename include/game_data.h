#ifndef _INCLUDE_GAME_DATA_H_
#define _INCLUDE_GAME_DATA_H_

class CGameData
{

public:

	void Init();
	void SetMaxClients(int num)				{ MaxClients = num; }
	void SetMaxEntities(int num)			{ MaxEntities = num; }
	void SetMaxClientEdict(edict_t *pMax)	{ m_pMaxClientEdict = pMax; }
	void SetMaxEntityEdict(edict_t *pMax)	{ m_pMaxEntityEdict = pMax; }
	void SetStartEdict(edict_t *pStart)		{ m_pStartEdict = pStart; }
	void SetStartEnt(edict_t *pEnt)			{ m_pStartEnt = pEnt; }

	int GetMaxClients() const				{ return MaxClients; }
	int GetMaxEntities() const				{ return MaxEntities; }
	edict_t *GetMaxClientEdict() const		{ return m_pMaxClientEdict; }
	edict_t *GetMaxEntityEdict() const		{ return m_pMaxEntityEdict; }
	edict_t *GetStartEnt() const			{ return m_pStartEnt; }
	edict_t *GetStartEdict() const			{ return m_pStartEdict; }

private:

	edict_t *m_pStartEdict;
	edict_t *m_pStartEnt;
	edict_t *m_pMaxClientEdict;
	edict_t *m_pMaxEntityEdict;
	int MaxClients;
	int MaxEntities;

};

extern CGameData g_GameData;

#endif //_INCLUDE_GAME_DATA_H_
