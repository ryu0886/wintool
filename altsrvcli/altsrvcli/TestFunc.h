// TestFunc.h : Declaration of the CTestFunc

#pragma once
#include "resource.h"       // main symbols

#include "altsrvcli_i.h"


#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif



// CTestFunc

class ATL_NO_VTABLE CTestFunc :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CTestFunc, &CLSID_TestFunc>,
	public IDispatchImpl<ITestFunc, &IID_ITestFunc, &LIBID_altsrvcliLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CTestFunc()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_TESTFUNC)


BEGIN_COM_MAP(CTestFunc)
	COM_INTERFACE_ENTRY(ITestFunc)
	COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()



	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		return S_OK;
	}

	void FinalRelease()
	{
	}

public:

    STDMETHOD(test001)(LONG p1, CHAR* p2);
    STDMETHOD(test002)(BSTR* p1, LONG p2);
    STDMETHOD(test003)(LONG p1, LONG p2, IUnknown** p3, CHAR* p4, IDispatch** p5);
};

OBJECT_ENTRY_AUTO(__uuidof(TestFunc), CTestFunc)
