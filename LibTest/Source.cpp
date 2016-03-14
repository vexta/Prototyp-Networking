#include "..\Komunikacny_modul\NetLib.h"

int main() 
{
	NetLib com;
	while (true) {
		com.Send();
		printf("%d\n", com.Get());
		getchar();
	}

	return 0;
}