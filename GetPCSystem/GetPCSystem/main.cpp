#include <iostream>
#include <windows.h>  
using namespace std;
void main()
{

	SYSTEM_INFO si;
	GetNativeSystemInfo(&si);
	if (si.wProcessorArchitecture == PROCESSOR_ARCHITECTURE_AMD64 ||
		si.wProcessorArchitecture != PROCESSOR_ARCHITECTURE_IA64)
	{
		//64 λ����ϵͳ   
		cout << "64λ����ϵͳ" << endl;
	}
	else {
		// 32 λ����ϵͳ   
		cout << "32λ����ϵͳ" << endl;
	}
	getchar();
}