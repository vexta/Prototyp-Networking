//// todo nacitanie ci som server alebo client zo suboru spolu s IP adresov ciela
////spravit aby sme skopirovali potrebnee dll z .net frameowku alebo nieco
//
#include "stdafx.h"
//#using "system.dll"
//
//using namespace System;
//using namespace System::Text;
//using namespace System::Net;
//using namespace System::Net::Sockets;
//
//void ba()
//{
//	printf("using 127.0.0.1\n");
//}
//
//int main(int argc, char** argv)
//{
//	array<unsigned char>^ v = {0,0,0,0,0,0,0,0,0};
//	array<unsigned char>^ v = gcnew array<unsigned char>(1000000);
//	
//	IPAddress^ address;
//	
//	if (argc == 2) {
//		String^ ip = gcnew String(argv[1]);
//		address = IPAddress::Parse(ip);
//		printf("%s\n", argv[1]);
//	}
//	else {
//		address = IPAddress::Parse("127.0.0.1");
//		printf("using 127.0.0.1\n");
//	}
//
//	address = IPAddress::Parse(System::Configuration::ConfigurationSettings::AppSettings["IPAddr"]);
//	address = IPAddress::Any;
//		
//	IPEndPoint^ endpoint = gcnew IPEndPoint(address, 8888);
//	Socket^ ssocket = gcnew Socket(endpoint->AddressFamily, SocketType::Stream, ProtocolType::Tcp);
//	ssocket->Bind(endpoint);
//	ssocket->Listen(5);
//	Socket^ csocket = ssocket->Accept();
//
//
//	while (1 )
//	{
//		if (ssocket->Connected) {
//			int size=csocket->Receive(v);
//			printf("prijal si takeeeto data %d\n", size);
//			char c;
//			c = getchar();
//		}
//	}
//    return 0;
//}