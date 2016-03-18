// This is the main DLL file.

#include "stdafx.h"
#include "NetLib.h"
#include "KniznicaDLL.h"

public ref class Singleton
{
private:
	Singleton()
	{
	}
	Singleton(const Singleton%) { throw gcnew System::InvalidOperationException("singleton cannot be copy-constructed"); }
	static Singleton m_instance;

public:
	static property Singleton^ Instance { Singleton^ get() { return %m_instance; } }
	NetLib^ abc = gcnew NetLib();
};

void Lukas::KniznicaDLL::Send()
{
	Singleton^ a = Singleton::Instance;
	a->abc->Send();
}

void Lukas::KniznicaDLL::Send(int cislo)
{
	Singleton^ a = Singleton::Instance;
	a->abc->Send(cislo);
}


int Lukas::KniznicaDLL::Get()
{
	Singleton^ a = Singleton::Instance;
	return a->abc->Get();
	//int MeaningOfLife = 42;
	//return MeaningOfLife;
}

//int main()
//{
//	Lukas::KniznicaDLL a;
//	a.Send();
//	
//	while (true) {
//		int ab = a.Get();
//		printf("Petraaaaaaaaaaaaaaas %d", a.Get());
//		Thread::Sleep(500);
//	}
//	return 0;
//}
