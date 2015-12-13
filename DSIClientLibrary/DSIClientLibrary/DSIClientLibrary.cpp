// DSIClientLibrary.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "../DSILib/TestDSI.h"
#include <iostream>

int _tmain(int argc, _TCHAR* argv[])
{
	TestDSI* dsi = new TestDSI();
	dsi->Process();
	dsi = NULL;

	system ("pause");

	return 0;
}

