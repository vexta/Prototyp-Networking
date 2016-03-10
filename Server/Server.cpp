// todo nacitanie ci som server alebo client zo suboru spolu s IP adresov ciela


#include "stdafx.h"
#using "system.dll"

using namespace System;
using namespace System::Text;
using namespace System::Net;
using namespace System::Net::Sockets;

//void Ba()
//{
//	printf("using 127.0.0.1\n");
//}

//int main(int argc, char** argv)
//{
//	//array<unsigned char>^ v = {0,0,0,0,0,0,0,0,0};
//	array<unsigned char>^ v = gcnew array<unsigned char>(1000000);
//	
//	ipaddress^ address;
//	
//	if (argc == 2) {
//		string^ ip = gcnew string(argv[1]);
//		address = ipaddress::parse(ip);
//		printf("%s\n", argv[1]);
//	}
//	else {
//		address = ipaddress::parse("127.0.0.1");
//		printf("using 127.0.0.1\n");
//	}
//
//	//address = ipaddress::parse("10.62.12.251");
//	address = ipaddress::any;
//		
//	ipendpoint^ endpoint = gcnew ipendpoint(address, 8888);
//	socket^ ssocket = gcnew socket(endpoint->addressfamily, sockettype::stream, protocoltype::tcp);
//	ssocket->bind(endpoint);
//	ssocket->listen(5);
//	socket^ csocket = ssocket->accept();
//	//while (!socket->)
//	//	;
//
//	while (1 )
//	{
//		//if (socket->connected) {
//			int size=csocket->receive(v);
//			printf("prijal si takeeeto data %d\n", size);
//			//char c;
//			//c = getchar();
//		//}
//	}
//    return 0;
//}