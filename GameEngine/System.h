#ifndef _SYSTEM_H
#define _SYSTEM_H
#include "UObject.h"

enum SystemType {
	Sys_Window,
	Sys_Game,
	Sys_Input,
	Sys_Graphics,
	Sys_GameTimer
};

//Structs
struct SystemData {

};

class System : public UObject
{
public:
	System();
	virtual ~System();

	SystemType GetType() { return m_SystemType; }

protected:
	SystemType m_SystemType;
};

#endif