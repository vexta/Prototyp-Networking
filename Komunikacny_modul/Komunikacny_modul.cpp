#include <string.h>
#include "stdafx.h"
#include <iostream>

#using   "system.dll"

#include "NetLib.h"

using namespace System::Threading;

int main(array<System::String ^> ^args)
{
	NetLib com;
	while (true) {
		com.Send();
		printf("%d\n", com.Get());
		Thread::Sleep(500);
	}
	return 0;
}