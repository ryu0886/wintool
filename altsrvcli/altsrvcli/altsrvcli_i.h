

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0555 */
/* at Tue Jun 16 21:42:51 2020
 */
/* Compiler settings for .\altsrvcli.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 7.00.0555 
    protocol : dce , ms_ext, c_ext, robust
    error checks: stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __altsrvcli_i_h__
#define __altsrvcli_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __ITestFunc_FWD_DEFINED__
#define __ITestFunc_FWD_DEFINED__
typedef interface ITestFunc ITestFunc;
#endif 	/* __ITestFunc_FWD_DEFINED__ */


#ifndef __TestFunc_FWD_DEFINED__
#define __TestFunc_FWD_DEFINED__

#ifdef __cplusplus
typedef class TestFunc TestFunc;
#else
typedef struct TestFunc TestFunc;
#endif /* __cplusplus */

#endif 	/* __TestFunc_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __ITestFunc_INTERFACE_DEFINED__
#define __ITestFunc_INTERFACE_DEFINED__

/* interface ITestFunc */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ITestFunc;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("55A483B1-89FC-4FA2-BA0A-B34512C16948")
    ITestFunc : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE test001( 
            LONG p1,
            CHAR *p2) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE test002( 
            BSTR *p1,
            LONG p2) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE test003( 
            LONG p1,
            LONG p2,
            IUnknown **p3,
            CHAR *p4,
            IDispatch **p5) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITestFuncVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITestFunc * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITestFunc * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITestFunc * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ITestFunc * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ITestFunc * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ITestFunc * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ITestFunc * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *test001 )( 
            ITestFunc * This,
            LONG p1,
            CHAR *p2);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *test002 )( 
            ITestFunc * This,
            BSTR *p1,
            LONG p2);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *test003 )( 
            ITestFunc * This,
            LONG p1,
            LONG p2,
            IUnknown **p3,
            CHAR *p4,
            IDispatch **p5);
        
        END_INTERFACE
    } ITestFuncVtbl;

    interface ITestFunc
    {
        CONST_VTBL struct ITestFuncVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITestFunc_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITestFunc_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITestFunc_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITestFunc_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ITestFunc_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ITestFunc_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ITestFunc_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ITestFunc_test001(This,p1,p2)	\
    ( (This)->lpVtbl -> test001(This,p1,p2) ) 

#define ITestFunc_test002(This,p1,p2)	\
    ( (This)->lpVtbl -> test002(This,p1,p2) ) 

#define ITestFunc_test003(This,p1,p2,p3,p4,p5)	\
    ( (This)->lpVtbl -> test003(This,p1,p2,p3,p4,p5) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITestFunc_INTERFACE_DEFINED__ */



#ifndef __altsrvcliLib_LIBRARY_DEFINED__
#define __altsrvcliLib_LIBRARY_DEFINED__

/* library altsrvcliLib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_altsrvcliLib;

EXTERN_C const CLSID CLSID_TestFunc;

#ifdef __cplusplus

class DECLSPEC_UUID("BE3C26E1-AF4F-45A0-9674-869756027969")
TestFunc;
#endif
#endif /* __altsrvcliLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


