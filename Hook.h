                                                                                                                                                                                                                                                                                              

typedef HRESULT(APIENTRY *SetStreamSource)(IDirect3DDevice9*, UINT, IDirect3DVertexBuffer9*, UINT, UINT);
SetStreamSource SetStreamSource_orig = 0;

typedef HRESULT(APIENTRY *DrawIndexedPrimitive)(IDirect3DDevice9*, D3DPRIMITIVETYPE, INT, UINT, UINT, UINT, UINT);
DrawIndexedPrimitive DrawIndexedPrimitive_orig = 0;

typedef HRESULT(APIENTRY* Present) (IDirect3DDevice9*, const RECT *, const RECT *, HWND, const RGNDATA *);
Present Present_orig = 0;

typedef HRESULT(APIENTRY* EndScene) (IDirect3DDevice9*);
EndScene EndScene_orig = 0;

typedef HRESULT(APIENTRY *Reset)(IDirect3DDevice9*, D3DPRESENT_PARAMETERS*);
Reset Reset_orig = 0;

bool Menu = true;
HMODULE Hand;
UINT Stride;
HWND TargetWnd = NULL;
WNDPROC oWndProc = NULL;

#define Red       D3DCOLOR_XRGB(223,43,43)
#define Green     D3DCOLOR_ARGB(215,000,255,000)
#define Orange    D3DCOLOR_ARGB(255, 255, 140, 000)
#define Blue      D3DCOLOR_XRGB(68,80,248)
#define Yellow    D3DCOLOR_ARGB(255, 255, 255,  51)
#define Black     D3DCOLOR_ARGB(255, 000, 000, 000)
#define Grey      D3DCOLOR_ARGB(255, 112, 112, 112)
#define Gold      D3DCOLOR_ARGB(255, 255, 215, 000)
#define Pink      D3DCOLOR_ARGB(255, 255, 192, 203)
#define Purple    D3DCOLOR_ARGB(255, 128, 000, 128)
#define White     D3DCOLOR_ARGB(255, 255, 255, 249)
#define Cyan      D3DCOLOR_ARGB(255, 000, 255, 255)
#define Magenta   D3DCOLOR_ARGB(255, 255, 000, 255)
#define TBlack    D3DCOLOR_ARGB(128, 000, 000, 000)


/*CHEATS*/

static bool nosmoke = false;
static bool noflash = false;
static bool norecoil = false;
static bool nospread = false;
static bool fastreload = false;
static bool fastswitch = false;
static bool rapidfire = false;

/*ESP*/

bool asd = 0;
bool wallhack = 0;
bool distanceesp = 0;
bool espbox3d = 0;
bool chams = 0;
bool espb = 0;
bool wiref = 0;
bool espline = 0;
bool esplogin = 0;
bool cros = 0;
bool xray = 0;
bool bright = 0;
bool fog = 0;
bool name = 0;
bool lineesp = 0;

#pragma warning (disable: 4099) 
#if defined _M_X64
#pragma comment(lib, "detours.X64/detours.lib")
#elif defined _M_IX86
#pragma comment(lib, "detours.X86/detours.lib")
#endif


