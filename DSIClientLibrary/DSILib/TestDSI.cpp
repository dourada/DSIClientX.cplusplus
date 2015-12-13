#include "StdAfx.h"
#include "TestDSI.h"

#include <iostream>
#include <windows.h>
#include <cassert>

#import "C:\\Windows\\DataCapControls\\dsiclientx.ocx" named_guids
using namespace DSICLIENTXLib;

TestDSI::TestDSI(void)
{
}


TestDSI::~TestDSI(void)
{
}

void TestDSI::Process(void)
{
  CoInitialize(0) ;
  {
	  _DDSICLientX* dsi = 0;

      HRESULT hr = CoCreateInstance( CLSID_DSICLientX,
                    0, 
                    CLSCTX_ALL,
                    DIID__DDSICLientX, // interface uuid 
                    reinterpret_cast<void**>(&dsi) ) ;
      assert( SUCCEEDED(hr) ) ;
      
      
	  _bstr_t resp = dsi->ServerIPConfig("x1.mercurycert.net",1);
      assert( SUCCEEDED(hr) ) ;
      std::cout << "Processing using DSIClient: " << resp << '\n';
      
      dsi->Release() ;
  }
  CoUninitialize() ;

}
