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

// UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform
struct GameCenterPlatform_t461331872;
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_t1124226795;
// System.String[]
struct StringU5BU5D_t2952682508;
// System.Action`1<System.Boolean>
struct Action_1_t3430195386;
// UnityEngine.SocialPlatforms.Impl.AchievementDescription
struct AchievementDescription_t720286472;
// System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]>
struct Action_1_t1714713886;
// UnityEngine.SocialPlatforms.IAchievementDescription[]
struct IAchievementDescriptionU5BU5D_t1971932436;
// System.Action`1<System.Object>
struct Action_1_t3954864512;
// UnityEngine.SocialPlatforms.IAchievementDescription
struct IAchievementDescription_t2127112233;
// System.Action`2<System.Boolean,System.String>
struct Action_2_t2624240298;
// System.Action`2<System.Boolean,System.Object>
struct Action_2_t2395621775;
// UnityEngine.SocialPlatforms.Impl.UserProfile[]
struct UserProfileU5BU5D_t15925150;
// UnityEngine.SocialPlatforms.Impl.UserProfile
struct UserProfile_t2817385703;
// UnityEngine.SocialPlatforms.Impl.LocalUser
struct LocalUser_t3937803557;
// UnityEngine.SocialPlatforms.IUserProfile[]
struct IUserProfileU5BU5D_t2755149228;
// UnityEngine.SocialPlatforms.IUserProfile
struct IUserProfile_t2557641073;
// System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>
struct Action_1_t1329405847;
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData[]
struct GcAchievementDataU5BU5D_t2801244676;
// UnityEngine.SocialPlatforms.Impl.Achievement
struct Achievement_t3994812918;
// UnityEngine.SocialPlatforms.IAchievement[]
struct IAchievementU5BU5D_t1586624397;
// UnityEngine.SocialPlatforms.IAchievement
struct IAchievement_t962932324;
// System.Action`1<UnityEngine.SocialPlatforms.IScore[]>
struct Action_1_t1755599085;
// UnityEngine.SocialPlatforms.GameCenter.GcScoreData[]
struct GcScoreDataU5BU5D_t373016272;
// UnityEngine.SocialPlatforms.Impl.Score
struct Score_t263763899;
// UnityEngine.SocialPlatforms.IScore[]
struct IScoreU5BU5D_t2012817635;
// UnityEngine.SocialPlatforms.IScore
struct IScore_t1571631942;
// UnityEngine.SocialPlatforms.ILocalUser
struct ILocalUser_t603375673;
// UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform/<UnityEngine_SocialPlatforms_ISocialPlatform_Authenticate>c__AnonStorey0
struct U3CUnityEngine_SocialPlatforms_ISocialPlatform_AuthenticateU3Ec__AnonStorey0_t801032454;
// UnityEngine.SocialPlatforms.ILeaderboard
struct ILeaderboard_t2502735080;
// UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard
struct GcLeaderboard_t2824820070;
// UnityEngine.SocialPlatforms.Impl.Leaderboard
struct Leaderboard_t3410660001;
// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>
struct List_1_t1429371197;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t2816634189;
// System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>
struct Action_1_t2497930678;
// System.Object[]
struct ObjectU5BU5D_t399279091;
// UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard[]
struct GcLeaderboardU5BU5D_t3946093123;
// UnityEngine.SocialPlatforms.Impl.AchievementDescription[]
struct AchievementDescriptionU5BU5D_t2102278105;
// System.Char[]
struct CharU5BU5D_t1929340039;
// System.Void
struct Void_t2228770918;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t2034675761;
// System.Int32[]
struct Int32U5BU5D_t3936089883;
// System.IAsyncResult
struct IAsyncResult_t2077879249;
// System.AsyncCallback
struct AsyncCallback_t1211244892;

extern RuntimeClass* GameCenterPlatform_t461331872_il2cpp_TypeInfo_var;
extern const uint32_t GameCenterPlatform_ResetAllAchievements_m15719820_MetadataUsageId;
extern const uint32_t GameCenterPlatform_ShowDefaultAchievementCompletionBanner_m3626338797_MetadataUsageId;
extern const uint32_t GameCenterPlatform_ShowLeaderboardUI_m1416936118_MetadataUsageId;
extern RuntimeClass* AchievementDescriptionU5BU5D_t2102278105_il2cpp_TypeInfo_var;
extern const uint32_t GameCenterPlatform_ClearAchievementDescriptions_m515868538_MetadataUsageId;
extern const uint32_t GameCenterPlatform_SetAchievementDescription_m2800756340_MetadataUsageId;
extern RuntimeClass* Debug_t3773704340_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2142828473;
extern const uint32_t GameCenterPlatform_SetAchievementDescriptionImage_m1208164880_MetadataUsageId;
extern const RuntimeMethod* Action_1_Invoke_m3763991777_RuntimeMethod_var;
extern Il2CppCodeGenString* _stringLiteral117111593;
extern const uint32_t GameCenterPlatform_TriggerAchievementDescriptionCallback_m1627337332_MetadataUsageId;
extern const RuntimeMethod* Action_2_Invoke_m3601765374_RuntimeMethod_var;
extern const uint32_t GameCenterPlatform_AuthenticateCallbackWrapper_m1766466191_MetadataUsageId;
extern const uint32_t GameCenterPlatform_ClearFriends_m3569607745_MetadataUsageId;
extern const uint32_t GameCenterPlatform_SetFriends_m2336114619_MetadataUsageId;
extern const uint32_t GameCenterPlatform_SetFriendImage_m267387108_MetadataUsageId;
extern const RuntimeMethod* Action_1_Invoke_m3772574083_RuntimeMethod_var;
extern const uint32_t GameCenterPlatform_TriggerFriendsCallbackWrapper_m4135748535_MetadataUsageId;
extern RuntimeClass* AchievementU5BU5D_t1030707571_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Action_1_Invoke_m4206011191_RuntimeMethod_var;
extern Il2CppCodeGenString* _stringLiteral3262060875;
extern const uint32_t GameCenterPlatform_AchievementCallbackWrapper_m1280978010_MetadataUsageId;
extern const uint32_t GameCenterPlatform_ProgressCallbackWrapper_m3232796847_MetadataUsageId;
extern const uint32_t GameCenterPlatform_ScoreCallbackWrapper_m262863770_MetadataUsageId;
extern RuntimeClass* ScoreU5BU5D_t937919226_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Action_1_Invoke_m2127469977_RuntimeMethod_var;
extern const uint32_t GameCenterPlatform_ScoreLoaderCallbackWrapper_m2158009115_MetadataUsageId;
extern const uint32_t GameCenterPlatform_UnityEngine_SocialPlatforms_ISocialPlatform_LoadFriends_m2924803962_MetadataUsageId;
extern RuntimeClass* U3CUnityEngine_SocialPlatforms_ISocialPlatform_AuthenticateU3Ec__AnonStorey0_t801032454_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_2_t2624240298_il2cpp_TypeInfo_var;
extern RuntimeClass* ISocialPlatform_t4211179834_il2cpp_TypeInfo_var;
extern const RuntimeMethod* U3CUnityEngine_SocialPlatforms_ISocialPlatform_AuthenticateU3Ec__AnonStorey0_U3CU3Em__0_m1730813052_RuntimeMethod_var;
extern const RuntimeMethod* Action_2__ctor_m2605948964_RuntimeMethod_var;
extern const uint32_t GameCenterPlatform_UnityEngine_SocialPlatforms_ISocialPlatform_Authenticate_m2717729639_MetadataUsageId;
extern const uint32_t GameCenterPlatform_UnityEngine_SocialPlatforms_ISocialPlatform_Authenticate_m207818173_MetadataUsageId;
extern RuntimeClass* LocalUser_t3937803557_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2855100237;
extern const uint32_t GameCenterPlatform_get_localUser_m2806598123_MetadataUsageId;
extern const uint32_t GameCenterPlatform_PopulateLocalUser_m3949617552_MetadataUsageId;
extern const uint32_t GameCenterPlatform_LoadAchievementDescriptions_m3521891541_MetadataUsageId;
extern const uint32_t GameCenterPlatform_ReportProgress_m4028393741_MetadataUsageId;
extern const uint32_t GameCenterPlatform_LoadAchievements_m2032702292_MetadataUsageId;
extern const uint32_t GameCenterPlatform_ReportScore_m1260115406_MetadataUsageId;
extern const uint32_t GameCenterPlatform_LoadScores_m809616433_MetadataUsageId;
extern RuntimeClass* Leaderboard_t3410660001_il2cpp_TypeInfo_var;
extern RuntimeClass* GcLeaderboard_t2824820070_il2cpp_TypeInfo_var;
extern RuntimeClass* ILeaderboard_t2502735080_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1_Add_m938950069_RuntimeMethod_var;
extern const uint32_t GameCenterPlatform_LoadScores_m2495700013_MetadataUsageId;
extern const uint32_t GameCenterPlatform_LeaderboardCallbackWrapper_m1549263244_MetadataUsageId;
extern const RuntimeMethod* List_1_GetEnumerator_m1529330299_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m3467058582_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m4240943282_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m3691593966_RuntimeMethod_var;
extern const uint32_t GameCenterPlatform_GetLoading_m1192589069_MetadataUsageId;
extern RuntimeClass* ILocalUser_t603375673_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2283286761;
extern const uint32_t GameCenterPlatform_VerifyAuthentication_m4066151094_MetadataUsageId;
extern const uint32_t GameCenterPlatform_ShowAchievementsUI_m1782203872_MetadataUsageId;
extern const uint32_t GameCenterPlatform_ShowLeaderboardUI_m3572604339_MetadataUsageId;
extern const uint32_t GameCenterPlatform_ClearUsers_m1314494007_MetadataUsageId;
extern const uint32_t GameCenterPlatform_SetUser_m4274977625_MetadataUsageId;
extern const uint32_t GameCenterPlatform_SetUserImage_m2827640733_MetadataUsageId;
extern const RuntimeMethod* Action_1_Invoke_m4275329026_RuntimeMethod_var;
extern const uint32_t GameCenterPlatform_TriggerUsersCallbackWrapper_m2097430903_MetadataUsageId;
extern RuntimeClass* UserProfileU5BU5D_t15925150_il2cpp_TypeInfo_var;
extern const uint32_t GameCenterPlatform_LoadUsers_m41092228_MetadataUsageId;
extern RuntimeClass* Texture2D_t1124226795_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1919715236;
extern Il2CppCodeGenString* _stringLiteral1905233;
extern const uint32_t GameCenterPlatform_SafeSetUserImage_m1202906591_MetadataUsageId;
extern const uint32_t GameCenterPlatform_SafeClearArray_m1644754331_MetadataUsageId;
extern const uint32_t GameCenterPlatform_CreateLeaderboard_m2991261805_MetadataUsageId;
extern RuntimeClass* Achievement_t3994812918_il2cpp_TypeInfo_var;
extern const uint32_t GameCenterPlatform_CreateAchievement_m4181854791_MetadataUsageId;
extern const uint32_t GameCenterPlatform_TriggerResetAchievementCallback_m3188157253_MetadataUsageId;
extern RuntimeClass* List_1_t1429371197_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m2503093044_RuntimeMethod_var;
extern const uint32_t GameCenterPlatform__cctor_m2848281415_MetadataUsageId;
extern const uint32_t U3CUnityEngine_SocialPlatforms_ISocialPlatform_AuthenticateU3Ec__AnonStorey0_U3CU3Em__0_m1730813052_MetadataUsageId;
extern const uint32_t GcAchievementData_ToAchievement_m3830990361_MetadataUsageId;
extern RuntimeClass* AchievementDescription_t720286472_il2cpp_TypeInfo_var;
extern const uint32_t GcAchievementDescriptionData_ToAchievementDescription_m3275123182_MetadataUsageId;
extern const uint32_t GcLeaderboard_SetScores_m2477898150_MetadataUsageId;
extern RuntimeClass* Score_t263763899_il2cpp_TypeInfo_var;
extern const uint32_t GcScoreData_ToScore_m3093940736_MetadataUsageId;
extern RuntimeClass* UserProfile_t2817385703_il2cpp_TypeInfo_var;
extern const uint32_t GcUserProfileData_ToUserProfile_m2444090726_MetadataUsageId;
extern Il2CppCodeGenString* _stringLiteral1294285084;
extern const uint32_t GcUserProfileData_AddToArray_m668560142_MetadataUsageId;
extern RuntimeClass* DateTime_t577184549_il2cpp_TypeInfo_var;
extern const uint32_t Achievement__ctor_m2947300959_MetadataUsageId;
extern Il2CppCodeGenString* _stringLiteral3398599923;
extern const uint32_t Achievement__ctor_m3229096414_MetadataUsageId;
extern RuntimeClass* ObjectU5BU5D_t399279091_il2cpp_TypeInfo_var;
extern RuntimeClass* Double_t994313810_il2cpp_TypeInfo_var;
extern RuntimeClass* Boolean_t3687413936_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2343770865;
extern const uint32_t Achievement_ToString_m3607095364_MetadataUsageId;
extern RuntimeClass* Int32_t3762423662_il2cpp_TypeInfo_var;
extern const uint32_t AchievementDescription_ToString_m2276844169_MetadataUsageId;
extern RuntimeClass* StringU5BU5D_t2952682508_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1653387350;
extern const uint32_t Leaderboard__ctor_m1022786544_MetadataUsageId;
extern RuntimeClass* UInt32_t1560235738_il2cpp_TypeInfo_var;
extern RuntimeClass* UserScope_t3391510851_il2cpp_TypeInfo_var;
extern RuntimeClass* TimeScope_t2719183326_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1976944791;
extern Il2CppCodeGenString* _stringLiteral4235112891;
extern Il2CppCodeGenString* _stringLiteral851460128;
extern Il2CppCodeGenString* _stringLiteral3994785646;
extern Il2CppCodeGenString* _stringLiteral1295383091;
extern Il2CppCodeGenString* _stringLiteral2914686434;
extern Il2CppCodeGenString* _stringLiteral3028348306;
extern Il2CppCodeGenString* _stringLiteral1614900258;
extern Il2CppCodeGenString* _stringLiteral1482708400;
extern Il2CppCodeGenString* _stringLiteral3262444072;
extern const uint32_t Leaderboard_ToString_m2429416599_MetadataUsageId;
extern const uint32_t LocalUser__ctor_m1876043553_MetadataUsageId;
extern Il2CppCodeGenString* _stringLiteral2550852645;
extern const uint32_t Score__ctor_m2543159693_MetadataUsageId;
extern RuntimeClass* Int64_t2050349756_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2425549706;
extern Il2CppCodeGenString* _stringLiteral3584843663;
extern Il2CppCodeGenString* _stringLiteral3581719208;
extern Il2CppCodeGenString* _stringLiteral1119189174;
extern Il2CppCodeGenString* _stringLiteral1481276378;
extern const uint32_t Score_ToString_m2653916551_MetadataUsageId;
extern Il2CppCodeGenString* _stringLiteral3910615930;
extern const uint32_t UserProfile__ctor_m2555166553_MetadataUsageId;
extern RuntimeClass* UserState_t331679706_il2cpp_TypeInfo_var;
extern const uint32_t UserProfile_ToString_m60107931_MetadataUsageId;

struct StringU5BU5D_t2952682508;
struct AchievementDescriptionU5BU5D_t2102278105;
struct IAchievementDescriptionU5BU5D_t1971932436;
struct UserProfileU5BU5D_t15925150;
struct IUserProfileU5BU5D_t2755149228;
struct GcAchievementDataU5BU5D_t2801244676;
struct AchievementU5BU5D_t1030707571;
struct IAchievementU5BU5D_t1586624397;
struct GcScoreDataU5BU5D_t373016272;
struct ScoreU5BU5D_t937919226;
struct IScoreU5BU5D_t2012817635;
struct ObjectU5BU5D_t399279091;


#ifndef U3CMODULEU3E_T3807088646_H
#define U3CMODULEU3E_T3807088646_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t3807088646 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T3807088646_H
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
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef U3CUNITYENGINE_SOCIALPLATFORMS_ISOCIALPLATFORM_AUTHENTICATEU3EC__ANONSTOREY0_T801032454_H
#define U3CUNITYENGINE_SOCIALPLATFORMS_ISOCIALPLATFORM_AUTHENTICATEU3EC__ANONSTOREY0_T801032454_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform/<UnityEngine_SocialPlatforms_ISocialPlatform_Authenticate>c__AnonStorey0
struct  U3CUnityEngine_SocialPlatforms_ISocialPlatform_AuthenticateU3Ec__AnonStorey0_t801032454  : public RuntimeObject
{
public:
	// System.Action`1<System.Boolean> UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform/<UnityEngine_SocialPlatforms_ISocialPlatform_Authenticate>c__AnonStorey0::callback
	Action_1_t3430195386 * ___callback_0;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CUnityEngine_SocialPlatforms_ISocialPlatform_AuthenticateU3Ec__AnonStorey0_t801032454, ___callback_0)); }
	inline Action_1_t3430195386 * get_callback_0() const { return ___callback_0; }
	inline Action_1_t3430195386 ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(Action_1_t3430195386 * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier((&___callback_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CUNITYENGINE_SOCIALPLATFORMS_ISOCIALPLATFORM_AUTHENTICATEU3EC__ANONSTOREY0_T801032454_H
#ifndef ACHIEVEMENTDESCRIPTION_T720286472_H
#define ACHIEVEMENTDESCRIPTION_T720286472_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.Impl.AchievementDescription
struct  AchievementDescription_t720286472  : public RuntimeObject
{
public:
	// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::m_Title
	String_t* ___m_Title_0;
	// UnityEngine.Texture2D UnityEngine.SocialPlatforms.Impl.AchievementDescription::m_Image
	Texture2D_t1124226795 * ___m_Image_1;
	// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::m_AchievedDescription
	String_t* ___m_AchievedDescription_2;
	// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::m_UnachievedDescription
	String_t* ___m_UnachievedDescription_3;
	// System.Boolean UnityEngine.SocialPlatforms.Impl.AchievementDescription::m_Hidden
	bool ___m_Hidden_4;
	// System.Int32 UnityEngine.SocialPlatforms.Impl.AchievementDescription::m_Points
	int32_t ___m_Points_5;
	// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_m_Title_0() { return static_cast<int32_t>(offsetof(AchievementDescription_t720286472, ___m_Title_0)); }
	inline String_t* get_m_Title_0() const { return ___m_Title_0; }
	inline String_t** get_address_of_m_Title_0() { return &___m_Title_0; }
	inline void set_m_Title_0(String_t* value)
	{
		___m_Title_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Title_0), value);
	}

	inline static int32_t get_offset_of_m_Image_1() { return static_cast<int32_t>(offsetof(AchievementDescription_t720286472, ___m_Image_1)); }
	inline Texture2D_t1124226795 * get_m_Image_1() const { return ___m_Image_1; }
	inline Texture2D_t1124226795 ** get_address_of_m_Image_1() { return &___m_Image_1; }
	inline void set_m_Image_1(Texture2D_t1124226795 * value)
	{
		___m_Image_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Image_1), value);
	}

	inline static int32_t get_offset_of_m_AchievedDescription_2() { return static_cast<int32_t>(offsetof(AchievementDescription_t720286472, ___m_AchievedDescription_2)); }
	inline String_t* get_m_AchievedDescription_2() const { return ___m_AchievedDescription_2; }
	inline String_t** get_address_of_m_AchievedDescription_2() { return &___m_AchievedDescription_2; }
	inline void set_m_AchievedDescription_2(String_t* value)
	{
		___m_AchievedDescription_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_AchievedDescription_2), value);
	}

	inline static int32_t get_offset_of_m_UnachievedDescription_3() { return static_cast<int32_t>(offsetof(AchievementDescription_t720286472, ___m_UnachievedDescription_3)); }
	inline String_t* get_m_UnachievedDescription_3() const { return ___m_UnachievedDescription_3; }
	inline String_t** get_address_of_m_UnachievedDescription_3() { return &___m_UnachievedDescription_3; }
	inline void set_m_UnachievedDescription_3(String_t* value)
	{
		___m_UnachievedDescription_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_UnachievedDescription_3), value);
	}

	inline static int32_t get_offset_of_m_Hidden_4() { return static_cast<int32_t>(offsetof(AchievementDescription_t720286472, ___m_Hidden_4)); }
	inline bool get_m_Hidden_4() const { return ___m_Hidden_4; }
	inline bool* get_address_of_m_Hidden_4() { return &___m_Hidden_4; }
	inline void set_m_Hidden_4(bool value)
	{
		___m_Hidden_4 = value;
	}

	inline static int32_t get_offset_of_m_Points_5() { return static_cast<int32_t>(offsetof(AchievementDescription_t720286472, ___m_Points_5)); }
	inline int32_t get_m_Points_5() const { return ___m_Points_5; }
	inline int32_t* get_address_of_m_Points_5() { return &___m_Points_5; }
	inline void set_m_Points_5(int32_t value)
	{
		___m_Points_5 = value;
	}

	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(AchievementDescription_t720286472, ___U3CidU3Ek__BackingField_6)); }
	inline String_t* get_U3CidU3Ek__BackingField_6() const { return ___U3CidU3Ek__BackingField_6; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_6() { return &___U3CidU3Ek__BackingField_6; }
	inline void set_U3CidU3Ek__BackingField_6(String_t* value)
	{
		___U3CidU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CidU3Ek__BackingField_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACHIEVEMENTDESCRIPTION_T720286472_H
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
#ifndef LIST_1_T1429371197_H
#define LIST_1_T1429371197_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>
struct  List_1_t1429371197  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	GcLeaderboardU5BU5D_t3946093123* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1429371197, ____items_1)); }
	inline GcLeaderboardU5BU5D_t3946093123* get__items_1() const { return ____items_1; }
	inline GcLeaderboardU5BU5D_t3946093123** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(GcLeaderboardU5BU5D_t3946093123* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1429371197, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1429371197, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t1429371197_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	GcLeaderboardU5BU5D_t3946093123* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t1429371197_StaticFields, ___EmptyArray_4)); }
	inline GcLeaderboardU5BU5D_t3946093123* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline GcLeaderboardU5BU5D_t3946093123** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(GcLeaderboardU5BU5D_t3946093123* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T1429371197_H
#ifndef GAMECENTERPLATFORM_T461331872_H
#define GAMECENTERPLATFORM_T461331872_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform
struct  GameCenterPlatform_t461331872  : public RuntimeObject
{
public:

public:
};

struct GameCenterPlatform_t461331872_StaticFields
{
public:
	// System.Action`2<System.Boolean,System.String> UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::s_AuthenticateCallback
	Action_2_t2624240298 * ___s_AuthenticateCallback_0;
	// UnityEngine.SocialPlatforms.Impl.AchievementDescription[] UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::s_adCache
	AchievementDescriptionU5BU5D_t2102278105* ___s_adCache_1;
	// UnityEngine.SocialPlatforms.Impl.UserProfile[] UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::s_friends
	UserProfileU5BU5D_t15925150* ___s_friends_2;
	// UnityEngine.SocialPlatforms.Impl.UserProfile[] UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::s_users
	UserProfileU5BU5D_t15925150* ___s_users_3;
	// System.Action`1<System.Boolean> UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::s_ResetAchievements
	Action_1_t3430195386 * ___s_ResetAchievements_4;
	// UnityEngine.SocialPlatforms.Impl.LocalUser UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::m_LocalUser
	LocalUser_t3937803557 * ___m_LocalUser_5;
	// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard> UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::m_GcBoards
	List_1_t1429371197 * ___m_GcBoards_6;

public:
	inline static int32_t get_offset_of_s_AuthenticateCallback_0() { return static_cast<int32_t>(offsetof(GameCenterPlatform_t461331872_StaticFields, ___s_AuthenticateCallback_0)); }
	inline Action_2_t2624240298 * get_s_AuthenticateCallback_0() const { return ___s_AuthenticateCallback_0; }
	inline Action_2_t2624240298 ** get_address_of_s_AuthenticateCallback_0() { return &___s_AuthenticateCallback_0; }
	inline void set_s_AuthenticateCallback_0(Action_2_t2624240298 * value)
	{
		___s_AuthenticateCallback_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_AuthenticateCallback_0), value);
	}

	inline static int32_t get_offset_of_s_adCache_1() { return static_cast<int32_t>(offsetof(GameCenterPlatform_t461331872_StaticFields, ___s_adCache_1)); }
	inline AchievementDescriptionU5BU5D_t2102278105* get_s_adCache_1() const { return ___s_adCache_1; }
	inline AchievementDescriptionU5BU5D_t2102278105** get_address_of_s_adCache_1() { return &___s_adCache_1; }
	inline void set_s_adCache_1(AchievementDescriptionU5BU5D_t2102278105* value)
	{
		___s_adCache_1 = value;
		Il2CppCodeGenWriteBarrier((&___s_adCache_1), value);
	}

	inline static int32_t get_offset_of_s_friends_2() { return static_cast<int32_t>(offsetof(GameCenterPlatform_t461331872_StaticFields, ___s_friends_2)); }
	inline UserProfileU5BU5D_t15925150* get_s_friends_2() const { return ___s_friends_2; }
	inline UserProfileU5BU5D_t15925150** get_address_of_s_friends_2() { return &___s_friends_2; }
	inline void set_s_friends_2(UserProfileU5BU5D_t15925150* value)
	{
		___s_friends_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_friends_2), value);
	}

	inline static int32_t get_offset_of_s_users_3() { return static_cast<int32_t>(offsetof(GameCenterPlatform_t461331872_StaticFields, ___s_users_3)); }
	inline UserProfileU5BU5D_t15925150* get_s_users_3() const { return ___s_users_3; }
	inline UserProfileU5BU5D_t15925150** get_address_of_s_users_3() { return &___s_users_3; }
	inline void set_s_users_3(UserProfileU5BU5D_t15925150* value)
	{
		___s_users_3 = value;
		Il2CppCodeGenWriteBarrier((&___s_users_3), value);
	}

	inline static int32_t get_offset_of_s_ResetAchievements_4() { return static_cast<int32_t>(offsetof(GameCenterPlatform_t461331872_StaticFields, ___s_ResetAchievements_4)); }
	inline Action_1_t3430195386 * get_s_ResetAchievements_4() const { return ___s_ResetAchievements_4; }
	inline Action_1_t3430195386 ** get_address_of_s_ResetAchievements_4() { return &___s_ResetAchievements_4; }
	inline void set_s_ResetAchievements_4(Action_1_t3430195386 * value)
	{
		___s_ResetAchievements_4 = value;
		Il2CppCodeGenWriteBarrier((&___s_ResetAchievements_4), value);
	}

	inline static int32_t get_offset_of_m_LocalUser_5() { return static_cast<int32_t>(offsetof(GameCenterPlatform_t461331872_StaticFields, ___m_LocalUser_5)); }
	inline LocalUser_t3937803557 * get_m_LocalUser_5() const { return ___m_LocalUser_5; }
	inline LocalUser_t3937803557 ** get_address_of_m_LocalUser_5() { return &___m_LocalUser_5; }
	inline void set_m_LocalUser_5(LocalUser_t3937803557 * value)
	{
		___m_LocalUser_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_LocalUser_5), value);
	}

	inline static int32_t get_offset_of_m_GcBoards_6() { return static_cast<int32_t>(offsetof(GameCenterPlatform_t461331872_StaticFields, ___m_GcBoards_6)); }
	inline List_1_t1429371197 * get_m_GcBoards_6() const { return ___m_GcBoards_6; }
	inline List_1_t1429371197 ** get_address_of_m_GcBoards_6() { return &___m_GcBoards_6; }
	inline void set_m_GcBoards_6(List_1_t1429371197 * value)
	{
		___m_GcBoards_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_GcBoards_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMECENTERPLATFORM_T461331872_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t1929340039* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t1929340039* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t1929340039** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t1929340039* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef GCSCOREDATA_T549731357_H
#define GCSCOREDATA_T549731357_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
struct  GcScoreData_t549731357 
{
public:
	// System.String UnityEngine.SocialPlatforms.GameCenter.GcScoreData::m_Category
	String_t* ___m_Category_0;
	// System.UInt32 UnityEngine.SocialPlatforms.GameCenter.GcScoreData::m_ValueLow
	uint32_t ___m_ValueLow_1;
	// System.Int32 UnityEngine.SocialPlatforms.GameCenter.GcScoreData::m_ValueHigh
	int32_t ___m_ValueHigh_2;
	// System.Int32 UnityEngine.SocialPlatforms.GameCenter.GcScoreData::m_Date
	int32_t ___m_Date_3;
	// System.String UnityEngine.SocialPlatforms.GameCenter.GcScoreData::m_FormattedValue
	String_t* ___m_FormattedValue_4;
	// System.String UnityEngine.SocialPlatforms.GameCenter.GcScoreData::m_PlayerID
	String_t* ___m_PlayerID_5;
	// System.Int32 UnityEngine.SocialPlatforms.GameCenter.GcScoreData::m_Rank
	int32_t ___m_Rank_6;

public:
	inline static int32_t get_offset_of_m_Category_0() { return static_cast<int32_t>(offsetof(GcScoreData_t549731357, ___m_Category_0)); }
	inline String_t* get_m_Category_0() const { return ___m_Category_0; }
	inline String_t** get_address_of_m_Category_0() { return &___m_Category_0; }
	inline void set_m_Category_0(String_t* value)
	{
		___m_Category_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Category_0), value);
	}

	inline static int32_t get_offset_of_m_ValueLow_1() { return static_cast<int32_t>(offsetof(GcScoreData_t549731357, ___m_ValueLow_1)); }
	inline uint32_t get_m_ValueLow_1() const { return ___m_ValueLow_1; }
	inline uint32_t* get_address_of_m_ValueLow_1() { return &___m_ValueLow_1; }
	inline void set_m_ValueLow_1(uint32_t value)
	{
		___m_ValueLow_1 = value;
	}

	inline static int32_t get_offset_of_m_ValueHigh_2() { return static_cast<int32_t>(offsetof(GcScoreData_t549731357, ___m_ValueHigh_2)); }
	inline int32_t get_m_ValueHigh_2() const { return ___m_ValueHigh_2; }
	inline int32_t* get_address_of_m_ValueHigh_2() { return &___m_ValueHigh_2; }
	inline void set_m_ValueHigh_2(int32_t value)
	{
		___m_ValueHigh_2 = value;
	}

	inline static int32_t get_offset_of_m_Date_3() { return static_cast<int32_t>(offsetof(GcScoreData_t549731357, ___m_Date_3)); }
	inline int32_t get_m_Date_3() const { return ___m_Date_3; }
	inline int32_t* get_address_of_m_Date_3() { return &___m_Date_3; }
	inline void set_m_Date_3(int32_t value)
	{
		___m_Date_3 = value;
	}

	inline static int32_t get_offset_of_m_FormattedValue_4() { return static_cast<int32_t>(offsetof(GcScoreData_t549731357, ___m_FormattedValue_4)); }
	inline String_t* get_m_FormattedValue_4() const { return ___m_FormattedValue_4; }
	inline String_t** get_address_of_m_FormattedValue_4() { return &___m_FormattedValue_4; }
	inline void set_m_FormattedValue_4(String_t* value)
	{
		___m_FormattedValue_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_FormattedValue_4), value);
	}

	inline static int32_t get_offset_of_m_PlayerID_5() { return static_cast<int32_t>(offsetof(GcScoreData_t549731357, ___m_PlayerID_5)); }
	inline String_t* get_m_PlayerID_5() const { return ___m_PlayerID_5; }
	inline String_t** get_address_of_m_PlayerID_5() { return &___m_PlayerID_5; }
	inline void set_m_PlayerID_5(String_t* value)
	{
		___m_PlayerID_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_PlayerID_5), value);
	}

	inline static int32_t get_offset_of_m_Rank_6() { return static_cast<int32_t>(offsetof(GcScoreData_t549731357, ___m_Rank_6)); }
	inline int32_t get_m_Rank_6() const { return ___m_Rank_6; }
	inline int32_t* get_address_of_m_Rank_6() { return &___m_Rank_6; }
	inline void set_m_Rank_6(int32_t value)
	{
		___m_Rank_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.SocialPlatforms.GameCenter.GcScoreData
struct GcScoreData_t549731357_marshaled_pinvoke
{
	char* ___m_Category_0;
	uint32_t ___m_ValueLow_1;
	int32_t ___m_ValueHigh_2;
	int32_t ___m_Date_3;
	char* ___m_FormattedValue_4;
	char* ___m_PlayerID_5;
	int32_t ___m_Rank_6;
};
// Native definition for COM marshalling of UnityEngine.SocialPlatforms.GameCenter.GcScoreData
struct GcScoreData_t549731357_marshaled_com
{
	Il2CppChar* ___m_Category_0;
	uint32_t ___m_ValueLow_1;
	int32_t ___m_ValueHigh_2;
	int32_t ___m_Date_3;
	Il2CppChar* ___m_FormattedValue_4;
	Il2CppChar* ___m_PlayerID_5;
	int32_t ___m_Rank_6;
};
#endif // GCSCOREDATA_T549731357_H
#ifndef RANGE_T979955765_H
#define RANGE_T979955765_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.Range
struct  Range_t979955765 
{
public:
	// System.Int32 UnityEngine.SocialPlatforms.Range::from
	int32_t ___from_0;
	// System.Int32 UnityEngine.SocialPlatforms.Range::count
	int32_t ___count_1;

public:
	inline static int32_t get_offset_of_from_0() { return static_cast<int32_t>(offsetof(Range_t979955765, ___from_0)); }
	inline int32_t get_from_0() const { return ___from_0; }
	inline int32_t* get_address_of_from_0() { return &___from_0; }
	inline void set_from_0(int32_t value)
	{
		___from_0 = value;
	}

	inline static int32_t get_offset_of_count_1() { return static_cast<int32_t>(offsetof(Range_t979955765, ___count_1)); }
	inline int32_t get_count_1() const { return ___count_1; }
	inline int32_t* get_address_of_count_1() { return &___count_1; }
	inline void set_count_1(int32_t value)
	{
		___count_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANGE_T979955765_H
#ifndef GCACHIEVEMENTDATA_T748194297_H
#define GCACHIEVEMENTDATA_T748194297_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
struct  GcAchievementData_t748194297 
{
public:
	// System.String UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::m_Identifier
	String_t* ___m_Identifier_0;
	// System.Double UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::m_PercentCompleted
	double ___m_PercentCompleted_1;
	// System.Int32 UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::m_Completed
	int32_t ___m_Completed_2;
	// System.Int32 UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::m_Hidden
	int32_t ___m_Hidden_3;
	// System.Int32 UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::m_LastReportedDate
	int32_t ___m_LastReportedDate_4;

public:
	inline static int32_t get_offset_of_m_Identifier_0() { return static_cast<int32_t>(offsetof(GcAchievementData_t748194297, ___m_Identifier_0)); }
	inline String_t* get_m_Identifier_0() const { return ___m_Identifier_0; }
	inline String_t** get_address_of_m_Identifier_0() { return &___m_Identifier_0; }
	inline void set_m_Identifier_0(String_t* value)
	{
		___m_Identifier_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Identifier_0), value);
	}

	inline static int32_t get_offset_of_m_PercentCompleted_1() { return static_cast<int32_t>(offsetof(GcAchievementData_t748194297, ___m_PercentCompleted_1)); }
	inline double get_m_PercentCompleted_1() const { return ___m_PercentCompleted_1; }
	inline double* get_address_of_m_PercentCompleted_1() { return &___m_PercentCompleted_1; }
	inline void set_m_PercentCompleted_1(double value)
	{
		___m_PercentCompleted_1 = value;
	}

	inline static int32_t get_offset_of_m_Completed_2() { return static_cast<int32_t>(offsetof(GcAchievementData_t748194297, ___m_Completed_2)); }
	inline int32_t get_m_Completed_2() const { return ___m_Completed_2; }
	inline int32_t* get_address_of_m_Completed_2() { return &___m_Completed_2; }
	inline void set_m_Completed_2(int32_t value)
	{
		___m_Completed_2 = value;
	}

	inline static int32_t get_offset_of_m_Hidden_3() { return static_cast<int32_t>(offsetof(GcAchievementData_t748194297, ___m_Hidden_3)); }
	inline int32_t get_m_Hidden_3() const { return ___m_Hidden_3; }
	inline int32_t* get_address_of_m_Hidden_3() { return &___m_Hidden_3; }
	inline void set_m_Hidden_3(int32_t value)
	{
		___m_Hidden_3 = value;
	}

	inline static int32_t get_offset_of_m_LastReportedDate_4() { return static_cast<int32_t>(offsetof(GcAchievementData_t748194297, ___m_LastReportedDate_4)); }
	inline int32_t get_m_LastReportedDate_4() const { return ___m_LastReportedDate_4; }
	inline int32_t* get_address_of_m_LastReportedDate_4() { return &___m_LastReportedDate_4; }
	inline void set_m_LastReportedDate_4(int32_t value)
	{
		___m_LastReportedDate_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
struct GcAchievementData_t748194297_marshaled_pinvoke
{
	char* ___m_Identifier_0;
	double ___m_PercentCompleted_1;
	int32_t ___m_Completed_2;
	int32_t ___m_Hidden_3;
	int32_t ___m_LastReportedDate_4;
};
// Native definition for COM marshalling of UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
struct GcAchievementData_t748194297_marshaled_com
{
	Il2CppChar* ___m_Identifier_0;
	double ___m_PercentCompleted_1;
	int32_t ___m_Completed_2;
	int32_t ___m_Hidden_3;
	int32_t ___m_LastReportedDate_4;
};
#endif // GCACHIEVEMENTDATA_T748194297_H
#ifndef ENUMERATOR_T880960227_H
#define ENUMERATOR_T880960227_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>
struct  Enumerator_t880960227 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t1429371197 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	GcLeaderboard_t2824820070 * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t880960227, ___l_0)); }
	inline List_1_t1429371197 * get_l_0() const { return ___l_0; }
	inline List_1_t1429371197 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t1429371197 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t880960227, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t880960227, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t880960227, ___current_3)); }
	inline GcLeaderboard_t2824820070 * get_current_3() const { return ___current_3; }
	inline GcLeaderboard_t2824820070 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(GcLeaderboard_t2824820070 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T880960227_H
#ifndef ENUMERATOR_T2268223219_H
#define ENUMERATOR_T2268223219_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct  Enumerator_t2268223219 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t2816634189 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t2268223219, ___l_0)); }
	inline List_1_t2816634189 * get_l_0() const { return ___l_0; }
	inline List_1_t2816634189 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t2816634189 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2268223219, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t2268223219, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2268223219, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2268223219_H
#ifndef GCUSERPROFILEDATA_T753345502_H
#define GCUSERPROFILEDATA_T753345502_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData
struct  GcUserProfileData_t753345502 
{
public:
	// System.String UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData::userName
	String_t* ___userName_0;
	// System.String UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData::userID
	String_t* ___userID_1;
	// System.Int32 UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData::isFriend
	int32_t ___isFriend_2;
	// UnityEngine.Texture2D UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData::image
	Texture2D_t1124226795 * ___image_3;

public:
	inline static int32_t get_offset_of_userName_0() { return static_cast<int32_t>(offsetof(GcUserProfileData_t753345502, ___userName_0)); }
	inline String_t* get_userName_0() const { return ___userName_0; }
	inline String_t** get_address_of_userName_0() { return &___userName_0; }
	inline void set_userName_0(String_t* value)
	{
		___userName_0 = value;
		Il2CppCodeGenWriteBarrier((&___userName_0), value);
	}

	inline static int32_t get_offset_of_userID_1() { return static_cast<int32_t>(offsetof(GcUserProfileData_t753345502, ___userID_1)); }
	inline String_t* get_userID_1() const { return ___userID_1; }
	inline String_t** get_address_of_userID_1() { return &___userID_1; }
	inline void set_userID_1(String_t* value)
	{
		___userID_1 = value;
		Il2CppCodeGenWriteBarrier((&___userID_1), value);
	}

	inline static int32_t get_offset_of_isFriend_2() { return static_cast<int32_t>(offsetof(GcUserProfileData_t753345502, ___isFriend_2)); }
	inline int32_t get_isFriend_2() const { return ___isFriend_2; }
	inline int32_t* get_address_of_isFriend_2() { return &___isFriend_2; }
	inline void set_isFriend_2(int32_t value)
	{
		___isFriend_2 = value;
	}

	inline static int32_t get_offset_of_image_3() { return static_cast<int32_t>(offsetof(GcUserProfileData_t753345502, ___image_3)); }
	inline Texture2D_t1124226795 * get_image_3() const { return ___image_3; }
	inline Texture2D_t1124226795 ** get_address_of_image_3() { return &___image_3; }
	inline void set_image_3(Texture2D_t1124226795 * value)
	{
		___image_3 = value;
		Il2CppCodeGenWriteBarrier((&___image_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData
struct GcUserProfileData_t753345502_marshaled_pinvoke
{
	char* ___userName_0;
	char* ___userID_1;
	int32_t ___isFriend_2;
	Texture2D_t1124226795 * ___image_3;
};
// Native definition for COM marshalling of UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData
struct GcUserProfileData_t753345502_marshaled_com
{
	Il2CppChar* ___userName_0;
	Il2CppChar* ___userID_1;
	int32_t ___isFriend_2;
	Texture2D_t1124226795 * ___image_3;
};
#endif // GCUSERPROFILEDATA_T753345502_H
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
#ifndef UINT32_T1560235738_H
#define UINT32_T1560235738_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t1560235738 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t1560235738, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T1560235738_H
#ifndef GCACHIEVEMENTDESCRIPTIONDATA_T1141403779_H
#define GCACHIEVEMENTDESCRIPTIONDATA_T1141403779_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData
struct  GcAchievementDescriptionData_t1141403779 
{
public:
	// System.String UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData::m_Identifier
	String_t* ___m_Identifier_0;
	// System.String UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData::m_Title
	String_t* ___m_Title_1;
	// UnityEngine.Texture2D UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData::m_Image
	Texture2D_t1124226795 * ___m_Image_2;
	// System.String UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData::m_AchievedDescription
	String_t* ___m_AchievedDescription_3;
	// System.String UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData::m_UnachievedDescription
	String_t* ___m_UnachievedDescription_4;
	// System.Int32 UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData::m_Hidden
	int32_t ___m_Hidden_5;
	// System.Int32 UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData::m_Points
	int32_t ___m_Points_6;

public:
	inline static int32_t get_offset_of_m_Identifier_0() { return static_cast<int32_t>(offsetof(GcAchievementDescriptionData_t1141403779, ___m_Identifier_0)); }
	inline String_t* get_m_Identifier_0() const { return ___m_Identifier_0; }
	inline String_t** get_address_of_m_Identifier_0() { return &___m_Identifier_0; }
	inline void set_m_Identifier_0(String_t* value)
	{
		___m_Identifier_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Identifier_0), value);
	}

	inline static int32_t get_offset_of_m_Title_1() { return static_cast<int32_t>(offsetof(GcAchievementDescriptionData_t1141403779, ___m_Title_1)); }
	inline String_t* get_m_Title_1() const { return ___m_Title_1; }
	inline String_t** get_address_of_m_Title_1() { return &___m_Title_1; }
	inline void set_m_Title_1(String_t* value)
	{
		___m_Title_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Title_1), value);
	}

	inline static int32_t get_offset_of_m_Image_2() { return static_cast<int32_t>(offsetof(GcAchievementDescriptionData_t1141403779, ___m_Image_2)); }
	inline Texture2D_t1124226795 * get_m_Image_2() const { return ___m_Image_2; }
	inline Texture2D_t1124226795 ** get_address_of_m_Image_2() { return &___m_Image_2; }
	inline void set_m_Image_2(Texture2D_t1124226795 * value)
	{
		___m_Image_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Image_2), value);
	}

	inline static int32_t get_offset_of_m_AchievedDescription_3() { return static_cast<int32_t>(offsetof(GcAchievementDescriptionData_t1141403779, ___m_AchievedDescription_3)); }
	inline String_t* get_m_AchievedDescription_3() const { return ___m_AchievedDescription_3; }
	inline String_t** get_address_of_m_AchievedDescription_3() { return &___m_AchievedDescription_3; }
	inline void set_m_AchievedDescription_3(String_t* value)
	{
		___m_AchievedDescription_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_AchievedDescription_3), value);
	}

	inline static int32_t get_offset_of_m_UnachievedDescription_4() { return static_cast<int32_t>(offsetof(GcAchievementDescriptionData_t1141403779, ___m_UnachievedDescription_4)); }
	inline String_t* get_m_UnachievedDescription_4() const { return ___m_UnachievedDescription_4; }
	inline String_t** get_address_of_m_UnachievedDescription_4() { return &___m_UnachievedDescription_4; }
	inline void set_m_UnachievedDescription_4(String_t* value)
	{
		___m_UnachievedDescription_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_UnachievedDescription_4), value);
	}

	inline static int32_t get_offset_of_m_Hidden_5() { return static_cast<int32_t>(offsetof(GcAchievementDescriptionData_t1141403779, ___m_Hidden_5)); }
	inline int32_t get_m_Hidden_5() const { return ___m_Hidden_5; }
	inline int32_t* get_address_of_m_Hidden_5() { return &___m_Hidden_5; }
	inline void set_m_Hidden_5(int32_t value)
	{
		___m_Hidden_5 = value;
	}

	inline static int32_t get_offset_of_m_Points_6() { return static_cast<int32_t>(offsetof(GcAchievementDescriptionData_t1141403779, ___m_Points_6)); }
	inline int32_t get_m_Points_6() const { return ___m_Points_6; }
	inline int32_t* get_address_of_m_Points_6() { return &___m_Points_6; }
	inline void set_m_Points_6(int32_t value)
	{
		___m_Points_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData
struct GcAchievementDescriptionData_t1141403779_marshaled_pinvoke
{
	char* ___m_Identifier_0;
	char* ___m_Title_1;
	Texture2D_t1124226795 * ___m_Image_2;
	char* ___m_AchievedDescription_3;
	char* ___m_UnachievedDescription_4;
	int32_t ___m_Hidden_5;
	int32_t ___m_Points_6;
};
// Native definition for COM marshalling of UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData
struct GcAchievementDescriptionData_t1141403779_marshaled_com
{
	Il2CppChar* ___m_Identifier_0;
	Il2CppChar* ___m_Title_1;
	Texture2D_t1124226795 * ___m_Image_2;
	Il2CppChar* ___m_AchievedDescription_3;
	Il2CppChar* ___m_UnachievedDescription_4;
	int32_t ___m_Hidden_5;
	int32_t ___m_Points_6;
};
#endif // GCACHIEVEMENTDESCRIPTIONDATA_T1141403779_H
#ifndef INT32_T3762423662_H
#define INT32_T3762423662_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t3762423662 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t3762423662, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T3762423662_H
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
#ifndef TIMESPAN_T2277475249_H
#define TIMESPAN_T2277475249_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_t2277475249 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t2277475249, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t2277475249_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t2277475249  ___MaxValue_0;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t2277475249  ___MinValue_1;
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t2277475249  ___Zero_2;

public:
	inline static int32_t get_offset_of_MaxValue_0() { return static_cast<int32_t>(offsetof(TimeSpan_t2277475249_StaticFields, ___MaxValue_0)); }
	inline TimeSpan_t2277475249  get_MaxValue_0() const { return ___MaxValue_0; }
	inline TimeSpan_t2277475249 * get_address_of_MaxValue_0() { return &___MaxValue_0; }
	inline void set_MaxValue_0(TimeSpan_t2277475249  value)
	{
		___MaxValue_0 = value;
	}

	inline static int32_t get_offset_of_MinValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t2277475249_StaticFields, ___MinValue_1)); }
	inline TimeSpan_t2277475249  get_MinValue_1() const { return ___MinValue_1; }
	inline TimeSpan_t2277475249 * get_address_of_MinValue_1() { return &___MinValue_1; }
	inline void set_MinValue_1(TimeSpan_t2277475249  value)
	{
		___MinValue_1 = value;
	}

	inline static int32_t get_offset_of_Zero_2() { return static_cast<int32_t>(offsetof(TimeSpan_t2277475249_StaticFields, ___Zero_2)); }
	inline TimeSpan_t2277475249  get_Zero_2() const { return ___Zero_2; }
	inline TimeSpan_t2277475249 * get_address_of_Zero_2() { return &___Zero_2; }
	inline void set_Zero_2(TimeSpan_t2277475249  value)
	{
		___Zero_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T2277475249_H
#ifndef INT64_T2050349756_H
#define INT64_T2050349756_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int64
struct  Int64_t2050349756 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t2050349756, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64_T2050349756_H
#ifndef DOUBLE_T994313810_H
#define DOUBLE_T994313810_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Double
struct  Double_t994313810 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_13;

public:
	inline static int32_t get_offset_of_m_value_13() { return static_cast<int32_t>(offsetof(Double_t994313810, ___m_value_13)); }
	inline double get_m_value_13() const { return ___m_value_13; }
	inline double* get_address_of_m_value_13() { return &___m_value_13; }
	inline void set_m_value_13(double value)
	{
		___m_value_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLE_T994313810_H
#ifndef BOOLEAN_T3687413936_H
#define BOOLEAN_T3687413936_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t3687413936 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t3687413936, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t3687413936_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t3687413936_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t3687413936_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T3687413936_H
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
#ifndef USERSCOPE_T3391510851_H
#define USERSCOPE_T3391510851_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.UserScope
struct  UserScope_t3391510851 
{
public:
	// System.Int32 UnityEngine.SocialPlatforms.UserScope::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UserScope_t3391510851, ___value___1)); }
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
#endif // USERSCOPE_T3391510851_H
#ifndef DATETIMEKIND_T743220925_H
#define DATETIMEKIND_T743220925_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeKind
struct  DateTimeKind_t743220925 
{
public:
	// System.Int32 System.DateTimeKind::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DateTimeKind_t743220925, ___value___1)); }
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
#endif // DATETIMEKIND_T743220925_H
#ifndef USERSTATE_T331679706_H
#define USERSTATE_T331679706_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.UserState
struct  UserState_t331679706 
{
public:
	// System.Int32 UnityEngine.SocialPlatforms.UserState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UserState_t331679706, ___value___1)); }
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
#endif // USERSTATE_T331679706_H
#ifndef GCLEADERBOARD_T2824820070_H
#define GCLEADERBOARD_T2824820070_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard
struct  GcLeaderboard_t2824820070  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::m_InternalLeaderboard
	intptr_t ___m_InternalLeaderboard_0;
	// UnityEngine.SocialPlatforms.Impl.Leaderboard UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::m_GenericLeaderboard
	Leaderboard_t3410660001 * ___m_GenericLeaderboard_1;

public:
	inline static int32_t get_offset_of_m_InternalLeaderboard_0() { return static_cast<int32_t>(offsetof(GcLeaderboard_t2824820070, ___m_InternalLeaderboard_0)); }
	inline intptr_t get_m_InternalLeaderboard_0() const { return ___m_InternalLeaderboard_0; }
	inline intptr_t* get_address_of_m_InternalLeaderboard_0() { return &___m_InternalLeaderboard_0; }
	inline void set_m_InternalLeaderboard_0(intptr_t value)
	{
		___m_InternalLeaderboard_0 = value;
	}

	inline static int32_t get_offset_of_m_GenericLeaderboard_1() { return static_cast<int32_t>(offsetof(GcLeaderboard_t2824820070, ___m_GenericLeaderboard_1)); }
	inline Leaderboard_t3410660001 * get_m_GenericLeaderboard_1() const { return ___m_GenericLeaderboard_1; }
	inline Leaderboard_t3410660001 ** get_address_of_m_GenericLeaderboard_1() { return &___m_GenericLeaderboard_1; }
	inline void set_m_GenericLeaderboard_1(Leaderboard_t3410660001 * value)
	{
		___m_GenericLeaderboard_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_GenericLeaderboard_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard
struct GcLeaderboard_t2824820070_marshaled_pinvoke
{
	intptr_t ___m_InternalLeaderboard_0;
	Leaderboard_t3410660001 * ___m_GenericLeaderboard_1;
};
// Native definition for COM marshalling of UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard
struct GcLeaderboard_t2824820070_marshaled_com
{
	intptr_t ___m_InternalLeaderboard_0;
	Leaderboard_t3410660001 * ___m_GenericLeaderboard_1;
};
#endif // GCLEADERBOARD_T2824820070_H
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
#ifndef TIMESCOPE_T2719183326_H
#define TIMESCOPE_T2719183326_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.TimeScope
struct  TimeScope_t2719183326 
{
public:
	// System.Int32 UnityEngine.SocialPlatforms.TimeScope::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TimeScope_t2719183326, ___value___1)); }
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
#endif // TIMESCOPE_T2719183326_H
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
#ifndef DATETIME_T577184549_H
#define DATETIME_T577184549_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t577184549 
{
public:
	// System.TimeSpan System.DateTime::ticks
	TimeSpan_t2277475249  ___ticks_0;
	// System.DateTimeKind System.DateTime::kind
	int32_t ___kind_1;

public:
	inline static int32_t get_offset_of_ticks_0() { return static_cast<int32_t>(offsetof(DateTime_t577184549, ___ticks_0)); }
	inline TimeSpan_t2277475249  get_ticks_0() const { return ___ticks_0; }
	inline TimeSpan_t2277475249 * get_address_of_ticks_0() { return &___ticks_0; }
	inline void set_ticks_0(TimeSpan_t2277475249  value)
	{
		___ticks_0 = value;
	}

	inline static int32_t get_offset_of_kind_1() { return static_cast<int32_t>(offsetof(DateTime_t577184549, ___kind_1)); }
	inline int32_t get_kind_1() const { return ___kind_1; }
	inline int32_t* get_address_of_kind_1() { return &___kind_1; }
	inline void set_kind_1(int32_t value)
	{
		___kind_1 = value;
	}
};

struct DateTime_t577184549_StaticFields
{
public:
	// System.DateTime System.DateTime::MaxValue
	DateTime_t577184549  ___MaxValue_2;
	// System.DateTime System.DateTime::MinValue
	DateTime_t577184549  ___MinValue_3;
	// System.String[] System.DateTime::ParseTimeFormats
	StringU5BU5D_t2952682508* ___ParseTimeFormats_4;
	// System.String[] System.DateTime::ParseYearDayMonthFormats
	StringU5BU5D_t2952682508* ___ParseYearDayMonthFormats_5;
	// System.String[] System.DateTime::ParseYearMonthDayFormats
	StringU5BU5D_t2952682508* ___ParseYearMonthDayFormats_6;
	// System.String[] System.DateTime::ParseDayMonthYearFormats
	StringU5BU5D_t2952682508* ___ParseDayMonthYearFormats_7;
	// System.String[] System.DateTime::ParseMonthDayYearFormats
	StringU5BU5D_t2952682508* ___ParseMonthDayYearFormats_8;
	// System.String[] System.DateTime::MonthDayShortFormats
	StringU5BU5D_t2952682508* ___MonthDayShortFormats_9;
	// System.String[] System.DateTime::DayMonthShortFormats
	StringU5BU5D_t2952682508* ___DayMonthShortFormats_10;
	// System.Int32[] System.DateTime::daysmonth
	Int32U5BU5D_t3936089883* ___daysmonth_11;
	// System.Int32[] System.DateTime::daysmonthleap
	Int32U5BU5D_t3936089883* ___daysmonthleap_12;
	// System.Object System.DateTime::to_local_time_span_object
	RuntimeObject * ___to_local_time_span_object_13;
	// System.Int64 System.DateTime::last_now
	int64_t ___last_now_14;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(DateTime_t577184549_StaticFields, ___MaxValue_2)); }
	inline DateTime_t577184549  get_MaxValue_2() const { return ___MaxValue_2; }
	inline DateTime_t577184549 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(DateTime_t577184549  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(DateTime_t577184549_StaticFields, ___MinValue_3)); }
	inline DateTime_t577184549  get_MinValue_3() const { return ___MinValue_3; }
	inline DateTime_t577184549 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(DateTime_t577184549  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_ParseTimeFormats_4() { return static_cast<int32_t>(offsetof(DateTime_t577184549_StaticFields, ___ParseTimeFormats_4)); }
	inline StringU5BU5D_t2952682508* get_ParseTimeFormats_4() const { return ___ParseTimeFormats_4; }
	inline StringU5BU5D_t2952682508** get_address_of_ParseTimeFormats_4() { return &___ParseTimeFormats_4; }
	inline void set_ParseTimeFormats_4(StringU5BU5D_t2952682508* value)
	{
		___ParseTimeFormats_4 = value;
		Il2CppCodeGenWriteBarrier((&___ParseTimeFormats_4), value);
	}

	inline static int32_t get_offset_of_ParseYearDayMonthFormats_5() { return static_cast<int32_t>(offsetof(DateTime_t577184549_StaticFields, ___ParseYearDayMonthFormats_5)); }
	inline StringU5BU5D_t2952682508* get_ParseYearDayMonthFormats_5() const { return ___ParseYearDayMonthFormats_5; }
	inline StringU5BU5D_t2952682508** get_address_of_ParseYearDayMonthFormats_5() { return &___ParseYearDayMonthFormats_5; }
	inline void set_ParseYearDayMonthFormats_5(StringU5BU5D_t2952682508* value)
	{
		___ParseYearDayMonthFormats_5 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearDayMonthFormats_5), value);
	}

	inline static int32_t get_offset_of_ParseYearMonthDayFormats_6() { return static_cast<int32_t>(offsetof(DateTime_t577184549_StaticFields, ___ParseYearMonthDayFormats_6)); }
	inline StringU5BU5D_t2952682508* get_ParseYearMonthDayFormats_6() const { return ___ParseYearMonthDayFormats_6; }
	inline StringU5BU5D_t2952682508** get_address_of_ParseYearMonthDayFormats_6() { return &___ParseYearMonthDayFormats_6; }
	inline void set_ParseYearMonthDayFormats_6(StringU5BU5D_t2952682508* value)
	{
		___ParseYearMonthDayFormats_6 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearMonthDayFormats_6), value);
	}

	inline static int32_t get_offset_of_ParseDayMonthYearFormats_7() { return static_cast<int32_t>(offsetof(DateTime_t577184549_StaticFields, ___ParseDayMonthYearFormats_7)); }
	inline StringU5BU5D_t2952682508* get_ParseDayMonthYearFormats_7() const { return ___ParseDayMonthYearFormats_7; }
	inline StringU5BU5D_t2952682508** get_address_of_ParseDayMonthYearFormats_7() { return &___ParseDayMonthYearFormats_7; }
	inline void set_ParseDayMonthYearFormats_7(StringU5BU5D_t2952682508* value)
	{
		___ParseDayMonthYearFormats_7 = value;
		Il2CppCodeGenWriteBarrier((&___ParseDayMonthYearFormats_7), value);
	}

	inline static int32_t get_offset_of_ParseMonthDayYearFormats_8() { return static_cast<int32_t>(offsetof(DateTime_t577184549_StaticFields, ___ParseMonthDayYearFormats_8)); }
	inline StringU5BU5D_t2952682508* get_ParseMonthDayYearFormats_8() const { return ___ParseMonthDayYearFormats_8; }
	inline StringU5BU5D_t2952682508** get_address_of_ParseMonthDayYearFormats_8() { return &___ParseMonthDayYearFormats_8; }
	inline void set_ParseMonthDayYearFormats_8(StringU5BU5D_t2952682508* value)
	{
		___ParseMonthDayYearFormats_8 = value;
		Il2CppCodeGenWriteBarrier((&___ParseMonthDayYearFormats_8), value);
	}

	inline static int32_t get_offset_of_MonthDayShortFormats_9() { return static_cast<int32_t>(offsetof(DateTime_t577184549_StaticFields, ___MonthDayShortFormats_9)); }
	inline StringU5BU5D_t2952682508* get_MonthDayShortFormats_9() const { return ___MonthDayShortFormats_9; }
	inline StringU5BU5D_t2952682508** get_address_of_MonthDayShortFormats_9() { return &___MonthDayShortFormats_9; }
	inline void set_MonthDayShortFormats_9(StringU5BU5D_t2952682508* value)
	{
		___MonthDayShortFormats_9 = value;
		Il2CppCodeGenWriteBarrier((&___MonthDayShortFormats_9), value);
	}

	inline static int32_t get_offset_of_DayMonthShortFormats_10() { return static_cast<int32_t>(offsetof(DateTime_t577184549_StaticFields, ___DayMonthShortFormats_10)); }
	inline StringU5BU5D_t2952682508* get_DayMonthShortFormats_10() const { return ___DayMonthShortFormats_10; }
	inline StringU5BU5D_t2952682508** get_address_of_DayMonthShortFormats_10() { return &___DayMonthShortFormats_10; }
	inline void set_DayMonthShortFormats_10(StringU5BU5D_t2952682508* value)
	{
		___DayMonthShortFormats_10 = value;
		Il2CppCodeGenWriteBarrier((&___DayMonthShortFormats_10), value);
	}

	inline static int32_t get_offset_of_daysmonth_11() { return static_cast<int32_t>(offsetof(DateTime_t577184549_StaticFields, ___daysmonth_11)); }
	inline Int32U5BU5D_t3936089883* get_daysmonth_11() const { return ___daysmonth_11; }
	inline Int32U5BU5D_t3936089883** get_address_of_daysmonth_11() { return &___daysmonth_11; }
	inline void set_daysmonth_11(Int32U5BU5D_t3936089883* value)
	{
		___daysmonth_11 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonth_11), value);
	}

	inline static int32_t get_offset_of_daysmonthleap_12() { return static_cast<int32_t>(offsetof(DateTime_t577184549_StaticFields, ___daysmonthleap_12)); }
	inline Int32U5BU5D_t3936089883* get_daysmonthleap_12() const { return ___daysmonthleap_12; }
	inline Int32U5BU5D_t3936089883** get_address_of_daysmonthleap_12() { return &___daysmonthleap_12; }
	inline void set_daysmonthleap_12(Int32U5BU5D_t3936089883* value)
	{
		___daysmonthleap_12 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonthleap_12), value);
	}

	inline static int32_t get_offset_of_to_local_time_span_object_13() { return static_cast<int32_t>(offsetof(DateTime_t577184549_StaticFields, ___to_local_time_span_object_13)); }
	inline RuntimeObject * get_to_local_time_span_object_13() const { return ___to_local_time_span_object_13; }
	inline RuntimeObject ** get_address_of_to_local_time_span_object_13() { return &___to_local_time_span_object_13; }
	inline void set_to_local_time_span_object_13(RuntimeObject * value)
	{
		___to_local_time_span_object_13 = value;
		Il2CppCodeGenWriteBarrier((&___to_local_time_span_object_13), value);
	}

	inline static int32_t get_offset_of_last_now_14() { return static_cast<int32_t>(offsetof(DateTime_t577184549_StaticFields, ___last_now_14)); }
	inline int64_t get_last_now_14() const { return ___last_now_14; }
	inline int64_t* get_address_of_last_now_14() { return &___last_now_14; }
	inline void set_last_now_14(int64_t value)
	{
		___last_now_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T577184549_H
#ifndef USERPROFILE_T2817385703_H
#define USERPROFILE_T2817385703_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.Impl.UserProfile
struct  UserProfile_t2817385703  : public RuntimeObject
{
public:
	// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::m_UserName
	String_t* ___m_UserName_0;
	// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::m_ID
	String_t* ___m_ID_1;
	// System.Boolean UnityEngine.SocialPlatforms.Impl.UserProfile::m_IsFriend
	bool ___m_IsFriend_2;
	// UnityEngine.SocialPlatforms.UserState UnityEngine.SocialPlatforms.Impl.UserProfile::m_State
	int32_t ___m_State_3;
	// UnityEngine.Texture2D UnityEngine.SocialPlatforms.Impl.UserProfile::m_Image
	Texture2D_t1124226795 * ___m_Image_4;

public:
	inline static int32_t get_offset_of_m_UserName_0() { return static_cast<int32_t>(offsetof(UserProfile_t2817385703, ___m_UserName_0)); }
	inline String_t* get_m_UserName_0() const { return ___m_UserName_0; }
	inline String_t** get_address_of_m_UserName_0() { return &___m_UserName_0; }
	inline void set_m_UserName_0(String_t* value)
	{
		___m_UserName_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_UserName_0), value);
	}

	inline static int32_t get_offset_of_m_ID_1() { return static_cast<int32_t>(offsetof(UserProfile_t2817385703, ___m_ID_1)); }
	inline String_t* get_m_ID_1() const { return ___m_ID_1; }
	inline String_t** get_address_of_m_ID_1() { return &___m_ID_1; }
	inline void set_m_ID_1(String_t* value)
	{
		___m_ID_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_ID_1), value);
	}

	inline static int32_t get_offset_of_m_IsFriend_2() { return static_cast<int32_t>(offsetof(UserProfile_t2817385703, ___m_IsFriend_2)); }
	inline bool get_m_IsFriend_2() const { return ___m_IsFriend_2; }
	inline bool* get_address_of_m_IsFriend_2() { return &___m_IsFriend_2; }
	inline void set_m_IsFriend_2(bool value)
	{
		___m_IsFriend_2 = value;
	}

	inline static int32_t get_offset_of_m_State_3() { return static_cast<int32_t>(offsetof(UserProfile_t2817385703, ___m_State_3)); }
	inline int32_t get_m_State_3() const { return ___m_State_3; }
	inline int32_t* get_address_of_m_State_3() { return &___m_State_3; }
	inline void set_m_State_3(int32_t value)
	{
		___m_State_3 = value;
	}

	inline static int32_t get_offset_of_m_Image_4() { return static_cast<int32_t>(offsetof(UserProfile_t2817385703, ___m_Image_4)); }
	inline Texture2D_t1124226795 * get_m_Image_4() const { return ___m_Image_4; }
	inline Texture2D_t1124226795 ** get_address_of_m_Image_4() { return &___m_Image_4; }
	inline void set_m_Image_4(Texture2D_t1124226795 * value)
	{
		___m_Image_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Image_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // USERPROFILE_T2817385703_H
#ifndef LEADERBOARD_T3410660001_H
#define LEADERBOARD_T3410660001_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.Impl.Leaderboard
struct  Leaderboard_t3410660001  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.SocialPlatforms.Impl.Leaderboard::m_Loading
	bool ___m_Loading_0;
	// UnityEngine.SocialPlatforms.IScore UnityEngine.SocialPlatforms.Impl.Leaderboard::m_LocalUserScore
	RuntimeObject* ___m_LocalUserScore_1;
	// System.UInt32 UnityEngine.SocialPlatforms.Impl.Leaderboard::m_MaxRange
	uint32_t ___m_MaxRange_2;
	// UnityEngine.SocialPlatforms.IScore[] UnityEngine.SocialPlatforms.Impl.Leaderboard::m_Scores
	IScoreU5BU5D_t2012817635* ___m_Scores_3;
	// System.String UnityEngine.SocialPlatforms.Impl.Leaderboard::m_Title
	String_t* ___m_Title_4;
	// System.String[] UnityEngine.SocialPlatforms.Impl.Leaderboard::m_UserIDs
	StringU5BU5D_t2952682508* ___m_UserIDs_5;
	// System.String UnityEngine.SocialPlatforms.Impl.Leaderboard::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_6;
	// UnityEngine.SocialPlatforms.UserScope UnityEngine.SocialPlatforms.Impl.Leaderboard::<userScope>k__BackingField
	int32_t ___U3CuserScopeU3Ek__BackingField_7;
	// UnityEngine.SocialPlatforms.Range UnityEngine.SocialPlatforms.Impl.Leaderboard::<range>k__BackingField
	Range_t979955765  ___U3CrangeU3Ek__BackingField_8;
	// UnityEngine.SocialPlatforms.TimeScope UnityEngine.SocialPlatforms.Impl.Leaderboard::<timeScope>k__BackingField
	int32_t ___U3CtimeScopeU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of_m_Loading_0() { return static_cast<int32_t>(offsetof(Leaderboard_t3410660001, ___m_Loading_0)); }
	inline bool get_m_Loading_0() const { return ___m_Loading_0; }
	inline bool* get_address_of_m_Loading_0() { return &___m_Loading_0; }
	inline void set_m_Loading_0(bool value)
	{
		___m_Loading_0 = value;
	}

	inline static int32_t get_offset_of_m_LocalUserScore_1() { return static_cast<int32_t>(offsetof(Leaderboard_t3410660001, ___m_LocalUserScore_1)); }
	inline RuntimeObject* get_m_LocalUserScore_1() const { return ___m_LocalUserScore_1; }
	inline RuntimeObject** get_address_of_m_LocalUserScore_1() { return &___m_LocalUserScore_1; }
	inline void set_m_LocalUserScore_1(RuntimeObject* value)
	{
		___m_LocalUserScore_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_LocalUserScore_1), value);
	}

	inline static int32_t get_offset_of_m_MaxRange_2() { return static_cast<int32_t>(offsetof(Leaderboard_t3410660001, ___m_MaxRange_2)); }
	inline uint32_t get_m_MaxRange_2() const { return ___m_MaxRange_2; }
	inline uint32_t* get_address_of_m_MaxRange_2() { return &___m_MaxRange_2; }
	inline void set_m_MaxRange_2(uint32_t value)
	{
		___m_MaxRange_2 = value;
	}

	inline static int32_t get_offset_of_m_Scores_3() { return static_cast<int32_t>(offsetof(Leaderboard_t3410660001, ___m_Scores_3)); }
	inline IScoreU5BU5D_t2012817635* get_m_Scores_3() const { return ___m_Scores_3; }
	inline IScoreU5BU5D_t2012817635** get_address_of_m_Scores_3() { return &___m_Scores_3; }
	inline void set_m_Scores_3(IScoreU5BU5D_t2012817635* value)
	{
		___m_Scores_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Scores_3), value);
	}

	inline static int32_t get_offset_of_m_Title_4() { return static_cast<int32_t>(offsetof(Leaderboard_t3410660001, ___m_Title_4)); }
	inline String_t* get_m_Title_4() const { return ___m_Title_4; }
	inline String_t** get_address_of_m_Title_4() { return &___m_Title_4; }
	inline void set_m_Title_4(String_t* value)
	{
		___m_Title_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Title_4), value);
	}

	inline static int32_t get_offset_of_m_UserIDs_5() { return static_cast<int32_t>(offsetof(Leaderboard_t3410660001, ___m_UserIDs_5)); }
	inline StringU5BU5D_t2952682508* get_m_UserIDs_5() const { return ___m_UserIDs_5; }
	inline StringU5BU5D_t2952682508** get_address_of_m_UserIDs_5() { return &___m_UserIDs_5; }
	inline void set_m_UserIDs_5(StringU5BU5D_t2952682508* value)
	{
		___m_UserIDs_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_UserIDs_5), value);
	}

	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(Leaderboard_t3410660001, ___U3CidU3Ek__BackingField_6)); }
	inline String_t* get_U3CidU3Ek__BackingField_6() const { return ___U3CidU3Ek__BackingField_6; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_6() { return &___U3CidU3Ek__BackingField_6; }
	inline void set_U3CidU3Ek__BackingField_6(String_t* value)
	{
		___U3CidU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CidU3Ek__BackingField_6), value);
	}

	inline static int32_t get_offset_of_U3CuserScopeU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(Leaderboard_t3410660001, ___U3CuserScopeU3Ek__BackingField_7)); }
	inline int32_t get_U3CuserScopeU3Ek__BackingField_7() const { return ___U3CuserScopeU3Ek__BackingField_7; }
	inline int32_t* get_address_of_U3CuserScopeU3Ek__BackingField_7() { return &___U3CuserScopeU3Ek__BackingField_7; }
	inline void set_U3CuserScopeU3Ek__BackingField_7(int32_t value)
	{
		___U3CuserScopeU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CrangeU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(Leaderboard_t3410660001, ___U3CrangeU3Ek__BackingField_8)); }
	inline Range_t979955765  get_U3CrangeU3Ek__BackingField_8() const { return ___U3CrangeU3Ek__BackingField_8; }
	inline Range_t979955765 * get_address_of_U3CrangeU3Ek__BackingField_8() { return &___U3CrangeU3Ek__BackingField_8; }
	inline void set_U3CrangeU3Ek__BackingField_8(Range_t979955765  value)
	{
		___U3CrangeU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CtimeScopeU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(Leaderboard_t3410660001, ___U3CtimeScopeU3Ek__BackingField_9)); }
	inline int32_t get_U3CtimeScopeU3Ek__BackingField_9() const { return ___U3CtimeScopeU3Ek__BackingField_9; }
	inline int32_t* get_address_of_U3CtimeScopeU3Ek__BackingField_9() { return &___U3CtimeScopeU3Ek__BackingField_9; }
	inline void set_U3CtimeScopeU3Ek__BackingField_9(int32_t value)
	{
		___U3CtimeScopeU3Ek__BackingField_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LEADERBOARD_T3410660001_H
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
#ifndef SCORE_T263763899_H
#define SCORE_T263763899_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.Impl.Score
struct  Score_t263763899  : public RuntimeObject
{
public:
	// System.DateTime UnityEngine.SocialPlatforms.Impl.Score::m_Date
	DateTime_t577184549  ___m_Date_0;
	// System.String UnityEngine.SocialPlatforms.Impl.Score::m_FormattedValue
	String_t* ___m_FormattedValue_1;
	// System.String UnityEngine.SocialPlatforms.Impl.Score::m_UserID
	String_t* ___m_UserID_2;
	// System.Int32 UnityEngine.SocialPlatforms.Impl.Score::m_Rank
	int32_t ___m_Rank_3;
	// System.String UnityEngine.SocialPlatforms.Impl.Score::<leaderboardID>k__BackingField
	String_t* ___U3CleaderboardIDU3Ek__BackingField_4;
	// System.Int64 UnityEngine.SocialPlatforms.Impl.Score::<value>k__BackingField
	int64_t ___U3CvalueU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_m_Date_0() { return static_cast<int32_t>(offsetof(Score_t263763899, ___m_Date_0)); }
	inline DateTime_t577184549  get_m_Date_0() const { return ___m_Date_0; }
	inline DateTime_t577184549 * get_address_of_m_Date_0() { return &___m_Date_0; }
	inline void set_m_Date_0(DateTime_t577184549  value)
	{
		___m_Date_0 = value;
	}

	inline static int32_t get_offset_of_m_FormattedValue_1() { return static_cast<int32_t>(offsetof(Score_t263763899, ___m_FormattedValue_1)); }
	inline String_t* get_m_FormattedValue_1() const { return ___m_FormattedValue_1; }
	inline String_t** get_address_of_m_FormattedValue_1() { return &___m_FormattedValue_1; }
	inline void set_m_FormattedValue_1(String_t* value)
	{
		___m_FormattedValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_FormattedValue_1), value);
	}

	inline static int32_t get_offset_of_m_UserID_2() { return static_cast<int32_t>(offsetof(Score_t263763899, ___m_UserID_2)); }
	inline String_t* get_m_UserID_2() const { return ___m_UserID_2; }
	inline String_t** get_address_of_m_UserID_2() { return &___m_UserID_2; }
	inline void set_m_UserID_2(String_t* value)
	{
		___m_UserID_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_UserID_2), value);
	}

	inline static int32_t get_offset_of_m_Rank_3() { return static_cast<int32_t>(offsetof(Score_t263763899, ___m_Rank_3)); }
	inline int32_t get_m_Rank_3() const { return ___m_Rank_3; }
	inline int32_t* get_address_of_m_Rank_3() { return &___m_Rank_3; }
	inline void set_m_Rank_3(int32_t value)
	{
		___m_Rank_3 = value;
	}

	inline static int32_t get_offset_of_U3CleaderboardIDU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Score_t263763899, ___U3CleaderboardIDU3Ek__BackingField_4)); }
	inline String_t* get_U3CleaderboardIDU3Ek__BackingField_4() const { return ___U3CleaderboardIDU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CleaderboardIDU3Ek__BackingField_4() { return &___U3CleaderboardIDU3Ek__BackingField_4; }
	inline void set_U3CleaderboardIDU3Ek__BackingField_4(String_t* value)
	{
		___U3CleaderboardIDU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CleaderboardIDU3Ek__BackingField_4), value);
	}

	inline static int32_t get_offset_of_U3CvalueU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Score_t263763899, ___U3CvalueU3Ek__BackingField_5)); }
	inline int64_t get_U3CvalueU3Ek__BackingField_5() const { return ___U3CvalueU3Ek__BackingField_5; }
	inline int64_t* get_address_of_U3CvalueU3Ek__BackingField_5() { return &___U3CvalueU3Ek__BackingField_5; }
	inline void set_U3CvalueU3Ek__BackingField_5(int64_t value)
	{
		___U3CvalueU3Ek__BackingField_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCORE_T263763899_H
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
#ifndef ACTION_1_T3430195386_H
#define ACTION_1_T3430195386_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<System.Boolean>
struct  Action_1_t3430195386  : public MulticastDelegate_t1504939328
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T3430195386_H
#ifndef ACTION_2_T2624240298_H
#define ACTION_2_T2624240298_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`2<System.Boolean,System.String>
struct  Action_2_t2624240298  : public MulticastDelegate_t1504939328
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_2_T2624240298_H
#ifndef ACTION_1_T2497930678_H
#define ACTION_1_T2497930678_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>
struct  Action_1_t2497930678  : public MulticastDelegate_t1504939328
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T2497930678_H
#ifndef LOCALUSER_T3937803557_H
#define LOCALUSER_T3937803557_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.Impl.LocalUser
struct  LocalUser_t3937803557  : public UserProfile_t2817385703
{
public:
	// UnityEngine.SocialPlatforms.IUserProfile[] UnityEngine.SocialPlatforms.Impl.LocalUser::m_Friends
	IUserProfileU5BU5D_t2755149228* ___m_Friends_5;
	// System.Boolean UnityEngine.SocialPlatforms.Impl.LocalUser::m_Authenticated
	bool ___m_Authenticated_6;
	// System.Boolean UnityEngine.SocialPlatforms.Impl.LocalUser::m_Underage
	bool ___m_Underage_7;

public:
	inline static int32_t get_offset_of_m_Friends_5() { return static_cast<int32_t>(offsetof(LocalUser_t3937803557, ___m_Friends_5)); }
	inline IUserProfileU5BU5D_t2755149228* get_m_Friends_5() const { return ___m_Friends_5; }
	inline IUserProfileU5BU5D_t2755149228** get_address_of_m_Friends_5() { return &___m_Friends_5; }
	inline void set_m_Friends_5(IUserProfileU5BU5D_t2755149228* value)
	{
		___m_Friends_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_Friends_5), value);
	}

	inline static int32_t get_offset_of_m_Authenticated_6() { return static_cast<int32_t>(offsetof(LocalUser_t3937803557, ___m_Authenticated_6)); }
	inline bool get_m_Authenticated_6() const { return ___m_Authenticated_6; }
	inline bool* get_address_of_m_Authenticated_6() { return &___m_Authenticated_6; }
	inline void set_m_Authenticated_6(bool value)
	{
		___m_Authenticated_6 = value;
	}

	inline static int32_t get_offset_of_m_Underage_7() { return static_cast<int32_t>(offsetof(LocalUser_t3937803557, ___m_Underage_7)); }
	inline bool get_m_Underage_7() const { return ___m_Underage_7; }
	inline bool* get_address_of_m_Underage_7() { return &___m_Underage_7; }
	inline void set_m_Underage_7(bool value)
	{
		___m_Underage_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCALUSER_T3937803557_H
#ifndef ACTION_1_T1329405847_H
#define ACTION_1_T1329405847_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>
struct  Action_1_t1329405847  : public MulticastDelegate_t1504939328
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T1329405847_H
#ifndef ACHIEVEMENT_T3994812918_H
#define ACHIEVEMENT_T3994812918_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.Impl.Achievement
struct  Achievement_t3994812918  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.SocialPlatforms.Impl.Achievement::m_Completed
	bool ___m_Completed_0;
	// System.Boolean UnityEngine.SocialPlatforms.Impl.Achievement::m_Hidden
	bool ___m_Hidden_1;
	// System.DateTime UnityEngine.SocialPlatforms.Impl.Achievement::m_LastReportedDate
	DateTime_t577184549  ___m_LastReportedDate_2;
	// System.String UnityEngine.SocialPlatforms.Impl.Achievement::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_3;
	// System.Double UnityEngine.SocialPlatforms.Impl.Achievement::<percentCompleted>k__BackingField
	double ___U3CpercentCompletedU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_m_Completed_0() { return static_cast<int32_t>(offsetof(Achievement_t3994812918, ___m_Completed_0)); }
	inline bool get_m_Completed_0() const { return ___m_Completed_0; }
	inline bool* get_address_of_m_Completed_0() { return &___m_Completed_0; }
	inline void set_m_Completed_0(bool value)
	{
		___m_Completed_0 = value;
	}

	inline static int32_t get_offset_of_m_Hidden_1() { return static_cast<int32_t>(offsetof(Achievement_t3994812918, ___m_Hidden_1)); }
	inline bool get_m_Hidden_1() const { return ___m_Hidden_1; }
	inline bool* get_address_of_m_Hidden_1() { return &___m_Hidden_1; }
	inline void set_m_Hidden_1(bool value)
	{
		___m_Hidden_1 = value;
	}

	inline static int32_t get_offset_of_m_LastReportedDate_2() { return static_cast<int32_t>(offsetof(Achievement_t3994812918, ___m_LastReportedDate_2)); }
	inline DateTime_t577184549  get_m_LastReportedDate_2() const { return ___m_LastReportedDate_2; }
	inline DateTime_t577184549 * get_address_of_m_LastReportedDate_2() { return &___m_LastReportedDate_2; }
	inline void set_m_LastReportedDate_2(DateTime_t577184549  value)
	{
		___m_LastReportedDate_2 = value;
	}

	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Achievement_t3994812918, ___U3CidU3Ek__BackingField_3)); }
	inline String_t* get_U3CidU3Ek__BackingField_3() const { return ___U3CidU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_3() { return &___U3CidU3Ek__BackingField_3; }
	inline void set_U3CidU3Ek__BackingField_3(String_t* value)
	{
		___U3CidU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CidU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3CpercentCompletedU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Achievement_t3994812918, ___U3CpercentCompletedU3Ek__BackingField_4)); }
	inline double get_U3CpercentCompletedU3Ek__BackingField_4() const { return ___U3CpercentCompletedU3Ek__BackingField_4; }
	inline double* get_address_of_U3CpercentCompletedU3Ek__BackingField_4() { return &___U3CpercentCompletedU3Ek__BackingField_4; }
	inline void set_U3CpercentCompletedU3Ek__BackingField_4(double value)
	{
		___U3CpercentCompletedU3Ek__BackingField_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACHIEVEMENT_T3994812918_H
#ifndef ACTION_1_T1714713886_H
#define ACTION_1_T1714713886_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]>
struct  Action_1_t1714713886  : public MulticastDelegate_t1504939328
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T1714713886_H
#ifndef ACTION_1_T1755599085_H
#define ACTION_1_T1755599085_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<UnityEngine.SocialPlatforms.IScore[]>
struct  Action_1_t1755599085  : public MulticastDelegate_t1504939328
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T1755599085_H
// System.String[]
struct StringU5BU5D_t2952682508  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.SocialPlatforms.Impl.AchievementDescription[]
struct AchievementDescriptionU5BU5D_t2102278105  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) AchievementDescription_t720286472 * m_Items[1];

public:
	inline AchievementDescription_t720286472 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AchievementDescription_t720286472 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AchievementDescription_t720286472 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline AchievementDescription_t720286472 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AchievementDescription_t720286472 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AchievementDescription_t720286472 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.SocialPlatforms.IAchievementDescription[]
struct IAchievementDescriptionU5BU5D_t1971932436  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

public:
	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.SocialPlatforms.Impl.UserProfile[]
struct UserProfileU5BU5D_t15925150  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) UserProfile_t2817385703 * m_Items[1];

public:
	inline UserProfile_t2817385703 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UserProfile_t2817385703 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UserProfile_t2817385703 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline UserProfile_t2817385703 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UserProfile_t2817385703 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UserProfile_t2817385703 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.SocialPlatforms.IUserProfile[]
struct IUserProfileU5BU5D_t2755149228  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

public:
	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData[]
struct GcAchievementDataU5BU5D_t2801244676  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GcAchievementData_t748194297  m_Items[1];

public:
	inline GcAchievementData_t748194297  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GcAchievementData_t748194297 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GcAchievementData_t748194297  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline GcAchievementData_t748194297  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GcAchievementData_t748194297 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GcAchievementData_t748194297  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.SocialPlatforms.Impl.Achievement[]
struct AchievementU5BU5D_t1030707571  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Achievement_t3994812918 * m_Items[1];

public:
	inline Achievement_t3994812918 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Achievement_t3994812918 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Achievement_t3994812918 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Achievement_t3994812918 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Achievement_t3994812918 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Achievement_t3994812918 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.SocialPlatforms.IAchievement[]
struct IAchievementU5BU5D_t1586624397  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

public:
	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.SocialPlatforms.GameCenter.GcScoreData[]
struct GcScoreDataU5BU5D_t373016272  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GcScoreData_t549731357  m_Items[1];

public:
	inline GcScoreData_t549731357  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GcScoreData_t549731357 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GcScoreData_t549731357  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline GcScoreData_t549731357  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GcScoreData_t549731357 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GcScoreData_t549731357  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.SocialPlatforms.Impl.Score[]
struct ScoreU5BU5D_t937919226  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Score_t263763899 * m_Items[1];

public:
	inline Score_t263763899 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Score_t263763899 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Score_t263763899 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Score_t263763899 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Score_t263763899 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Score_t263763899 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.SocialPlatforms.IScore[]
struct IScoreU5BU5D_t2012817635  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

public:
	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t399279091  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// System.Void System.Action`1<System.Object>::Invoke(!0)
extern "C"  void Action_1_Invoke_m4188976405_gshared (Action_1_t3954864512 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Action`2<System.Boolean,System.Object>::Invoke(!0,!1)
extern "C"  void Action_2_Invoke_m3480418272_gshared (Action_2_t2395621775 * __this, bool p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void System.Action`1<System.Boolean>::Invoke(!0)
extern "C"  void Action_1_Invoke_m3772574083_gshared (Action_1_t3430195386 * __this, bool p0, const RuntimeMethod* method);
// System.Void System.Action`2<System.Boolean,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Action_2__ctor_m3939183597_gshared (Action_2_t2395621775 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C"  void List_1_Add_m2939818204_gshared (List_1_t2816634189 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C"  Enumerator_t2268223219  List_1_GetEnumerator_m3774021020_gshared (List_1_t2816634189 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
extern "C"  RuntimeObject * Enumerator_get_Current_m2023793670_gshared (Enumerator_t2268223219 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
extern "C"  bool Enumerator_MoveNext_m3064219555_gshared (Enumerator_t2268223219 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
extern "C"  void Enumerator_Dispose_m1763373335_gshared (Enumerator_t2268223219 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C"  void List_1__ctor_m3430758949_gshared (List_1_t2816634189 * __this, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m4003873478 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ResetAllAchievements()
extern "C"  void GameCenterPlatform_Internal_ResetAllAchievements_m552123861 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowDefaultAchievementBanner(System.Boolean)
extern "C"  void GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m2298228237 (RuntimeObject * __this /* static, unused */, bool ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowSpecificLeaderboardUI(System.String,System.Int32)
extern "C"  void GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m2477521814 (RuntimeObject * __this /* static, unused */, String_t* ___leaderboardID0, int32_t ___timeScope1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SocialPlatforms.Impl.AchievementDescription UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData::ToAchievementDescription()
extern "C"  AchievementDescription_t720286472 * GcAchievementDescriptionData_ToAchievementDescription_m3275123182 (GcAchievementDescriptionData_t1141403779 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C"  void Debug_Log_m2716511837 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::SetImage(UnityEngine.Texture2D)
extern "C"  void AchievementDescription_SetImage_m1652790288 (AchievementDescription_t720286472 * __this, Texture2D_t1124226795 * ___image0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]>::Invoke(!0)
#define Action_1_Invoke_m3763991777(__this, p0, method) ((  void (*) (Action_1_t1714713886 *, IAchievementDescriptionU5BU5D_t1971932436*, const RuntimeMethod*))Action_1_Invoke_m4188976405_gshared)(__this, p0, method)
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::PopulateLocalUser()
extern "C"  void GameCenterPlatform_PopulateLocalUser_m3949617552 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Action`2<System.Boolean,System.String>::Invoke(!0,!1)
#define Action_2_Invoke_m3601765374(__this, p0, p1, method) ((  void (*) (Action_2_t2624240298 *, bool, String_t*, const RuntimeMethod*))Action_2_Invoke_m3480418272_gshared)(__this, p0, p1, method)
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SafeClearArray(UnityEngine.SocialPlatforms.Impl.UserProfile[]&,System.Int32)
extern "C"  void GameCenterPlatform_SafeClearArray_m1644754331 (RuntimeObject * __this /* static, unused */, UserProfileU5BU5D_t15925150** ___array0, int32_t ___size1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData::AddToArray(UnityEngine.SocialPlatforms.Impl.UserProfile[]&,System.Int32)
extern "C"  void GcUserProfileData_AddToArray_m668560142 (GcUserProfileData_t753345502 * __this, UserProfileU5BU5D_t15925150** ___array0, int32_t ___number1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SafeSetUserImage(UnityEngine.SocialPlatforms.Impl.UserProfile[]&,UnityEngine.Texture2D,System.Int32)
extern "C"  void GameCenterPlatform_SafeSetUserImage_m1202906591 (RuntimeObject * __this /* static, unused */, UserProfileU5BU5D_t15925150** ___array0, Texture2D_t1124226795 * ___texture1, int32_t ___number2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::SetFriends(UnityEngine.SocialPlatforms.IUserProfile[])
extern "C"  void LocalUser_SetFriends_m1554219388 (LocalUser_t3937803557 * __this, IUserProfileU5BU5D_t2755149228* ___friends0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Action`1<System.Boolean>::Invoke(!0)
#define Action_1_Invoke_m3772574083(__this, p0, method) ((  void (*) (Action_1_t3430195386 *, bool, const RuntimeMethod*))Action_1_Invoke_m3772574083_gshared)(__this, p0, method)
// UnityEngine.SocialPlatforms.Impl.Achievement UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::ToAchievement()
extern "C"  Achievement_t3994812918 * GcAchievementData_ToAchievement_m3830990361 (GcAchievementData_t748194297 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>::Invoke(!0)
#define Action_1_Invoke_m4206011191(__this, p0, method) ((  void (*) (Action_1_t1329405847 *, IAchievementU5BU5D_t1586624397*, const RuntimeMethod*))Action_1_Invoke_m4188976405_gshared)(__this, p0, method)
// UnityEngine.SocialPlatforms.Impl.Score UnityEngine.SocialPlatforms.GameCenter.GcScoreData::ToScore()
extern "C"  Score_t263763899 * GcScoreData_ToScore_m3093940736 (GcScoreData_t549731357 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Action`1<UnityEngine.SocialPlatforms.IScore[]>::Invoke(!0)
#define Action_1_Invoke_m2127469977(__this, p0, method) ((  void (*) (Action_1_t1755599085 *, IScoreU5BU5D_t2012817635*, const RuntimeMethod*))Action_1_Invoke_m4188976405_gshared)(__this, p0, method)
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::VerifyAuthentication()
extern "C"  bool GameCenterPlatform_VerifyAuthentication_m4066151094 (GameCenterPlatform_t461331872 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadFriends(System.Object)
extern "C"  void GameCenterPlatform_Internal_LoadFriends_m4072399755 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___callback0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform/<UnityEngine_SocialPlatforms_ISocialPlatform_Authenticate>c__AnonStorey0::.ctor()
extern "C"  void U3CUnityEngine_SocialPlatforms_ISocialPlatform_AuthenticateU3Ec__AnonStorey0__ctor_m1143483693 (U3CUnityEngine_SocialPlatforms_ISocialPlatform_AuthenticateU3Ec__AnonStorey0_t801032454 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Action`2<System.Boolean,System.String>::.ctor(System.Object,System.IntPtr)
#define Action_2__ctor_m2605948964(__this, p0, p1, method) ((  void (*) (Action_2_t2624240298 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_m3939183597_gshared)(__this, p0, p1, method)
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_Authenticate()
extern "C"  void GameCenterPlatform_Internal_Authenticate_m88911232 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::.ctor()
extern "C"  void LocalUser__ctor_m1876043553 (LocalUser_t3937803557 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_Authenticated()
extern "C"  bool GameCenterPlatform_Internal_Authenticated_m3055003233 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::get_id()
extern "C"  String_t* UserProfile_get_id_m1776133394 (UserProfile_t2817385703 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C"  bool String_op_Equality_m106334435 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::SetAuthenticated(System.Boolean)
extern "C"  void LocalUser_SetAuthenticated_m1023027787 (LocalUser_t3937803557 * __this, bool ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_UserName()
extern "C"  String_t* GameCenterPlatform_Internal_UserName_m2580557216 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::SetUserName(System.String)
extern "C"  void UserProfile_SetUserName_m3456243872 (UserProfile_t2817385703 * __this, String_t* ___name0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_UserID()
extern "C"  String_t* GameCenterPlatform_Internal_UserID_m2162706182 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::SetUserID(System.String)
extern "C"  void UserProfile_SetUserID_m1881002226 (UserProfile_t2817385703 * __this, String_t* ___id0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_Underage()
extern "C"  bool GameCenterPlatform_Internal_Underage_m923299249 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::SetUnderage(System.Boolean)
extern "C"  void LocalUser_SetUnderage_m1824287490 (LocalUser_t3937803557 * __this, bool ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_UserImage()
extern "C"  Texture2D_t1124226795 * GameCenterPlatform_Internal_UserImage_m3961485457 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::SetImage(UnityEngine.Texture2D)
extern "C"  void UserProfile_SetImage_m2732686334 (UserProfile_t2817385703 * __this, Texture2D_t1124226795 * ___image0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadAchievementDescriptions(System.Object)
extern "C"  void GameCenterPlatform_Internal_LoadAchievementDescriptions_m2598264663 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___callback0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ReportProgress(System.String,System.Double,System.Object)
extern "C"  void GameCenterPlatform_Internal_ReportProgress_m1096670774 (RuntimeObject * __this /* static, unused */, String_t* ___id0, double ___progress1, RuntimeObject * ___callback2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadAchievements(System.Object)
extern "C"  void GameCenterPlatform_Internal_LoadAchievements_m2831301822 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___callback0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ReportScore(System.Int64,System.String,System.Object)
extern "C"  void GameCenterPlatform_Internal_ReportScore_m1090041386 (RuntimeObject * __this /* static, unused */, int64_t ___score0, String_t* ___category1, RuntimeObject * ___callback2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadScores(System.String,System.Object)
extern "C"  void GameCenterPlatform_Internal_LoadScores_m1013297567 (RuntimeObject * __this /* static, unused */, String_t* ___category0, RuntimeObject * ___callback1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::.ctor(UnityEngine.SocialPlatforms.Impl.Leaderboard)
extern "C"  void GcLeaderboard__ctor_m3199654030 (GcLeaderboard_t2824820070 * __this, Leaderboard_t3410660001 * ___board0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::Add(!0)
#define List_1_Add_m938950069(__this, p0, method) ((  void (*) (List_1_t1429371197 *, GcLeaderboard_t2824820070 *, const RuntimeMethod*))List_1_Add_m2939818204_gshared)(__this, p0, method)
// System.String[] UnityEngine.SocialPlatforms.Impl.Leaderboard::GetUserFilter()
extern "C"  StringU5BU5D_t2952682508* Leaderboard_GetUserFilter_m3006109735 (Leaderboard_t3410660001 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Internal_LoadScores(System.String,System.Int32,System.Int32,System.String[],System.Int32,System.Int32,System.Object)
extern "C"  void GcLeaderboard_Internal_LoadScores_m2131756509 (GcLeaderboard_t2824820070 * __this, String_t* ___category0, int32_t ___from1, int32_t ___count2, StringU5BU5D_t2952682508* ___userIDs3, int32_t ___playerScope4, int32_t ___timeScope5, RuntimeObject * ___callback6, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::GetEnumerator()
#define List_1_GetEnumerator_m1529330299(__this, method) ((  Enumerator_t880960227  (*) (List_1_t1429371197 *, const RuntimeMethod*))List_1_GetEnumerator_m3774021020_gshared)(__this, method)
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::get_Current()
#define Enumerator_get_Current_m3467058582(__this, method) ((  GcLeaderboard_t2824820070 * (*) (Enumerator_t880960227 *, const RuntimeMethod*))Enumerator_get_Current_m2023793670_gshared)(__this, method)
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Contains(UnityEngine.SocialPlatforms.Impl.Leaderboard)
extern "C"  bool GcLeaderboard_Contains_m982813207 (GcLeaderboard_t2824820070 * __this, Leaderboard_t3410660001 * ___board0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Loading()
extern "C"  bool GcLeaderboard_Loading_m2312806203 (GcLeaderboard_t2824820070 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::MoveNext()
#define Enumerator_MoveNext_m4240943282(__this, method) ((  bool (*) (Enumerator_t880960227 *, const RuntimeMethod*))Enumerator_MoveNext_m3064219555_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::Dispose()
#define Enumerator_Dispose_m3691593966(__this, method) ((  void (*) (Enumerator_t880960227 *, const RuntimeMethod*))Enumerator_Dispose_m1763373335_gshared)(__this, method)
// UnityEngine.SocialPlatforms.ILocalUser UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::get_localUser()
extern "C"  RuntimeObject* GameCenterPlatform_get_localUser_m2806598123 (GameCenterPlatform_t461331872 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowAchievementsUI()
extern "C"  void GameCenterPlatform_Internal_ShowAchievementsUI_m895298775 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowLeaderboardUI()
extern "C"  void GameCenterPlatform_Internal_ShowLeaderboardUI_m692809349 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>::Invoke(!0)
#define Action_1_Invoke_m4275329026(__this, p0, method) ((  void (*) (Action_1_t2497930678 *, IUserProfileU5BU5D_t2755149228*, const RuntimeMethod*))Action_1_Invoke_m4188976405_gshared)(__this, p0, method)
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadUsers(System.String[],System.Object)
extern "C"  void GameCenterPlatform_Internal_LoadUsers_m17157094 (RuntimeObject * __this /* static, unused */, StringU5BU5D_t2952682508* ___userIds0, RuntimeObject * ___callback1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32)
extern "C"  void Texture2D__ctor_m3567061737 (Texture2D_t1124226795 * __this, int32_t p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::.ctor()
extern "C"  void Leaderboard__ctor_m1022786544 (Leaderboard_t3410660001 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::.ctor()
extern "C"  void Achievement__ctor_m3229096414 (Achievement_t3994812918 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::.ctor()
#define List_1__ctor_m2503093044(__this, method) ((  void (*) (List_1_t1429371197 *, const RuntimeMethod*))List_1__ctor_m3430758949_gshared)(__this, method)
// System.Void System.DateTime::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void DateTime__ctor_m1094431492 (DateTime_t577184549 * __this, int32_t p0, int32_t p1, int32_t p2, int32_t p3, int32_t p4, int32_t p5, int32_t p6, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::AddSeconds(System.Double)
extern "C"  DateTime_t577184549  DateTime_AddSeconds_m823838217 (DateTime_t577184549 * __this, double p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::.ctor(System.String,System.Double,System.Boolean,System.Boolean,System.DateTime)
extern "C"  void Achievement__ctor_m3484502087 (Achievement_t3994812918 * __this, String_t* ___id0, double ___percentCompleted1, bool ___completed2, bool ___hidden3, DateTime_t577184549  ___lastReportedDate4, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::.ctor(System.String,System.String,UnityEngine.Texture2D,System.String,System.String,System.Boolean,System.Int32)
extern "C"  void AchievementDescription__ctor_m2531854831 (AchievementDescription_t720286472 * __this, String_t* ___id0, String_t* ___title1, Texture2D_t1124226795 * ___image2, String_t* ___achievedDescription3, String_t* ___unachievedDescription4, bool ___hidden5, int32_t ___points6, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Dispose()
extern "C"  void GcLeaderboard_Dispose_m40522015 (GcLeaderboard_t2824820070 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Object::Finalize()
extern "C"  void Object_Finalize_m1142049849 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetScores(UnityEngine.SocialPlatforms.IScore[])
extern "C"  void Leaderboard_SetScores_m4128045724 (Leaderboard_t3410660001 * __this, IScoreU5BU5D_t2012817635* ___scores0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetLocalUserScore(UnityEngine.SocialPlatforms.IScore)
extern "C"  void Leaderboard_SetLocalUserScore_m3237820727 (Leaderboard_t3410660001 * __this, RuntimeObject* ___score0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetMaxRange(System.UInt32)
extern "C"  void Leaderboard_SetMaxRange_m3173065809 (Leaderboard_t3410660001 * __this, uint32_t ___maxRange0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetTitle(System.String)
extern "C"  void Leaderboard_SetTitle_m4151578770 (Leaderboard_t3410660001 * __this, String_t* ___title0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.Score::.ctor(System.String,System.Int64,System.String,System.DateTime,System.String,System.Int32)
extern "C"  void Score__ctor_m382550378 (Score_t263763899 * __this, String_t* ___leaderboardID0, int64_t ___value1, String_t* ___userID2, DateTime_t577184549  ___date3, String_t* ___formattedValue4, int32_t ___rank5, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::.ctor(System.String,System.String,System.Boolean,UnityEngine.SocialPlatforms.UserState,UnityEngine.Texture2D)
extern "C"  void UserProfile__ctor_m1388476719 (UserProfile_t2817385703 * __this, String_t* ___name0, String_t* ___id1, bool ___friend2, int32_t ___state3, Texture2D_t1124226795 * ___image4, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SocialPlatforms.Impl.UserProfile UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData::ToUserProfile()
extern "C"  UserProfile_t2817385703 * GcUserProfileData_ToUserProfile_m2444090726 (GcUserProfileData_t753345502 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::set_id(System.String)
extern "C"  void Achievement_set_id_m1831323120 (Achievement_t3994812918 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::set_percentCompleted(System.Double)
extern "C"  void Achievement_set_percentCompleted_m3796956102 (Achievement_t3994812918 * __this, double ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::.ctor(System.String,System.Double)
extern "C"  void Achievement__ctor_m2947300959 (Achievement_t3994812918 * __this, String_t* ___id0, double ___percent1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.SocialPlatforms.Impl.Achievement::get_id()
extern "C"  String_t* Achievement_get_id_m270291723 (Achievement_t3994812918 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Double UnityEngine.SocialPlatforms.Impl.Achievement::get_percentCompleted()
extern "C"  double Achievement_get_percentCompleted_m4134761711 (Achievement_t3994812918 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.SocialPlatforms.Impl.Achievement::get_completed()
extern "C"  bool Achievement_get_completed_m3326963890 (Achievement_t3994812918 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.SocialPlatforms.Impl.Achievement::get_hidden()
extern "C"  bool Achievement_get_hidden_m3478945196 (Achievement_t3994812918 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.DateTime UnityEngine.SocialPlatforms.Impl.Achievement::get_lastReportedDate()
extern "C"  DateTime_t577184549  Achievement_get_lastReportedDate_m1885989619 (Achievement_t3994812918 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object[])
extern "C"  String_t* String_Concat_m2437577363 (RuntimeObject * __this /* static, unused */, ObjectU5BU5D_t399279091* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::set_id(System.String)
extern "C"  void AchievementDescription_set_id_m3895211643 (AchievementDescription_t720286472 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_id()
extern "C"  String_t* AchievementDescription_get_id_m281821650 (AchievementDescription_t720286472 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_title()
extern "C"  String_t* AchievementDescription_get_title_m1653513844 (AchievementDescription_t720286472 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_achievedDescription()
extern "C"  String_t* AchievementDescription_get_achievedDescription_m3789705075 (AchievementDescription_t720286472 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_unachievedDescription()
extern "C"  String_t* AchievementDescription_get_unachievedDescription_m3717626910 (AchievementDescription_t720286472 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_points()
extern "C"  int32_t AchievementDescription_get_points_m578834444 (AchievementDescription_t720286472 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_hidden()
extern "C"  bool AchievementDescription_get_hidden_m3908870508 (AchievementDescription_t720286472 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_id(System.String)
extern "C"  void Leaderboard_set_id_m326785628 (Leaderboard_t3410660001 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Range::.ctor(System.Int32,System.Int32)
extern "C"  void Range__ctor_m1225748489 (Range_t979955765 * __this, int32_t ___fromValue0, int32_t ___valueCount1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_range(UnityEngine.SocialPlatforms.Range)
extern "C"  void Leaderboard_set_range_m1604351997 (Leaderboard_t3410660001 * __this, Range_t979955765  ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_userScope(UnityEngine.SocialPlatforms.UserScope)
extern "C"  void Leaderboard_set_userScope_m3002190285 (Leaderboard_t3410660001 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_timeScope(UnityEngine.SocialPlatforms.TimeScope)
extern "C"  void Leaderboard_set_timeScope_m1065574918 (Leaderboard_t3410660001 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.Score::.ctor(System.String,System.Int64)
extern "C"  void Score__ctor_m2543159693 (Score_t263763899 * __this, String_t* ___leaderboardID0, int64_t ___value1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.SocialPlatforms.Impl.Leaderboard::get_id()
extern "C"  String_t* Leaderboard_get_id_m2616403728 (Leaderboard_t3410660001 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SocialPlatforms.Range UnityEngine.SocialPlatforms.Impl.Leaderboard::get_range()
extern "C"  Range_t979955765  Leaderboard_get_range_m1031105954 (Leaderboard_t3410660001 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SocialPlatforms.UserScope UnityEngine.SocialPlatforms.Impl.Leaderboard::get_userScope()
extern "C"  int32_t Leaderboard_get_userScope_m1802746043 (Leaderboard_t3410660001 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SocialPlatforms.TimeScope UnityEngine.SocialPlatforms.Impl.Leaderboard::get_timeScope()
extern "C"  int32_t Leaderboard_get_timeScope_m4038581171 (Leaderboard_t3410660001 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::.ctor()
extern "C"  void UserProfile__ctor_m2555166553 (UserProfile_t2817385703 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::get_Now()
extern "C"  DateTime_t577184549  DateTime_get_Now_m2404024709 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.Score::set_leaderboardID(System.String)
extern "C"  void Score_set_leaderboardID_m3194863021 (Score_t263763899 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.Score::set_value(System.Int64)
extern "C"  void Score_set_value_m388264441 (Score_t263763899 * __this, int64_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int64 UnityEngine.SocialPlatforms.Impl.Score::get_value()
extern "C"  int64_t Score_get_value_m3934882127 (Score_t263763899 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.SocialPlatforms.Impl.Score::get_leaderboardID()
extern "C"  String_t* Score_get_leaderboardID_m1761267294 (Score_t263763899 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::get_userName()
extern "C"  String_t* UserProfile_get_userName_m2450094983 (UserProfile_t2817385703 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.SocialPlatforms.Impl.UserProfile::get_isFriend()
extern "C"  bool UserProfile_get_isFriend_m4135431330 (UserProfile_t2817385703 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SocialPlatforms.UserState UnityEngine.SocialPlatforms.Impl.UserProfile::get_state()
extern "C"  int32_t UserProfile_get_state_m1958187576 (UserProfile_t2817385703 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::.ctor()
extern "C"  void GameCenterPlatform__ctor_m4272526146 (GameCenterPlatform_t461331872 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m4003873478(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_Authenticate()
extern "C"  void GameCenterPlatform_Internal_Authenticate_m88911232 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef void (*GameCenterPlatform_Internal_Authenticate_m88911232_ftn) ();
	static GameCenterPlatform_Internal_Authenticate_m88911232_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_Authenticate_m88911232_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_Authenticate()");
	_il2cpp_icall_func();
}
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_Authenticated()
extern "C"  bool GameCenterPlatform_Internal_Authenticated_m3055003233 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef bool (*GameCenterPlatform_Internal_Authenticated_m3055003233_ftn) ();
	static GameCenterPlatform_Internal_Authenticated_m3055003233_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_Authenticated_m3055003233_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_Authenticated()");
	bool retVal = _il2cpp_icall_func();
	return retVal;
}
// System.String UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_UserName()
extern "C"  String_t* GameCenterPlatform_Internal_UserName_m2580557216 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef String_t* (*GameCenterPlatform_Internal_UserName_m2580557216_ftn) ();
	static GameCenterPlatform_Internal_UserName_m2580557216_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_UserName_m2580557216_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_UserName()");
	String_t* retVal = _il2cpp_icall_func();
	return retVal;
}
// System.String UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_UserID()
extern "C"  String_t* GameCenterPlatform_Internal_UserID_m2162706182 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef String_t* (*GameCenterPlatform_Internal_UserID_m2162706182_ftn) ();
	static GameCenterPlatform_Internal_UserID_m2162706182_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_UserID_m2162706182_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_UserID()");
	String_t* retVal = _il2cpp_icall_func();
	return retVal;
}
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_Underage()
extern "C"  bool GameCenterPlatform_Internal_Underage_m923299249 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef bool (*GameCenterPlatform_Internal_Underage_m923299249_ftn) ();
	static GameCenterPlatform_Internal_Underage_m923299249_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_Underage_m923299249_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_Underage()");
	bool retVal = _il2cpp_icall_func();
	return retVal;
}
// UnityEngine.Texture2D UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_UserImage()
extern "C"  Texture2D_t1124226795 * GameCenterPlatform_Internal_UserImage_m3961485457 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef Texture2D_t1124226795 * (*GameCenterPlatform_Internal_UserImage_m3961485457_ftn) ();
	static GameCenterPlatform_Internal_UserImage_m3961485457_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_UserImage_m3961485457_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_UserImage()");
	Texture2D_t1124226795 * retVal = _il2cpp_icall_func();
	return retVal;
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadFriends(System.Object)
extern "C"  void GameCenterPlatform_Internal_LoadFriends_m4072399755 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___callback0, const RuntimeMethod* method)
{
	typedef void (*GameCenterPlatform_Internal_LoadFriends_m4072399755_ftn) (RuntimeObject *);
	static GameCenterPlatform_Internal_LoadFriends_m4072399755_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_LoadFriends_m4072399755_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadFriends(System.Object)");
	_il2cpp_icall_func(___callback0);
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadAchievementDescriptions(System.Object)
extern "C"  void GameCenterPlatform_Internal_LoadAchievementDescriptions_m2598264663 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___callback0, const RuntimeMethod* method)
{
	typedef void (*GameCenterPlatform_Internal_LoadAchievementDescriptions_m2598264663_ftn) (RuntimeObject *);
	static GameCenterPlatform_Internal_LoadAchievementDescriptions_m2598264663_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_LoadAchievementDescriptions_m2598264663_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadAchievementDescriptions(System.Object)");
	_il2cpp_icall_func(___callback0);
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadAchievements(System.Object)
extern "C"  void GameCenterPlatform_Internal_LoadAchievements_m2831301822 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___callback0, const RuntimeMethod* method)
{
	typedef void (*GameCenterPlatform_Internal_LoadAchievements_m2831301822_ftn) (RuntimeObject *);
	static GameCenterPlatform_Internal_LoadAchievements_m2831301822_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_LoadAchievements_m2831301822_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadAchievements(System.Object)");
	_il2cpp_icall_func(___callback0);
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ReportProgress(System.String,System.Double,System.Object)
extern "C"  void GameCenterPlatform_Internal_ReportProgress_m1096670774 (RuntimeObject * __this /* static, unused */, String_t* ___id0, double ___progress1, RuntimeObject * ___callback2, const RuntimeMethod* method)
{
	typedef void (*GameCenterPlatform_Internal_ReportProgress_m1096670774_ftn) (String_t*, double, RuntimeObject *);
	static GameCenterPlatform_Internal_ReportProgress_m1096670774_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_ReportProgress_m1096670774_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ReportProgress(System.String,System.Double,System.Object)");
	_il2cpp_icall_func(___id0, ___progress1, ___callback2);
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ReportScore(System.Int64,System.String,System.Object)
extern "C"  void GameCenterPlatform_Internal_ReportScore_m1090041386 (RuntimeObject * __this /* static, unused */, int64_t ___score0, String_t* ___category1, RuntimeObject * ___callback2, const RuntimeMethod* method)
{
	typedef void (*GameCenterPlatform_Internal_ReportScore_m1090041386_ftn) (int64_t, String_t*, RuntimeObject *);
	static GameCenterPlatform_Internal_ReportScore_m1090041386_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_ReportScore_m1090041386_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ReportScore(System.Int64,System.String,System.Object)");
	_il2cpp_icall_func(___score0, ___category1, ___callback2);
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadScores(System.String,System.Object)
extern "C"  void GameCenterPlatform_Internal_LoadScores_m1013297567 (RuntimeObject * __this /* static, unused */, String_t* ___category0, RuntimeObject * ___callback1, const RuntimeMethod* method)
{
	typedef void (*GameCenterPlatform_Internal_LoadScores_m1013297567_ftn) (String_t*, RuntimeObject *);
	static GameCenterPlatform_Internal_LoadScores_m1013297567_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_LoadScores_m1013297567_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadScores(System.String,System.Object)");
	_il2cpp_icall_func(___category0, ___callback1);
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowAchievementsUI()
extern "C"  void GameCenterPlatform_Internal_ShowAchievementsUI_m895298775 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef void (*GameCenterPlatform_Internal_ShowAchievementsUI_m895298775_ftn) ();
	static GameCenterPlatform_Internal_ShowAchievementsUI_m895298775_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_ShowAchievementsUI_m895298775_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowAchievementsUI()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowLeaderboardUI()
extern "C"  void GameCenterPlatform_Internal_ShowLeaderboardUI_m692809349 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef void (*GameCenterPlatform_Internal_ShowLeaderboardUI_m692809349_ftn) ();
	static GameCenterPlatform_Internal_ShowLeaderboardUI_m692809349_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_ShowLeaderboardUI_m692809349_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowLeaderboardUI()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadUsers(System.String[],System.Object)
extern "C"  void GameCenterPlatform_Internal_LoadUsers_m17157094 (RuntimeObject * __this /* static, unused */, StringU5BU5D_t2952682508* ___userIds0, RuntimeObject * ___callback1, const RuntimeMethod* method)
{
	typedef void (*GameCenterPlatform_Internal_LoadUsers_m17157094_ftn) (StringU5BU5D_t2952682508*, RuntimeObject *);
	static GameCenterPlatform_Internal_LoadUsers_m17157094_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_LoadUsers_m17157094_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadUsers(System.String[],System.Object)");
	_il2cpp_icall_func(___userIds0, ___callback1);
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ResetAllAchievements()
extern "C"  void GameCenterPlatform_Internal_ResetAllAchievements_m552123861 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef void (*GameCenterPlatform_Internal_ResetAllAchievements_m552123861_ftn) ();
	static GameCenterPlatform_Internal_ResetAllAchievements_m552123861_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_ResetAllAchievements_m552123861_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ResetAllAchievements()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowDefaultAchievementBanner(System.Boolean)
extern "C"  void GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m2298228237 (RuntimeObject * __this /* static, unused */, bool ___value0, const RuntimeMethod* method)
{
	typedef void (*GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m2298228237_ftn) (bool);
	static GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m2298228237_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m2298228237_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowDefaultAchievementBanner(System.Boolean)");
	_il2cpp_icall_func(___value0);
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ResetAllAchievements(System.Action`1<System.Boolean>)
extern "C"  void GameCenterPlatform_ResetAllAchievements_m15719820 (RuntimeObject * __this /* static, unused */, Action_1_t3430195386 * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_ResetAllAchievements_m15719820_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_1_t3430195386 * L_0 = ___callback0;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t461331872_il2cpp_TypeInfo_var);
		((GameCenterPlatform_t461331872_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t461331872_il2cpp_TypeInfo_var))->set_s_ResetAchievements_4(L_0);
		GameCenterPlatform_Internal_ResetAllAchievements_m552123861(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ShowDefaultAchievementCompletionBanner(System.Boolean)
extern "C"  void GameCenterPlatform_ShowDefaultAchievementCompletionBanner_m3626338797 (RuntimeObject * __this /* static, unused */, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_ShowDefaultAchievementCompletionBanner_m3626338797_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t461331872_il2cpp_TypeInfo_var);
		GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m2298228237(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ShowLeaderboardUI(System.String,UnityEngine.SocialPlatforms.TimeScope)
extern "C"  void GameCenterPlatform_ShowLeaderboardUI_m1416936118 (RuntimeObject * __this /* static, unused */, String_t* ___leaderboardID0, int32_t ___timeScope1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_ShowLeaderboardUI_m1416936118_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___leaderboardID0;
		int32_t L_1 = ___timeScope1;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t461331872_il2cpp_TypeInfo_var);
		GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m2477521814(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowSpecificLeaderboardUI(System.String,System.Int32)
extern "C"  void GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m2477521814 (RuntimeObject * __this /* static, unused */, String_t* ___leaderboardID0, int32_t ___timeScope1, const RuntimeMethod* method)
{
	typedef void (*GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m2477521814_ftn) (String_t*, int32_t);
	static GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m2477521814_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m2477521814_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowSpecificLeaderboardUI(System.String,System.Int32)");
	_il2cpp_icall_func(___leaderboardID0, ___timeScope1);
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ClearAchievementDescriptions(System.Int32)
extern "C"  void GameCenterPlatform_ClearAchievementDescriptions_m515868538 (RuntimeObject * __this /* static, unused */, int32_t ___size0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_ClearAchievementDescriptions_m515868538_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t461331872_il2cpp_TypeInfo_var);
		AchievementDescriptionU5BU5D_t2102278105* L_0 = ((GameCenterPlatform_t461331872_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t461331872_il2cpp_TypeInfo_var))->get_s_adCache_1();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t461331872_il2cpp_TypeInfo_var);
		AchievementDescriptionU5BU5D_t2102278105* L_1 = ((GameCenterPlatform_t461331872_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t461331872_il2cpp_TypeInfo_var))->get_s_adCache_1();
		NullCheck(L_1);
		int32_t L_2 = ___size0;
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length))))) == ((int32_t)L_2)))
		{
			goto IL_0023;
		}
	}

IL_0018:
	{
		int32_t L_3 = ___size0;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t461331872_il2cpp_TypeInfo_var);
		((GameCenterPlatform_t461331872_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t461331872_il2cpp_TypeInfo_var))->set_s_adCache_1(((AchievementDescriptionU5BU5D_t2102278105*)SZArrayNew(AchievementDescriptionU5BU5D_t2102278105_il2cpp_TypeInfo_var, (uint32_t)L_3)));
	}

IL_0023:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SetAchievementDescription(UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData,System.Int32)
extern "C"  void GameCenterPlatform_SetAchievementDescription_m2800756340 (RuntimeObject * __this /* static, unused */, GcAchievementDescriptionData_t1141403779  ___data0, int32_t ___number1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_SetAchievementDescription_m2800756340_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t461331872_il2cpp_TypeInfo_var);
		AchievementDescriptionU5BU5D_t2102278105* L_0 = ((GameCenterPlatform_t461331872_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t461331872_il2cpp_TypeInfo_var))->get_s_adCache_1();
		int32_t L_1 = ___number1;
		AchievementDescription_t720286472 * L_2 = GcAchievementDescriptionData_ToAchievementDescription_m3275123182((&___data0), /*hidden argument*/NULL);
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, L_2);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (AchievementDescription_t720286472 *)L_2);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SetAchievementDescriptionImage(UnityEngine.Texture2D,System.Int32)
extern "C"  void GameCenterPlatform_SetAchievementDescriptionImage_m1208164880 (RuntimeObject * __this /* static, unused */, Texture2D_t1124226795 * ___texture0, int32_t ___number1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_SetAchievementDescriptionImage_m1208164880_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t461331872_il2cpp_TypeInfo_var);
		AchievementDescriptionU5BU5D_t2102278105* L_0 = ((GameCenterPlatform_t461331872_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t461331872_il2cpp_TypeInfo_var))->get_s_adCache_1();
		NullCheck(L_0);
		int32_t L_1 = ___number1;
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length))))) <= ((int32_t)L_1)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_2 = ___number1;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0025;
		}
	}

IL_0015:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3773704340_il2cpp_TypeInfo_var);
		Debug_Log_m2716511837(NULL /*static, unused*/, _stringLiteral2142828473, /*hidden argument*/NULL);
		goto IL_0032;
	}

IL_0025:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t461331872_il2cpp_TypeInfo_var);
		AchievementDescriptionU5BU5D_t2102278105* L_3 = ((GameCenterPlatform_t461331872_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t461331872_il2cpp_TypeInfo_var))->get_s_adCache_1();
		int32_t L_4 = ___number1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		AchievementDescription_t720286472 * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		Texture2D_t1124226795 * L_7 = ___texture0;
		NullCheck(L_6);
		AchievementDescription_SetImage_m1652790288(L_6, L_7, /*hidden argument*/NULL);
	}

IL_0032:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::TriggerAchievementDescriptionCallback(System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]>)
extern "C"  void GameCenterPlatform_TriggerAchievementDescriptionCallback_m1627337332 (RuntimeObject * __this /* static, unused */, Action_1_t1714713886 * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_TriggerAchievementDescriptionCallback_m1627337332_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_1_t1714713886 * L_0 = ___callback0;
		if (!L_0)
		{
			goto IL_0034;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t461331872_il2cpp_TypeInfo_var);
		AchievementDescriptionU5BU5D_t2102278105* L_1 = ((GameCenterPlatform_t461331872_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t461331872_il2cpp_TypeInfo_var))->get_s_adCache_1();
		if (!L_1)
		{
			goto IL_0034;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t461331872_il2cpp_TypeInfo_var);
		AchievementDescriptionU5BU5D_t2102278105* L_2 = ((GameCenterPlatform_t461331872_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t461331872_il2cpp_TypeInfo_var))->get_s_adCache_1();
		NullCheck(L_2);
		if ((((int32_t)((int32_t)(((RuntimeArray *)L_2)->max_length)))))
		{
			goto IL_0028;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3773704340_il2cpp_TypeInfo_var);
		Debug_Log_m2716511837(NULL /*static, unused*/, _stringLiteral117111593, /*hidden argument*/NULL);
	}

IL_0028:
	{
		Action_1_t1714713886 * L_3 = ___callback0;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t461331872_il2cpp_TypeInfo_var);
		AchievementDescriptionU5BU5D_t2102278105* L_4 = ((GameCenterPlatform_t461331872_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t461331872_il2cpp_TypeInfo_var))->get_s_adCache_1();
		NullCheck(L_3);
		Action_1_Invoke_m3763991777(L_3, (IAchievementDescriptionU5BU5D_t1971932436*)(IAchievementDescriptionU5BU5D_t1971932436*)L_4, /*hidden argument*/Action_1_Invoke_m3763991777_RuntimeMethod_var);
	}

IL_0034:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::AuthenticateCallbackWrapper(System.Int32,System.String)
extern "C"  void GameCenterPlatform_AuthenticateCallbackWrapper_m1766466191 (RuntimeObject * __this /* static, unused */, int32_t ___result0, String_t* ___error1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_AuthenticateCallbackWrapper_m1766466191_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_2_t2624240298 * G_B3_0 = NULL;
	Action_2_t2624240298 * G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	Action_2_t2624240298 * G_B4_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t461331872_il2cpp_TypeInfo_var);
		GameCenterPlatform_PopulateLocalUser_m3949617552(NULL /*static, unused*/, /*hidden argument*/NULL);
		Action_2_t2624240298 * L_0 = ((GameCenterPlatform_t461331872_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t461331872_il2cpp_TypeInfo_var))->get_s_AuthenticateCallback_0();
		if (!L_0)
		{
			goto IL_0031;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t461331872_il2cpp_TypeInfo_var);
		Action_2_t2624240298 * L_1 = ((GameCenterPlatform_t461331872_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t461331872_il2cpp_TypeInfo_var))->get_s_AuthenticateCallback_0();
		int32_t L_2 = ___result0;
		G_B2_0 = L_1;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			G_B3_0 = L_1;
			goto IL_0023;
		}
	}
	{
		G_B4_0 = 1;
		G_B4_1 = G_B2_0;
		goto IL_0024;
	}

IL_0023:
	{
		G_B4_0 = 0;
		G_B4_1 = G_B3_0;
	}

IL_0024:
	{
		String_t* L_3 = ___error1;
		NullCheck(G_B4_1);
		Action_2_Invoke_m3601765374(G_B4_1, (bool)G_B4_0, L_3, /*hidden argument*/Action_2_Invoke_m3601765374_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t461331872_il2cpp_TypeInfo_var);
		((GameCenterPlatform_t461331872_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t461331872_il2cpp_TypeInfo_var))->set_s_AuthenticateCallback_0((Action_2_t2624240298 *)NULL);
	}

IL_0031:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ClearFriends(System.Int32)
extern "C"  void GameCenterPlatform_ClearFriends_m3569607745 (RuntimeObject * __this /* static, unused */, int32_t ___size0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_ClearFriends_m3569607745_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t461331872_il2cpp_TypeInfo_var);
		int32_t L_0 = ___size0;
		GameCenterPlatform_SafeClearArray_m1644754331(NULL /*static, unused*/, (((GameCenterPlatform_t461331872_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t461331872_il2cpp_TypeInfo_var))->get_address_of_s_friends_2()), L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SetFriends(UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData,System.Int32)
extern "C"  void GameCenterPlatform_SetFriends_m2336114619 (RuntimeObject * __this /* static, unused */, GcUserProfileData_t753345502  ___data0, int32_t ___number1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_SetFriends_m2336114619_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t461331872_il2cpp_TypeInfo_var);
		int32_t L_0 = ___number1;
		GcUserProfileData_AddToArray_m668560142((&___data0), (((GameCenterPlatform_t461331872_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t461331872_il2cpp_TypeInfo_var))->get_address_of_s_friends_2()), L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SetFriendImage(UnityEngine.Texture2D,System.Int32)
extern "C"  void GameCenterPlatform_SetFriendImage_m267387108 (RuntimeObject * __this /* static, unused */, Texture2D_t1124226795 * ___texture0, int32_t ___number1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_SetFriendImage_m267387108_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t461331872_il2cpp_TypeInfo_var);
		Texture2D_t1124226795 * L_0 = ___texture0;
		int32_t L_1 = ___number1;
		GameCenterPlatform_SafeSetUserImage_m1202906591(NULL /*static, unused*/, (((GameCenterPlatform_t461331872_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t461331872_il2cpp_TypeInfo_var))->get_address_of_s_friends_2()), L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::TriggerFriendsCallbackWrapper(System.Action`1<System.Boolean>,System.Int32)
extern "C"  void GameCenterPlatform_TriggerFriendsCallbackWrapper_m4135748535 (RuntimeObject * __this /* static, unused */, Action_1_t3430195386 * ___callback0, int32_t ___result1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_TriggerFriendsCallbackWrapper_m4135748535_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t3430195386 * G_B5_0 = NULL;
	Action_1_t3430195386 * G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	Action_1_t3430195386 * G_B6_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t461331872_il2cpp_TypeInfo_var);
		UserProfileU5BU5D_t15925150* L_0 = ((GameCenterPlatform_t461331872_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t461331872_il2cpp_TypeInfo_var))->get_s_friends_2();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t461331872_il2cpp_TypeInfo_var);
		LocalUser_t3937803557 * L_1 = ((GameCenterPlatform_t461331872_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t461331872_il2cpp_TypeInfo_var))->get_m_LocalUser_5();
		UserProfileU5BU5D_t15925150* L_2 = ((GameCenterPlatform_t461331872_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t461331872_il2cpp_TypeInfo_var))->get_s_friends_2();
		NullCheck(L_1);
		LocalUser_SetFriends_m1554219388(L_1, (IUserProfileU5BU5D_t2755149228*)(IUserProfileU5BU5D_t2755149228*)L_2, /*hidden argument*/NULL);
	}

IL_001a:
	{
		Action_1_t3430195386 * L_3 = ___callback0;
		if (!L_3)
		{
			goto IL_0034;
		}
	}
	{
		Action_1_t3430195386 * L_4 = ___callback0;
		int32_t L_5 = ___result1;
		G_B4_0 = L_4;
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			G_B5_0 = L_4;
			goto IL_002e;
		}
	}
	{
		G_B6_0 = 1;
		G_B6_1 = G_B4_0;
		goto IL_002f;
	}

IL_002e:
	{
		G_B6_0 = 0;
		G_B6_1 = G_B5_0;
	}

IL_002f:
	{
		NullCheck(G_B6_1);
		Action_1_Invoke_m3772574083(G_B6_1, (bool)G_B6_0, /*hidden argument*/Action_1_Invoke_m3772574083_RuntimeMethod_var);
	}

IL_0034:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::AchievementCallbackWrapper(System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>,UnityEngine.SocialPlatforms.GameCenter.GcAchievementData[])
extern "C"  void GameCenterPlatform_AchievementCallbackWrapper_m1280978010 (RuntimeObject * __this /* static, unused */, Action_1_t1329405847 * ___callback0, GcAchievementDataU5BU5D_t2801244676* ___result1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_AchievementCallbackWrapper_m1280978010_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AchievementU5BU5D_t1030707571* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Action_1_t1329405847 * L_0 = ___callback0;
		if (!L_0)
		{
			goto IL_004e;
		}
	}
	{
		GcAchievementDataU5BU5D_t2801244676* L_1 = ___result1;
		NullCheck(L_1);
		if ((((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length)))))
		{
			goto IL_001a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3773704340_il2cpp_TypeInfo_var);
		Debug_Log_m2716511837(NULL /*static, unused*/, _stringLiteral3262060875, /*hidden argument*/NULL);
	}

IL_001a:
	{
		GcAchievementDataU5BU5D_t2801244676* L_2 = ___result1;
		NullCheck(L_2);
		V_0 = ((AchievementU5BU5D_t1030707571*)SZArrayNew(AchievementU5BU5D_t1030707571_il2cpp_TypeInfo_var, (uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_2)->max_length))))));
		V_1 = 0;
		goto IL_003d;
	}

IL_002a:
	{
		AchievementU5BU5D_t1030707571* L_3 = V_0;
		int32_t L_4 = V_1;
		GcAchievementDataU5BU5D_t2801244676* L_5 = ___result1;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		Achievement_t3994812918 * L_7 = GcAchievementData_ToAchievement_m3830990361(((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6))), /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_7);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (Achievement_t3994812918 *)L_7);
		int32_t L_8 = V_1;
		V_1 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_003d:
	{
		int32_t L_9 = V_1;
		GcAchievementDataU5BU5D_t2801244676* L_10 = ___result1;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_10)->max_length)))))))
		{
			goto IL_002a;
		}
	}
	{
		Action_1_t1329405847 * L_11 = ___callback0;
		AchievementU5BU5D_t1030707571* L_12 = V_0;
		NullCheck(L_11);
		Action_1_Invoke_m4206011191(L_11, (IAchievementU5BU5D_t1586624397*)(IAchievementU5BU5D_t1586624397*)L_12, /*hidden argument*/Action_1_Invoke_m4206011191_RuntimeMethod_var);
	}

IL_004e:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ProgressCallbackWrapper(System.Action`1<System.Boolean>,System.Boolean)
extern "C"  void GameCenterPlatform_ProgressCallbackWrapper_m3232796847 (RuntimeObject * __this /* static, unused */, Action_1_t3430195386 * ___callback0, bool ___success1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_ProgressCallbackWrapper_m3232796847_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_1_t3430195386 * L_0 = ___callback0;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		Action_1_t3430195386 * L_1 = ___callback0;
		bool L_2 = ___success1;
		NullCheck(L_1);
		Action_1_Invoke_m3772574083(L_1, L_2, /*hidden argument*/Action_1_Invoke_m3772574083_RuntimeMethod_var);
	}

IL_000e:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ScoreCallbackWrapper(System.Action`1<System.Boolean>,System.Boolean)
extern "C"  void GameCenterPlatform_ScoreCallbackWrapper_m262863770 (RuntimeObject * __this /* static, unused */, Action_1_t3430195386 * ___callback0, bool ___success1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_ScoreCallbackWrapper_m262863770_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_1_t3430195386 * L_0 = ___callback0;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		Action_1_t3430195386 * L_1 = ___callback0;
		bool L_2 = ___success1;
		NullCheck(L_1);
		Action_1_Invoke_m3772574083(L_1, L_2, /*hidden argument*/Action_1_Invoke_m3772574083_RuntimeMethod_var);
	}

IL_000e:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ScoreLoaderCallbackWrapper(System.Action`1<UnityEngine.SocialPlatforms.IScore[]>,UnityEngine.SocialPlatforms.GameCenter.GcScoreData[])
extern "C"  void GameCenterPlatform_ScoreLoaderCallbackWrapper_m2158009115 (RuntimeObject * __this /* static, unused */, Action_1_t1755599085 * ___callback0, GcScoreDataU5BU5D_t373016272* ___result1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_ScoreLoaderCallbackWrapper_m2158009115_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ScoreU5BU5D_t937919226* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Action_1_t1755599085 * L_0 = ___callback0;
		if (!L_0)
		{
			goto IL_003c;
		}
	}
	{
		GcScoreDataU5BU5D_t373016272* L_1 = ___result1;
		NullCheck(L_1);
		V_0 = ((ScoreU5BU5D_t937919226*)SZArrayNew(ScoreU5BU5D_t937919226_il2cpp_TypeInfo_var, (uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length))))));
		V_1 = 0;
		goto IL_002b;
	}

IL_0018:
	{
		ScoreU5BU5D_t937919226* L_2 = V_0;
		int32_t L_3 = V_1;
		GcScoreDataU5BU5D_t373016272* L_4 = ___result1;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		Score_t263763899 * L_6 = GcScoreData_ToScore_m3093940736(((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5))), /*hidden argument*/NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_6);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (Score_t263763899 *)L_6);
		int32_t L_7 = V_1;
		V_1 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_002b:
	{
		int32_t L_8 = V_1;
		GcScoreDataU5BU5D_t373016272* L_9 = ___result1;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_9)->max_length)))))))
		{
			goto IL_0018;
		}
	}
	{
		Action_1_t1755599085 * L_10 = ___callback0;
		ScoreU5BU5D_t937919226* L_11 = V_0;
		NullCheck(L_10);
		Action_1_Invoke_m2127469977(L_10, (IScoreU5BU5D_t2012817635*)(IScoreU5BU5D_t2012817635*)L_11, /*hidden argument*/Action_1_Invoke_m2127469977_RuntimeMethod_var);
	}

IL_003c:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::UnityEngine.SocialPlatforms.ISocialPlatform.LoadFriends(UnityEngine.SocialPlatforms.ILocalUser,System.Action`1<System.Boolean>)
extern "C"  void GameCenterPlatform_UnityEngine_SocialPlatforms_ISocialPlatform_LoadFriends_m2924803962 (GameCenterPlatform_t461331872 * __this, RuntimeObject* ___user0, Action_1_t3430195386 * ___callback1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_UnityEngine_SocialPlatforms_ISocialPlatform_LoadFriends_m2924803962_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = GameCenterPlatform_VerifyAuthentication_m4066151094(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_001f;
		}
	}
	{
		Action_1_t3430195386 * L_1 = ___callback1;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Action_1_t3430195386 * L_2 = ___callback1;
		NullCheck(L_2);
		Action_1_Invoke_m3772574083(L_2, (bool)0, /*hidden argument*/Action_1_Invoke_m3772574083_RuntimeMethod_var);
	}

IL_001a:
	{
		goto IL_0025;
	}

IL_001f:
	{
		Action_1_t3430195386 * L_3 = ___callback1;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t461331872_il2cpp_TypeInfo_var);
		GameCenterPlatform_Internal_LoadFriends_m4072399755(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
	}

IL_0025:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::UnityEngine.SocialPlatforms.ISocialPlatform.Authenticate(UnityEngine.SocialPlatforms.ILocalUser,System.Action`1<System.Boolean>)
extern "C"  void GameCenterPlatform_UnityEngine_SocialPlatforms_ISocialPlatform_Authenticate_m2717729639 (GameCenterPlatform_t461331872 * __this, RuntimeObject* ___user0, Action_1_t3430195386 * ___callback1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_UnityEngine_SocialPlatforms_ISocialPlatform_Authenticate_m2717729639_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CUnityEngine_SocialPlatforms_ISocialPlatform_AuthenticateU3Ec__AnonStorey0_t801032454 * V_0 = NULL;
	{
		U3CUnityEngine_SocialPlatforms_ISocialPlatform_AuthenticateU3Ec__AnonStorey0_t801032454 * L_0 = (U3CUnityEngine_SocialPlatforms_ISocialPlatform_AuthenticateU3Ec__AnonStorey0_t801032454 *)il2cpp_codegen_object_new(U3CUnityEngine_SocialPlatforms_ISocialPlatform_AuthenticateU3Ec__AnonStorey0_t801032454_il2cpp_TypeInfo_var);
		U3CUnityEngine_SocialPlatforms_ISocialPlatform_AuthenticateU3Ec__AnonStorey0__ctor_m1143483693(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CUnityEngine_SocialPlatforms_ISocialPlatform_AuthenticateU3Ec__AnonStorey0_t801032454 * L_1 = V_0;
		Action_1_t3430195386 * L_2 = ___callback1;
		NullCheck(L_1);
		L_1->set_callback_0(L_2);
		RuntimeObject* L_3 = ___user0;
		U3CUnityEngine_SocialPlatforms_ISocialPlatform_AuthenticateU3Ec__AnonStorey0_t801032454 * L_4 = V_0;
		intptr_t L_5 = (intptr_t)U3CUnityEngine_SocialPlatforms_ISocialPlatform_AuthenticateU3Ec__AnonStorey0_U3CU3Em__0_m1730813052_RuntimeMethod_var;
		Action_2_t2624240298 * L_6 = (Action_2_t2624240298 *)il2cpp_codegen_object_new(Action_2_t2624240298_il2cpp_TypeInfo_var);
		Action_2__ctor_m2605948964(L_6, L_4, L_5, /*hidden argument*/Action_2__ctor_m2605948964_RuntimeMethod_var);
		InterfaceActionInvoker2< RuntimeObject*, Action_2_t2624240298 * >::Invoke(1 /* System.Void UnityEngine.SocialPlatforms.ISocialPlatform::Authenticate(UnityEngine.SocialPlatforms.ILocalUser,System.Action`2<System.Boolean,System.String>) */, ISocialPlatform_t4211179834_il2cpp_TypeInfo_var, __this, L_3, L_6);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::UnityEngine.SocialPlatforms.ISocialPlatform.Authenticate(UnityEngine.SocialPlatforms.ILocalUser,System.Action`2<System.Boolean,System.String>)
extern "C"  void GameCenterPlatform_UnityEngine_SocialPlatforms_ISocialPlatform_Authenticate_m207818173 (GameCenterPlatform_t461331872 * __this, RuntimeObject* ___user0, Action_2_t2624240298 * ___callback1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_UnityEngine_SocialPlatforms_ISocialPlatform_Authenticate_m207818173_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_2_t2624240298 * L_0 = ___callback1;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t461331872_il2cpp_TypeInfo_var);
		((GameCenterPlatform_t461331872_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t461331872_il2cpp_TypeInfo_var))->set_s_AuthenticateCallback_0(L_0);
		GameCenterPlatform_Internal_Authenticate_m88911232(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.SocialPlatforms.ILocalUser UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::get_localUser()
extern "C"  RuntimeObject* GameCenterPlatform_get_localUser_m2806598123 (GameCenterPlatform_t461331872 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_get_localUser_m2806598123_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t461331872_il2cpp_TypeInfo_var);
		LocalUser_t3937803557 * L_0 = ((GameCenterPlatform_t461331872_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t461331872_il2cpp_TypeInfo_var))->get_m_LocalUser_5();
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		LocalUser_t3937803557 * L_1 = (LocalUser_t3937803557 *)il2cpp_codegen_object_new(LocalUser_t3937803557_il2cpp_TypeInfo_var);
		LocalUser__ctor_m1876043553(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t461331872_il2cpp_TypeInfo_var);
		((GameCenterPlatform_t461331872_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t461331872_il2cpp_TypeInfo_var))->set_m_LocalUser_5(L_1);
	}

IL_0015:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t461331872_il2cpp_TypeInfo_var);
		bool L_2 = GameCenterPlatform_Internal_Authenticated_m3055003233(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_003d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t461331872_il2cpp_TypeInfo_var);
		LocalUser_t3937803557 * L_3 = ((GameCenterPlatform_t461331872_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t461331872_il2cpp_TypeInfo_var))->get_m_LocalUser_5();
		NullCheck(L_3);
		String_t* L_4 = UserProfile_get_id_m1776133394(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_5 = String_op_Equality_m106334435(NULL /*static, unused*/, L_4, _stringLiteral2855100237, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t461331872_il2cpp_TypeInfo_var);
		GameCenterPlatform_PopulateLocalUser_m3949617552(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_003d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t461331872_il2cpp_TypeInfo_var);
		LocalUser_t3937803557 * L_6 = ((GameCenterPlatform_t461331872_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t461331872_il2cpp_TypeInfo_var))->get_m_LocalUser_5();
		V_0 = L_6;
		goto IL_0048;
	}

IL_0048:
	{
		RuntimeObject* L_7 = V_0;
		return L_7;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::PopulateLocalUser()
extern "C"  void GameCenterPlatform_PopulateLocalUser_m3949617552 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_PopulateLocalUser_m3949617552_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t461331872_il2cpp_TypeInfo_var);
		LocalUser_t3937803557 * L_0 = ((GameCenterPlatform_t461331872_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t461331872_il2cpp_TypeInfo_var))->get_m_LocalUser_5();
		bool L_1 = GameCenterPlatform_Internal_Authenticated_m3055003233(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		LocalUser_SetAuthenticated_m1023027787(L_0, L_1, /*hidden argument*/NULL);
		LocalUser_t3937803557 * L_2 = ((GameCenterPlatform_t461331872_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t461331872_il2cpp_TypeInfo_var))->get_m_LocalUser_5();
		String_t* L_3 = GameCenterPlatform_Internal_UserName_m2580557216(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		UserProfile_SetUserName_m3456243872(L_2, L_3, /*hidden argument*/NULL);
		LocalUser_t3937803557 * L_4 = ((GameCenterPlatform_t461331872_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t461331872_il2cpp_TypeInfo_var))->get_m_LocalUser_5();
		String_t* L_5 = GameCenterPlatform_Internal_UserID_m2162706182(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_4);
		UserProfile_SetUserID_m1881002226(L_4, L_5, /*hidden argument*/NULL);
		LocalUser_t3937803557 * L_6 = ((GameCenterPlatform_t461331872_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t461331872_il2cpp_TypeInfo_var))->get_m_LocalUser_5();
		bool L_7 = GameCenterPlatform_Internal_Underage_m923299249(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_6);
		LocalUser_SetUnderage_m1824287490(L_6, L_7, /*hidden argument*/NULL);
		LocalUser_t3937803557 * L_8 = ((GameCenterPlatform_t461331872_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t461331872_il2cpp_TypeInfo_var))->get_m_LocalUser_5();
		Texture2D_t1124226795 * L_9 = GameCenterPlatform_Internal_UserImage_m3961485457(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_8);
		UserProfile_SetImage_m2732686334(L_8, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::LoadAchievementDescriptions(System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]>)
extern "C"  void GameCenterPlatform_LoadAchievementDescriptions_m3521891541 (GameCenterPlatform_t461331872 * __this, Action_1_t1714713886 * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_LoadAchievementDescriptions_m3521891541_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = GameCenterPlatform_VerifyAuthentication_m4066151094(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0024;
		}
	}
	{
		Action_1_t1714713886 * L_1 = ___callback0;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		Action_1_t1714713886 * L_2 = ___callback0;
		NullCheck(L_2);
		Action_1_Invoke_m3763991777(L_2, (IAchievementDescriptionU5BU5D_t1971932436*)(IAchievementDescriptionU5BU5D_t1971932436*)((AchievementDescriptionU5BU5D_t2102278105*)SZArrayNew(AchievementDescriptionU5BU5D_t2102278105_il2cpp_TypeInfo_var, (uint32_t)0)), /*hidden argument*/Action_1_Invoke_m3763991777_RuntimeMethod_var);
	}

IL_001f:
	{
		goto IL_002a;
	}

IL_0024:
	{
		Action_1_t1714713886 * L_3 = ___callback0;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t461331872_il2cpp_TypeInfo_var);
		GameCenterPlatform_Internal_LoadAchievementDescriptions_m2598264663(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
	}

IL_002a:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ReportProgress(System.String,System.Double,System.Action`1<System.Boolean>)
extern "C"  void GameCenterPlatform_ReportProgress_m4028393741 (GameCenterPlatform_t461331872 * __this, String_t* ___id0, double ___progress1, Action_1_t3430195386 * ___callback2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_ReportProgress_m4028393741_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = GameCenterPlatform_VerifyAuthentication_m4066151094(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_001f;
		}
	}
	{
		Action_1_t3430195386 * L_1 = ___callback2;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Action_1_t3430195386 * L_2 = ___callback2;
		NullCheck(L_2);
		Action_1_Invoke_m3772574083(L_2, (bool)0, /*hidden argument*/Action_1_Invoke_m3772574083_RuntimeMethod_var);
	}

IL_001a:
	{
		goto IL_0027;
	}

IL_001f:
	{
		String_t* L_3 = ___id0;
		double L_4 = ___progress1;
		Action_1_t3430195386 * L_5 = ___callback2;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t461331872_il2cpp_TypeInfo_var);
		GameCenterPlatform_Internal_ReportProgress_m1096670774(NULL /*static, unused*/, L_3, L_4, L_5, /*hidden argument*/NULL);
	}

IL_0027:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::LoadAchievements(System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>)
extern "C"  void GameCenterPlatform_LoadAchievements_m2032702292 (GameCenterPlatform_t461331872 * __this, Action_1_t1329405847 * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_LoadAchievements_m2032702292_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = GameCenterPlatform_VerifyAuthentication_m4066151094(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0024;
		}
	}
	{
		Action_1_t1329405847 * L_1 = ___callback0;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		Action_1_t1329405847 * L_2 = ___callback0;
		NullCheck(L_2);
		Action_1_Invoke_m4206011191(L_2, (IAchievementU5BU5D_t1586624397*)(IAchievementU5BU5D_t1586624397*)((AchievementU5BU5D_t1030707571*)SZArrayNew(AchievementU5BU5D_t1030707571_il2cpp_TypeInfo_var, (uint32_t)0)), /*hidden argument*/Action_1_Invoke_m4206011191_RuntimeMethod_var);
	}

IL_001f:
	{
		goto IL_002a;
	}

IL_0024:
	{
		Action_1_t1329405847 * L_3 = ___callback0;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t461331872_il2cpp_TypeInfo_var);
		GameCenterPlatform_Internal_LoadAchievements_m2831301822(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
	}

IL_002a:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ReportScore(System.Int64,System.String,System.Action`1<System.Boolean>)
extern "C"  void GameCenterPlatform_ReportScore_m1260115406 (GameCenterPlatform_t461331872 * __this, int64_t ___score0, String_t* ___board1, Action_1_t3430195386 * ___callback2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_ReportScore_m1260115406_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = GameCenterPlatform_VerifyAuthentication_m4066151094(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_001f;
		}
	}
	{
		Action_1_t3430195386 * L_1 = ___callback2;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Action_1_t3430195386 * L_2 = ___callback2;
		NullCheck(L_2);
		Action_1_Invoke_m3772574083(L_2, (bool)0, /*hidden argument*/Action_1_Invoke_m3772574083_RuntimeMethod_var);
	}

IL_001a:
	{
		goto IL_0027;
	}

IL_001f:
	{
		int64_t L_3 = ___score0;
		String_t* L_4 = ___board1;
		Action_1_t3430195386 * L_5 = ___callback2;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t461331872_il2cpp_TypeInfo_var);
		GameCenterPlatform_Internal_ReportScore_m1090041386(NULL /*static, unused*/, L_3, L_4, L_5, /*hidden argument*/NULL);
	}

IL_0027:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::LoadScores(System.String,System.Action`1<UnityEngine.SocialPlatforms.IScore[]>)
extern "C"  void GameCenterPlatform_LoadScores_m809616433 (GameCenterPlatform_t461331872 * __this, String_t* ___category0, Action_1_t1755599085 * ___callback1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_LoadScores_m809616433_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = GameCenterPlatform_VerifyAuthentication_m4066151094(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0024;
		}
	}
	{
		Action_1_t1755599085 * L_1 = ___callback1;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		Action_1_t1755599085 * L_2 = ___callback1;
		NullCheck(L_2);
		Action_1_Invoke_m2127469977(L_2, (IScoreU5BU5D_t2012817635*)(IScoreU5BU5D_t2012817635*)((ScoreU5BU5D_t937919226*)SZArrayNew(ScoreU5BU5D_t937919226_il2cpp_TypeInfo_var, (uint32_t)0)), /*hidden argument*/Action_1_Invoke_m2127469977_RuntimeMethod_var);
	}

IL_001f:
	{
		goto IL_002b;
	}

IL_0024:
	{
		String_t* L_3 = ___category0;
		Action_1_t1755599085 * L_4 = ___callback1;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t461331872_il2cpp_TypeInfo_var);
		GameCenterPlatform_Internal_LoadScores_m1013297567(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
	}

IL_002b:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::LoadScores(UnityEngine.SocialPlatforms.ILeaderboard,System.Action`1<System.Boolean>)
extern "C"  void GameCenterPlatform_LoadScores_m2495700013 (GameCenterPlatform_t461331872 * __this, RuntimeObject* ___board0, Action_1_t3430195386 * ___callback1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_LoadScores_m2495700013_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Leaderboard_t3410660001 * V_0 = NULL;
	GcLeaderboard_t2824820070 * V_1 = NULL;
	StringU5BU5D_t2952682508* V_2 = NULL;
	Range_t979955765  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Range_t979955765  V_4;
	memset(&V_4, 0, sizeof(V_4));
	{
		bool L_0 = GameCenterPlatform_VerifyAuthentication_m4066151094(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_001f;
		}
	}
	{
		Action_1_t3430195386 * L_1 = ___callback1;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Action_1_t3430195386 * L_2 = ___callback1;
		NullCheck(L_2);
		Action_1_Invoke_m3772574083(L_2, (bool)0, /*hidden argument*/Action_1_Invoke_m3772574083_RuntimeMethod_var);
	}

IL_001a:
	{
		goto IL_0080;
	}

IL_001f:
	{
		RuntimeObject* L_3 = ___board0;
		V_0 = ((Leaderboard_t3410660001 *)CastclassClass((RuntimeObject*)L_3, Leaderboard_t3410660001_il2cpp_TypeInfo_var));
		Leaderboard_t3410660001 * L_4 = V_0;
		GcLeaderboard_t2824820070 * L_5 = (GcLeaderboard_t2824820070 *)il2cpp_codegen_object_new(GcLeaderboard_t2824820070_il2cpp_TypeInfo_var);
		GcLeaderboard__ctor_m3199654030(L_5, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t461331872_il2cpp_TypeInfo_var);
		List_1_t1429371197 * L_6 = ((GameCenterPlatform_t461331872_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t461331872_il2cpp_TypeInfo_var))->get_m_GcBoards_6();
		GcLeaderboard_t2824820070 * L_7 = V_1;
		NullCheck(L_6);
		List_1_Add_m938950069(L_6, L_7, /*hidden argument*/List_1_Add_m938950069_RuntimeMethod_var);
		Leaderboard_t3410660001 * L_8 = V_0;
		NullCheck(L_8);
		StringU5BU5D_t2952682508* L_9 = Leaderboard_GetUserFilter_m3006109735(L_8, /*hidden argument*/NULL);
		V_2 = L_9;
		StringU5BU5D_t2952682508* L_10 = V_2;
		NullCheck(L_10);
		if ((((int32_t)((int32_t)(((RuntimeArray *)L_10)->max_length)))))
		{
			goto IL_0049;
		}
	}
	{
		V_2 = (StringU5BU5D_t2952682508*)NULL;
	}

IL_0049:
	{
		GcLeaderboard_t2824820070 * L_11 = V_1;
		RuntimeObject* L_12 = ___board0;
		NullCheck(L_12);
		String_t* L_13 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String UnityEngine.SocialPlatforms.ILeaderboard::get_id() */, ILeaderboard_t2502735080_il2cpp_TypeInfo_var, L_12);
		RuntimeObject* L_14 = ___board0;
		NullCheck(L_14);
		Range_t979955765  L_15 = InterfaceFuncInvoker0< Range_t979955765  >::Invoke(2 /* UnityEngine.SocialPlatforms.Range UnityEngine.SocialPlatforms.ILeaderboard::get_range() */, ILeaderboard_t2502735080_il2cpp_TypeInfo_var, L_14);
		V_3 = L_15;
		int32_t L_16 = (&V_3)->get_from_0();
		RuntimeObject* L_17 = ___board0;
		NullCheck(L_17);
		Range_t979955765  L_18 = InterfaceFuncInvoker0< Range_t979955765  >::Invoke(2 /* UnityEngine.SocialPlatforms.Range UnityEngine.SocialPlatforms.ILeaderboard::get_range() */, ILeaderboard_t2502735080_il2cpp_TypeInfo_var, L_17);
		V_4 = L_18;
		int32_t L_19 = (&V_4)->get_count_1();
		StringU5BU5D_t2952682508* L_20 = V_2;
		RuntimeObject* L_21 = ___board0;
		NullCheck(L_21);
		int32_t L_22 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* UnityEngine.SocialPlatforms.UserScope UnityEngine.SocialPlatforms.ILeaderboard::get_userScope() */, ILeaderboard_t2502735080_il2cpp_TypeInfo_var, L_21);
		RuntimeObject* L_23 = ___board0;
		NullCheck(L_23);
		int32_t L_24 = InterfaceFuncInvoker0< int32_t >::Invoke(3 /* UnityEngine.SocialPlatforms.TimeScope UnityEngine.SocialPlatforms.ILeaderboard::get_timeScope() */, ILeaderboard_t2502735080_il2cpp_TypeInfo_var, L_23);
		Action_1_t3430195386 * L_25 = ___callback1;
		NullCheck(L_11);
		GcLeaderboard_Internal_LoadScores_m2131756509(L_11, L_13, L_16, L_19, L_20, L_22, L_24, L_25, /*hidden argument*/NULL);
	}

IL_0080:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::LeaderboardCallbackWrapper(System.Action`1<System.Boolean>,System.Boolean)
extern "C"  void GameCenterPlatform_LeaderboardCallbackWrapper_m1549263244 (RuntimeObject * __this /* static, unused */, Action_1_t3430195386 * ___callback0, bool ___success1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_LeaderboardCallbackWrapper_m1549263244_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_1_t3430195386 * L_0 = ___callback0;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		Action_1_t3430195386 * L_1 = ___callback0;
		bool L_2 = ___success1;
		NullCheck(L_1);
		Action_1_Invoke_m3772574083(L_1, L_2, /*hidden argument*/Action_1_Invoke_m3772574083_RuntimeMethod_var);
	}

IL_000e:
	{
		return;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::GetLoading(UnityEngine.SocialPlatforms.ILeaderboard)
extern "C"  bool GameCenterPlatform_GetLoading_m1192589069 (GameCenterPlatform_t461331872 * __this, RuntimeObject* ___board0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_GetLoading_m1192589069_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	GcLeaderboard_t2824820070 * V_1 = NULL;
	Enumerator_t880960227  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Exception_t2088915711 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t2088915711 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = GameCenterPlatform_VerifyAuthentication_m4066151094(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		V_0 = (bool)0;
		goto IL_0071;
	}

IL_0013:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t461331872_il2cpp_TypeInfo_var);
		List_1_t1429371197 * L_1 = ((GameCenterPlatform_t461331872_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t461331872_il2cpp_TypeInfo_var))->get_m_GcBoards_6();
		NullCheck(L_1);
		Enumerator_t880960227  L_2 = List_1_GetEnumerator_m1529330299(L_1, /*hidden argument*/List_1_GetEnumerator_m1529330299_RuntimeMethod_var);
		V_2 = L_2;
	}

IL_001f:
	try
	{ // begin try (depth: 1)
		{
			goto IL_004b;
		}

IL_0024:
		{
			GcLeaderboard_t2824820070 * L_3 = Enumerator_get_Current_m3467058582((&V_2), /*hidden argument*/Enumerator_get_Current_m3467058582_RuntimeMethod_var);
			V_1 = L_3;
			GcLeaderboard_t2824820070 * L_4 = V_1;
			RuntimeObject* L_5 = ___board0;
			NullCheck(L_4);
			bool L_6 = GcLeaderboard_Contains_m982813207(L_4, ((Leaderboard_t3410660001 *)CastclassClass((RuntimeObject*)L_5, Leaderboard_t3410660001_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
			if (!L_6)
			{
				goto IL_004a;
			}
		}

IL_003e:
		{
			GcLeaderboard_t2824820070 * L_7 = V_1;
			NullCheck(L_7);
			bool L_8 = GcLeaderboard_Loading_m2312806203(L_7, /*hidden argument*/NULL);
			V_0 = L_8;
			IL2CPP_LEAVE(0x71, FINALLY_005c);
		}

IL_004a:
		{
		}

IL_004b:
		{
			bool L_9 = Enumerator_MoveNext_m4240943282((&V_2), /*hidden argument*/Enumerator_MoveNext_m4240943282_RuntimeMethod_var);
			if (L_9)
			{
				goto IL_0024;
			}
		}

IL_0057:
		{
			IL2CPP_LEAVE(0x6A, FINALLY_005c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t2088915711 *)e.ex;
		goto FINALLY_005c;
	}

FINALLY_005c:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m3691593966((&V_2), /*hidden argument*/Enumerator_Dispose_m3691593966_RuntimeMethod_var);
		IL2CPP_END_FINALLY(92)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(92)
	{
		IL2CPP_JUMP_TBL(0x71, IL_0071)
		IL2CPP_JUMP_TBL(0x6A, IL_006a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t2088915711 *)
	}

IL_006a:
	{
		V_0 = (bool)0;
		goto IL_0071;
	}

IL_0071:
	{
		bool L_10 = V_0;
		return L_10;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::VerifyAuthentication()
extern "C"  bool GameCenterPlatform_VerifyAuthentication_m4066151094 (GameCenterPlatform_t461331872 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_VerifyAuthentication_m4066151094_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		RuntimeObject* L_0 = GameCenterPlatform_get_localUser_m2806598123(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean UnityEngine.SocialPlatforms.ILocalUser::get_authenticated() */, ILocalUser_t603375673_il2cpp_TypeInfo_var, L_0);
		if (L_1)
		{
			goto IL_0023;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3773704340_il2cpp_TypeInfo_var);
		Debug_Log_m2716511837(NULL /*static, unused*/, _stringLiteral2283286761, /*hidden argument*/NULL);
		V_0 = (bool)0;
		goto IL_002a;
	}

IL_0023:
	{
		V_0 = (bool)1;
		goto IL_002a;
	}

IL_002a:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ShowAchievementsUI()
extern "C"  void GameCenterPlatform_ShowAchievementsUI_m1782203872 (GameCenterPlatform_t461331872 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_ShowAchievementsUI_m1782203872_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = GameCenterPlatform_VerifyAuthentication_m4066151094(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		goto IL_0016;
	}

IL_0011:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t461331872_il2cpp_TypeInfo_var);
		GameCenterPlatform_Internal_ShowAchievementsUI_m895298775(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_0016:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ShowLeaderboardUI()
extern "C"  void GameCenterPlatform_ShowLeaderboardUI_m3572604339 (GameCenterPlatform_t461331872 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_ShowLeaderboardUI_m3572604339_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = GameCenterPlatform_VerifyAuthentication_m4066151094(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		goto IL_0016;
	}

IL_0011:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t461331872_il2cpp_TypeInfo_var);
		GameCenterPlatform_Internal_ShowLeaderboardUI_m692809349(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_0016:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ClearUsers(System.Int32)
extern "C"  void GameCenterPlatform_ClearUsers_m1314494007 (RuntimeObject * __this /* static, unused */, int32_t ___size0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_ClearUsers_m1314494007_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t461331872_il2cpp_TypeInfo_var);
		int32_t L_0 = ___size0;
		GameCenterPlatform_SafeClearArray_m1644754331(NULL /*static, unused*/, (((GameCenterPlatform_t461331872_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t461331872_il2cpp_TypeInfo_var))->get_address_of_s_users_3()), L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SetUser(UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData,System.Int32)
extern "C"  void GameCenterPlatform_SetUser_m4274977625 (RuntimeObject * __this /* static, unused */, GcUserProfileData_t753345502  ___data0, int32_t ___number1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_SetUser_m4274977625_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t461331872_il2cpp_TypeInfo_var);
		int32_t L_0 = ___number1;
		GcUserProfileData_AddToArray_m668560142((&___data0), (((GameCenterPlatform_t461331872_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t461331872_il2cpp_TypeInfo_var))->get_address_of_s_users_3()), L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SetUserImage(UnityEngine.Texture2D,System.Int32)
extern "C"  void GameCenterPlatform_SetUserImage_m2827640733 (RuntimeObject * __this /* static, unused */, Texture2D_t1124226795 * ___texture0, int32_t ___number1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_SetUserImage_m2827640733_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t461331872_il2cpp_TypeInfo_var);
		Texture2D_t1124226795 * L_0 = ___texture0;
		int32_t L_1 = ___number1;
		GameCenterPlatform_SafeSetUserImage_m1202906591(NULL /*static, unused*/, (((GameCenterPlatform_t461331872_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t461331872_il2cpp_TypeInfo_var))->get_address_of_s_users_3()), L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::TriggerUsersCallbackWrapper(System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>)
extern "C"  void GameCenterPlatform_TriggerUsersCallbackWrapper_m2097430903 (RuntimeObject * __this /* static, unused */, Action_1_t2497930678 * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_TriggerUsersCallbackWrapper_m2097430903_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_1_t2497930678 * L_0 = ___callback0;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		Action_1_t2497930678 * L_1 = ___callback0;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t461331872_il2cpp_TypeInfo_var);
		UserProfileU5BU5D_t15925150* L_2 = ((GameCenterPlatform_t461331872_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t461331872_il2cpp_TypeInfo_var))->get_s_users_3();
		NullCheck(L_1);
		Action_1_Invoke_m4275329026(L_1, (IUserProfileU5BU5D_t2755149228*)(IUserProfileU5BU5D_t2755149228*)L_2, /*hidden argument*/Action_1_Invoke_m4275329026_RuntimeMethod_var);
	}

IL_0012:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::LoadUsers(System.String[],System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>)
extern "C"  void GameCenterPlatform_LoadUsers_m41092228 (GameCenterPlatform_t461331872 * __this, StringU5BU5D_t2952682508* ___userIds0, Action_1_t2497930678 * ___callback1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_LoadUsers_m41092228_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = GameCenterPlatform_VerifyAuthentication_m4066151094(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0024;
		}
	}
	{
		Action_1_t2497930678 * L_1 = ___callback1;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		Action_1_t2497930678 * L_2 = ___callback1;
		NullCheck(L_2);
		Action_1_Invoke_m4275329026(L_2, (IUserProfileU5BU5D_t2755149228*)(IUserProfileU5BU5D_t2755149228*)((UserProfileU5BU5D_t15925150*)SZArrayNew(UserProfileU5BU5D_t15925150_il2cpp_TypeInfo_var, (uint32_t)0)), /*hidden argument*/Action_1_Invoke_m4275329026_RuntimeMethod_var);
	}

IL_001f:
	{
		goto IL_002b;
	}

IL_0024:
	{
		StringU5BU5D_t2952682508* L_3 = ___userIds0;
		Action_1_t2497930678 * L_4 = ___callback1;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t461331872_il2cpp_TypeInfo_var);
		GameCenterPlatform_Internal_LoadUsers_m17157094(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
	}

IL_002b:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SafeSetUserImage(UnityEngine.SocialPlatforms.Impl.UserProfile[]&,UnityEngine.Texture2D,System.Int32)
extern "C"  void GameCenterPlatform_SafeSetUserImage_m1202906591 (RuntimeObject * __this /* static, unused */, UserProfileU5BU5D_t15925150** ___array0, Texture2D_t1124226795 * ___texture1, int32_t ___number2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_SafeSetUserImage_m1202906591_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UserProfileU5BU5D_t15925150** L_0 = ___array0;
		NullCheck((*((UserProfileU5BU5D_t15925150**)L_0)));
		int32_t L_1 = ___number2;
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)(*((UserProfileU5BU5D_t15925150**)L_0)))->max_length))))) <= ((int32_t)L_1)))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_2 = ___number2;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0029;
		}
	}

IL_0012:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3773704340_il2cpp_TypeInfo_var);
		Debug_Log_m2716511837(NULL /*static, unused*/, _stringLiteral1919715236, /*hidden argument*/NULL);
		Texture2D_t1124226795 * L_3 = (Texture2D_t1124226795 *)il2cpp_codegen_object_new(Texture2D_t1124226795_il2cpp_TypeInfo_var);
		Texture2D__ctor_m3567061737(L_3, ((int32_t)76), ((int32_t)76), /*hidden argument*/NULL);
		___texture1 = L_3;
	}

IL_0029:
	{
		UserProfileU5BU5D_t15925150** L_4 = ___array0;
		NullCheck((*((UserProfileU5BU5D_t15925150**)L_4)));
		int32_t L_5 = ___number2;
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)(*((UserProfileU5BU5D_t15925150**)L_4)))->max_length))))) <= ((int32_t)L_5)))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_6 = ___number2;
		if ((((int32_t)L_6) < ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		UserProfileU5BU5D_t15925150** L_7 = ___array0;
		int32_t L_8 = ___number2;
		NullCheck((*((UserProfileU5BU5D_t15925150**)L_7)));
		int32_t L_9 = L_8;
		UserProfile_t2817385703 * L_10 = ((*((UserProfileU5BU5D_t15925150**)L_7)))->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		Texture2D_t1124226795 * L_11 = ___texture1;
		NullCheck(L_10);
		UserProfile_SetImage_m2732686334(L_10, L_11, /*hidden argument*/NULL);
		goto IL_0053;
	}

IL_0049:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3773704340_il2cpp_TypeInfo_var);
		Debug_Log_m2716511837(NULL /*static, unused*/, _stringLiteral1905233, /*hidden argument*/NULL);
	}

IL_0053:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SafeClearArray(UnityEngine.SocialPlatforms.Impl.UserProfile[]&,System.Int32)
extern "C"  void GameCenterPlatform_SafeClearArray_m1644754331 (RuntimeObject * __this /* static, unused */, UserProfileU5BU5D_t15925150** ___array0, int32_t ___size1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_SafeClearArray_m1644754331_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UserProfileU5BU5D_t15925150** L_0 = ___array0;
		if (!(*((UserProfileU5BU5D_t15925150**)L_0)))
		{
			goto IL_0012;
		}
	}
	{
		UserProfileU5BU5D_t15925150** L_1 = ___array0;
		NullCheck((*((UserProfileU5BU5D_t15925150**)L_1)));
		int32_t L_2 = ___size1;
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)(*((UserProfileU5BU5D_t15925150**)L_1)))->max_length))))) == ((int32_t)L_2)))
		{
			goto IL_001a;
		}
	}

IL_0012:
	{
		UserProfileU5BU5D_t15925150** L_3 = ___array0;
		int32_t L_4 = ___size1;
		*((RuntimeObject **)(L_3)) = (RuntimeObject *)((UserProfileU5BU5D_t15925150*)SZArrayNew(UserProfileU5BU5D_t15925150_il2cpp_TypeInfo_var, (uint32_t)L_4));
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_3), (RuntimeObject *)((UserProfileU5BU5D_t15925150*)SZArrayNew(UserProfileU5BU5D_t15925150_il2cpp_TypeInfo_var, (uint32_t)L_4)));
	}

IL_001a:
	{
		return;
	}
}
// UnityEngine.SocialPlatforms.ILeaderboard UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::CreateLeaderboard()
extern "C"  RuntimeObject* GameCenterPlatform_CreateLeaderboard_m2991261805 (GameCenterPlatform_t461331872 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_CreateLeaderboard_m2991261805_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Leaderboard_t3410660001 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		Leaderboard_t3410660001 * L_0 = (Leaderboard_t3410660001 *)il2cpp_codegen_object_new(Leaderboard_t3410660001_il2cpp_TypeInfo_var);
		Leaderboard__ctor_m1022786544(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		Leaderboard_t3410660001 * L_1 = V_0;
		V_1 = L_1;
		goto IL_000e;
	}

IL_000e:
	{
		RuntimeObject* L_2 = V_1;
		return L_2;
	}
}
// UnityEngine.SocialPlatforms.IAchievement UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::CreateAchievement()
extern "C"  RuntimeObject* GameCenterPlatform_CreateAchievement_m4181854791 (GameCenterPlatform_t461331872 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_CreateAchievement_m4181854791_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Achievement_t3994812918 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		Achievement_t3994812918 * L_0 = (Achievement_t3994812918 *)il2cpp_codegen_object_new(Achievement_t3994812918_il2cpp_TypeInfo_var);
		Achievement__ctor_m3229096414(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		Achievement_t3994812918 * L_1 = V_0;
		V_1 = L_1;
		goto IL_000e;
	}

IL_000e:
	{
		RuntimeObject* L_2 = V_1;
		return L_2;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::TriggerResetAchievementCallback(System.Boolean)
extern "C"  void GameCenterPlatform_TriggerResetAchievementCallback_m3188157253 (RuntimeObject * __this /* static, unused */, bool ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_TriggerResetAchievementCallback_m3188157253_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t461331872_il2cpp_TypeInfo_var);
		Action_1_t3430195386 * L_0 = ((GameCenterPlatform_t461331872_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t461331872_il2cpp_TypeInfo_var))->get_s_ResetAchievements_4();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t461331872_il2cpp_TypeInfo_var);
		Action_1_t3430195386 * L_1 = ((GameCenterPlatform_t461331872_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t461331872_il2cpp_TypeInfo_var))->get_s_ResetAchievements_4();
		bool L_2 = ___result0;
		NullCheck(L_1);
		Action_1_Invoke_m3772574083(L_1, L_2, /*hidden argument*/Action_1_Invoke_m3772574083_RuntimeMethod_var);
	}

IL_0016:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::.cctor()
extern "C"  void GameCenterPlatform__cctor_m2848281415 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform__cctor_m2848281415_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((GameCenterPlatform_t461331872_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t461331872_il2cpp_TypeInfo_var))->set_s_adCache_1(((AchievementDescriptionU5BU5D_t2102278105*)SZArrayNew(AchievementDescriptionU5BU5D_t2102278105_il2cpp_TypeInfo_var, (uint32_t)0)));
		((GameCenterPlatform_t461331872_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t461331872_il2cpp_TypeInfo_var))->set_s_friends_2(((UserProfileU5BU5D_t15925150*)SZArrayNew(UserProfileU5BU5D_t15925150_il2cpp_TypeInfo_var, (uint32_t)0)));
		((GameCenterPlatform_t461331872_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t461331872_il2cpp_TypeInfo_var))->set_s_users_3(((UserProfileU5BU5D_t15925150*)SZArrayNew(UserProfileU5BU5D_t15925150_il2cpp_TypeInfo_var, (uint32_t)0)));
		List_1_t1429371197 * L_0 = (List_1_t1429371197 *)il2cpp_codegen_object_new(List_1_t1429371197_il2cpp_TypeInfo_var);
		List_1__ctor_m2503093044(L_0, /*hidden argument*/List_1__ctor_m2503093044_RuntimeMethod_var);
		((GameCenterPlatform_t461331872_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t461331872_il2cpp_TypeInfo_var))->set_m_GcBoards_6(L_0);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform/<UnityEngine_SocialPlatforms_ISocialPlatform_Authenticate>c__AnonStorey0::.ctor()
extern "C"  void U3CUnityEngine_SocialPlatforms_ISocialPlatform_AuthenticateU3Ec__AnonStorey0__ctor_m1143483693 (U3CUnityEngine_SocialPlatforms_ISocialPlatform_AuthenticateU3Ec__AnonStorey0_t801032454 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m4003873478(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform/<UnityEngine_SocialPlatforms_ISocialPlatform_Authenticate>c__AnonStorey0::<>m__0(System.Boolean,System.String)
extern "C"  void U3CUnityEngine_SocialPlatforms_ISocialPlatform_AuthenticateU3Ec__AnonStorey0_U3CU3Em__0_m1730813052 (U3CUnityEngine_SocialPlatforms_ISocialPlatform_AuthenticateU3Ec__AnonStorey0_t801032454 * __this, bool ___success0, String_t* ___error1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CUnityEngine_SocialPlatforms_ISocialPlatform_AuthenticateU3Ec__AnonStorey0_U3CU3Em__0_m1730813052_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_1_t3430195386 * L_0 = __this->get_callback_0();
		bool L_1 = ___success0;
		NullCheck(L_0);
		Action_1_Invoke_m3772574083(L_0, L_1, /*hidden argument*/Action_1_Invoke_m3772574083_RuntimeMethod_var);
		return;
	}
}
// Conversion methods for marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
extern "C" void GcAchievementData_t748194297_marshal_pinvoke(const GcAchievementData_t748194297& unmarshaled, GcAchievementData_t748194297_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Identifier_0 = il2cpp_codegen_marshal_string(unmarshaled.get_m_Identifier_0());
	marshaled.___m_PercentCompleted_1 = unmarshaled.get_m_PercentCompleted_1();
	marshaled.___m_Completed_2 = unmarshaled.get_m_Completed_2();
	marshaled.___m_Hidden_3 = unmarshaled.get_m_Hidden_3();
	marshaled.___m_LastReportedDate_4 = unmarshaled.get_m_LastReportedDate_4();
}
extern "C" void GcAchievementData_t748194297_marshal_pinvoke_back(const GcAchievementData_t748194297_marshaled_pinvoke& marshaled, GcAchievementData_t748194297& unmarshaled)
{
	unmarshaled.set_m_Identifier_0(il2cpp_codegen_marshal_string_result(marshaled.___m_Identifier_0));
	double unmarshaled_m_PercentCompleted_temp_1 = 0.0;
	unmarshaled_m_PercentCompleted_temp_1 = marshaled.___m_PercentCompleted_1;
	unmarshaled.set_m_PercentCompleted_1(unmarshaled_m_PercentCompleted_temp_1);
	int32_t unmarshaled_m_Completed_temp_2 = 0;
	unmarshaled_m_Completed_temp_2 = marshaled.___m_Completed_2;
	unmarshaled.set_m_Completed_2(unmarshaled_m_Completed_temp_2);
	int32_t unmarshaled_m_Hidden_temp_3 = 0;
	unmarshaled_m_Hidden_temp_3 = marshaled.___m_Hidden_3;
	unmarshaled.set_m_Hidden_3(unmarshaled_m_Hidden_temp_3);
	int32_t unmarshaled_m_LastReportedDate_temp_4 = 0;
	unmarshaled_m_LastReportedDate_temp_4 = marshaled.___m_LastReportedDate_4;
	unmarshaled.set_m_LastReportedDate_4(unmarshaled_m_LastReportedDate_temp_4);
}
// Conversion method for clean up from marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
extern "C" void GcAchievementData_t748194297_marshal_pinvoke_cleanup(GcAchievementData_t748194297_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___m_Identifier_0);
	marshaled.___m_Identifier_0 = NULL;
}
// Conversion methods for marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
extern "C" void GcAchievementData_t748194297_marshal_com(const GcAchievementData_t748194297& unmarshaled, GcAchievementData_t748194297_marshaled_com& marshaled)
{
	marshaled.___m_Identifier_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_m_Identifier_0());
	marshaled.___m_PercentCompleted_1 = unmarshaled.get_m_PercentCompleted_1();
	marshaled.___m_Completed_2 = unmarshaled.get_m_Completed_2();
	marshaled.___m_Hidden_3 = unmarshaled.get_m_Hidden_3();
	marshaled.___m_LastReportedDate_4 = unmarshaled.get_m_LastReportedDate_4();
}
extern "C" void GcAchievementData_t748194297_marshal_com_back(const GcAchievementData_t748194297_marshaled_com& marshaled, GcAchievementData_t748194297& unmarshaled)
{
	unmarshaled.set_m_Identifier_0(il2cpp_codegen_marshal_bstring_result(marshaled.___m_Identifier_0));
	double unmarshaled_m_PercentCompleted_temp_1 = 0.0;
	unmarshaled_m_PercentCompleted_temp_1 = marshaled.___m_PercentCompleted_1;
	unmarshaled.set_m_PercentCompleted_1(unmarshaled_m_PercentCompleted_temp_1);
	int32_t unmarshaled_m_Completed_temp_2 = 0;
	unmarshaled_m_Completed_temp_2 = marshaled.___m_Completed_2;
	unmarshaled.set_m_Completed_2(unmarshaled_m_Completed_temp_2);
	int32_t unmarshaled_m_Hidden_temp_3 = 0;
	unmarshaled_m_Hidden_temp_3 = marshaled.___m_Hidden_3;
	unmarshaled.set_m_Hidden_3(unmarshaled_m_Hidden_temp_3);
	int32_t unmarshaled_m_LastReportedDate_temp_4 = 0;
	unmarshaled_m_LastReportedDate_temp_4 = marshaled.___m_LastReportedDate_4;
	unmarshaled.set_m_LastReportedDate_4(unmarshaled_m_LastReportedDate_temp_4);
}
// Conversion method for clean up from marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
extern "C" void GcAchievementData_t748194297_marshal_com_cleanup(GcAchievementData_t748194297_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___m_Identifier_0);
	marshaled.___m_Identifier_0 = NULL;
}
// UnityEngine.SocialPlatforms.Impl.Achievement UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::ToAchievement()
extern "C"  Achievement_t3994812918 * GcAchievementData_ToAchievement_m3830990361 (GcAchievementData_t748194297 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GcAchievementData_ToAchievement_m3830990361_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t577184549  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Achievement_t3994812918 * V_1 = NULL;
	double G_B2_0 = 0.0;
	String_t* G_B2_1 = NULL;
	double G_B1_0 = 0.0;
	String_t* G_B1_1 = NULL;
	int32_t G_B3_0 = 0;
	double G_B3_1 = 0.0;
	String_t* G_B3_2 = NULL;
	int32_t G_B5_0 = 0;
	double G_B5_1 = 0.0;
	String_t* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	double G_B4_1 = 0.0;
	String_t* G_B4_2 = NULL;
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	double G_B6_2 = 0.0;
	String_t* G_B6_3 = NULL;
	{
		String_t* L_0 = __this->get_m_Identifier_0();
		double L_1 = __this->get_m_PercentCompleted_1();
		int32_t L_2 = __this->get_m_Completed_2();
		G_B1_0 = L_1;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_1;
			G_B2_1 = L_0;
			goto IL_001e;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_001f;
	}

IL_001e:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_001f:
	{
		int32_t L_3 = __this->get_m_Hidden_3();
		G_B4_0 = G_B3_0;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
		if (L_3)
		{
			G_B5_0 = G_B3_0;
			G_B5_1 = G_B3_1;
			G_B5_2 = G_B3_2;
			goto IL_0030;
		}
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0031;
	}

IL_0030:
	{
		G_B6_0 = 1;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0031:
	{
		DateTime__ctor_m1094431492((&V_0), ((int32_t)1970), 1, 1, 0, 0, 0, 0, /*hidden argument*/NULL);
		int32_t L_4 = __this->get_m_LastReportedDate_4();
		DateTime_t577184549  L_5 = DateTime_AddSeconds_m823838217((&V_0), (((double)((double)L_4))), /*hidden argument*/NULL);
		Achievement_t3994812918 * L_6 = (Achievement_t3994812918 *)il2cpp_codegen_object_new(Achievement_t3994812918_il2cpp_TypeInfo_var);
		Achievement__ctor_m3484502087(L_6, G_B6_3, G_B6_2, (bool)G_B6_1, (bool)G_B6_0, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		goto IL_005c;
	}

IL_005c:
	{
		Achievement_t3994812918 * L_7 = V_1;
		return L_7;
	}
}
extern "C"  Achievement_t3994812918 * GcAchievementData_ToAchievement_m3830990361_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	GcAchievementData_t748194297 * _thisAdjusted = reinterpret_cast<GcAchievementData_t748194297 *>(__this + 1);
	return GcAchievementData_ToAchievement_m3830990361(_thisAdjusted, method);
}
// Conversion methods for marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData
extern "C" void GcAchievementDescriptionData_t1141403779_marshal_pinvoke(const GcAchievementDescriptionData_t1141403779& unmarshaled, GcAchievementDescriptionData_t1141403779_marshaled_pinvoke& marshaled)
{
	Il2CppCodeGenException* ___m_Image_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Image' of type 'GcAchievementDescriptionData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Image_2Exception);
}
extern "C" void GcAchievementDescriptionData_t1141403779_marshal_pinvoke_back(const GcAchievementDescriptionData_t1141403779_marshaled_pinvoke& marshaled, GcAchievementDescriptionData_t1141403779& unmarshaled)
{
	Il2CppCodeGenException* ___m_Image_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Image' of type 'GcAchievementDescriptionData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Image_2Exception);
}
// Conversion method for clean up from marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData
extern "C" void GcAchievementDescriptionData_t1141403779_marshal_pinvoke_cleanup(GcAchievementDescriptionData_t1141403779_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData
extern "C" void GcAchievementDescriptionData_t1141403779_marshal_com(const GcAchievementDescriptionData_t1141403779& unmarshaled, GcAchievementDescriptionData_t1141403779_marshaled_com& marshaled)
{
	Il2CppCodeGenException* ___m_Image_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Image' of type 'GcAchievementDescriptionData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Image_2Exception);
}
extern "C" void GcAchievementDescriptionData_t1141403779_marshal_com_back(const GcAchievementDescriptionData_t1141403779_marshaled_com& marshaled, GcAchievementDescriptionData_t1141403779& unmarshaled)
{
	Il2CppCodeGenException* ___m_Image_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Image' of type 'GcAchievementDescriptionData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Image_2Exception);
}
// Conversion method for clean up from marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData
extern "C" void GcAchievementDescriptionData_t1141403779_marshal_com_cleanup(GcAchievementDescriptionData_t1141403779_marshaled_com& marshaled)
{
}
// UnityEngine.SocialPlatforms.Impl.AchievementDescription UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData::ToAchievementDescription()
extern "C"  AchievementDescription_t720286472 * GcAchievementDescriptionData_ToAchievementDescription_m3275123182 (GcAchievementDescriptionData_t1141403779 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GcAchievementDescriptionData_ToAchievementDescription_m3275123182_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AchievementDescription_t720286472 * V_0 = NULL;
	String_t* G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	Texture2D_t1124226795 * G_B2_2 = NULL;
	String_t* G_B2_3 = NULL;
	String_t* G_B2_4 = NULL;
	String_t* G_B1_0 = NULL;
	String_t* G_B1_1 = NULL;
	Texture2D_t1124226795 * G_B1_2 = NULL;
	String_t* G_B1_3 = NULL;
	String_t* G_B1_4 = NULL;
	int32_t G_B3_0 = 0;
	String_t* G_B3_1 = NULL;
	String_t* G_B3_2 = NULL;
	Texture2D_t1124226795 * G_B3_3 = NULL;
	String_t* G_B3_4 = NULL;
	String_t* G_B3_5 = NULL;
	{
		String_t* L_0 = __this->get_m_Identifier_0();
		String_t* L_1 = __this->get_m_Title_1();
		Texture2D_t1124226795 * L_2 = __this->get_m_Image_2();
		String_t* L_3 = __this->get_m_AchievedDescription_3();
		String_t* L_4 = __this->get_m_UnachievedDescription_4();
		int32_t L_5 = __this->get_m_Hidden_5();
		G_B1_0 = L_4;
		G_B1_1 = L_3;
		G_B1_2 = L_2;
		G_B1_3 = L_1;
		G_B1_4 = L_0;
		if (L_5)
		{
			G_B2_0 = L_4;
			G_B2_1 = L_3;
			G_B2_2 = L_2;
			G_B2_3 = L_1;
			G_B2_4 = L_0;
			goto IL_0030;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		G_B3_5 = G_B1_4;
		goto IL_0031;
	}

IL_0030:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
		G_B3_5 = G_B2_4;
	}

IL_0031:
	{
		int32_t L_6 = __this->get_m_Points_6();
		AchievementDescription_t720286472 * L_7 = (AchievementDescription_t720286472 *)il2cpp_codegen_object_new(AchievementDescription_t720286472_il2cpp_TypeInfo_var);
		AchievementDescription__ctor_m2531854831(L_7, G_B3_5, G_B3_4, G_B3_3, G_B3_2, G_B3_1, (bool)G_B3_0, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		goto IL_0042;
	}

IL_0042:
	{
		AchievementDescription_t720286472 * L_8 = V_0;
		return L_8;
	}
}
extern "C"  AchievementDescription_t720286472 * GcAchievementDescriptionData_ToAchievementDescription_m3275123182_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	GcAchievementDescriptionData_t1141403779 * _thisAdjusted = reinterpret_cast<GcAchievementDescriptionData_t1141403779 *>(__this + 1);
	return GcAchievementDescriptionData_ToAchievementDescription_m3275123182(_thisAdjusted, method);
}
// Conversion methods for marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard
extern "C" void GcLeaderboard_t2824820070_marshal_pinvoke(const GcLeaderboard_t2824820070& unmarshaled, GcLeaderboard_t2824820070_marshaled_pinvoke& marshaled)
{
	Il2CppCodeGenException* ___m_GenericLeaderboard_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_GenericLeaderboard' of type 'GcLeaderboard': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_GenericLeaderboard_1Exception);
}
extern "C" void GcLeaderboard_t2824820070_marshal_pinvoke_back(const GcLeaderboard_t2824820070_marshaled_pinvoke& marshaled, GcLeaderboard_t2824820070& unmarshaled)
{
	Il2CppCodeGenException* ___m_GenericLeaderboard_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_GenericLeaderboard' of type 'GcLeaderboard': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_GenericLeaderboard_1Exception);
}
// Conversion method for clean up from marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard
extern "C" void GcLeaderboard_t2824820070_marshal_pinvoke_cleanup(GcLeaderboard_t2824820070_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard
extern "C" void GcLeaderboard_t2824820070_marshal_com(const GcLeaderboard_t2824820070& unmarshaled, GcLeaderboard_t2824820070_marshaled_com& marshaled)
{
	Il2CppCodeGenException* ___m_GenericLeaderboard_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_GenericLeaderboard' of type 'GcLeaderboard': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_GenericLeaderboard_1Exception);
}
extern "C" void GcLeaderboard_t2824820070_marshal_com_back(const GcLeaderboard_t2824820070_marshaled_com& marshaled, GcLeaderboard_t2824820070& unmarshaled)
{
	Il2CppCodeGenException* ___m_GenericLeaderboard_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_GenericLeaderboard' of type 'GcLeaderboard': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_GenericLeaderboard_1Exception);
}
// Conversion method for clean up from marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard
extern "C" void GcLeaderboard_t2824820070_marshal_com_cleanup(GcLeaderboard_t2824820070_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::.ctor(UnityEngine.SocialPlatforms.Impl.Leaderboard)
extern "C"  void GcLeaderboard__ctor_m3199654030 (GcLeaderboard_t2824820070 * __this, Leaderboard_t3410660001 * ___board0, const RuntimeMethod* method)
{
	{
		Object__ctor_m4003873478(__this, /*hidden argument*/NULL);
		Leaderboard_t3410660001 * L_0 = ___board0;
		__this->set_m_GenericLeaderboard_1(L_0);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Finalize()
extern "C"  void GcLeaderboard_Finalize_m2732817365 (GcLeaderboard_t2824820070 * __this, const RuntimeMethod* method)
{
	Exception_t2088915711 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t2088915711 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		GcLeaderboard_Dispose_m40522015(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x13, FINALLY_000c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t2088915711 *)e.ex;
		goto FINALLY_000c;
	}

FINALLY_000c:
	{ // begin finally (depth: 1)
		Object_Finalize_m1142049849(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(12)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(12)
	{
		IL2CPP_JUMP_TBL(0x13, IL_0013)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t2088915711 *)
	}

IL_0013:
	{
		return;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Contains(UnityEngine.SocialPlatforms.Impl.Leaderboard)
extern "C"  bool GcLeaderboard_Contains_m982813207 (GcLeaderboard_t2824820070 * __this, Leaderboard_t3410660001 * ___board0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		Leaderboard_t3410660001 * L_0 = __this->get_m_GenericLeaderboard_1();
		Leaderboard_t3410660001 * L_1 = ___board0;
		V_0 = (bool)((((RuntimeObject*)(Leaderboard_t3410660001 *)L_0) == ((RuntimeObject*)(Leaderboard_t3410660001 *)L_1))? 1 : 0);
		goto IL_0010;
	}

IL_0010:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::SetScores(UnityEngine.SocialPlatforms.GameCenter.GcScoreData[])
extern "C"  void GcLeaderboard_SetScores_m2477898150 (GcLeaderboard_t2824820070 * __this, GcScoreDataU5BU5D_t373016272* ___scoreDatas0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GcLeaderboard_SetScores_m2477898150_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ScoreU5BU5D_t937919226* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Leaderboard_t3410660001 * L_0 = __this->get_m_GenericLeaderboard_1();
		if (!L_0)
		{
			goto IL_0046;
		}
	}
	{
		GcScoreDataU5BU5D_t373016272* L_1 = ___scoreDatas0;
		NullCheck(L_1);
		V_0 = ((ScoreU5BU5D_t937919226*)SZArrayNew(ScoreU5BU5D_t937919226_il2cpp_TypeInfo_var, (uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length))))));
		V_1 = 0;
		goto IL_0030;
	}

IL_001d:
	{
		ScoreU5BU5D_t937919226* L_2 = V_0;
		int32_t L_3 = V_1;
		GcScoreDataU5BU5D_t373016272* L_4 = ___scoreDatas0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		Score_t263763899 * L_6 = GcScoreData_ToScore_m3093940736(((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5))), /*hidden argument*/NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_6);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (Score_t263763899 *)L_6);
		int32_t L_7 = V_1;
		V_1 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0030:
	{
		int32_t L_8 = V_1;
		GcScoreDataU5BU5D_t373016272* L_9 = ___scoreDatas0;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_9)->max_length)))))))
		{
			goto IL_001d;
		}
	}
	{
		Leaderboard_t3410660001 * L_10 = __this->get_m_GenericLeaderboard_1();
		ScoreU5BU5D_t937919226* L_11 = V_0;
		NullCheck(L_10);
		Leaderboard_SetScores_m4128045724(L_10, (IScoreU5BU5D_t2012817635*)(IScoreU5BU5D_t2012817635*)L_11, /*hidden argument*/NULL);
	}

IL_0046:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::SetLocalScore(UnityEngine.SocialPlatforms.GameCenter.GcScoreData)
extern "C"  void GcLeaderboard_SetLocalScore_m3263755584 (GcLeaderboard_t2824820070 * __this, GcScoreData_t549731357  ___scoreData0, const RuntimeMethod* method)
{
	{
		Leaderboard_t3410660001 * L_0 = __this->get_m_GenericLeaderboard_1();
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		Leaderboard_t3410660001 * L_1 = __this->get_m_GenericLeaderboard_1();
		Score_t263763899 * L_2 = GcScoreData_ToScore_m3093940736((&___scoreData0), /*hidden argument*/NULL);
		NullCheck(L_1);
		Leaderboard_SetLocalUserScore_m3237820727(L_1, L_2, /*hidden argument*/NULL);
	}

IL_001e:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::SetMaxRange(System.UInt32)
extern "C"  void GcLeaderboard_SetMaxRange_m3795841025 (GcLeaderboard_t2824820070 * __this, uint32_t ___maxRange0, const RuntimeMethod* method)
{
	{
		Leaderboard_t3410660001 * L_0 = __this->get_m_GenericLeaderboard_1();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		Leaderboard_t3410660001 * L_1 = __this->get_m_GenericLeaderboard_1();
		uint32_t L_2 = ___maxRange0;
		NullCheck(L_1);
		Leaderboard_SetMaxRange_m3173065809(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0018:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::SetTitle(System.String)
extern "C"  void GcLeaderboard_SetTitle_m3828301640 (GcLeaderboard_t2824820070 * __this, String_t* ___title0, const RuntimeMethod* method)
{
	{
		Leaderboard_t3410660001 * L_0 = __this->get_m_GenericLeaderboard_1();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		Leaderboard_t3410660001 * L_1 = __this->get_m_GenericLeaderboard_1();
		String_t* L_2 = ___title0;
		NullCheck(L_1);
		Leaderboard_SetTitle_m4151578770(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0018:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Internal_LoadScores(System.String,System.Int32,System.Int32,System.String[],System.Int32,System.Int32,System.Object)
extern "C"  void GcLeaderboard_Internal_LoadScores_m2131756509 (GcLeaderboard_t2824820070 * __this, String_t* ___category0, int32_t ___from1, int32_t ___count2, StringU5BU5D_t2952682508* ___userIDs3, int32_t ___playerScope4, int32_t ___timeScope5, RuntimeObject * ___callback6, const RuntimeMethod* method)
{
	typedef void (*GcLeaderboard_Internal_LoadScores_m2131756509_ftn) (GcLeaderboard_t2824820070 *, String_t*, int32_t, int32_t, StringU5BU5D_t2952682508*, int32_t, int32_t, RuntimeObject *);
	static GcLeaderboard_Internal_LoadScores_m2131756509_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GcLeaderboard_Internal_LoadScores_m2131756509_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Internal_LoadScores(System.String,System.Int32,System.Int32,System.String[],System.Int32,System.Int32,System.Object)");
	_il2cpp_icall_func(__this, ___category0, ___from1, ___count2, ___userIDs3, ___playerScope4, ___timeScope5, ___callback6);
}
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Loading()
extern "C"  bool GcLeaderboard_Loading_m2312806203 (GcLeaderboard_t2824820070 * __this, const RuntimeMethod* method)
{
	typedef bool (*GcLeaderboard_Loading_m2312806203_ftn) (GcLeaderboard_t2824820070 *);
	static GcLeaderboard_Loading_m2312806203_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GcLeaderboard_Loading_m2312806203_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Loading()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Dispose()
extern "C"  void GcLeaderboard_Dispose_m40522015 (GcLeaderboard_t2824820070 * __this, const RuntimeMethod* method)
{
	typedef void (*GcLeaderboard_Dispose_m40522015_ftn) (GcLeaderboard_t2824820070 *);
	static GcLeaderboard_Dispose_m40522015_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GcLeaderboard_Dispose_m40522015_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Dispose()");
	_il2cpp_icall_func(__this);
}
// Conversion methods for marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcScoreData
extern "C" void GcScoreData_t549731357_marshal_pinvoke(const GcScoreData_t549731357& unmarshaled, GcScoreData_t549731357_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Category_0 = il2cpp_codegen_marshal_string(unmarshaled.get_m_Category_0());
	marshaled.___m_ValueLow_1 = unmarshaled.get_m_ValueLow_1();
	marshaled.___m_ValueHigh_2 = unmarshaled.get_m_ValueHigh_2();
	marshaled.___m_Date_3 = unmarshaled.get_m_Date_3();
	marshaled.___m_FormattedValue_4 = il2cpp_codegen_marshal_string(unmarshaled.get_m_FormattedValue_4());
	marshaled.___m_PlayerID_5 = il2cpp_codegen_marshal_string(unmarshaled.get_m_PlayerID_5());
	marshaled.___m_Rank_6 = unmarshaled.get_m_Rank_6();
}
extern "C" void GcScoreData_t549731357_marshal_pinvoke_back(const GcScoreData_t549731357_marshaled_pinvoke& marshaled, GcScoreData_t549731357& unmarshaled)
{
	unmarshaled.set_m_Category_0(il2cpp_codegen_marshal_string_result(marshaled.___m_Category_0));
	uint32_t unmarshaled_m_ValueLow_temp_1 = 0;
	unmarshaled_m_ValueLow_temp_1 = marshaled.___m_ValueLow_1;
	unmarshaled.set_m_ValueLow_1(unmarshaled_m_ValueLow_temp_1);
	int32_t unmarshaled_m_ValueHigh_temp_2 = 0;
	unmarshaled_m_ValueHigh_temp_2 = marshaled.___m_ValueHigh_2;
	unmarshaled.set_m_ValueHigh_2(unmarshaled_m_ValueHigh_temp_2);
	int32_t unmarshaled_m_Date_temp_3 = 0;
	unmarshaled_m_Date_temp_3 = marshaled.___m_Date_3;
	unmarshaled.set_m_Date_3(unmarshaled_m_Date_temp_3);
	unmarshaled.set_m_FormattedValue_4(il2cpp_codegen_marshal_string_result(marshaled.___m_FormattedValue_4));
	unmarshaled.set_m_PlayerID_5(il2cpp_codegen_marshal_string_result(marshaled.___m_PlayerID_5));
	int32_t unmarshaled_m_Rank_temp_6 = 0;
	unmarshaled_m_Rank_temp_6 = marshaled.___m_Rank_6;
	unmarshaled.set_m_Rank_6(unmarshaled_m_Rank_temp_6);
}
// Conversion method for clean up from marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcScoreData
extern "C" void GcScoreData_t549731357_marshal_pinvoke_cleanup(GcScoreData_t549731357_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___m_Category_0);
	marshaled.___m_Category_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___m_FormattedValue_4);
	marshaled.___m_FormattedValue_4 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___m_PlayerID_5);
	marshaled.___m_PlayerID_5 = NULL;
}
// Conversion methods for marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcScoreData
extern "C" void GcScoreData_t549731357_marshal_com(const GcScoreData_t549731357& unmarshaled, GcScoreData_t549731357_marshaled_com& marshaled)
{
	marshaled.___m_Category_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_m_Category_0());
	marshaled.___m_ValueLow_1 = unmarshaled.get_m_ValueLow_1();
	marshaled.___m_ValueHigh_2 = unmarshaled.get_m_ValueHigh_2();
	marshaled.___m_Date_3 = unmarshaled.get_m_Date_3();
	marshaled.___m_FormattedValue_4 = il2cpp_codegen_marshal_bstring(unmarshaled.get_m_FormattedValue_4());
	marshaled.___m_PlayerID_5 = il2cpp_codegen_marshal_bstring(unmarshaled.get_m_PlayerID_5());
	marshaled.___m_Rank_6 = unmarshaled.get_m_Rank_6();
}
extern "C" void GcScoreData_t549731357_marshal_com_back(const GcScoreData_t549731357_marshaled_com& marshaled, GcScoreData_t549731357& unmarshaled)
{
	unmarshaled.set_m_Category_0(il2cpp_codegen_marshal_bstring_result(marshaled.___m_Category_0));
	uint32_t unmarshaled_m_ValueLow_temp_1 = 0;
	unmarshaled_m_ValueLow_temp_1 = marshaled.___m_ValueLow_1;
	unmarshaled.set_m_ValueLow_1(unmarshaled_m_ValueLow_temp_1);
	int32_t unmarshaled_m_ValueHigh_temp_2 = 0;
	unmarshaled_m_ValueHigh_temp_2 = marshaled.___m_ValueHigh_2;
	unmarshaled.set_m_ValueHigh_2(unmarshaled_m_ValueHigh_temp_2);
	int32_t unmarshaled_m_Date_temp_3 = 0;
	unmarshaled_m_Date_temp_3 = marshaled.___m_Date_3;
	unmarshaled.set_m_Date_3(unmarshaled_m_Date_temp_3);
	unmarshaled.set_m_FormattedValue_4(il2cpp_codegen_marshal_bstring_result(marshaled.___m_FormattedValue_4));
	unmarshaled.set_m_PlayerID_5(il2cpp_codegen_marshal_bstring_result(marshaled.___m_PlayerID_5));
	int32_t unmarshaled_m_Rank_temp_6 = 0;
	unmarshaled_m_Rank_temp_6 = marshaled.___m_Rank_6;
	unmarshaled.set_m_Rank_6(unmarshaled_m_Rank_temp_6);
}
// Conversion method for clean up from marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcScoreData
extern "C" void GcScoreData_t549731357_marshal_com_cleanup(GcScoreData_t549731357_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___m_Category_0);
	marshaled.___m_Category_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___m_FormattedValue_4);
	marshaled.___m_FormattedValue_4 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___m_PlayerID_5);
	marshaled.___m_PlayerID_5 = NULL;
}
// UnityEngine.SocialPlatforms.Impl.Score UnityEngine.SocialPlatforms.GameCenter.GcScoreData::ToScore()
extern "C"  Score_t263763899 * GcScoreData_ToScore_m3093940736 (GcScoreData_t549731357 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GcScoreData_ToScore_m3093940736_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t577184549  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Score_t263763899 * V_1 = NULL;
	{
		String_t* L_0 = __this->get_m_Category_0();
		int32_t L_1 = __this->get_m_ValueHigh_2();
		uint32_t L_2 = __this->get_m_ValueLow_1();
		String_t* L_3 = __this->get_m_PlayerID_5();
		DateTime__ctor_m1094431492((&V_0), ((int32_t)1970), 1, 1, 0, 0, 0, 0, /*hidden argument*/NULL);
		int32_t L_4 = __this->get_m_Date_3();
		DateTime_t577184549  L_5 = DateTime_AddSeconds_m823838217((&V_0), (((double)((double)L_4))), /*hidden argument*/NULL);
		String_t* L_6 = __this->get_m_FormattedValue_4();
		int32_t L_7 = __this->get_m_Rank_6();
		Score_t263763899 * L_8 = (Score_t263763899 *)il2cpp_codegen_object_new(Score_t263763899_il2cpp_TypeInfo_var);
		Score__ctor_m382550378(L_8, L_0, ((int64_t)((int64_t)((int64_t)((int64_t)(((int64_t)((int64_t)L_1)))<<(int32_t)((int32_t)32)))+(int64_t)(((int64_t)((uint64_t)L_2))))), L_3, L_5, L_6, L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		goto IL_0056;
	}

IL_0056:
	{
		Score_t263763899 * L_9 = V_1;
		return L_9;
	}
}
extern "C"  Score_t263763899 * GcScoreData_ToScore_m3093940736_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	GcScoreData_t549731357 * _thisAdjusted = reinterpret_cast<GcScoreData_t549731357 *>(__this + 1);
	return GcScoreData_ToScore_m3093940736(_thisAdjusted, method);
}
// Conversion methods for marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData
extern "C" void GcUserProfileData_t753345502_marshal_pinvoke(const GcUserProfileData_t753345502& unmarshaled, GcUserProfileData_t753345502_marshaled_pinvoke& marshaled)
{
	Il2CppCodeGenException* ___image_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'image' of type 'GcUserProfileData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___image_3Exception);
}
extern "C" void GcUserProfileData_t753345502_marshal_pinvoke_back(const GcUserProfileData_t753345502_marshaled_pinvoke& marshaled, GcUserProfileData_t753345502& unmarshaled)
{
	Il2CppCodeGenException* ___image_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'image' of type 'GcUserProfileData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___image_3Exception);
}
// Conversion method for clean up from marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData
extern "C" void GcUserProfileData_t753345502_marshal_pinvoke_cleanup(GcUserProfileData_t753345502_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData
extern "C" void GcUserProfileData_t753345502_marshal_com(const GcUserProfileData_t753345502& unmarshaled, GcUserProfileData_t753345502_marshaled_com& marshaled)
{
	Il2CppCodeGenException* ___image_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'image' of type 'GcUserProfileData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___image_3Exception);
}
extern "C" void GcUserProfileData_t753345502_marshal_com_back(const GcUserProfileData_t753345502_marshaled_com& marshaled, GcUserProfileData_t753345502& unmarshaled)
{
	Il2CppCodeGenException* ___image_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'image' of type 'GcUserProfileData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___image_3Exception);
}
// Conversion method for clean up from marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData
extern "C" void GcUserProfileData_t753345502_marshal_com_cleanup(GcUserProfileData_t753345502_marshaled_com& marshaled)
{
}
// UnityEngine.SocialPlatforms.Impl.UserProfile UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData::ToUserProfile()
extern "C"  UserProfile_t2817385703 * GcUserProfileData_ToUserProfile_m2444090726 (GcUserProfileData_t753345502 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GcUserProfileData_ToUserProfile_m2444090726_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UserProfile_t2817385703 * V_0 = NULL;
	String_t* G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	String_t* G_B1_1 = NULL;
	int32_t G_B3_0 = 0;
	String_t* G_B3_1 = NULL;
	String_t* G_B3_2 = NULL;
	{
		String_t* L_0 = __this->get_userName_0();
		String_t* L_1 = __this->get_userID_1();
		int32_t L_2 = __this->get_isFriend_2();
		G_B1_0 = L_1;
		G_B1_1 = L_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			G_B2_0 = L_1;
			G_B2_1 = L_0;
			goto IL_001f;
		}
	}
	{
		G_B3_0 = 1;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_0020;
	}

IL_001f:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_0020:
	{
		Texture2D_t1124226795 * L_3 = __this->get_image_3();
		UserProfile_t2817385703 * L_4 = (UserProfile_t2817385703 *)il2cpp_codegen_object_new(UserProfile_t2817385703_il2cpp_TypeInfo_var);
		UserProfile__ctor_m1388476719(L_4, G_B3_2, G_B3_1, (bool)G_B3_0, 3, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0032;
	}

IL_0032:
	{
		UserProfile_t2817385703 * L_5 = V_0;
		return L_5;
	}
}
extern "C"  UserProfile_t2817385703 * GcUserProfileData_ToUserProfile_m2444090726_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	GcUserProfileData_t753345502 * _thisAdjusted = reinterpret_cast<GcUserProfileData_t753345502 *>(__this + 1);
	return GcUserProfileData_ToUserProfile_m2444090726(_thisAdjusted, method);
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData::AddToArray(UnityEngine.SocialPlatforms.Impl.UserProfile[]&,System.Int32)
extern "C"  void GcUserProfileData_AddToArray_m668560142 (GcUserProfileData_t753345502 * __this, UserProfileU5BU5D_t15925150** ___array0, int32_t ___number1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GcUserProfileData_AddToArray_m668560142_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UserProfileU5BU5D_t15925150** L_0 = ___array0;
		NullCheck((*((UserProfileU5BU5D_t15925150**)L_0)));
		int32_t L_1 = ___number1;
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)(*((UserProfileU5BU5D_t15925150**)L_0)))->max_length))))) <= ((int32_t)L_1)))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_2 = ___number1;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		UserProfileU5BU5D_t15925150** L_3 = ___array0;
		int32_t L_4 = ___number1;
		UserProfile_t2817385703 * L_5 = GcUserProfileData_ToUserProfile_m2444090726(__this, /*hidden argument*/NULL);
		NullCheck((*((UserProfileU5BU5D_t15925150**)L_3)));
		ArrayElementTypeCheck ((*((UserProfileU5BU5D_t15925150**)L_3)), L_5);
		((*((UserProfileU5BU5D_t15925150**)L_3)))->SetAt(static_cast<il2cpp_array_size_t>(L_4), (UserProfile_t2817385703 *)L_5);
		goto IL_002b;
	}

IL_0021:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3773704340_il2cpp_TypeInfo_var);
		Debug_Log_m2716511837(NULL /*static, unused*/, _stringLiteral1294285084, /*hidden argument*/NULL);
	}

IL_002b:
	{
		return;
	}
}
extern "C"  void GcUserProfileData_AddToArray_m668560142_AdjustorThunk (RuntimeObject * __this, UserProfileU5BU5D_t15925150** ___array0, int32_t ___number1, const RuntimeMethod* method)
{
	GcUserProfileData_t753345502 * _thisAdjusted = reinterpret_cast<GcUserProfileData_t753345502 *>(__this + 1);
	GcUserProfileData_AddToArray_m668560142(_thisAdjusted, ___array0, ___number1, method);
}
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::.ctor(System.String,System.Double,System.Boolean,System.Boolean,System.DateTime)
extern "C"  void Achievement__ctor_m3484502087 (Achievement_t3994812918 * __this, String_t* ___id0, double ___percentCompleted1, bool ___completed2, bool ___hidden3, DateTime_t577184549  ___lastReportedDate4, const RuntimeMethod* method)
{
	{
		Object__ctor_m4003873478(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___id0;
		Achievement_set_id_m1831323120(__this, L_0, /*hidden argument*/NULL);
		double L_1 = ___percentCompleted1;
		Achievement_set_percentCompleted_m3796956102(__this, L_1, /*hidden argument*/NULL);
		bool L_2 = ___completed2;
		__this->set_m_Completed_0(L_2);
		bool L_3 = ___hidden3;
		__this->set_m_Hidden_1(L_3);
		DateTime_t577184549  L_4 = ___lastReportedDate4;
		__this->set_m_LastReportedDate_2(L_4);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::.ctor(System.String,System.Double)
extern "C"  void Achievement__ctor_m2947300959 (Achievement_t3994812918 * __this, String_t* ___id0, double ___percent1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Achievement__ctor_m2947300959_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m4003873478(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___id0;
		Achievement_set_id_m1831323120(__this, L_0, /*hidden argument*/NULL);
		double L_1 = ___percent1;
		Achievement_set_percentCompleted_m3796956102(__this, L_1, /*hidden argument*/NULL);
		__this->set_m_Hidden_1((bool)0);
		__this->set_m_Completed_0((bool)0);
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t577184549_il2cpp_TypeInfo_var);
		DateTime_t577184549  L_2 = ((DateTime_t577184549_StaticFields*)il2cpp_codegen_static_fields_for(DateTime_t577184549_il2cpp_TypeInfo_var))->get_MinValue_3();
		__this->set_m_LastReportedDate_2(L_2);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::.ctor()
extern "C"  void Achievement__ctor_m3229096414 (Achievement_t3994812918 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Achievement__ctor_m3229096414_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Achievement__ctor_m2947300959(__this, _stringLiteral3398599923, (0.0), /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Achievement::ToString()
extern "C"  String_t* Achievement_ToString_m3607095364 (Achievement_t3994812918 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Achievement_ToString_m3607095364_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		ObjectU5BU5D_t399279091* L_0 = ((ObjectU5BU5D_t399279091*)SZArrayNew(ObjectU5BU5D_t399279091_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9)));
		String_t* L_1 = Achievement_get_id_m270291723(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, L_1);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_1);
		ObjectU5BU5D_t399279091* L_2 = L_0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral2343770865);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)_stringLiteral2343770865);
		ObjectU5BU5D_t399279091* L_3 = L_2;
		double L_4 = Achievement_get_percentCompleted_m4134761711(__this, /*hidden argument*/NULL);
		double L_5 = L_4;
		RuntimeObject * L_6 = Box(Double_t994313810_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_6);
		ObjectU5BU5D_t399279091* L_7 = L_3;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral2343770865);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)_stringLiteral2343770865);
		ObjectU5BU5D_t399279091* L_8 = L_7;
		bool L_9 = Achievement_get_completed_m3326963890(__this, /*hidden argument*/NULL);
		bool L_10 = L_9;
		RuntimeObject * L_11 = Box(Boolean_t3687413936_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_11);
		ObjectU5BU5D_t399279091* L_12 = L_8;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral2343770865);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)_stringLiteral2343770865);
		ObjectU5BU5D_t399279091* L_13 = L_12;
		bool L_14 = Achievement_get_hidden_m3478945196(__this, /*hidden argument*/NULL);
		bool L_15 = L_14;
		RuntimeObject * L_16 = Box(Boolean_t3687413936_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)L_16);
		ObjectU5BU5D_t399279091* L_17 = L_13;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, _stringLiteral2343770865);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject *)_stringLiteral2343770865);
		ObjectU5BU5D_t399279091* L_18 = L_17;
		DateTime_t577184549  L_19 = Achievement_get_lastReportedDate_m1885989619(__this, /*hidden argument*/NULL);
		DateTime_t577184549  L_20 = L_19;
		RuntimeObject * L_21 = Box(DateTime_t577184549_il2cpp_TypeInfo_var, &L_20);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_21);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(8), (RuntimeObject *)L_21);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_22 = String_Concat_m2437577363(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		V_0 = L_22;
		goto IL_0074;
	}

IL_0074:
	{
		String_t* L_23 = V_0;
		return L_23;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Achievement::get_id()
extern "C"  String_t* Achievement_get_id_m270291723 (Achievement_t3994812918 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_U3CidU3Ek__BackingField_3();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::set_id(System.String)
extern "C"  void Achievement_set_id_m1831323120 (Achievement_t3994812918 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Double UnityEngine.SocialPlatforms.Impl.Achievement::get_percentCompleted()
extern "C"  double Achievement_get_percentCompleted_m4134761711 (Achievement_t3994812918 * __this, const RuntimeMethod* method)
{
	double V_0 = 0.0;
	{
		double L_0 = __this->get_U3CpercentCompletedU3Ek__BackingField_4();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		double L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::set_percentCompleted(System.Double)
extern "C"  void Achievement_set_percentCompleted_m3796956102 (Achievement_t3994812918 * __this, double ___value0, const RuntimeMethod* method)
{
	{
		double L_0 = ___value0;
		__this->set_U3CpercentCompletedU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.Achievement::get_completed()
extern "C"  bool Achievement_get_completed_m3326963890 (Achievement_t3994812918 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_m_Completed_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.Achievement::get_hidden()
extern "C"  bool Achievement_get_hidden_m3478945196 (Achievement_t3994812918 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_m_Hidden_1();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.DateTime UnityEngine.SocialPlatforms.Impl.Achievement::get_lastReportedDate()
extern "C"  DateTime_t577184549  Achievement_get_lastReportedDate_m1885989619 (Achievement_t3994812918 * __this, const RuntimeMethod* method)
{
	DateTime_t577184549  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		DateTime_t577184549  L_0 = __this->get_m_LastReportedDate_2();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		DateTime_t577184549  L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::.ctor(System.String,System.String,UnityEngine.Texture2D,System.String,System.String,System.Boolean,System.Int32)
extern "C"  void AchievementDescription__ctor_m2531854831 (AchievementDescription_t720286472 * __this, String_t* ___id0, String_t* ___title1, Texture2D_t1124226795 * ___image2, String_t* ___achievedDescription3, String_t* ___unachievedDescription4, bool ___hidden5, int32_t ___points6, const RuntimeMethod* method)
{
	{
		Object__ctor_m4003873478(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___id0;
		AchievementDescription_set_id_m3895211643(__this, L_0, /*hidden argument*/NULL);
		String_t* L_1 = ___title1;
		__this->set_m_Title_0(L_1);
		Texture2D_t1124226795 * L_2 = ___image2;
		__this->set_m_Image_1(L_2);
		String_t* L_3 = ___achievedDescription3;
		__this->set_m_AchievedDescription_2(L_3);
		String_t* L_4 = ___unachievedDescription4;
		__this->set_m_UnachievedDescription_3(L_4);
		bool L_5 = ___hidden5;
		__this->set_m_Hidden_4(L_5);
		int32_t L_6 = ___points6;
		__this->set_m_Points_5(L_6);
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::ToString()
extern "C"  String_t* AchievementDescription_ToString_m2276844169 (AchievementDescription_t720286472 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AchievementDescription_ToString_m2276844169_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		ObjectU5BU5D_t399279091* L_0 = ((ObjectU5BU5D_t399279091*)SZArrayNew(ObjectU5BU5D_t399279091_il2cpp_TypeInfo_var, (uint32_t)((int32_t)11)));
		String_t* L_1 = AchievementDescription_get_id_m281821650(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, L_1);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_1);
		ObjectU5BU5D_t399279091* L_2 = L_0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral2343770865);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)_stringLiteral2343770865);
		ObjectU5BU5D_t399279091* L_3 = L_2;
		String_t* L_4 = AchievementDescription_get_title_m1653513844(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_4);
		ObjectU5BU5D_t399279091* L_5 = L_3;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral2343770865);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)_stringLiteral2343770865);
		ObjectU5BU5D_t399279091* L_6 = L_5;
		String_t* L_7 = AchievementDescription_get_achievedDescription_m3789705075(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_7);
		ObjectU5BU5D_t399279091* L_8 = L_6;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral2343770865);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)_stringLiteral2343770865);
		ObjectU5BU5D_t399279091* L_9 = L_8;
		String_t* L_10 = AchievementDescription_get_unachievedDescription_m3717626910(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)L_10);
		ObjectU5BU5D_t399279091* L_11 = L_9;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteral2343770865);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject *)_stringLiteral2343770865);
		ObjectU5BU5D_t399279091* L_12 = L_11;
		int32_t L_13 = AchievementDescription_get_points_m578834444(__this, /*hidden argument*/NULL);
		int32_t L_14 = L_13;
		RuntimeObject * L_15 = Box(Int32_t3762423662_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(8), (RuntimeObject *)L_15);
		ObjectU5BU5D_t399279091* L_16 = L_12;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, _stringLiteral2343770865);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (RuntimeObject *)_stringLiteral2343770865);
		ObjectU5BU5D_t399279091* L_17 = L_16;
		bool L_18 = AchievementDescription_get_hidden_m3908870508(__this, /*hidden argument*/NULL);
		bool L_19 = L_18;
		RuntimeObject * L_20 = Box(Boolean_t3687413936_il2cpp_TypeInfo_var, &L_19);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (RuntimeObject *)L_20);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_21 = String_Concat_m2437577363(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		V_0 = L_21;
		goto IL_007d;
	}

IL_007d:
	{
		String_t* L_22 = V_0;
		return L_22;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::SetImage(UnityEngine.Texture2D)
extern "C"  void AchievementDescription_SetImage_m1652790288 (AchievementDescription_t720286472 * __this, Texture2D_t1124226795 * ___image0, const RuntimeMethod* method)
{
	{
		Texture2D_t1124226795 * L_0 = ___image0;
		__this->set_m_Image_1(L_0);
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_id()
extern "C"  String_t* AchievementDescription_get_id_m281821650 (AchievementDescription_t720286472 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_U3CidU3Ek__BackingField_6();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::set_id(System.String)
extern "C"  void AchievementDescription_set_id_m3895211643 (AchievementDescription_t720286472 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_title()
extern "C"  String_t* AchievementDescription_get_title_m1653513844 (AchievementDescription_t720286472 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_m_Title_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_achievedDescription()
extern "C"  String_t* AchievementDescription_get_achievedDescription_m3789705075 (AchievementDescription_t720286472 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_m_AchievedDescription_2();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_unachievedDescription()
extern "C"  String_t* AchievementDescription_get_unachievedDescription_m3717626910 (AchievementDescription_t720286472 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_m_UnachievedDescription_3();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_hidden()
extern "C"  bool AchievementDescription_get_hidden_m3908870508 (AchievementDescription_t720286472 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_m_Hidden_4();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Int32 UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_points()
extern "C"  int32_t AchievementDescription_get_points_m578834444 (AchievementDescription_t720286472 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_Points_5();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::.ctor()
extern "C"  void Leaderboard__ctor_m1022786544 (Leaderboard_t3410660001 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Leaderboard__ctor_m1022786544_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m4003873478(__this, /*hidden argument*/NULL);
		Leaderboard_set_id_m326785628(__this, _stringLiteral1653387350, /*hidden argument*/NULL);
		Range_t979955765  L_0;
		memset(&L_0, 0, sizeof(L_0));
		Range__ctor_m1225748489((&L_0), 1, ((int32_t)10), /*hidden argument*/NULL);
		Leaderboard_set_range_m1604351997(__this, L_0, /*hidden argument*/NULL);
		Leaderboard_set_userScope_m3002190285(__this, 0, /*hidden argument*/NULL);
		Leaderboard_set_timeScope_m1065574918(__this, 2, /*hidden argument*/NULL);
		__this->set_m_Loading_0((bool)0);
		Score_t263763899 * L_1 = (Score_t263763899 *)il2cpp_codegen_object_new(Score_t263763899_il2cpp_TypeInfo_var);
		Score__ctor_m2543159693(L_1, _stringLiteral1653387350, (((int64_t)((int64_t)0))), /*hidden argument*/NULL);
		__this->set_m_LocalUserScore_1(L_1);
		__this->set_m_MaxRange_2(0);
		__this->set_m_Scores_3((IScoreU5BU5D_t2012817635*)((ScoreU5BU5D_t937919226*)SZArrayNew(ScoreU5BU5D_t937919226_il2cpp_TypeInfo_var, (uint32_t)0)));
		__this->set_m_Title_4(_stringLiteral1653387350);
		__this->set_m_UserIDs_5(((StringU5BU5D_t2952682508*)SZArrayNew(StringU5BU5D_t2952682508_il2cpp_TypeInfo_var, (uint32_t)0)));
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Leaderboard::ToString()
extern "C"  String_t* Leaderboard_ToString_m2429416599 (Leaderboard_t3410660001 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Leaderboard_ToString_m2429416599_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Range_t979955765  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Range_t979955765  V_1;
	memset(&V_1, 0, sizeof(V_1));
	String_t* V_2 = NULL;
	{
		ObjectU5BU5D_t399279091* L_0 = ((ObjectU5BU5D_t399279091*)SZArrayNew(ObjectU5BU5D_t399279091_il2cpp_TypeInfo_var, (uint32_t)((int32_t)20)));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral1976944791);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral1976944791);
		ObjectU5BU5D_t399279091* L_1 = L_0;
		String_t* L_2 = Leaderboard_get_id_m2616403728(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_2);
		ObjectU5BU5D_t399279091* L_3 = L_1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral4235112891);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral4235112891);
		ObjectU5BU5D_t399279091* L_4 = L_3;
		String_t* L_5 = __this->get_m_Title_4();
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_5);
		ObjectU5BU5D_t399279091* L_6 = L_4;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral851460128);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteral851460128);
		ObjectU5BU5D_t399279091* L_7 = L_6;
		bool L_8 = __this->get_m_Loading_0();
		bool L_9 = L_8;
		RuntimeObject * L_10 = Box(Boolean_t3687413936_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_10);
		ObjectU5BU5D_t399279091* L_11 = L_7;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteral3994785646);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)_stringLiteral3994785646);
		ObjectU5BU5D_t399279091* L_12 = L_11;
		Range_t979955765  L_13 = Leaderboard_get_range_m1031105954(__this, /*hidden argument*/NULL);
		V_0 = L_13;
		int32_t L_14 = (&V_0)->get_from_0();
		int32_t L_15 = L_14;
		RuntimeObject * L_16 = Box(Int32_t3762423662_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_16);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject *)L_16);
		ObjectU5BU5D_t399279091* L_17 = L_12;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, _stringLiteral1295383091);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(8), (RuntimeObject *)_stringLiteral1295383091);
		ObjectU5BU5D_t399279091* L_18 = L_17;
		Range_t979955765  L_19 = Leaderboard_get_range_m1031105954(__this, /*hidden argument*/NULL);
		V_1 = L_19;
		int32_t L_20 = (&V_1)->get_count_1();
		int32_t L_21 = L_20;
		RuntimeObject * L_22 = Box(Int32_t3762423662_il2cpp_TypeInfo_var, &L_21);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_22);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (RuntimeObject *)L_22);
		ObjectU5BU5D_t399279091* L_23 = L_18;
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, _stringLiteral2914686434);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (RuntimeObject *)_stringLiteral2914686434);
		ObjectU5BU5D_t399279091* L_24 = L_23;
		uint32_t L_25 = __this->get_m_MaxRange_2();
		uint32_t L_26 = L_25;
		RuntimeObject * L_27 = Box(UInt32_t1560235738_il2cpp_TypeInfo_var, &L_26);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_27);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (RuntimeObject *)L_27);
		ObjectU5BU5D_t399279091* L_28 = L_24;
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, _stringLiteral3028348306);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (RuntimeObject *)_stringLiteral3028348306);
		ObjectU5BU5D_t399279091* L_29 = L_28;
		IScoreU5BU5D_t2012817635* L_30 = __this->get_m_Scores_3();
		NullCheck(L_30);
		int32_t L_31 = (((int32_t)((int32_t)(((RuntimeArray *)L_30)->max_length))));
		RuntimeObject * L_32 = Box(Int32_t3762423662_il2cpp_TypeInfo_var, &L_31);
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, L_32);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (RuntimeObject *)L_32);
		ObjectU5BU5D_t399279091* L_33 = L_29;
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, _stringLiteral1614900258);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (RuntimeObject *)_stringLiteral1614900258);
		ObjectU5BU5D_t399279091* L_34 = L_33;
		int32_t L_35 = Leaderboard_get_userScope_m1802746043(__this, /*hidden argument*/NULL);
		int32_t L_36 = L_35;
		RuntimeObject * L_37 = Box(UserScope_t3391510851_il2cpp_TypeInfo_var, &L_36);
		NullCheck(L_34);
		ArrayElementTypeCheck (L_34, L_37);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (RuntimeObject *)L_37);
		ObjectU5BU5D_t399279091* L_38 = L_34;
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, _stringLiteral1482708400);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)16)), (RuntimeObject *)_stringLiteral1482708400);
		ObjectU5BU5D_t399279091* L_39 = L_38;
		int32_t L_40 = Leaderboard_get_timeScope_m4038581171(__this, /*hidden argument*/NULL);
		int32_t L_41 = L_40;
		RuntimeObject * L_42 = Box(TimeScope_t2719183326_il2cpp_TypeInfo_var, &L_41);
		NullCheck(L_39);
		ArrayElementTypeCheck (L_39, L_42);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)17)), (RuntimeObject *)L_42);
		ObjectU5BU5D_t399279091* L_43 = L_39;
		NullCheck(L_43);
		ArrayElementTypeCheck (L_43, _stringLiteral3262444072);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)18)), (RuntimeObject *)_stringLiteral3262444072);
		ObjectU5BU5D_t399279091* L_44 = L_43;
		StringU5BU5D_t2952682508* L_45 = __this->get_m_UserIDs_5();
		NullCheck(L_45);
		int32_t L_46 = (((int32_t)((int32_t)(((RuntimeArray *)L_45)->max_length))));
		RuntimeObject * L_47 = Box(Int32_t3762423662_il2cpp_TypeInfo_var, &L_46);
		NullCheck(L_44);
		ArrayElementTypeCheck (L_44, L_47);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)19)), (RuntimeObject *)L_47);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_48 = String_Concat_m2437577363(NULL /*static, unused*/, L_44, /*hidden argument*/NULL);
		V_2 = L_48;
		goto IL_0104;
	}

IL_0104:
	{
		String_t* L_49 = V_2;
		return L_49;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetLocalUserScore(UnityEngine.SocialPlatforms.IScore)
extern "C"  void Leaderboard_SetLocalUserScore_m3237820727 (Leaderboard_t3410660001 * __this, RuntimeObject* ___score0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___score0;
		__this->set_m_LocalUserScore_1(L_0);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetMaxRange(System.UInt32)
extern "C"  void Leaderboard_SetMaxRange_m3173065809 (Leaderboard_t3410660001 * __this, uint32_t ___maxRange0, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = ___maxRange0;
		__this->set_m_MaxRange_2(L_0);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetScores(UnityEngine.SocialPlatforms.IScore[])
extern "C"  void Leaderboard_SetScores_m4128045724 (Leaderboard_t3410660001 * __this, IScoreU5BU5D_t2012817635* ___scores0, const RuntimeMethod* method)
{
	{
		IScoreU5BU5D_t2012817635* L_0 = ___scores0;
		__this->set_m_Scores_3(L_0);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetTitle(System.String)
extern "C"  void Leaderboard_SetTitle_m4151578770 (Leaderboard_t3410660001 * __this, String_t* ___title0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___title0;
		__this->set_m_Title_4(L_0);
		return;
	}
}
// System.String[] UnityEngine.SocialPlatforms.Impl.Leaderboard::GetUserFilter()
extern "C"  StringU5BU5D_t2952682508* Leaderboard_GetUserFilter_m3006109735 (Leaderboard_t3410660001 * __this, const RuntimeMethod* method)
{
	StringU5BU5D_t2952682508* V_0 = NULL;
	{
		StringU5BU5D_t2952682508* L_0 = __this->get_m_UserIDs_5();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		StringU5BU5D_t2952682508* L_1 = V_0;
		return L_1;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Leaderboard::get_id()
extern "C"  String_t* Leaderboard_get_id_m2616403728 (Leaderboard_t3410660001 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_U3CidU3Ek__BackingField_6();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_id(System.String)
extern "C"  void Leaderboard_set_id_m326785628 (Leaderboard_t3410660001 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_6(L_0);
		return;
	}
}
// UnityEngine.SocialPlatforms.UserScope UnityEngine.SocialPlatforms.Impl.Leaderboard::get_userScope()
extern "C"  int32_t Leaderboard_get_userScope_m1802746043 (Leaderboard_t3410660001 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CuserScopeU3Ek__BackingField_7();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_userScope(UnityEngine.SocialPlatforms.UserScope)
extern "C"  void Leaderboard_set_userScope_m3002190285 (Leaderboard_t3410660001 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CuserScopeU3Ek__BackingField_7(L_0);
		return;
	}
}
// UnityEngine.SocialPlatforms.Range UnityEngine.SocialPlatforms.Impl.Leaderboard::get_range()
extern "C"  Range_t979955765  Leaderboard_get_range_m1031105954 (Leaderboard_t3410660001 * __this, const RuntimeMethod* method)
{
	Range_t979955765  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Range_t979955765  L_0 = __this->get_U3CrangeU3Ek__BackingField_8();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		Range_t979955765  L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_range(UnityEngine.SocialPlatforms.Range)
extern "C"  void Leaderboard_set_range_m1604351997 (Leaderboard_t3410660001 * __this, Range_t979955765  ___value0, const RuntimeMethod* method)
{
	{
		Range_t979955765  L_0 = ___value0;
		__this->set_U3CrangeU3Ek__BackingField_8(L_0);
		return;
	}
}
// UnityEngine.SocialPlatforms.TimeScope UnityEngine.SocialPlatforms.Impl.Leaderboard::get_timeScope()
extern "C"  int32_t Leaderboard_get_timeScope_m4038581171 (Leaderboard_t3410660001 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CtimeScopeU3Ek__BackingField_9();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_timeScope(UnityEngine.SocialPlatforms.TimeScope)
extern "C"  void Leaderboard_set_timeScope_m1065574918 (Leaderboard_t3410660001 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CtimeScopeU3Ek__BackingField_9(L_0);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::.ctor()
extern "C"  void LocalUser__ctor_m1876043553 (LocalUser_t3937803557 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LocalUser__ctor_m1876043553_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UserProfile__ctor_m2555166553(__this, /*hidden argument*/NULL);
		__this->set_m_Friends_5((IUserProfileU5BU5D_t2755149228*)((UserProfileU5BU5D_t15925150*)SZArrayNew(UserProfileU5BU5D_t15925150_il2cpp_TypeInfo_var, (uint32_t)0)));
		__this->set_m_Authenticated_6((bool)0);
		__this->set_m_Underage_7((bool)0);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::SetFriends(UnityEngine.SocialPlatforms.IUserProfile[])
extern "C"  void LocalUser_SetFriends_m1554219388 (LocalUser_t3937803557 * __this, IUserProfileU5BU5D_t2755149228* ___friends0, const RuntimeMethod* method)
{
	{
		IUserProfileU5BU5D_t2755149228* L_0 = ___friends0;
		__this->set_m_Friends_5(L_0);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::SetAuthenticated(System.Boolean)
extern "C"  void LocalUser_SetAuthenticated_m1023027787 (LocalUser_t3937803557 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_m_Authenticated_6(L_0);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::SetUnderage(System.Boolean)
extern "C"  void LocalUser_SetUnderage_m1824287490 (LocalUser_t3937803557 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_m_Underage_7(L_0);
		return;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.LocalUser::get_authenticated()
extern "C"  bool LocalUser_get_authenticated_m1602842674 (LocalUser_t3937803557 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_m_Authenticated_6();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Score::.ctor(System.String,System.Int64)
extern "C"  void Score__ctor_m2543159693 (Score_t263763899 * __this, String_t* ___leaderboardID0, int64_t ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Score__ctor_m2543159693_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___leaderboardID0;
		int64_t L_1 = ___value1;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t577184549_il2cpp_TypeInfo_var);
		DateTime_t577184549  L_2 = DateTime_get_Now_m2404024709(NULL /*static, unused*/, /*hidden argument*/NULL);
		Score__ctor_m382550378(__this, L_0, L_1, _stringLiteral2855100237, L_2, _stringLiteral2550852645, (-1), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Score::.ctor(System.String,System.Int64,System.String,System.DateTime,System.String,System.Int32)
extern "C"  void Score__ctor_m382550378 (Score_t263763899 * __this, String_t* ___leaderboardID0, int64_t ___value1, String_t* ___userID2, DateTime_t577184549  ___date3, String_t* ___formattedValue4, int32_t ___rank5, const RuntimeMethod* method)
{
	{
		Object__ctor_m4003873478(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___leaderboardID0;
		Score_set_leaderboardID_m3194863021(__this, L_0, /*hidden argument*/NULL);
		int64_t L_1 = ___value1;
		Score_set_value_m388264441(__this, L_1, /*hidden argument*/NULL);
		String_t* L_2 = ___userID2;
		__this->set_m_UserID_2(L_2);
		DateTime_t577184549  L_3 = ___date3;
		__this->set_m_Date_0(L_3);
		String_t* L_4 = ___formattedValue4;
		__this->set_m_FormattedValue_1(L_4);
		int32_t L_5 = ___rank5;
		__this->set_m_Rank_3(L_5);
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Score::ToString()
extern "C"  String_t* Score_ToString_m2653916551 (Score_t263763899 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Score_ToString_m2653916551_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		ObjectU5BU5D_t399279091* L_0 = ((ObjectU5BU5D_t399279091*)SZArrayNew(ObjectU5BU5D_t399279091_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10)));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral2425549706);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral2425549706);
		ObjectU5BU5D_t399279091* L_1 = L_0;
		int32_t L_2 = __this->get_m_Rank_3();
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = Box(Int32_t3762423662_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_4);
		ObjectU5BU5D_t399279091* L_5 = L_1;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral3584843663);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral3584843663);
		ObjectU5BU5D_t399279091* L_6 = L_5;
		int64_t L_7 = Score_get_value_m3934882127(__this, /*hidden argument*/NULL);
		int64_t L_8 = L_7;
		RuntimeObject * L_9 = Box(Int64_t2050349756_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_9);
		ObjectU5BU5D_t399279091* L_10 = L_6;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteral3581719208);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteral3581719208);
		ObjectU5BU5D_t399279091* L_11 = L_10;
		String_t* L_12 = Score_get_leaderboardID_m1761267294(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_12);
		ObjectU5BU5D_t399279091* L_13 = L_11;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteral1119189174);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)_stringLiteral1119189174);
		ObjectU5BU5D_t399279091* L_14 = L_13;
		String_t* L_15 = __this->get_m_UserID_2();
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_15);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject *)L_15);
		ObjectU5BU5D_t399279091* L_16 = L_14;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, _stringLiteral1481276378);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(8), (RuntimeObject *)_stringLiteral1481276378);
		ObjectU5BU5D_t399279091* L_17 = L_16;
		DateTime_t577184549  L_18 = __this->get_m_Date_0();
		DateTime_t577184549  L_19 = L_18;
		RuntimeObject * L_20 = Box(DateTime_t577184549_il2cpp_TypeInfo_var, &L_19);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (RuntimeObject *)L_20);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_21 = String_Concat_m2437577363(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		V_0 = L_21;
		goto IL_0078;
	}

IL_0078:
	{
		String_t* L_22 = V_0;
		return L_22;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Score::get_leaderboardID()
extern "C"  String_t* Score_get_leaderboardID_m1761267294 (Score_t263763899 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_U3CleaderboardIDU3Ek__BackingField_4();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Score::set_leaderboardID(System.String)
extern "C"  void Score_set_leaderboardID_m3194863021 (Score_t263763899 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CleaderboardIDU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Int64 UnityEngine.SocialPlatforms.Impl.Score::get_value()
extern "C"  int64_t Score_get_value_m3934882127 (Score_t263763899 * __this, const RuntimeMethod* method)
{
	int64_t V_0 = 0;
	{
		int64_t L_0 = __this->get_U3CvalueU3Ek__BackingField_5();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Score::set_value(System.Int64)
extern "C"  void Score_set_value_m388264441 (Score_t263763899 * __this, int64_t ___value0, const RuntimeMethod* method)
{
	{
		int64_t L_0 = ___value0;
		__this->set_U3CvalueU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::.ctor()
extern "C"  void UserProfile__ctor_m2555166553 (UserProfile_t2817385703 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UserProfile__ctor_m2555166553_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m4003873478(__this, /*hidden argument*/NULL);
		__this->set_m_UserName_0(_stringLiteral3910615930);
		__this->set_m_ID_1(_stringLiteral2855100237);
		__this->set_m_IsFriend_2((bool)0);
		__this->set_m_State_3(3);
		Texture2D_t1124226795 * L_0 = (Texture2D_t1124226795 *)il2cpp_codegen_object_new(Texture2D_t1124226795_il2cpp_TypeInfo_var);
		Texture2D__ctor_m3567061737(L_0, ((int32_t)32), ((int32_t)32), /*hidden argument*/NULL);
		__this->set_m_Image_4(L_0);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::.ctor(System.String,System.String,System.Boolean,UnityEngine.SocialPlatforms.UserState,UnityEngine.Texture2D)
extern "C"  void UserProfile__ctor_m1388476719 (UserProfile_t2817385703 * __this, String_t* ___name0, String_t* ___id1, bool ___friend2, int32_t ___state3, Texture2D_t1124226795 * ___image4, const RuntimeMethod* method)
{
	{
		Object__ctor_m4003873478(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___name0;
		__this->set_m_UserName_0(L_0);
		String_t* L_1 = ___id1;
		__this->set_m_ID_1(L_1);
		bool L_2 = ___friend2;
		__this->set_m_IsFriend_2(L_2);
		int32_t L_3 = ___state3;
		__this->set_m_State_3(L_3);
		Texture2D_t1124226795 * L_4 = ___image4;
		__this->set_m_Image_4(L_4);
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::ToString()
extern "C"  String_t* UserProfile_ToString_m60107931 (UserProfile_t2817385703 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UserProfile_ToString_m60107931_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		ObjectU5BU5D_t399279091* L_0 = ((ObjectU5BU5D_t399279091*)SZArrayNew(ObjectU5BU5D_t399279091_il2cpp_TypeInfo_var, (uint32_t)7));
		String_t* L_1 = UserProfile_get_id_m1776133394(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, L_1);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_1);
		ObjectU5BU5D_t399279091* L_2 = L_0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral2343770865);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)_stringLiteral2343770865);
		ObjectU5BU5D_t399279091* L_3 = L_2;
		String_t* L_4 = UserProfile_get_userName_m2450094983(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_4);
		ObjectU5BU5D_t399279091* L_5 = L_3;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral2343770865);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)_stringLiteral2343770865);
		ObjectU5BU5D_t399279091* L_6 = L_5;
		bool L_7 = UserProfile_get_isFriend_m4135431330(__this, /*hidden argument*/NULL);
		bool L_8 = L_7;
		RuntimeObject * L_9 = Box(Boolean_t3687413936_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_9);
		ObjectU5BU5D_t399279091* L_10 = L_6;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteral2343770865);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)_stringLiteral2343770865);
		ObjectU5BU5D_t399279091* L_11 = L_10;
		int32_t L_12 = UserProfile_get_state_m1958187576(__this, /*hidden argument*/NULL);
		int32_t L_13 = L_12;
		RuntimeObject * L_14 = Box(UserState_t331679706_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)L_14);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_15 = String_Concat_m2437577363(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		V_0 = L_15;
		goto IL_0058;
	}

IL_0058:
	{
		String_t* L_16 = V_0;
		return L_16;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::SetUserName(System.String)
extern "C"  void UserProfile_SetUserName_m3456243872 (UserProfile_t2817385703 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___name0;
		__this->set_m_UserName_0(L_0);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::SetUserID(System.String)
extern "C"  void UserProfile_SetUserID_m1881002226 (UserProfile_t2817385703 * __this, String_t* ___id0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___id0;
		__this->set_m_ID_1(L_0);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::SetImage(UnityEngine.Texture2D)
extern "C"  void UserProfile_SetImage_m2732686334 (UserProfile_t2817385703 * __this, Texture2D_t1124226795 * ___image0, const RuntimeMethod* method)
{
	{
		Texture2D_t1124226795 * L_0 = ___image0;
		__this->set_m_Image_4(L_0);
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::get_userName()
extern "C"  String_t* UserProfile_get_userName_m2450094983 (UserProfile_t2817385703 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_m_UserName_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::get_id()
extern "C"  String_t* UserProfile_get_id_m1776133394 (UserProfile_t2817385703 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_m_ID_1();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.UserProfile::get_isFriend()
extern "C"  bool UserProfile_get_isFriend_m4135431330 (UserProfile_t2817385703 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_m_IsFriend_2();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.SocialPlatforms.UserState UnityEngine.SocialPlatforms.Impl.UserProfile::get_state()
extern "C"  int32_t UserProfile_get_state_m1958187576 (UserProfile_t2817385703 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_State_3();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.SocialPlatforms.Range::.ctor(System.Int32,System.Int32)
extern "C"  void Range__ctor_m1225748489 (Range_t979955765 * __this, int32_t ___fromValue0, int32_t ___valueCount1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___fromValue0;
		__this->set_from_0(L_0);
		int32_t L_1 = ___valueCount1;
		__this->set_count_1(L_1);
		return;
	}
}
extern "C"  void Range__ctor_m1225748489_AdjustorThunk (RuntimeObject * __this, int32_t ___fromValue0, int32_t ___valueCount1, const RuntimeMethod* method)
{
	Range_t979955765 * _thisAdjusted = reinterpret_cast<Range_t979955765 *>(__this + 1);
	Range__ctor_m1225748489(_thisAdjusted, ___fromValue0, ___valueCount1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
