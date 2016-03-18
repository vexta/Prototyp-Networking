#include "NetLib.h"
#include "NetLibNoCLR.h"

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

void NetLibNoCLR::Send()
{
	Singleton^ a = Singleton::Instance;
	a->abc->Send();
}

int NetLibNoCLR::Get()
{
	Singleton^ a = Singleton::Instance;
	a->abc->Get();
	int MeaningOfLife = 42;
	return MeaningOfLife;
}
