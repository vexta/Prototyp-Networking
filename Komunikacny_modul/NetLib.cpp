#include "stdafx.h"
#include "NetLib.h"

/*auto main() -> int {
}*/

void NetLib::Init() {
	IPAddress^ address;

	address = IPAddress::Parse("127.0.0.1");

	IPEndPoint^ endPoint = gcnew IPEndPoint(address, 8888);
	lsocket = gcnew Socket(endPoint->AddressFamily, SocketType::Stream, ProtocolType::Tcp);
	lsocket->Connect(endPoint);
	if (lsocket->Connected) {
		printf("Conncetion succesful.\n");
	}
	else {
		printf("Conncetion UNSUCCESFULL.\n");
	}
}

void NetLib::Listen() {
	IPAddress^ address;
	address = IPAddress::Any;

	//address = IPAddress::Parse("127.0.0.1"); //System::Configuration::ConfigurationSettings::AppSettings["IPAddr"]); //address = IPAddress::Parse("10.62.12.251");
	
	IPEndPoint^ endpoint = gcnew IPEndPoint(address, 8888);
	ssocket = gcnew Socket(endpoint->AddressFamily, SocketType::Stream, ProtocolType::Tcp);
	ssocket->Bind(endpoint);
	ssocket->Listen(5);
	csocket = ssocket->Accept();

	while (1 && !ExitThread) {
		if (csocket->Connected) {
			size = csocket->Receive(buffer);
			printf("Velkost prijatych dat[b]: %d\n", size);
		}
	}
}

NetLib::NetLib() {
	ExitThread = false;
	//ip = nullptr;
	ssocket = nullptr;
	csocket = nullptr;

	thread = gcnew Thread(gcnew ThreadStart(this, &NetLib::Listen));
	thread->Start();

	Init();

	//while (1 == 1) {
		printf("Main\n");
	//	Send();
	//	thread->Sleep(1000);
	//}
}

NetLib::~NetLib() {
	ExitThread = true;
	thread->Join();
}

void NetLib::Send() {
	int i = 0;
	for (i = 0; i < 1000000 - 1; i++)
		buffer[i] = 'a';
	buffer[i] = 0;

	lsocket->Send(buffer);
}

int NetLib::Get() {
	int var;
	var = size;
	size = 0;
	
	return var;
}