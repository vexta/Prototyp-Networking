#include "stdafx.h"
#using "system.dll"

using namespace System;
using namespace System::Text;
using namespace System::Net;
using namespace System::Net::Sockets;


int main()
{
	//array<unsigned char>^ v = {0,0,0,0,0,0,0,0,0};
	array<unsigned char>^ v = gcnew array<unsigned char>(1000000);
	IPAddress^ address = IPAddress::Parse("127.0.0.1");
	IPEndPoint^ endPoint = gcnew IPEndPoint(address, 8888);
	Socket^ Ssocket = gcnew Socket(endPoint->AddressFamily, SocketType::Stream, ProtocolType::Tcp);
	Ssocket->Bind(endPoint);
	Ssocket->Listen(5);
	Socket^ Csocket = Ssocket->Accept();
	//while (!socket->)
	//	;

	while (1 )
	{
		//if (socket->Connected) {
			int size=Csocket->Receive(v);
			printf("Prijal si takeeeto data %d\n", size);
			//char c;
			//c = getchar();
		//}
	}
    return 0;
}

