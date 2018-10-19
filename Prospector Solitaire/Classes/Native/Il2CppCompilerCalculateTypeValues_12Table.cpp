#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "object-internals.h"

// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>
struct UnityAction_2_t2169600201;
// UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>
struct UnityAction_1_t205217606;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>
struct UnityAction_2_t2147443543;
// UnityEngine.Transform
struct Transform_t266250937;
// UnityEngine.U2D.SpriteAtlasManager/RequestAtlasCallback
struct RequestAtlasCallback_t2738380376;
// System.Action`1<UnityEngine.U2D.SpriteAtlas>
struct Action_1_t1862049858;
// UnityEngine.DisallowMultipleComponent[]
struct DisallowMultipleComponentU5BU5D_t1801376555;
// UnityEngine.ExecuteInEditMode[]
struct ExecuteInEditModeU5BU5D_t3790059131;
// UnityEngine.RequireComponent[]
struct RequireComponentU5BU5D_t1193590722;
// UnityEngine.SendMouseEvents/HitInfo[]
struct HitInfoU5BU5D_t3109790758;
// UnityEngine.Camera[]
struct CameraU5BU5D_t4003415566;
// UnityEngine.Gyroscope
struct Gyroscope_t1245201728;
// System.IntPtr[]
struct IntPtrU5BU5D_t1064297356;
// System.String
struct String_t;
// System.Collections.IDictionary
struct IDictionary_t918961184;
// System.UnhandledExceptionEventHandler
struct UnhandledExceptionEventHandler_t132159434;
// System.Char[]
struct CharU5BU5D_t1929340039;
// UnityEngine.ILogger
struct ILogger_t3720502635;
// System.Type
struct Type_t;
// System.Void
struct Void_t2228770918;
// UnityEngine.GameObject
struct GameObject_t3846369558;
// UnityEngine.Camera
struct Camera_t3948587831;
// UnityEngine.Display[]
struct DisplayU5BU5D_t2632758582;
// UnityEngine.Display/DisplaysUpdatedDelegate
struct DisplaysUpdatedDelegate_t2454816389;
// UnityEngine.CullingGroup/StateChanged
struct StateChanged_t2714458490;
// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_t3168327840;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t2034675761;
// System.IAsyncResult
struct IAsyncResult_t2077879249;
// System.AsyncCallback
struct AsyncCallback_t1211244892;
// UnityEngine.RectTransform
struct RectTransform_t2525319355;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t2102906192;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t852431891;




#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef GYROSCOPE_T1245201728_H
#define GYROSCOPE_T1245201728_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Gyroscope
struct  Gyroscope_t1245201728  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GYROSCOPE_T1245201728_H
#ifndef SCENEMANAGER_T3520173993_H
#define SCENEMANAGER_T3520173993_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SceneManagement.SceneManager
struct  SceneManager_t3520173993  : public RuntimeObject
{
public:

public:
};

struct SceneManager_t3520173993_StaticFields
{
public:
	// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode> UnityEngine.SceneManagement.SceneManager::sceneLoaded
	UnityAction_2_t2169600201 * ___sceneLoaded_0;
	// UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene> UnityEngine.SceneManagement.SceneManager::sceneUnloaded
	UnityAction_1_t205217606 * ___sceneUnloaded_1;
	// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene> UnityEngine.SceneManagement.SceneManager::activeSceneChanged
	UnityAction_2_t2147443543 * ___activeSceneChanged_2;

public:
	inline static int32_t get_offset_of_sceneLoaded_0() { return static_cast<int32_t>(offsetof(SceneManager_t3520173993_StaticFields, ___sceneLoaded_0)); }
	inline UnityAction_2_t2169600201 * get_sceneLoaded_0() const { return ___sceneLoaded_0; }
	inline UnityAction_2_t2169600201 ** get_address_of_sceneLoaded_0() { return &___sceneLoaded_0; }
	inline void set_sceneLoaded_0(UnityAction_2_t2169600201 * value)
	{
		___sceneLoaded_0 = value;
		Il2CppCodeGenWriteBarrier((&___sceneLoaded_0), value);
	}

	inline static int32_t get_offset_of_sceneUnloaded_1() { return static_cast<int32_t>(offsetof(SceneManager_t3520173993_StaticFields, ___sceneUnloaded_1)); }
	inline UnityAction_1_t205217606 * get_sceneUnloaded_1() const { return ___sceneUnloaded_1; }
	inline UnityAction_1_t205217606 ** get_address_of_sceneUnloaded_1() { return &___sceneUnloaded_1; }
	inline void set_sceneUnloaded_1(UnityAction_1_t205217606 * value)
	{
		___sceneUnloaded_1 = value;
		Il2CppCodeGenWriteBarrier((&___sceneUnloaded_1), value);
	}

	inline static int32_t get_offset_of_activeSceneChanged_2() { return static_cast<int32_t>(offsetof(SceneManager_t3520173993_StaticFields, ___activeSceneChanged_2)); }
	inline UnityAction_2_t2147443543 * get_activeSceneChanged_2() const { return ___activeSceneChanged_2; }
	inline UnityAction_2_t2147443543 ** get_address_of_activeSceneChanged_2() { return &___activeSceneChanged_2; }
	inline void set_activeSceneChanged_2(UnityAction_2_t2147443543 * value)
	{
		___activeSceneChanged_2 = value;
		Il2CppCodeGenWriteBarrier((&___activeSceneChanged_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCENEMANAGER_T3520173993_H
#ifndef ENUMERATOR_T3664446735_H
#define ENUMERATOR_T3664446735_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform/Enumerator
struct  Enumerator_t3664446735  : public RuntimeObject
{
public:
	// UnityEngine.Transform UnityEngine.Transform/Enumerator::outer
	Transform_t266250937 * ___outer_0;
	// System.Int32 UnityEngine.Transform/Enumerator::currentIndex
	int32_t ___currentIndex_1;

public:
	inline static int32_t get_offset_of_outer_0() { return static_cast<int32_t>(offsetof(Enumerator_t3664446735, ___outer_0)); }
	inline Transform_t266250937 * get_outer_0() const { return ___outer_0; }
	inline Transform_t266250937 ** get_address_of_outer_0() { return &___outer_0; }
	inline void set_outer_0(Transform_t266250937 * value)
	{
		___outer_0 = value;
		Il2CppCodeGenWriteBarrier((&___outer_0), value);
	}

	inline static int32_t get_offset_of_currentIndex_1() { return static_cast<int32_t>(offsetof(Enumerator_t3664446735, ___currentIndex_1)); }
	inline int32_t get_currentIndex_1() const { return ___currentIndex_1; }
	inline int32_t* get_address_of_currentIndex_1() { return &___currentIndex_1; }
	inline void set_currentIndex_1(int32_t value)
	{
		___currentIndex_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T3664446735_H
#ifndef SPRITEATLASMANAGER_T2710895451_H
#define SPRITEATLASMANAGER_T2710895451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.U2D.SpriteAtlasManager
struct  SpriteAtlasManager_t2710895451  : public RuntimeObject
{
public:

public:
};

struct SpriteAtlasManager_t2710895451_StaticFields
{
public:
	// UnityEngine.U2D.SpriteAtlasManager/RequestAtlasCallback UnityEngine.U2D.SpriteAtlasManager::atlasRequested
	RequestAtlasCallback_t2738380376 * ___atlasRequested_0;
	// System.Action`1<UnityEngine.U2D.SpriteAtlas> UnityEngine.U2D.SpriteAtlasManager::<>f__mg$cache0
	Action_1_t1862049858 * ___U3CU3Ef__mgU24cache0_1;

public:
	inline static int32_t get_offset_of_atlasRequested_0() { return static_cast<int32_t>(offsetof(SpriteAtlasManager_t2710895451_StaticFields, ___atlasRequested_0)); }
	inline RequestAtlasCallback_t2738380376 * get_atlasRequested_0() const { return ___atlasRequested_0; }
	inline RequestAtlasCallback_t2738380376 ** get_address_of_atlasRequested_0() { return &___atlasRequested_0; }
	inline void set_atlasRequested_0(RequestAtlasCallback_t2738380376 * value)
	{
		___atlasRequested_0 = value;
		Il2CppCodeGenWriteBarrier((&___atlasRequested_0), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_1() { return static_cast<int32_t>(offsetof(SpriteAtlasManager_t2710895451_StaticFields, ___U3CU3Ef__mgU24cache0_1)); }
	inline Action_1_t1862049858 * get_U3CU3Ef__mgU24cache0_1() const { return ___U3CU3Ef__mgU24cache0_1; }
	inline Action_1_t1862049858 ** get_address_of_U3CU3Ef__mgU24cache0_1() { return &___U3CU3Ef__mgU24cache0_1; }
	inline void set_U3CU3Ef__mgU24cache0_1(Action_1_t1862049858 * value)
	{
		___U3CU3Ef__mgU24cache0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPRITEATLASMANAGER_T2710895451_H
#ifndef ATTRIBUTEHELPERENGINE_T1086490484_H
#define ATTRIBUTEHELPERENGINE_T1086490484_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AttributeHelperEngine
struct  AttributeHelperEngine_t1086490484  : public RuntimeObject
{
public:

public:
};

struct AttributeHelperEngine_t1086490484_StaticFields
{
public:
	// UnityEngine.DisallowMultipleComponent[] UnityEngine.AttributeHelperEngine::_disallowMultipleComponentArray
	DisallowMultipleComponentU5BU5D_t1801376555* ____disallowMultipleComponentArray_0;
	// UnityEngine.ExecuteInEditMode[] UnityEngine.AttributeHelperEngine::_executeInEditModeArray
	ExecuteInEditModeU5BU5D_t3790059131* ____executeInEditModeArray_1;
	// UnityEngine.RequireComponent[] UnityEngine.AttributeHelperEngine::_requireComponentArray
	RequireComponentU5BU5D_t1193590722* ____requireComponentArray_2;

public:
	inline static int32_t get_offset_of__disallowMultipleComponentArray_0() { return static_cast<int32_t>(offsetof(AttributeHelperEngine_t1086490484_StaticFields, ____disallowMultipleComponentArray_0)); }
	inline DisallowMultipleComponentU5BU5D_t1801376555* get__disallowMultipleComponentArray_0() const { return ____disallowMultipleComponentArray_0; }
	inline DisallowMultipleComponentU5BU5D_t1801376555** get_address_of__disallowMultipleComponentArray_0() { return &____disallowMultipleComponentArray_0; }
	inline void set__disallowMultipleComponentArray_0(DisallowMultipleComponentU5BU5D_t1801376555* value)
	{
		____disallowMultipleComponentArray_0 = value;
		Il2CppCodeGenWriteBarrier((&____disallowMultipleComponentArray_0), value);
	}

	inline static int32_t get_offset_of__executeInEditModeArray_1() { return static_cast<int32_t>(offsetof(AttributeHelperEngine_t1086490484_StaticFields, ____executeInEditModeArray_1)); }
	inline ExecuteInEditModeU5BU5D_t3790059131* get__executeInEditModeArray_1() const { return ____executeInEditModeArray_1; }
	inline ExecuteInEditModeU5BU5D_t3790059131** get_address_of__executeInEditModeArray_1() { return &____executeInEditModeArray_1; }
	inline void set__executeInEditModeArray_1(ExecuteInEditModeU5BU5D_t3790059131* value)
	{
		____executeInEditModeArray_1 = value;
		Il2CppCodeGenWriteBarrier((&____executeInEditModeArray_1), value);
	}

	inline static int32_t get_offset_of__requireComponentArray_2() { return static_cast<int32_t>(offsetof(AttributeHelperEngine_t1086490484_StaticFields, ____requireComponentArray_2)); }
	inline RequireComponentU5BU5D_t1193590722* get__requireComponentArray_2() const { return ____requireComponentArray_2; }
	inline RequireComponentU5BU5D_t1193590722** get_address_of__requireComponentArray_2() { return &____requireComponentArray_2; }
	inline void set__requireComponentArray_2(RequireComponentU5BU5D_t1193590722* value)
	{
		____requireComponentArray_2 = value;
		Il2CppCodeGenWriteBarrier((&____requireComponentArray_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTEHELPERENGINE_T1086490484_H
#ifndef RANDOM_T4161944167_H
#define RANDOM_T4161944167_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Random
struct  Random_t4161944167  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANDOM_T4161944167_H
#ifndef CLASSLIBRARYINITIALIZER_T2173502781_H
#define CLASSLIBRARYINITIALIZER_T2173502781_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ClassLibraryInitializer
struct  ClassLibraryInitializer_t2173502781  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLASSLIBRARYINITIALIZER_T2173502781_H
#ifndef SETUPCOROUTINE_T1946642180_H
#define SETUPCOROUTINE_T1946642180_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SetupCoroutine
struct  SetupCoroutine_t1946642180  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SETUPCOROUTINE_T1946642180_H
#ifndef MANAGEDSTREAMHELPERS_T1184977763_H
#define MANAGEDSTREAMHELPERS_T1184977763_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ManagedStreamHelpers
struct  ManagedStreamHelpers_t1184977763  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MANAGEDSTREAMHELPERS_T1184977763_H
#ifndef SENDMOUSEEVENTS_T934446968_H
#define SENDMOUSEEVENTS_T934446968_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SendMouseEvents
struct  SendMouseEvents_t934446968  : public RuntimeObject
{
public:

public:
};

struct SendMouseEvents_t934446968_StaticFields
{
public:
	// System.Boolean UnityEngine.SendMouseEvents::s_MouseUsed
	bool ___s_MouseUsed_0;
	// UnityEngine.SendMouseEvents/HitInfo[] UnityEngine.SendMouseEvents::m_LastHit
	HitInfoU5BU5D_t3109790758* ___m_LastHit_1;
	// UnityEngine.SendMouseEvents/HitInfo[] UnityEngine.SendMouseEvents::m_MouseDownHit
	HitInfoU5BU5D_t3109790758* ___m_MouseDownHit_2;
	// UnityEngine.SendMouseEvents/HitInfo[] UnityEngine.SendMouseEvents::m_CurrentHit
	HitInfoU5BU5D_t3109790758* ___m_CurrentHit_3;
	// UnityEngine.Camera[] UnityEngine.SendMouseEvents::m_Cameras
	CameraU5BU5D_t4003415566* ___m_Cameras_4;

public:
	inline static int32_t get_offset_of_s_MouseUsed_0() { return static_cast<int32_t>(offsetof(SendMouseEvents_t934446968_StaticFields, ___s_MouseUsed_0)); }
	inline bool get_s_MouseUsed_0() const { return ___s_MouseUsed_0; }
	inline bool* get_address_of_s_MouseUsed_0() { return &___s_MouseUsed_0; }
	inline void set_s_MouseUsed_0(bool value)
	{
		___s_MouseUsed_0 = value;
	}

	inline static int32_t get_offset_of_m_LastHit_1() { return static_cast<int32_t>(offsetof(SendMouseEvents_t934446968_StaticFields, ___m_LastHit_1)); }
	inline HitInfoU5BU5D_t3109790758* get_m_LastHit_1() const { return ___m_LastHit_1; }
	inline HitInfoU5BU5D_t3109790758** get_address_of_m_LastHit_1() { return &___m_LastHit_1; }
	inline void set_m_LastHit_1(HitInfoU5BU5D_t3109790758* value)
	{
		___m_LastHit_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_LastHit_1), value);
	}

	inline static int32_t get_offset_of_m_MouseDownHit_2() { return static_cast<int32_t>(offsetof(SendMouseEvents_t934446968_StaticFields, ___m_MouseDownHit_2)); }
	inline HitInfoU5BU5D_t3109790758* get_m_MouseDownHit_2() const { return ___m_MouseDownHit_2; }
	inline HitInfoU5BU5D_t3109790758** get_address_of_m_MouseDownHit_2() { return &___m_MouseDownHit_2; }
	inline void set_m_MouseDownHit_2(HitInfoU5BU5D_t3109790758* value)
	{
		___m_MouseDownHit_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_MouseDownHit_2), value);
	}

	inline static int32_t get_offset_of_m_CurrentHit_3() { return static_cast<int32_t>(offsetof(SendMouseEvents_t934446968_StaticFields, ___m_CurrentHit_3)); }
	inline HitInfoU5BU5D_t3109790758* get_m_CurrentHit_3() const { return ___m_CurrentHit_3; }
	inline HitInfoU5BU5D_t3109790758** get_address_of_m_CurrentHit_3() { return &___m_CurrentHit_3; }
	inline void set_m_CurrentHit_3(HitInfoU5BU5D_t3109790758* value)
	{
		___m_CurrentHit_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_CurrentHit_3), value);
	}

	inline static int32_t get_offset_of_m_Cameras_4() { return static_cast<int32_t>(offsetof(SendMouseEvents_t934446968_StaticFields, ___m_Cameras_4)); }
	inline CameraU5BU5D_t4003415566* get_m_Cameras_4() const { return ___m_Cameras_4; }
	inline CameraU5BU5D_t4003415566** get_address_of_m_Cameras_4() { return &___m_Cameras_4; }
	inline void set_m_Cameras_4(CameraU5BU5D_t4003415566* value)
	{
		___m_Cameras_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Cameras_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SENDMOUSEEVENTS_T934446968_H
#ifndef INPUT_T2632919104_H
#define INPUT_T2632919104_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Input
struct  Input_t2632919104  : public RuntimeObject
{
public:

public:
};

struct Input_t2632919104_StaticFields
{
public:
	// UnityEngine.Gyroscope UnityEngine.Input::m_MainGyro
	Gyroscope_t1245201728 * ___m_MainGyro_0;

public:
	inline static int32_t get_offset_of_m_MainGyro_0() { return static_cast<int32_t>(offsetof(Input_t2632919104_StaticFields, ___m_MainGyro_0)); }
	inline Gyroscope_t1245201728 * get_m_MainGyro_0() const { return ___m_MainGyro_0; }
	inline Gyroscope_t1245201728 ** get_address_of_m_MainGyro_0() { return &___m_MainGyro_0; }
	inline void set_m_MainGyro_0(Gyroscope_t1245201728 * value)
	{
		___m_MainGyro_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_MainGyro_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INPUT_T2632919104_H
#ifndef YIELDINSTRUCTION_T4277545377_H
#define YIELDINSTRUCTION_T4277545377_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.YieldInstruction
struct  YieldInstruction_t4277545377  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t4277545377_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t4277545377_marshaled_com
{
};
#endif // YIELDINSTRUCTION_T4277545377_H
#ifndef SCREEN_T1118908372_H
#define SCREEN_T1118908372_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Screen
struct  Screen_t1118908372  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCREEN_T1118908372_H
#ifndef PROPERTYNAMEUTILS_T2165586611_H
#define PROPERTYNAMEUTILS_T2165586611_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PropertyNameUtils
struct  PropertyNameUtils_t2165586611  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYNAMEUTILS_T2165586611_H
#ifndef EXCEPTION_T2088915711_H
#define EXCEPTION_T2088915711_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t2088915711  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t1064297356* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t2088915711 * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t2088915711, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t1064297356* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t1064297356** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t1064297356* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t2088915711, ___inner_exception_1)); }
	inline Exception_t2088915711 * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t2088915711 ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t2088915711 * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t2088915711, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t2088915711, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t2088915711, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t2088915711, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t2088915711, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t2088915711, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t2088915711, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t2088915711, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t2088915711, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T2088915711_H
#ifndef STACKTRACEUTILITY_T3180877355_H
#define STACKTRACEUTILITY_T3180877355_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.StackTraceUtility
struct  StackTraceUtility_t3180877355  : public RuntimeObject
{
public:

public:
};

struct StackTraceUtility_t3180877355_StaticFields
{
public:
	// System.String UnityEngine.StackTraceUtility::projectFolder
	String_t* ___projectFolder_0;

public:
	inline static int32_t get_offset_of_projectFolder_0() { return static_cast<int32_t>(offsetof(StackTraceUtility_t3180877355_StaticFields, ___projectFolder_0)); }
	inline String_t* get_projectFolder_0() const { return ___projectFolder_0; }
	inline String_t** get_address_of_projectFolder_0() { return &___projectFolder_0; }
	inline void set_projectFolder_0(String_t* value)
	{
		___projectFolder_0 = value;
		Il2CppCodeGenWriteBarrier((&___projectFolder_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STACKTRACEUTILITY_T3180877355_H
#ifndef UNHANDLEDEXCEPTIONHANDLER_T2938774883_H
#define UNHANDLEDEXCEPTIONHANDLER_T2938774883_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UnhandledExceptionHandler
struct  UnhandledExceptionHandler_t2938774883  : public RuntimeObject
{
public:

public:
};

struct UnhandledExceptionHandler_t2938774883_StaticFields
{
public:
	// System.UnhandledExceptionEventHandler UnityEngine.UnhandledExceptionHandler::<>f__mg$cache0
	UnhandledExceptionEventHandler_t132159434 * ___U3CU3Ef__mgU24cache0_0;

public:
	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_0() { return static_cast<int32_t>(offsetof(UnhandledExceptionHandler_t2938774883_StaticFields, ___U3CU3Ef__mgU24cache0_0)); }
	inline UnhandledExceptionEventHandler_t132159434 * get_U3CU3Ef__mgU24cache0_0() const { return ___U3CU3Ef__mgU24cache0_0; }
	inline UnhandledExceptionEventHandler_t132159434 ** get_address_of_U3CU3Ef__mgU24cache0_0() { return &___U3CU3Ef__mgU24cache0_0; }
	inline void set_U3CU3Ef__mgU24cache0_0(UnhandledExceptionEventHandler_t132159434 * value)
	{
		___U3CU3Ef__mgU24cache0_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNHANDLEDEXCEPTIONHANDLER_T2938774883_H
#ifndef TEXTWRITER_T885629116_H
#define TEXTWRITER_T885629116_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.TextWriter
struct  TextWriter_t885629116  : public RuntimeObject
{
public:
	// System.Char[] System.IO.TextWriter::CoreNewLine
	CharU5BU5D_t1929340039* ___CoreNewLine_0;

public:
	inline static int32_t get_offset_of_CoreNewLine_0() { return static_cast<int32_t>(offsetof(TextWriter_t885629116, ___CoreNewLine_0)); }
	inline CharU5BU5D_t1929340039* get_CoreNewLine_0() const { return ___CoreNewLine_0; }
	inline CharU5BU5D_t1929340039** get_address_of_CoreNewLine_0() { return &___CoreNewLine_0; }
	inline void set_CoreNewLine_0(CharU5BU5D_t1929340039* value)
	{
		___CoreNewLine_0 = value;
		Il2CppCodeGenWriteBarrier((&___CoreNewLine_0), value);
	}
};

struct TextWriter_t885629116_StaticFields
{
public:
	// System.IO.TextWriter System.IO.TextWriter::Null
	TextWriter_t885629116 * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(TextWriter_t885629116_StaticFields, ___Null_1)); }
	inline TextWriter_t885629116 * get_Null_1() const { return ___Null_1; }
	inline TextWriter_t885629116 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(TextWriter_t885629116 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((&___Null_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTWRITER_T885629116_H
#ifndef DEBUGLOGHANDLER_T2173261699_H
#define DEBUGLOGHANDLER_T2173261699_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.DebugLogHandler
struct  DebugLogHandler_t2173261699  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEBUGLOGHANDLER_T2173261699_H
#ifndef VALUETYPE_T2556172371_H
#define VALUETYPE_T2556172371_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t2556172371  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t2556172371_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t2556172371_marshaled_com
{
};
#endif // VALUETYPE_T2556172371_H
#ifndef ATTRIBUTE_T435283011_H
#define ATTRIBUTE_T435283011_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t435283011  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T435283011_H
#ifndef DEBUG_T3773704340_H
#define DEBUG_T3773704340_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Debug
struct  Debug_t3773704340  : public RuntimeObject
{
public:

public:
};

struct Debug_t3773704340_StaticFields
{
public:
	// UnityEngine.ILogger UnityEngine.Debug::s_Logger
	RuntimeObject* ___s_Logger_0;

public:
	inline static int32_t get_offset_of_s_Logger_0() { return static_cast<int32_t>(offsetof(Debug_t3773704340_StaticFields, ___s_Logger_0)); }
	inline RuntimeObject* get_s_Logger_0() const { return ___s_Logger_0; }
	inline RuntimeObject** get_address_of_s_Logger_0() { return &___s_Logger_0; }
	inline void set_s_Logger_0(RuntimeObject* value)
	{
		___s_Logger_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_Logger_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEBUG_T3773704340_H
#ifndef ENUM_T741929417_H
#define ENUM_T741929417_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t741929417  : public ValueType_t2556172371
{
public:

public:
};

struct Enum_t741929417_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t1929340039* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t741929417_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t1929340039* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t1929340039** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t1929340039* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t741929417_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t741929417_marshaled_com
{
};
#endif // ENUM_T741929417_H
#ifndef DISALLOWMULTIPLECOMPONENT_T961802398_H
#define DISALLOWMULTIPLECOMPONENT_T961802398_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.DisallowMultipleComponent
struct  DisallowMultipleComponent_t961802398  : public Attribute_t435283011
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DISALLOWMULTIPLECOMPONENT_T961802398_H
#ifndef NATIVECLASSATTRIBUTE_T1476254938_H
#define NATIVECLASSATTRIBUTE_T1476254938_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.NativeClassAttribute
struct  NativeClassAttribute_t1476254938  : public Attribute_t435283011
{
public:
	// System.String UnityEngine.NativeClassAttribute::<QualifiedNativeName>k__BackingField
	String_t* ___U3CQualifiedNativeNameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CQualifiedNativeNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(NativeClassAttribute_t1476254938, ___U3CQualifiedNativeNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CQualifiedNativeNameU3Ek__BackingField_0() const { return ___U3CQualifiedNativeNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CQualifiedNativeNameU3Ek__BackingField_0() { return &___U3CQualifiedNativeNameU3Ek__BackingField_0; }
	inline void set_U3CQualifiedNativeNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CQualifiedNativeNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CQualifiedNativeNameU3Ek__BackingField_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVECLASSATTRIBUTE_T1476254938_H
#ifndef REQUIRECOMPONENT_T2225763475_H
#define REQUIRECOMPONENT_T2225763475_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RequireComponent
struct  RequireComponent_t2225763475  : public Attribute_t435283011
{
public:
	// System.Type UnityEngine.RequireComponent::m_Type0
	Type_t * ___m_Type0_0;
	// System.Type UnityEngine.RequireComponent::m_Type1
	Type_t * ___m_Type1_1;
	// System.Type UnityEngine.RequireComponent::m_Type2
	Type_t * ___m_Type2_2;

public:
	inline static int32_t get_offset_of_m_Type0_0() { return static_cast<int32_t>(offsetof(RequireComponent_t2225763475, ___m_Type0_0)); }
	inline Type_t * get_m_Type0_0() const { return ___m_Type0_0; }
	inline Type_t ** get_address_of_m_Type0_0() { return &___m_Type0_0; }
	inline void set_m_Type0_0(Type_t * value)
	{
		___m_Type0_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Type0_0), value);
	}

	inline static int32_t get_offset_of_m_Type1_1() { return static_cast<int32_t>(offsetof(RequireComponent_t2225763475, ___m_Type1_1)); }
	inline Type_t * get_m_Type1_1() const { return ___m_Type1_1; }
	inline Type_t ** get_address_of_m_Type1_1() { return &___m_Type1_1; }
	inline void set_m_Type1_1(Type_t * value)
	{
		___m_Type1_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Type1_1), value);
	}

	inline static int32_t get_offset_of_m_Type2_2() { return static_cast<int32_t>(offsetof(RequireComponent_t2225763475, ___m_Type2_2)); }
	inline Type_t * get_m_Type2_2() const { return ___m_Type2_2; }
	inline Type_t ** get_address_of_m_Type2_2() { return &___m_Type2_2; }
	inline void set_m_Type2_2(Type_t * value)
	{
		___m_Type2_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Type2_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQUIRECOMPONENT_T2225763475_H
#ifndef SINGLE_T2158438471_H
#define SINGLE_T2158438471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t2158438471 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t2158438471, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T2158438471_H
#ifndef ADDCOMPONENTMENU_T3062019865_H
#define ADDCOMPONENTMENU_T3062019865_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AddComponentMenu
struct  AddComponentMenu_t3062019865  : public Attribute_t435283011
{
public:
	// System.String UnityEngine.AddComponentMenu::m_AddComponentMenu
	String_t* ___m_AddComponentMenu_0;
	// System.Int32 UnityEngine.AddComponentMenu::m_Ordering
	int32_t ___m_Ordering_1;

public:
	inline static int32_t get_offset_of_m_AddComponentMenu_0() { return static_cast<int32_t>(offsetof(AddComponentMenu_t3062019865, ___m_AddComponentMenu_0)); }
	inline String_t* get_m_AddComponentMenu_0() const { return ___m_AddComponentMenu_0; }
	inline String_t** get_address_of_m_AddComponentMenu_0() { return &___m_AddComponentMenu_0; }
	inline void set_m_AddComponentMenu_0(String_t* value)
	{
		___m_AddComponentMenu_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_AddComponentMenu_0), value);
	}

	inline static int32_t get_offset_of_m_Ordering_1() { return static_cast<int32_t>(offsetof(AddComponentMenu_t3062019865, ___m_Ordering_1)); }
	inline int32_t get_m_Ordering_1() const { return ___m_Ordering_1; }
	inline int32_t* get_address_of_m_Ordering_1() { return &___m_Ordering_1; }
	inline void set_m_Ordering_1(int32_t value)
	{
		___m_Ordering_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ADDCOMPONENTMENU_T3062019865_H
#ifndef CONTEXTMENU_T2273835945_H
#define CONTEXTMENU_T2273835945_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ContextMenu
struct  ContextMenu_t2273835945  : public Attribute_t435283011
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTEXTMENU_T2273835945_H
#ifndef EXECUTEINEDITMODE_T301691790_H
#define EXECUTEINEDITMODE_T301691790_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ExecuteInEditMode
struct  ExecuteInEditMode_t301691790  : public Attribute_t435283011
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXECUTEINEDITMODE_T301691790_H
#ifndef DEFAULTEXECUTIONORDER_T1275932909_H
#define DEFAULTEXECUTIONORDER_T1275932909_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.DefaultExecutionOrder
struct  DefaultExecutionOrder_t1275932909  : public Attribute_t435283011
{
public:
	// System.Int32 UnityEngine.DefaultExecutionOrder::<order>k__BackingField
	int32_t ___U3CorderU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CorderU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(DefaultExecutionOrder_t1275932909, ___U3CorderU3Ek__BackingField_0)); }
	inline int32_t get_U3CorderU3Ek__BackingField_0() const { return ___U3CorderU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CorderU3Ek__BackingField_0() { return &___U3CorderU3Ek__BackingField_0; }
	inline void set_U3CorderU3Ek__BackingField_0(int32_t value)
	{
		___U3CorderU3Ek__BackingField_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTEXECUTIONORDER_T1275932909_H
#ifndef SERIALIZEPRIVATEVARIABLES_T1364793836_H
#define SERIALIZEPRIVATEVARIABLES_T1364793836_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SerializePrivateVariables
struct  SerializePrivateVariables_t1364793836  : public Attribute_t435283011
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZEPRIVATEVARIABLES_T1364793836_H
#ifndef WRITABLEATTRIBUTE_T2978091226_H
#define WRITABLEATTRIBUTE_T2978091226_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WritableAttribute
struct  WritableAttribute_t2978091226  : public Attribute_t435283011
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WRITABLEATTRIBUTE_T2978091226_H
#ifndef SERIALIZEFIELD_T2457004541_H
#define SERIALIZEFIELD_T2457004541_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SerializeField
struct  SerializeField_t2457004541  : public Attribute_t435283011
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZEFIELD_T2457004541_H
#ifndef GENERATEDBYOLDBINDINGSGENERATORATTRIBUTE_T3438091356_H
#define GENERATEDBYOLDBINDINGSGENERATORATTRIBUTE_T3438091356_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Scripting.GeneratedByOldBindingsGeneratorAttribute
struct  GeneratedByOldBindingsGeneratorAttribute_t3438091356  : public Attribute_t435283011
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GENERATEDBYOLDBINDINGSGENERATORATTRIBUTE_T3438091356_H
#ifndef VOID_T2228770918_H
#define VOID_T2228770918_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t2228770918 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T2228770918_H
#ifndef COLOR_T3196854853_H
#define COLOR_T3196854853_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t3196854853 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t3196854853, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t3196854853, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t3196854853, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t3196854853, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T3196854853_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef UNITYEXCEPTION_T518975213_H
#define UNITYEXCEPTION_T518975213_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UnityException
struct  UnityException_t518975213  : public Exception_t2088915711
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEXCEPTION_T518975213_H
#ifndef PREFERBINARYSERIALIZATION_T2164049689_H
#define PREFERBINARYSERIALIZATION_T2164049689_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PreferBinarySerialization
struct  PreferBinarySerialization_t2164049689  : public Attribute_t435283011
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PREFERBINARYSERIALIZATION_T2164049689_H
#ifndef HITINFO_T2549613823_H
#define HITINFO_T2549613823_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SendMouseEvents/HitInfo
struct  HitInfo_t2549613823 
{
public:
	// UnityEngine.GameObject UnityEngine.SendMouseEvents/HitInfo::target
	GameObject_t3846369558 * ___target_0;
	// UnityEngine.Camera UnityEngine.SendMouseEvents/HitInfo::camera
	Camera_t3948587831 * ___camera_1;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(HitInfo_t2549613823, ___target_0)); }
	inline GameObject_t3846369558 * get_target_0() const { return ___target_0; }
	inline GameObject_t3846369558 ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(GameObject_t3846369558 * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((&___target_0), value);
	}

	inline static int32_t get_offset_of_camera_1() { return static_cast<int32_t>(offsetof(HitInfo_t2549613823, ___camera_1)); }
	inline Camera_t3948587831 * get_camera_1() const { return ___camera_1; }
	inline Camera_t3948587831 ** get_address_of_camera_1() { return &___camera_1; }
	inline void set_camera_1(Camera_t3948587831 * value)
	{
		___camera_1 = value;
		Il2CppCodeGenWriteBarrier((&___camera_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.SendMouseEvents/HitInfo
struct HitInfo_t2549613823_marshaled_pinvoke
{
	GameObject_t3846369558 * ___target_0;
	Camera_t3948587831 * ___camera_1;
};
// Native definition for COM marshalling of UnityEngine.SendMouseEvents/HitInfo
struct HitInfo_t2549613823_marshaled_com
{
	GameObject_t3846369558 * ___target_0;
	Camera_t3948587831 * ___camera_1;
};
#endif // HITINFO_T2549613823_H
#ifndef PROPERTYATTRIBUTE_T4146786731_H
#define PROPERTYATTRIBUTE_T4146786731_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PropertyAttribute
struct  PropertyAttribute_t4146786731  : public Attribute_t435283011
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYATTRIBUTE_T4146786731_H
#ifndef PROPERTYNAME_T980673821_H
#define PROPERTYNAME_T980673821_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PropertyName
struct  PropertyName_t980673821 
{
public:
	// System.Int32 UnityEngine.PropertyName::id
	int32_t ___id_0;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(PropertyName_t980673821, ___id_0)); }
	inline int32_t get_id_0() const { return ___id_0; }
	inline int32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(int32_t value)
	{
		___id_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYNAME_T980673821_H
#ifndef RECT_T2693517766_H
#define RECT_T2693517766_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rect
struct  Rect_t2693517766 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t2693517766, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t2693517766, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t2693517766, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t2693517766, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECT_T2693517766_H
#ifndef ASSEMBLYISEDITORASSEMBLY_T4255778100_H
#define ASSEMBLYISEDITORASSEMBLY_T4255778100_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AssemblyIsEditorAssembly
struct  AssemblyIsEditorAssembly_t4255778100  : public Attribute_t435283011
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYISEDITORASSEMBLY_T4255778100_H
#ifndef WAITFORFIXEDUPDATE_T3586331731_H
#define WAITFORFIXEDUPDATE_T3586331731_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WaitForFixedUpdate
struct  WaitForFixedUpdate_t3586331731  : public YieldInstruction_t4277545377
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAITFORFIXEDUPDATE_T3586331731_H
#ifndef SCENE_T4126765453_H
#define SCENE_T4126765453_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SceneManagement.Scene
struct  Scene_t4126765453 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t4126765453, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCENE_T4126765453_H
#ifndef MATHF_T3977504995_H
#define MATHF_T3977504995_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Mathf
struct  Mathf_t3977504995 
{
public:

public:
};

struct Mathf_t3977504995_StaticFields
{
public:
	// System.Single UnityEngine.Mathf::Epsilon
	float ___Epsilon_0;

public:
	inline static int32_t get_offset_of_Epsilon_0() { return static_cast<int32_t>(offsetof(Mathf_t3977504995_StaticFields, ___Epsilon_0)); }
	inline float get_Epsilon_0() const { return ___Epsilon_0; }
	inline float* get_address_of_Epsilon_0() { return &___Epsilon_0; }
	inline void set_Epsilon_0(float value)
	{
		___Epsilon_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATHF_T3977504995_H
#ifndef WAITFORENDOFFRAME_T3968975611_H
#define WAITFORENDOFFRAME_T3968975611_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WaitForEndOfFrame
struct  WaitForEndOfFrame_t3968975611  : public YieldInstruction_t4277545377
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAITFORENDOFFRAME_T3968975611_H
#ifndef CULLINGGROUPEVENT_T4112952250_H
#define CULLINGGROUPEVENT_T4112952250_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CullingGroupEvent
struct  CullingGroupEvent_t4112952250 
{
public:
	// System.Int32 UnityEngine.CullingGroupEvent::m_Index
	int32_t ___m_Index_0;
	// System.Byte UnityEngine.CullingGroupEvent::m_PrevState
	uint8_t ___m_PrevState_1;
	// System.Byte UnityEngine.CullingGroupEvent::m_ThisState
	uint8_t ___m_ThisState_2;

public:
	inline static int32_t get_offset_of_m_Index_0() { return static_cast<int32_t>(offsetof(CullingGroupEvent_t4112952250, ___m_Index_0)); }
	inline int32_t get_m_Index_0() const { return ___m_Index_0; }
	inline int32_t* get_address_of_m_Index_0() { return &___m_Index_0; }
	inline void set_m_Index_0(int32_t value)
	{
		___m_Index_0 = value;
	}

	inline static int32_t get_offset_of_m_PrevState_1() { return static_cast<int32_t>(offsetof(CullingGroupEvent_t4112952250, ___m_PrevState_1)); }
	inline uint8_t get_m_PrevState_1() const { return ___m_PrevState_1; }
	inline uint8_t* get_address_of_m_PrevState_1() { return &___m_PrevState_1; }
	inline void set_m_PrevState_1(uint8_t value)
	{
		___m_PrevState_1 = value;
	}

	inline static int32_t get_offset_of_m_ThisState_2() { return static_cast<int32_t>(offsetof(CullingGroupEvent_t4112952250, ___m_ThisState_2)); }
	inline uint8_t get_m_ThisState_2() const { return ___m_ThisState_2; }
	inline uint8_t* get_address_of_m_ThisState_2() { return &___m_ThisState_2; }
	inline void set_m_ThisState_2(uint8_t value)
	{
		___m_ThisState_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CULLINGGROUPEVENT_T4112952250_H
#ifndef MATRIX4X4_T2925358924_H
#define MATRIX4X4_T2925358924_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Matrix4x4
struct  Matrix4x4_t2925358924 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_t2925358924, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_t2925358924, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_t2925358924, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_t2925358924, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_t2925358924, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_t2925358924, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_t2925358924, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_t2925358924, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_t2925358924, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_t2925358924, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_t2925358924, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_t2925358924, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_t2925358924, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_t2925358924, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_t2925358924, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_t2925358924, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_t2925358924_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_t2925358924  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_t2925358924  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_t2925358924_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_t2925358924  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_t2925358924 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_t2925358924  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_t2925358924_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_t2925358924  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_t2925358924 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_t2925358924  value)
	{
		___identityMatrix_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATRIX4X4_T2925358924_H
#ifndef UNITYLOGWRITER_T3628235865_H
#define UNITYLOGWRITER_T3628235865_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UnityLogWriter
struct  UnityLogWriter_t3628235865  : public TextWriter_t885629116
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYLOGWRITER_T3628235865_H
#ifndef KEYFRAME_T4071087372_H
#define KEYFRAME_T4071087372_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Keyframe
struct  Keyframe_t4071087372 
{
public:
	// System.Single UnityEngine.Keyframe::m_Time
	float ___m_Time_0;
	// System.Single UnityEngine.Keyframe::m_Value
	float ___m_Value_1;
	// System.Single UnityEngine.Keyframe::m_InTangent
	float ___m_InTangent_2;
	// System.Single UnityEngine.Keyframe::m_OutTangent
	float ___m_OutTangent_3;

public:
	inline static int32_t get_offset_of_m_Time_0() { return static_cast<int32_t>(offsetof(Keyframe_t4071087372, ___m_Time_0)); }
	inline float get_m_Time_0() const { return ___m_Time_0; }
	inline float* get_address_of_m_Time_0() { return &___m_Time_0; }
	inline void set_m_Time_0(float value)
	{
		___m_Time_0 = value;
	}

	inline static int32_t get_offset_of_m_Value_1() { return static_cast<int32_t>(offsetof(Keyframe_t4071087372, ___m_Value_1)); }
	inline float get_m_Value_1() const { return ___m_Value_1; }
	inline float* get_address_of_m_Value_1() { return &___m_Value_1; }
	inline void set_m_Value_1(float value)
	{
		___m_Value_1 = value;
	}

	inline static int32_t get_offset_of_m_InTangent_2() { return static_cast<int32_t>(offsetof(Keyframe_t4071087372, ___m_InTangent_2)); }
	inline float get_m_InTangent_2() const { return ___m_InTangent_2; }
	inline float* get_address_of_m_InTangent_2() { return &___m_InTangent_2; }
	inline void set_m_InTangent_2(float value)
	{
		___m_InTangent_2 = value;
	}

	inline static int32_t get_offset_of_m_OutTangent_3() { return static_cast<int32_t>(offsetof(Keyframe_t4071087372, ___m_OutTangent_3)); }
	inline float get_m_OutTangent_3() const { return ___m_OutTangent_3; }
	inline float* get_address_of_m_OutTangent_3() { return &___m_OutTangent_3; }
	inline void set_m_OutTangent_3(float value)
	{
		___m_OutTangent_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYFRAME_T4071087372_H
#ifndef VECTOR3_T2226991618_H
#define VECTOR3_T2226991618_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t2226991618 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t2226991618, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t2226991618, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t2226991618, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t2226991618_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t2226991618  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t2226991618  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t2226991618  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t2226991618  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t2226991618  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t2226991618  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t2226991618  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t2226991618  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t2226991618  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t2226991618  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t2226991618_StaticFields, ___zeroVector_4)); }
	inline Vector3_t2226991618  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t2226991618 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t2226991618  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t2226991618_StaticFields, ___oneVector_5)); }
	inline Vector3_t2226991618  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t2226991618 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t2226991618  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t2226991618_StaticFields, ___upVector_6)); }
	inline Vector3_t2226991618  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t2226991618 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t2226991618  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t2226991618_StaticFields, ___downVector_7)); }
	inline Vector3_t2226991618  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t2226991618 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t2226991618  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t2226991618_StaticFields, ___leftVector_8)); }
	inline Vector3_t2226991618  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t2226991618 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t2226991618  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t2226991618_StaticFields, ___rightVector_9)); }
	inline Vector3_t2226991618  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t2226991618 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t2226991618  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t2226991618_StaticFields, ___forwardVector_10)); }
	inline Vector3_t2226991618  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t2226991618 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t2226991618  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t2226991618_StaticFields, ___backVector_11)); }
	inline Vector3_t2226991618  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t2226991618 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t2226991618  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t2226991618_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t2226991618  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t2226991618 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t2226991618  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t2226991618_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t2226991618  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t2226991618 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t2226991618  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T2226991618_H
#ifndef QUATERNION_T211453020_H
#define QUATERNION_T211453020_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t211453020 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t211453020, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t211453020, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t211453020, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t211453020, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t211453020_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t211453020  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t211453020_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t211453020  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t211453020 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t211453020  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T211453020_H
#ifndef SENDMESSAGEOPTIONS_T2948111154_H
#define SENDMESSAGEOPTIONS_T2948111154_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SendMessageOptions
struct  SendMessageOptions_t2948111154 
{
public:
	// System.Int32 UnityEngine.SendMessageOptions::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SendMessageOptions_t2948111154, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SENDMESSAGEOPTIONS_T2948111154_H
#ifndef LOGTYPE_T63372126_H
#define LOGTYPE_T63372126_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.LogType
struct  LogType_t63372126 
{
public:
	// System.Int32 UnityEngine.LogType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LogType_t63372126, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGTYPE_T63372126_H
#ifndef BOUNDS_T1463076165_H
#define BOUNDS_T1463076165_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Bounds
struct  Bounds_t1463076165 
{
public:
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t2226991618  ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t2226991618  ___m_Extents_1;

public:
	inline static int32_t get_offset_of_m_Center_0() { return static_cast<int32_t>(offsetof(Bounds_t1463076165, ___m_Center_0)); }
	inline Vector3_t2226991618  get_m_Center_0() const { return ___m_Center_0; }
	inline Vector3_t2226991618 * get_address_of_m_Center_0() { return &___m_Center_0; }
	inline void set_m_Center_0(Vector3_t2226991618  value)
	{
		___m_Center_0 = value;
	}

	inline static int32_t get_offset_of_m_Extents_1() { return static_cast<int32_t>(offsetof(Bounds_t1463076165, ___m_Extents_1)); }
	inline Vector3_t2226991618  get_m_Extents_1() const { return ___m_Extents_1; }
	inline Vector3_t2226991618 * get_address_of_m_Extents_1() { return &___m_Extents_1; }
	inline void set_m_Extents_1(Vector3_t2226991618  value)
	{
		___m_Extents_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOUNDS_T1463076165_H
#ifndef CAMERACLEARFLAGS_T288817730_H
#define CAMERACLEARFLAGS_T288817730_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CameraClearFlags
struct  CameraClearFlags_t288817730 
{
public:
	// System.Int32 UnityEngine.CameraClearFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CameraClearFlags_t288817730, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERACLEARFLAGS_T288817730_H
#ifndef TEXTUREFORMAT_T3536119489_H
#define TEXTUREFORMAT_T3536119489_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextureFormat
struct  TextureFormat_t3536119489 
{
public:
	// System.Int32 UnityEngine.TextureFormat::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TextureFormat_t3536119489, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTUREFORMAT_T3536119489_H
#ifndef HEADERATTRIBUTE_T3064935922_H
#define HEADERATTRIBUTE_T3064935922_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.HeaderAttribute
struct  HeaderAttribute_t3064935922  : public PropertyAttribute_t4146786731
{
public:
	// System.String UnityEngine.HeaderAttribute::header
	String_t* ___header_0;

public:
	inline static int32_t get_offset_of_header_0() { return static_cast<int32_t>(offsetof(HeaderAttribute_t3064935922, ___header_0)); }
	inline String_t* get_header_0() const { return ___header_0; }
	inline String_t** get_address_of_header_0() { return &___header_0; }
	inline void set_header_0(String_t* value)
	{
		___header_0 = value;
		Il2CppCodeGenWriteBarrier((&___header_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HEADERATTRIBUTE_T3064935922_H
#ifndef GRADIENT_T1986117759_H
#define GRADIENT_T1986117759_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Gradient
struct  Gradient_t1986117759  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Gradient::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Gradient_t1986117759, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Gradient
struct Gradient_t1986117759_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Gradient
struct Gradient_t1986117759_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // GRADIENT_T1986117759_H
#ifndef RAY_T2315290679_H
#define RAY_T2315290679_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Ray
struct  Ray_t2315290679 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t2226991618  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t2226991618  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_t2315290679, ___m_Origin_0)); }
	inline Vector3_t2226991618  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_t2226991618 * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_t2226991618  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_t2315290679, ___m_Direction_1)); }
	inline Vector3_t2226991618  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_t2226991618 * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_t2226991618  value)
	{
		___m_Direction_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAY_T2315290679_H
#ifndef DISPLAY_T3728874799_H
#define DISPLAY_T3728874799_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Display
struct  Display_t3728874799  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Display::nativeDisplay
	intptr_t ___nativeDisplay_0;

public:
	inline static int32_t get_offset_of_nativeDisplay_0() { return static_cast<int32_t>(offsetof(Display_t3728874799, ___nativeDisplay_0)); }
	inline intptr_t get_nativeDisplay_0() const { return ___nativeDisplay_0; }
	inline intptr_t* get_address_of_nativeDisplay_0() { return &___nativeDisplay_0; }
	inline void set_nativeDisplay_0(intptr_t value)
	{
		___nativeDisplay_0 = value;
	}
};

struct Display_t3728874799_StaticFields
{
public:
	// UnityEngine.Display[] UnityEngine.Display::displays
	DisplayU5BU5D_t2632758582* ___displays_1;
	// UnityEngine.Display UnityEngine.Display::_mainDisplay
	Display_t3728874799 * ____mainDisplay_2;
	// UnityEngine.Display/DisplaysUpdatedDelegate UnityEngine.Display::onDisplaysUpdated
	DisplaysUpdatedDelegate_t2454816389 * ___onDisplaysUpdated_3;

public:
	inline static int32_t get_offset_of_displays_1() { return static_cast<int32_t>(offsetof(Display_t3728874799_StaticFields, ___displays_1)); }
	inline DisplayU5BU5D_t2632758582* get_displays_1() const { return ___displays_1; }
	inline DisplayU5BU5D_t2632758582** get_address_of_displays_1() { return &___displays_1; }
	inline void set_displays_1(DisplayU5BU5D_t2632758582* value)
	{
		___displays_1 = value;
		Il2CppCodeGenWriteBarrier((&___displays_1), value);
	}

	inline static int32_t get_offset_of__mainDisplay_2() { return static_cast<int32_t>(offsetof(Display_t3728874799_StaticFields, ____mainDisplay_2)); }
	inline Display_t3728874799 * get__mainDisplay_2() const { return ____mainDisplay_2; }
	inline Display_t3728874799 ** get_address_of__mainDisplay_2() { return &____mainDisplay_2; }
	inline void set__mainDisplay_2(Display_t3728874799 * value)
	{
		____mainDisplay_2 = value;
		Il2CppCodeGenWriteBarrier((&____mainDisplay_2), value);
	}

	inline static int32_t get_offset_of_onDisplaysUpdated_3() { return static_cast<int32_t>(offsetof(Display_t3728874799_StaticFields, ___onDisplaysUpdated_3)); }
	inline DisplaysUpdatedDelegate_t2454816389 * get_onDisplaysUpdated_3() const { return ___onDisplaysUpdated_3; }
	inline DisplaysUpdatedDelegate_t2454816389 ** get_address_of_onDisplaysUpdated_3() { return &___onDisplaysUpdated_3; }
	inline void set_onDisplaysUpdated_3(DisplaysUpdatedDelegate_t2454816389 * value)
	{
		___onDisplaysUpdated_3 = value;
		Il2CppCodeGenWriteBarrier((&___onDisplaysUpdated_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DISPLAY_T3728874799_H
#ifndef CULLINGGROUP_T2997067151_H
#define CULLINGGROUP_T2997067151_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CullingGroup
struct  CullingGroup_t2997067151  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.CullingGroup::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.CullingGroup/StateChanged UnityEngine.CullingGroup::m_OnStateChanged
	StateChanged_t2714458490 * ___m_OnStateChanged_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(CullingGroup_t2997067151, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_OnStateChanged_1() { return static_cast<int32_t>(offsetof(CullingGroup_t2997067151, ___m_OnStateChanged_1)); }
	inline StateChanged_t2714458490 * get_m_OnStateChanged_1() const { return ___m_OnStateChanged_1; }
	inline StateChanged_t2714458490 ** get_address_of_m_OnStateChanged_1() { return &___m_OnStateChanged_1; }
	inline void set_m_OnStateChanged_1(StateChanged_t2714458490 * value)
	{
		___m_OnStateChanged_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnStateChanged_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.CullingGroup
struct CullingGroup_t2997067151_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_OnStateChanged_1;
};
// Native definition for COM marshalling of UnityEngine.CullingGroup
struct CullingGroup_t2997067151_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_OnStateChanged_1;
};
#endif // CULLINGGROUP_T2997067151_H
#ifndef ASYNCOPERATION_T3425546390_H
#define ASYNCOPERATION_T3425546390_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AsyncOperation
struct  AsyncOperation_t3425546390  : public YieldInstruction_t4277545377
{
public:
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_t3168327840 * ___m_completeCallback_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncOperation_t3425546390, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_completeCallback_1() { return static_cast<int32_t>(offsetof(AsyncOperation_t3425546390, ___m_completeCallback_1)); }
	inline Action_1_t3168327840 * get_m_completeCallback_1() const { return ___m_completeCallback_1; }
	inline Action_1_t3168327840 ** get_address_of_m_completeCallback_1() { return &___m_completeCallback_1; }
	inline void set_m_completeCallback_1(Action_1_t3168327840 * value)
	{
		___m_completeCallback_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_completeCallback_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_t3425546390_marshaled_pinvoke : public YieldInstruction_t4277545377_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_t3425546390_marshaled_com : public YieldInstruction_t4277545377_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
#endif // ASYNCOPERATION_T3425546390_H
#ifndef COROUTINE_T1529235428_H
#define COROUTINE_T1529235428_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Coroutine
struct  Coroutine_t1529235428  : public YieldInstruction_t4277545377
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t1529235428, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t1529235428_marshaled_pinvoke : public YieldInstruction_t4277545377_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t1529235428_marshaled_com : public YieldInstruction_t4277545377_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // COROUTINE_T1529235428_H
#ifndef MATHFINTERNAL_T3300739197_H
#define MATHFINTERNAL_T3300739197_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngineInternal.MathfInternal
struct  MathfInternal_t3300739197 
{
public:
	union
	{
		struct
		{
		};
		uint8_t MathfInternal_t3300739197__padding[1];
	};

public:
};

struct MathfInternal_t3300739197_StaticFields
{
public:
	// System.Single modreq(System.Runtime.CompilerServices.IsVolatile) UnityEngineInternal.MathfInternal::FloatMinNormal
	float ___FloatMinNormal_0;
	// System.Single modreq(System.Runtime.CompilerServices.IsVolatile) UnityEngineInternal.MathfInternal::FloatMinDenormal
	float ___FloatMinDenormal_1;
	// System.Boolean UnityEngineInternal.MathfInternal::IsFlushToZeroEnabled
	bool ___IsFlushToZeroEnabled_2;

public:
	inline static int32_t get_offset_of_FloatMinNormal_0() { return static_cast<int32_t>(offsetof(MathfInternal_t3300739197_StaticFields, ___FloatMinNormal_0)); }
	inline float get_FloatMinNormal_0() const { return ___FloatMinNormal_0; }
	inline float* get_address_of_FloatMinNormal_0() { return &___FloatMinNormal_0; }
	inline void set_FloatMinNormal_0(float value)
	{
		___FloatMinNormal_0 = value;
	}

	inline static int32_t get_offset_of_FloatMinDenormal_1() { return static_cast<int32_t>(offsetof(MathfInternal_t3300739197_StaticFields, ___FloatMinDenormal_1)); }
	inline float get_FloatMinDenormal_1() const { return ___FloatMinDenormal_1; }
	inline float* get_address_of_FloatMinDenormal_1() { return &___FloatMinDenormal_1; }
	inline void set_FloatMinDenormal_1(float value)
	{
		___FloatMinDenormal_1 = value;
	}

	inline static int32_t get_offset_of_IsFlushToZeroEnabled_2() { return static_cast<int32_t>(offsetof(MathfInternal_t3300739197_StaticFields, ___IsFlushToZeroEnabled_2)); }
	inline bool get_IsFlushToZeroEnabled_2() const { return ___IsFlushToZeroEnabled_2; }
	inline bool* get_address_of_IsFlushToZeroEnabled_2() { return &___IsFlushToZeroEnabled_2; }
	inline void set_IsFlushToZeroEnabled_2(bool value)
	{
		___IsFlushToZeroEnabled_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATHFINTERNAL_T3300739197_H
#ifndef ANIMATIONCURVE_T2940265898_H
#define ANIMATIONCURVE_T2940265898_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimationCurve
struct  AnimationCurve_t2940265898  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AnimationCurve_t2940265898, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t2940265898_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t2940265898_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // ANIMATIONCURVE_T2940265898_H
#ifndef DATASTREAMTYPE_T860173873_H
#define DATASTREAMTYPE_T860173873_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.DataStreamType
struct  DataStreamType_t860173873 
{
public:
	// System.Int32 UnityEngine.Playables.DataStreamType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DataStreamType_t860173873, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATASTREAMTYPE_T860173873_H
#ifndef SCRIPTABLERENDERCONTEXT_T3135686971_H
#define SCRIPTABLERENDERCONTEXT_T3135686971_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Rendering.ScriptableRenderContext
struct  ScriptableRenderContext_t3135686971 
{
public:
	// System.IntPtr UnityEngine.Experimental.Rendering.ScriptableRenderContext::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(ScriptableRenderContext_t3135686971, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCRIPTABLERENDERCONTEXT_T3135686971_H
#ifndef PLAYABLEGRAPH_T2333280798_H
#define PLAYABLEGRAPH_T2333280798_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableGraph
struct  PlayableGraph_t2333280798 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableGraph::m_Handle
	intptr_t ___m_Handle_0;
	// System.Int32 UnityEngine.Playables.PlayableGraph::m_Version
	int32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableGraph_t2333280798, ___m_Handle_0)); }
	inline intptr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline intptr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(intptr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableGraph_t2333280798, ___m_Version_1)); }
	inline int32_t get_m_Version_1() const { return ___m_Version_1; }
	inline int32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(int32_t value)
	{
		___m_Version_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEGRAPH_T2333280798_H
#ifndef PLAYABLEOUTPUTHANDLE_T4224131253_H
#define PLAYABLEOUTPUTHANDLE_T4224131253_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableOutputHandle
struct  PlayableOutputHandle_t4224131253 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableOutputHandle::m_Handle
	intptr_t ___m_Handle_0;
	// System.Int32 UnityEngine.Playables.PlayableOutputHandle::m_Version
	int32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableOutputHandle_t4224131253, ___m_Handle_0)); }
	inline intptr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline intptr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(intptr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableOutputHandle_t4224131253, ___m_Version_1)); }
	inline int32_t get_m_Version_1() const { return ___m_Version_1; }
	inline int32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(int32_t value)
	{
		___m_Version_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEOUTPUTHANDLE_T4224131253_H
#ifndef LOCALNOTIFICATION_T70446134_H
#define LOCALNOTIFICATION_T70446134_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.iOS.LocalNotification
struct  LocalNotification_t70446134  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.iOS.LocalNotification::notificationWrapper
	intptr_t ___notificationWrapper_0;

public:
	inline static int32_t get_offset_of_notificationWrapper_0() { return static_cast<int32_t>(offsetof(LocalNotification_t70446134, ___notificationWrapper_0)); }
	inline intptr_t get_notificationWrapper_0() const { return ___notificationWrapper_0; }
	inline intptr_t* get_address_of_notificationWrapper_0() { return &___notificationWrapper_0; }
	inline void set_notificationWrapper_0(intptr_t value)
	{
		___notificationWrapper_0 = value;
	}
};

struct LocalNotification_t70446134_StaticFields
{
public:
	// System.Int64 UnityEngine.iOS.LocalNotification::m_NSReferenceDateTicks
	int64_t ___m_NSReferenceDateTicks_1;

public:
	inline static int32_t get_offset_of_m_NSReferenceDateTicks_1() { return static_cast<int32_t>(offsetof(LocalNotification_t70446134_StaticFields, ___m_NSReferenceDateTicks_1)); }
	inline int64_t get_m_NSReferenceDateTicks_1() const { return ___m_NSReferenceDateTicks_1; }
	inline int64_t* get_address_of_m_NSReferenceDateTicks_1() { return &___m_NSReferenceDateTicks_1; }
	inline void set_m_NSReferenceDateTicks_1(int64_t value)
	{
		___m_NSReferenceDateTicks_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCALNOTIFICATION_T70446134_H
#ifndef REMOTENOTIFICATION_T2200277911_H
#define REMOTENOTIFICATION_T2200277911_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.iOS.RemoteNotification
struct  RemoteNotification_t2200277911  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.iOS.RemoteNotification::notificationWrapper
	intptr_t ___notificationWrapper_0;

public:
	inline static int32_t get_offset_of_notificationWrapper_0() { return static_cast<int32_t>(offsetof(RemoteNotification_t2200277911, ___notificationWrapper_0)); }
	inline intptr_t get_notificationWrapper_0() const { return ___notificationWrapper_0; }
	inline intptr_t* get_address_of_notificationWrapper_0() { return &___notificationWrapper_0; }
	inline void set_notificationWrapper_0(intptr_t value)
	{
		___notificationWrapper_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REMOTENOTIFICATION_T2200277911_H
#ifndef PLAYABLEHANDLE_T851080353_H
#define PLAYABLEHANDLE_T851080353_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableHandle
struct  PlayableHandle_t851080353 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableHandle::m_Handle
	intptr_t ___m_Handle_0;
	// System.Int32 UnityEngine.Playables.PlayableHandle::m_Version
	int32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableHandle_t851080353, ___m_Handle_0)); }
	inline intptr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline intptr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(intptr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableHandle_t851080353, ___m_Version_1)); }
	inline int32_t get_m_Version_1() const { return ___m_Version_1; }
	inline int32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(int32_t value)
	{
		___m_Version_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEHANDLE_T851080353_H
#ifndef LOADSCENEMODE_T4148922111_H
#define LOADSCENEMODE_T4148922111_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SceneManagement.LoadSceneMode
struct  LoadSceneMode_t4148922111 
{
public:
	// System.Int32 UnityEngine.SceneManagement.LoadSceneMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LoadSceneMode_t4148922111, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOADSCENEMODE_T4148922111_H
#ifndef OBJECT_T2498689768_H
#define OBJECT_T2498689768_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t2498689768  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t2498689768, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t2498689768_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t2498689768_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t2498689768_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t2498689768_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T2498689768_H
#ifndef HIDEFLAGS_T1878613910_H
#define HIDEFLAGS_T1878613910_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.HideFlags
struct  HideFlags_t1878613910 
{
public:
	// System.Int32 UnityEngine.HideFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(HideFlags_t1878613910, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HIDEFLAGS_T1878613910_H
#ifndef DELEGATE_T789477089_H
#define DELEGATE_T789477089_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t789477089  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t2034675761 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t789477089, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t789477089, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t789477089, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t789477089, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t789477089, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t789477089, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t789477089, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t789477089, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t789477089, ___data_8)); }
	inline DelegateData_t2034675761 * get_data_8() const { return ___data_8; }
	inline DelegateData_t2034675761 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t2034675761 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T789477089_H
#ifndef MATERIAL_T1616753569_H
#define MATERIAL_T1616753569_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Material
struct  Material_t1616753569  : public Object_t2498689768
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATERIAL_T1616753569_H
#ifndef RESOURCEREQUEST_T3786018411_H
#define RESOURCEREQUEST_T3786018411_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ResourceRequest
struct  ResourceRequest_t3786018411  : public AsyncOperation_t3425546390
{
public:
	// System.String UnityEngine.ResourceRequest::m_Path
	String_t* ___m_Path_2;
	// System.Type UnityEngine.ResourceRequest::m_Type
	Type_t * ___m_Type_3;

public:
	inline static int32_t get_offset_of_m_Path_2() { return static_cast<int32_t>(offsetof(ResourceRequest_t3786018411, ___m_Path_2)); }
	inline String_t* get_m_Path_2() const { return ___m_Path_2; }
	inline String_t** get_address_of_m_Path_2() { return &___m_Path_2; }
	inline void set_m_Path_2(String_t* value)
	{
		___m_Path_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Path_2), value);
	}

	inline static int32_t get_offset_of_m_Type_3() { return static_cast<int32_t>(offsetof(ResourceRequest_t3786018411, ___m_Type_3)); }
	inline Type_t * get_m_Type_3() const { return ___m_Type_3; }
	inline Type_t ** get_address_of_m_Type_3() { return &___m_Type_3; }
	inline void set_m_Type_3(Type_t * value)
	{
		___m_Type_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Type_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ResourceRequest
struct ResourceRequest_t3786018411_marshaled_pinvoke : public AsyncOperation_t3425546390_marshaled_pinvoke
{
	char* ___m_Path_2;
	Type_t * ___m_Type_3;
};
// Native definition for COM marshalling of UnityEngine.ResourceRequest
struct ResourceRequest_t3786018411_marshaled_com : public AsyncOperation_t3425546390_marshaled_com
{
	Il2CppChar* ___m_Path_2;
	Type_t * ___m_Type_3;
};
#endif // RESOURCEREQUEST_T3786018411_H
#ifndef SCRIPTABLEOBJECT_T1510046500_H
#define SCRIPTABLEOBJECT_T1510046500_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScriptableObject
struct  ScriptableObject_t1510046500  : public Object_t2498689768
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t1510046500_marshaled_pinvoke : public Object_t2498689768_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t1510046500_marshaled_com : public Object_t2498689768_marshaled_com
{
};
#endif // SCRIPTABLEOBJECT_T1510046500_H
#ifndef FAILEDTOLOADSCRIPTOBJECT_T3130387271_H
#define FAILEDTOLOADSCRIPTOBJECT_T3130387271_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.FailedToLoadScriptObject
struct  FailedToLoadScriptObject_t3130387271  : public Object_t2498689768
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.FailedToLoadScriptObject
struct FailedToLoadScriptObject_t3130387271_marshaled_pinvoke : public Object_t2498689768_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.FailedToLoadScriptObject
struct FailedToLoadScriptObject_t3130387271_marshaled_com : public Object_t2498689768_marshaled_com
{
};
#endif // FAILEDTOLOADSCRIPTOBJECT_T3130387271_H
#ifndef PLAYABLE_T4070024435_H
#define PLAYABLE_T4070024435_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.Playable
struct  Playable_t4070024435 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.Playable::m_Handle
	PlayableHandle_t851080353  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Playable_t4070024435, ___m_Handle_0)); }
	inline PlayableHandle_t851080353  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t851080353 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t851080353  value)
	{
		___m_Handle_0 = value;
	}
};

struct Playable_t4070024435_StaticFields
{
public:
	// UnityEngine.Playables.Playable UnityEngine.Playables.Playable::m_NullPlayable
	Playable_t4070024435  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(Playable_t4070024435_StaticFields, ___m_NullPlayable_1)); }
	inline Playable_t4070024435  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline Playable_t4070024435 * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(Playable_t4070024435  value)
	{
		___m_NullPlayable_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLE_T4070024435_H
#ifndef PLAYABLEOUTPUT_T1404789023_H
#define PLAYABLEOUTPUT_T1404789023_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableOutput
struct  PlayableOutput_t1404789023 
{
public:
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.PlayableOutput::m_Handle
	PlayableOutputHandle_t4224131253  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableOutput_t1404789023, ___m_Handle_0)); }
	inline PlayableOutputHandle_t4224131253  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableOutputHandle_t4224131253 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableOutputHandle_t4224131253  value)
	{
		___m_Handle_0 = value;
	}
};

struct PlayableOutput_t1404789023_StaticFields
{
public:
	// UnityEngine.Playables.PlayableOutput UnityEngine.Playables.PlayableOutput::m_NullPlayableOutput
	PlayableOutput_t1404789023  ___m_NullPlayableOutput_1;

public:
	inline static int32_t get_offset_of_m_NullPlayableOutput_1() { return static_cast<int32_t>(offsetof(PlayableOutput_t1404789023_StaticFields, ___m_NullPlayableOutput_1)); }
	inline PlayableOutput_t1404789023  get_m_NullPlayableOutput_1() const { return ___m_NullPlayableOutput_1; }
	inline PlayableOutput_t1404789023 * get_address_of_m_NullPlayableOutput_1() { return &___m_NullPlayableOutput_1; }
	inline void set_m_NullPlayableOutput_1(PlayableOutput_t1404789023  value)
	{
		___m_NullPlayableOutput_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEOUTPUT_T1404789023_H
#ifndef MULTICASTDELEGATE_T1504939328_H
#define MULTICASTDELEGATE_T1504939328_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t1504939328  : public Delegate_t789477089
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t1504939328 * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t1504939328 * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t1504939328, ___prev_9)); }
	inline MulticastDelegate_t1504939328 * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t1504939328 ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t1504939328 * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t1504939328, ___kpm_next_10)); }
	inline MulticastDelegate_t1504939328 * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t1504939328 ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t1504939328 * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T1504939328_H
#ifndef SPRITE_T2074725449_H
#define SPRITE_T2074725449_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Sprite
struct  Sprite_t2074725449  : public Object_t2498689768
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPRITE_T2074725449_H
#ifndef COMPONENT_T3565672751_H
#define COMPONENT_T3565672751_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t3565672751  : public Object_t2498689768
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T3565672751_H
#ifndef GAMEOBJECT_T3846369558_H
#define GAMEOBJECT_T3846369558_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t3846369558  : public Object_t2498689768
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T3846369558_H
#ifndef TEXTASSET_T1376183451_H
#define TEXTASSET_T1376183451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextAsset
struct  TextAsset_t1376183451  : public Object_t2498689768
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTASSET_T1376183451_H
#ifndef TEXTURE_T3636040490_H
#define TEXTURE_T3636040490_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture
struct  Texture_t3636040490  : public Object_t2498689768
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE_T3636040490_H
#ifndef SPRITEATLAS_T2119268408_H
#define SPRITEATLAS_T2119268408_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.U2D.SpriteAtlas
struct  SpriteAtlas_t2119268408  : public Object_t2498689768
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPRITEATLAS_T2119268408_H
#ifndef BEHAVIOUR_T3920408995_H
#define BEHAVIOUR_T3920408995_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t3920408995  : public Component_t3565672751
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T3920408995_H
#ifndef CAMERACALLBACK_T2102906192_H
#define CAMERACALLBACK_T2102906192_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Camera/CameraCallback
struct  CameraCallback_t2102906192  : public MulticastDelegate_t1504939328
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERACALLBACK_T2102906192_H
#ifndef STATECHANGED_T2714458490_H
#define STATECHANGED_T2714458490_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CullingGroup/StateChanged
struct  StateChanged_t2714458490  : public MulticastDelegate_t1504939328
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STATECHANGED_T2714458490_H
#ifndef TEXTURE2D_T1124226795_H
#define TEXTURE2D_T1124226795_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture2D
struct  Texture2D_t1124226795  : public Texture_t3636040490
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE2D_T1124226795_H
#ifndef RENDERER_T922236545_H
#define RENDERER_T922236545_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Renderer
struct  Renderer_t922236545  : public Component_t3565672751
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERER_T922236545_H
#ifndef TRANSFORM_T266250937_H
#define TRANSFORM_T266250937_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t266250937  : public Component_t3565672751
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T266250937_H
#ifndef REAPPLYDRIVENPROPERTIES_T852431891_H
#define REAPPLYDRIVENPROPERTIES_T852431891_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RectTransform/ReapplyDrivenProperties
struct  ReapplyDrivenProperties_t852431891  : public MulticastDelegate_t1504939328
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REAPPLYDRIVENPROPERTIES_T852431891_H
#ifndef RENDERTEXTURE_T3652787980_H
#define RENDERTEXTURE_T3652787980_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RenderTexture
struct  RenderTexture_t3652787980  : public Texture_t3636040490
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERTEXTURE_T3652787980_H
#ifndef DISPLAYSUPDATEDDELEGATE_T2454816389_H
#define DISPLAYSUPDATEDDELEGATE_T2454816389_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Display/DisplaysUpdatedDelegate
struct  DisplaysUpdatedDelegate_t2454816389  : public MulticastDelegate_t1504939328
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DISPLAYSUPDATEDDELEGATE_T2454816389_H
#ifndef REQUESTATLASCALLBACK_T2738380376_H
#define REQUESTATLASCALLBACK_T2738380376_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.U2D.SpriteAtlasManager/RequestAtlasCallback
struct  RequestAtlasCallback_t2738380376  : public MulticastDelegate_t1504939328
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQUESTATLASCALLBACK_T2738380376_H
#ifndef SPRITERENDERER_T1831543991_H
#define SPRITERENDERER_T1831543991_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SpriteRenderer
struct  SpriteRenderer_t1831543991  : public Renderer_t922236545
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPRITERENDERER_T1831543991_H
#ifndef CAMERA_T3948587831_H
#define CAMERA_T3948587831_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Camera
struct  Camera_t3948587831  : public Behaviour_t3920408995
{
public:

public:
};

struct Camera_t3948587831_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t2102906192 * ___onPreCull_2;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t2102906192 * ___onPreRender_3;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t2102906192 * ___onPostRender_4;

public:
	inline static int32_t get_offset_of_onPreCull_2() { return static_cast<int32_t>(offsetof(Camera_t3948587831_StaticFields, ___onPreCull_2)); }
	inline CameraCallback_t2102906192 * get_onPreCull_2() const { return ___onPreCull_2; }
	inline CameraCallback_t2102906192 ** get_address_of_onPreCull_2() { return &___onPreCull_2; }
	inline void set_onPreCull_2(CameraCallback_t2102906192 * value)
	{
		___onPreCull_2 = value;
		Il2CppCodeGenWriteBarrier((&___onPreCull_2), value);
	}

	inline static int32_t get_offset_of_onPreRender_3() { return static_cast<int32_t>(offsetof(Camera_t3948587831_StaticFields, ___onPreRender_3)); }
	inline CameraCallback_t2102906192 * get_onPreRender_3() const { return ___onPreRender_3; }
	inline CameraCallback_t2102906192 ** get_address_of_onPreRender_3() { return &___onPreRender_3; }
	inline void set_onPreRender_3(CameraCallback_t2102906192 * value)
	{
		___onPreRender_3 = value;
		Il2CppCodeGenWriteBarrier((&___onPreRender_3), value);
	}

	inline static int32_t get_offset_of_onPostRender_4() { return static_cast<int32_t>(offsetof(Camera_t3948587831_StaticFields, ___onPostRender_4)); }
	inline CameraCallback_t2102906192 * get_onPostRender_4() const { return ___onPostRender_4; }
	inline CameraCallback_t2102906192 ** get_address_of_onPostRender_4() { return &___onPostRender_4; }
	inline void set_onPostRender_4(CameraCallback_t2102906192 * value)
	{
		___onPostRender_4 = value;
		Il2CppCodeGenWriteBarrier((&___onPostRender_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERA_T3948587831_H
#ifndef GUIELEMENT_T3191063444_H
#define GUIELEMENT_T3191063444_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUIElement
struct  GUIElement_t3191063444  : public Behaviour_t3920408995
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUIELEMENT_T3191063444_H
#ifndef GUILAYER_T2986222581_H
#define GUILAYER_T2986222581_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUILayer
struct  GUILayer_t2986222581  : public Behaviour_t3920408995
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUILAYER_T2986222581_H
#ifndef RECTTRANSFORM_T2525319355_H
#define RECTTRANSFORM_T2525319355_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RectTransform
struct  RectTransform_t2525319355  : public Transform_t266250937
{
public:

public:
};

struct RectTransform_t2525319355_StaticFields
{
public:
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t852431891 * ___reapplyDrivenProperties_2;

public:
	inline static int32_t get_offset_of_reapplyDrivenProperties_2() { return static_cast<int32_t>(offsetof(RectTransform_t2525319355_StaticFields, ___reapplyDrivenProperties_2)); }
	inline ReapplyDrivenProperties_t852431891 * get_reapplyDrivenProperties_2() const { return ___reapplyDrivenProperties_2; }
	inline ReapplyDrivenProperties_t852431891 ** get_address_of_reapplyDrivenProperties_2() { return &___reapplyDrivenProperties_2; }
	inline void set_reapplyDrivenProperties_2(ReapplyDrivenProperties_t852431891 * value)
	{
		___reapplyDrivenProperties_2 = value;
		Il2CppCodeGenWriteBarrier((&___reapplyDrivenProperties_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECTTRANSFORM_T2525319355_H
#ifndef MONOBEHAVIOUR_T1540478760_H
#define MONOBEHAVIOUR_T1540478760_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t1540478760  : public Behaviour_t3920408995
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T1540478760_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1200 = { sizeof (WaitForFixedUpdate_t3586331731), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1201 = { sizeof (WaitForEndOfFrame_t3968975611), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1202 = { sizeof (Coroutine_t1529235428), sizeof(Coroutine_t1529235428_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1202[1] = 
{
	Coroutine_t1529235428::get_offset_of_m_Ptr_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1203 = { sizeof (ScriptableObject_t1510046500), sizeof(ScriptableObject_t1510046500_marshaled_pinvoke), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1204 = { sizeof (FailedToLoadScriptObject_t3130387271), sizeof(FailedToLoadScriptObject_t3130387271_marshaled_pinvoke), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1205 = { sizeof (Behaviour_t3920408995), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1206 = { sizeof (Camera_t3948587831), -1, sizeof(Camera_t3948587831_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1206[3] = 
{
	Camera_t3948587831_StaticFields::get_offset_of_onPreCull_2(),
	Camera_t3948587831_StaticFields::get_offset_of_onPreRender_3(),
	Camera_t3948587831_StaticFields::get_offset_of_onPostRender_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1207 = { sizeof (CameraCallback_t2102906192), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1208 = { sizeof (Component_t3565672751), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1209 = { sizeof (UnhandledExceptionHandler_t2938774883), -1, sizeof(UnhandledExceptionHandler_t2938774883_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1209[1] = 
{
	UnhandledExceptionHandler_t2938774883_StaticFields::get_offset_of_U3CU3Ef__mgU24cache0_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1210 = { sizeof (CullingGroupEvent_t4112952250)+ sizeof (RuntimeObject), sizeof(CullingGroupEvent_t4112952250 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1210[3] = 
{
	CullingGroupEvent_t4112952250::get_offset_of_m_Index_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CullingGroupEvent_t4112952250::get_offset_of_m_PrevState_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CullingGroupEvent_t4112952250::get_offset_of_m_ThisState_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1211 = { sizeof (CullingGroup_t2997067151), sizeof(CullingGroup_t2997067151_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1211[2] = 
{
	CullingGroup_t2997067151::get_offset_of_m_Ptr_0(),
	CullingGroup_t2997067151::get_offset_of_m_OnStateChanged_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1212 = { sizeof (StateChanged_t2714458490), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1213 = { sizeof (DebugLogHandler_t2173261699), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1214 = { sizeof (Debug_t3773704340), -1, sizeof(Debug_t3773704340_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1214[1] = 
{
	Debug_t3773704340_StaticFields::get_offset_of_s_Logger_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1215 = { sizeof (Display_t3728874799), -1, sizeof(Display_t3728874799_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1215[4] = 
{
	Display_t3728874799::get_offset_of_nativeDisplay_0(),
	Display_t3728874799_StaticFields::get_offset_of_displays_1(),
	Display_t3728874799_StaticFields::get_offset_of__mainDisplay_2(),
	Display_t3728874799_StaticFields::get_offset_of_onDisplaysUpdated_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1216 = { sizeof (DisplaysUpdatedDelegate_t2454816389), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1217 = { sizeof (GameObject_t3846369558), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1218 = { sizeof (Gradient_t1986117759), sizeof(Gradient_t1986117759_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1218[1] = 
{
	Gradient_t1986117759::get_offset_of_m_Ptr_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1219 = { sizeof (Renderer_t922236545), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1220 = { sizeof (Screen_t1118908372), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1221 = { sizeof (GUIElement_t3191063444), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1222 = { sizeof (GUILayer_t2986222581), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1223 = { sizeof (Gyroscope_t1245201728), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1224 = { sizeof (Input_t2632919104), -1, sizeof(Input_t2632919104_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1224[1] = 
{
	Input_t2632919104_StaticFields::get_offset_of_m_MainGyro_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1225 = { sizeof (Vector3_t2226991618)+ sizeof (RuntimeObject), sizeof(Vector3_t2226991618 ), sizeof(Vector3_t2226991618_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1225[14] = 
{
	0,
	Vector3_t2226991618::get_offset_of_x_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Vector3_t2226991618::get_offset_of_y_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Vector3_t2226991618::get_offset_of_z_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Vector3_t2226991618_StaticFields::get_offset_of_zeroVector_4(),
	Vector3_t2226991618_StaticFields::get_offset_of_oneVector_5(),
	Vector3_t2226991618_StaticFields::get_offset_of_upVector_6(),
	Vector3_t2226991618_StaticFields::get_offset_of_downVector_7(),
	Vector3_t2226991618_StaticFields::get_offset_of_leftVector_8(),
	Vector3_t2226991618_StaticFields::get_offset_of_rightVector_9(),
	Vector3_t2226991618_StaticFields::get_offset_of_forwardVector_10(),
	Vector3_t2226991618_StaticFields::get_offset_of_backVector_11(),
	Vector3_t2226991618_StaticFields::get_offset_of_positiveInfinityVector_12(),
	Vector3_t2226991618_StaticFields::get_offset_of_negativeInfinityVector_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1226 = { sizeof (Quaternion_t211453020)+ sizeof (RuntimeObject), sizeof(Quaternion_t211453020 ), sizeof(Quaternion_t211453020_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1226[5] = 
{
	Quaternion_t211453020::get_offset_of_x_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Quaternion_t211453020::get_offset_of_y_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Quaternion_t211453020::get_offset_of_z_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Quaternion_t211453020::get_offset_of_w_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Quaternion_t211453020_StaticFields::get_offset_of_identityQuaternion_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1227 = { sizeof (Matrix4x4_t2925358924)+ sizeof (RuntimeObject), sizeof(Matrix4x4_t2925358924 ), sizeof(Matrix4x4_t2925358924_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1227[18] = 
{
	Matrix4x4_t2925358924::get_offset_of_m00_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t2925358924::get_offset_of_m10_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t2925358924::get_offset_of_m20_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t2925358924::get_offset_of_m30_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t2925358924::get_offset_of_m01_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t2925358924::get_offset_of_m11_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t2925358924::get_offset_of_m21_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t2925358924::get_offset_of_m31_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t2925358924::get_offset_of_m02_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t2925358924::get_offset_of_m12_9() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t2925358924::get_offset_of_m22_10() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t2925358924::get_offset_of_m32_11() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t2925358924::get_offset_of_m03_12() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t2925358924::get_offset_of_m13_13() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t2925358924::get_offset_of_m23_14() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t2925358924::get_offset_of_m33_15() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t2925358924_StaticFields::get_offset_of_zeroMatrix_16(),
	Matrix4x4_t2925358924_StaticFields::get_offset_of_identityMatrix_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1228 = { sizeof (Bounds_t1463076165)+ sizeof (RuntimeObject), sizeof(Bounds_t1463076165 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1228[2] = 
{
	Bounds_t1463076165::get_offset_of_m_Center_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Bounds_t1463076165::get_offset_of_m_Extents_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1229 = { sizeof (Mathf_t3977504995)+ sizeof (RuntimeObject), sizeof(Mathf_t3977504995 ), sizeof(Mathf_t3977504995_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1229[1] = 
{
	Mathf_t3977504995_StaticFields::get_offset_of_Epsilon_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1230 = { sizeof (Keyframe_t4071087372)+ sizeof (RuntimeObject), sizeof(Keyframe_t4071087372 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1230[4] = 
{
	Keyframe_t4071087372::get_offset_of_m_Time_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Keyframe_t4071087372::get_offset_of_m_Value_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Keyframe_t4071087372::get_offset_of_m_InTangent_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Keyframe_t4071087372::get_offset_of_m_OutTangent_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1231 = { sizeof (AnimationCurve_t2940265898), sizeof(AnimationCurve_t2940265898_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1231[1] = 
{
	AnimationCurve_t2940265898::get_offset_of_m_Ptr_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1232 = { sizeof (MonoBehaviour_t1540478760), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1233 = { sizeof (Random_t4161944167), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1234 = { sizeof (ResourceRequest_t3786018411), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1234[2] = 
{
	ResourceRequest_t3786018411::get_offset_of_m_Path_2(),
	ResourceRequest_t3786018411::get_offset_of_m_Type_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1235 = { sizeof (Material_t1616753569), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1236 = { sizeof (Sprite_t2074725449), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1237 = { sizeof (SpriteRenderer_t1831543991), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1238 = { sizeof (TextAsset_t1376183451), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1239 = { sizeof (Texture_t3636040490), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1240 = { sizeof (Texture2D_t1124226795), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1241 = { sizeof (RenderTexture_t3652787980), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1242 = { sizeof (HideFlags_t1878613910)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1242[10] = 
{
	HideFlags_t1878613910::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1243 = { sizeof (Object_t2498689768), sizeof(Object_t2498689768_marshaled_pinvoke), sizeof(Object_t2498689768_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1243[2] = 
{
	Object_t2498689768::get_offset_of_m_CachedPtr_0(),
	Object_t2498689768_StaticFields::get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1244 = { sizeof (UnityLogWriter_t3628235865), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1245 = { sizeof (YieldInstruction_t4277545377), sizeof(YieldInstruction_t4277545377_marshaled_pinvoke), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1246 = { sizeof (PlayableHandle_t851080353)+ sizeof (RuntimeObject), sizeof(PlayableHandle_t851080353 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1246[2] = 
{
	PlayableHandle_t851080353::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayableHandle_t851080353::get_offset_of_m_Version_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1247 = { sizeof (Playable_t4070024435)+ sizeof (RuntimeObject), sizeof(Playable_t4070024435 ), sizeof(Playable_t4070024435_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1247[2] = 
{
	Playable_t4070024435::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Playable_t4070024435_StaticFields::get_offset_of_m_NullPlayable_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1248 = { sizeof (DataStreamType_t860173873)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1248[5] = 
{
	DataStreamType_t860173873::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1249 = { sizeof (PlayableGraph_t2333280798)+ sizeof (RuntimeObject), sizeof(PlayableGraph_t2333280798 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1249[2] = 
{
	PlayableGraph_t2333280798::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayableGraph_t2333280798::get_offset_of_m_Version_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1250 = { sizeof (PlayableOutputHandle_t4224131253)+ sizeof (RuntimeObject), sizeof(PlayableOutputHandle_t4224131253 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1250[2] = 
{
	PlayableOutputHandle_t4224131253::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayableOutputHandle_t4224131253::get_offset_of_m_Version_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1251 = { sizeof (PlayableOutput_t1404789023)+ sizeof (RuntimeObject), sizeof(PlayableOutput_t1404789023 ), sizeof(PlayableOutput_t1404789023_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1251[2] = 
{
	PlayableOutput_t1404789023::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayableOutput_t1404789023_StaticFields::get_offset_of_m_NullPlayableOutput_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1252 = { sizeof (LocalNotification_t70446134), -1, sizeof(LocalNotification_t70446134_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1252[2] = 
{
	LocalNotification_t70446134::get_offset_of_notificationWrapper_0(),
	LocalNotification_t70446134_StaticFields::get_offset_of_m_NSReferenceDateTicks_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1253 = { sizeof (RemoteNotification_t2200277911), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1253[1] = 
{
	RemoteNotification_t2200277911::get_offset_of_notificationWrapper_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1254 = { sizeof (Scene_t4126765453)+ sizeof (RuntimeObject), sizeof(Scene_t4126765453 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1254[1] = 
{
	Scene_t4126765453::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1255 = { sizeof (LoadSceneMode_t4148922111)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1255[3] = 
{
	LoadSceneMode_t4148922111::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1256 = { sizeof (SceneManager_t3520173993), -1, sizeof(SceneManager_t3520173993_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1256[3] = 
{
	SceneManager_t3520173993_StaticFields::get_offset_of_sceneLoaded_0(),
	SceneManager_t3520173993_StaticFields::get_offset_of_sceneUnloaded_1(),
	SceneManager_t3520173993_StaticFields::get_offset_of_activeSceneChanged_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1257 = { sizeof (ScriptableRenderContext_t3135686971)+ sizeof (RuntimeObject), sizeof(ScriptableRenderContext_t3135686971 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1257[1] = 
{
	ScriptableRenderContext_t3135686971::get_offset_of_m_Ptr_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1258 = { sizeof (Transform_t266250937), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1259 = { sizeof (Enumerator_t3664446735), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1259[2] = 
{
	Enumerator_t3664446735::get_offset_of_outer_0(),
	Enumerator_t3664446735::get_offset_of_currentIndex_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1260 = { sizeof (RectTransform_t2525319355), -1, sizeof(RectTransform_t2525319355_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1260[1] = 
{
	RectTransform_t2525319355_StaticFields::get_offset_of_reapplyDrivenProperties_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1261 = { sizeof (ReapplyDrivenProperties_t852431891), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1262 = { sizeof (SpriteAtlasManager_t2710895451), -1, sizeof(SpriteAtlasManager_t2710895451_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1262[2] = 
{
	SpriteAtlasManager_t2710895451_StaticFields::get_offset_of_atlasRequested_0(),
	SpriteAtlasManager_t2710895451_StaticFields::get_offset_of_U3CU3Ef__mgU24cache0_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1263 = { sizeof (RequestAtlasCallback_t2738380376), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1264 = { sizeof (SpriteAtlas_t2119268408), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1265 = { sizeof (AttributeHelperEngine_t1086490484), -1, sizeof(AttributeHelperEngine_t1086490484_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1265[3] = 
{
	AttributeHelperEngine_t1086490484_StaticFields::get_offset_of__disallowMultipleComponentArray_0(),
	AttributeHelperEngine_t1086490484_StaticFields::get_offset_of__executeInEditModeArray_1(),
	AttributeHelperEngine_t1086490484_StaticFields::get_offset_of__requireComponentArray_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1266 = { sizeof (DisallowMultipleComponent_t961802398), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1267 = { sizeof (RequireComponent_t2225763475), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1267[3] = 
{
	RequireComponent_t2225763475::get_offset_of_m_Type0_0(),
	RequireComponent_t2225763475::get_offset_of_m_Type1_1(),
	RequireComponent_t2225763475::get_offset_of_m_Type2_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1268 = { sizeof (AddComponentMenu_t3062019865), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1268[2] = 
{
	AddComponentMenu_t3062019865::get_offset_of_m_AddComponentMenu_0(),
	AddComponentMenu_t3062019865::get_offset_of_m_Ordering_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1269 = { sizeof (ContextMenu_t2273835945), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1270 = { sizeof (ExecuteInEditMode_t301691790), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1271 = { sizeof (DefaultExecutionOrder_t1275932909), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1271[1] = 
{
	DefaultExecutionOrder_t1275932909::get_offset_of_U3CorderU3Ek__BackingField_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1272 = { sizeof (NativeClassAttribute_t1476254938), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1272[1] = 
{
	NativeClassAttribute_t1476254938::get_offset_of_U3CQualifiedNativeNameU3Ek__BackingField_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1273 = { sizeof (AssemblyIsEditorAssembly_t4255778100), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1274 = { sizeof (WritableAttribute_t2978091226), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1275 = { sizeof (GeneratedByOldBindingsGeneratorAttribute_t3438091356), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1276 = { sizeof (SendMessageOptions_t2948111154)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1276[3] = 
{
	SendMessageOptions_t2948111154::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1277 = { sizeof (LogType_t63372126)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1277[6] = 
{
	LogType_t63372126::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1278 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1278[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1279 = { sizeof (ClassLibraryInitializer_t2173502781), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1280 = { sizeof (Color_t3196854853)+ sizeof (RuntimeObject), sizeof(Color_t3196854853 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1280[4] = 
{
	Color_t3196854853::get_offset_of_r_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Color_t3196854853::get_offset_of_g_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Color_t3196854853::get_offset_of_b_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Color_t3196854853::get_offset_of_a_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1281 = { sizeof (SetupCoroutine_t1946642180), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1282 = { sizeof (CameraClearFlags_t288817730)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1282[6] = 
{
	CameraClearFlags_t288817730::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1283 = { sizeof (TextureFormat_t3536119489)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1283[54] = 
{
	TextureFormat_t3536119489::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1284 = { sizeof (ManagedStreamHelpers_t1184977763), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1285 = { sizeof (MathfInternal_t3300739197)+ sizeof (RuntimeObject), sizeof(MathfInternal_t3300739197 ), sizeof(MathfInternal_t3300739197_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1285[3] = 
{
	MathfInternal_t3300739197_StaticFields::get_offset_of_FloatMinNormal_0(),
	MathfInternal_t3300739197_StaticFields::get_offset_of_FloatMinDenormal_1(),
	MathfInternal_t3300739197_StaticFields::get_offset_of_IsFlushToZeroEnabled_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1286 = { sizeof (SendMouseEvents_t934446968), -1, sizeof(SendMouseEvents_t934446968_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1286[5] = 
{
	SendMouseEvents_t934446968_StaticFields::get_offset_of_s_MouseUsed_0(),
	SendMouseEvents_t934446968_StaticFields::get_offset_of_m_LastHit_1(),
	SendMouseEvents_t934446968_StaticFields::get_offset_of_m_MouseDownHit_2(),
	SendMouseEvents_t934446968_StaticFields::get_offset_of_m_CurrentHit_3(),
	SendMouseEvents_t934446968_StaticFields::get_offset_of_m_Cameras_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1287 = { sizeof (HitInfo_t2549613823)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1287[2] = 
{
	HitInfo_t2549613823::get_offset_of_target_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	HitInfo_t2549613823::get_offset_of_camera_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1288 = { sizeof (PropertyAttribute_t4146786731), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1289 = { sizeof (HeaderAttribute_t3064935922), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1289[1] = 
{
	HeaderAttribute_t3064935922::get_offset_of_header_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1290 = { sizeof (PropertyNameUtils_t2165586611), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1291 = { sizeof (PropertyName_t980673821)+ sizeof (RuntimeObject), sizeof(PropertyName_t980673821 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1291[1] = 
{
	PropertyName_t980673821::get_offset_of_id_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1292 = { sizeof (Ray_t2315290679)+ sizeof (RuntimeObject), sizeof(Ray_t2315290679 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1292[2] = 
{
	Ray_t2315290679::get_offset_of_m_Origin_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Ray_t2315290679::get_offset_of_m_Direction_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1293 = { sizeof (Rect_t2693517766)+ sizeof (RuntimeObject), sizeof(Rect_t2693517766 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1293[4] = 
{
	Rect_t2693517766::get_offset_of_m_XMin_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Rect_t2693517766::get_offset_of_m_YMin_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Rect_t2693517766::get_offset_of_m_Width_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Rect_t2693517766::get_offset_of_m_Height_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1294 = { sizeof (SerializePrivateVariables_t1364793836), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1295 = { sizeof (SerializeField_t2457004541), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1296 = { sizeof (PreferBinarySerialization_t2164049689), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1297 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1298 = { sizeof (StackTraceUtility_t3180877355), -1, sizeof(StackTraceUtility_t3180877355_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1298[1] = 
{
	StackTraceUtility_t3180877355_StaticFields::get_offset_of_projectFolder_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1299 = { sizeof (UnityException_t518975213), -1, 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
