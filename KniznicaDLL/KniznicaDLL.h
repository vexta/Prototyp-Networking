// KniznicaDLL.h

#pragma once

namespace Lukas
{
	class __declspec(dllexport) KniznicaDLL
	{
	public:
		void Send();
		void Send(int cislo);
		int Get();
	};
}
