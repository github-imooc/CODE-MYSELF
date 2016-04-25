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
		//64 位操作系统   
		cout << "64位操作系统" << endl;
	}
	else {
		// 32 位操作系统   
		cout << "32位操作系统" << endl;
	}
	getchar();
}