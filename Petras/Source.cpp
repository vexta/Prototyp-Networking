#include <string.h>
#include <windows.h>
#include <iostream>

#include "../KniznicaDLL/KniznicaDLL.h"

int main()
{
	Lukas::KniznicaDLL a;
	a.Send();
	int ab = a.Get();
	while (true) {
		a.Send(1);
		printf("%d\n", a.Get());
		Sleep(1000);
	}
	return 0;
}