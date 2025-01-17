#ifndef  _DELETEMACRO_H
#define _DELETEMACRO_H

//Defines
#define SafeRealease(x) if(x) { x->Release(); x = nullptr; } //Macro for releasing COM object
#define SafeDelete(x) if(x) { delete x; x = nullptr; } //Macro for deleting objects

#endif // ! _DELETEMACRO_H
