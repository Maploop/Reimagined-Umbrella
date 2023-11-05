#pragma once
#include <unordered_map>
#include <Windows.h>

class WindowsMessageMap
{
public:
	WindowsMessageMap();
	std::string operator()( DWORD msg, LPARAM lParam, WPARAM wParam ) const;
private:
	std::unordered_map<DWORD, std::string> map;
};