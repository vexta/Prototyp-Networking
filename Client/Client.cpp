#include "stdafx.h"
#using "system.dll"

using namespace System;
using namespace System::Text;
using namespace System::Net;
using namespace System::Net::Sockets;




int main()
{
	//array<unsigned char>^ v = { 'a','a', 0 };
	array<unsigned char>^ v = gcnew array<unsigned char>(1000000);

	IPAddress^ address = IPAddress::Parse("127.0.0.1");
	IPEndPoint^ endPoint = gcnew IPEndPoint(address, 8888);
	Socket^ socket = gcnew Socket(endPoint->AddressFamily, SocketType::Stream, ProtocolType::Tcp);
	socket->Connect(endPoint);
	if (socket->Connected)
	{
		printf("HURAAAA");
	}
	else
	{
		printf("BUUUUUUU");
	}


	while (1)
	{
		int i = 0;
		for (i = 0; i < 1000000 - 1; i++)
			v[i] = 'a';
		v[i] = 0;

		socket->Send(v);
		printf("Pre pokracovanie stlac a \n");
		char c;
		c = getchar();
	}
	return 0;
}