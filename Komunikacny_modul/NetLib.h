#pragma once

#include "stdafx.h"
#include <string>
#include <iostream>
#using   "system.dll"

using namespace System;
using namespace System::Text;
using namespace System::Net;
using namespace System::Net::Sockets;
using namespace System::Threading;

ref class NetLib {
public:
	NetLib();
	~NetLib();
	void Init(void);
	void Send(void);
	int Get(void);
private:
	array<unsigned char>^ buffer = gcnew array<unsigned char>(1000000);

	Thread^ thread;
	Boolean ExitThread = false;
	Socket^ ssocket;
	Socket^ csocket;
	
	Socket^ lsocket;


	Boolean IsServer;
	IPAddress^ ip;
	int size;

	void Listen(void);
};