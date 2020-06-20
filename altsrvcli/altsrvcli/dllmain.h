// dllmain.h : Declaration of module class.

class CaltsrvcliModule : public CAtlDllModuleT< CaltsrvcliModule >
{
public :
	DECLARE_LIBID(LIBID_altsrvcliLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_ALTSRVCLI, "{D4C320BC-0263-4ABD-B210-022EE489DFC6}")

    int testfunc(int p1, int p2)
    {
        return 0;
    }
};

extern class CaltsrvcliModule _AtlModule;
