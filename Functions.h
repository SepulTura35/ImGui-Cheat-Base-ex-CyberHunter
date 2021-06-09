#pragma warning(disable: 4244)
#pragma warning(disable: 4996)

#define C_Text (DT_CENTER|DT_NOCLIP)
#define L_Text (DT_LEFT|DT_NOCLIP)
#define R_Text (DT_RIGHT|DT_NOCLIP)

#define NOP 0x90

#define KEY_Z 0x5A
#define KEY_V 0x56
#define KEY_T 0x54
float ScreenCenterX;
float ScreenCenterY;
D3DVIEWPORT9 viewport;

#include <TlHelp32.h>
DWORD GetModule(LPCSTR name)
{
	HANDLE SN = CreateToolhelp32Snapshot(TH32CS_SNAPMODULE, GetCurrentProcessId());

	DWORD dwRetValue = 0x0;

	MODULEENTRY32 ME;
	ME.dwSize = sizeof(MODULEENTRY32);
	bool done = !Module32First(SN, &ME) ? true : false;

	while (!done)
	{
		if (strstr(ME.szModule, name))
		{
			dwRetValue = (DWORD)ME.modBaseAddr;
		}

		done = !Module32Next(SN, &ME) ? true : false;
	}
	CloseHandle(SN);
	return dwRetValue;
}

ImU32 MyImU32(float Col[])
{
	ImU32 col32_no_alpha = ImGui::ColorConvertFloat4ToU32(ImVec4(Col[0], Col[1], Col[2], Col[3]));
	return col32_no_alpha;
}

namespace Helper
{
	// custom helper function..
	void WriteTextToFile(std::string str)
	{
		std::ofstream myfile;
		myfile.open("lithe.log");
		myfile << (str + "\n").data();
		myfile.close();
	}
}
