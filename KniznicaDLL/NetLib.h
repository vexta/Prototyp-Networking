#pragma once

#include <string>
#include <iostream>
#using   "system.dll"

#define BUF_LEN 1000000

using namespace System;
using namespace System::Text;
using namespace System::Net;
using namespace System::Net::Sockets;
using namespace System::Threading;

public ref class NetLib {
public:
	NetLib();
	~NetLib();
	void Send();
	void Send(int cislo); //uint8_t cislo[]
	//int Get();
	unsigned char Get();
private:
	array<unsigned char>^ send_buffer = gcnew array<unsigned char>(BUF_LEN);
	array<unsigned char>^ recieve_buffer = gcnew array<unsigned char>(BUF_LEN);

	Thread^ thread;
	Boolean ExitThread = false;
	Socket^ ssocket;
	Socket^ csocket;

	Socket^ lsocket;

	int counter;

	Boolean IsServer;
	IPAddress^ ip;
	int size;

	void Listen();
	void Init();
};