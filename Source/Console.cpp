#include "Console.h"

Console::Console(SoulParameters params) :
	SoulApplication(params) {

}

int main(int, char*[])
{
	//app params
	SoulParameters appParams;
	Console app(appParams);

	// We're not making the window yet, so just run app
	app.Run();
}
