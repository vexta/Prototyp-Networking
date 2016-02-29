#include "stdafx.h"
#using "system.dll"

using namespace System;
using namespace System::Text;
using namespace System::Net;
using namespace System::Net::Sockets;


int main(int argc, char** argv)
{
	//array<unsigned char>^ v = {0,0,0,0,0,0,0,0,0};
	array<unsigned char>^ v = gcnew array<unsigned char>(1000000);
	
	IPAddress^ address;
	
	if (argc == 2) {
		String^ ip = gcnew String(argv[1]);
		address = IPAddress::Parse(ip);
		printf("%s\n", argv[1]);
	}
	else {
		address = IPAddress::Parse("127.0.0.1");
		printf("Using 127.0.0.1\n");
	}
	
	
	
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

