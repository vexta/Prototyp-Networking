//#include <string.h>
#include "stdafx.h"
//#using   "system.dll"
//
//#include <iostream>
////#include <thread>
////#include <pthread>
//
//
////Thread^ t = gcnew Thread(
////	gcnew ThreadStart()
////	
////	)
//
//
////using namespace system;
////using namespace system::text;
////using namespace system::net;
////using namespace system::net::sockets;
////using namespace system::threading;
////
////void listen() {
////	while (1 == 1) {
////		printf("listen\n");
////		thread::sleep(100);
////	}
////}
////
////
////int main() {
////	thread^ t = gcnew thread(gcnew threadstart(listen));
////	t->start();
////
////	while (1 == 1) {
////		printf("maine\n");
////		t->sleep(100);
////	}
////	t->join();
////}
//
//
//void Listen(int argc, char** argv) {
//	//array<unsigned char>^ v = { 'a','a', 0 };
//	array<unsigned char>^ v = gcnew array<unsigned char>(1000000);
//	IPAddress^ address;
//
//	while (1 == 1) {
//		printf("BAAAAAAAAAAAAA\n");
//	}
//
//	if (argc == 2) {
//		String^ ip = gcnew String(argv[1]);
//		address = IPAddress::Parse(ip);
//		printf("%s\n", argv[1]);
//	}
//	else {
//		address = IPAddress::Parse("127.0.0.1");
//		printf("Using 127.0.0.1\n");
//	}
//
//	IPEndPoint^ endPoint = gcnew IPEndPoint(address, 8888);
//	Socket^ socket = gcnew Socket(endPoint->AddressFamily, SocketType::Stream, ProtocolType::Tcp);
//	socket->Connect(endPoint);
//	if (socket->Connected) {
//		printf("HURAAAA\n");
//	}
//	else {
//		printf("BUUUUUUU\n");
//	}
//
//	while (1) {
//		int i = 0;
//		for (i = 0; i < 1000000 - 1; i++)
//			v[i] = 'a';
//		v[i] = 0;
//
//		socket->Send(v);
//		printf("Pre pokracovanie stlac a \n");
//		char c;
//		c = getchar();
//	}
//}
//
//int main(int argc, char** argv) {
//	//std::thread t1(Listen,argc,argv);
//	while (1 == 1) {
//		printf("Thread main\n");
//	}
//	//t1.join();
//	return 0;
//}
