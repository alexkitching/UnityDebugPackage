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

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericVirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct GenericVirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericInterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct GenericInterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// KDebugPackage.DebugDisplay.DebugDisplayBase
struct DebugDisplayBase_t7A49B528861B231E746CB11DD89A8E14BE3E93EB;
// KDebugPackage.DebugDisplay.IDebugDisplayUIObject
struct IDebugDisplayUIObject_t01ECB26641C351167F015E0AF47F72FED4497DE4;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t64BA96BFC713F221050385E91C868CE455C245D6;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.NotSupportedException
struct NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C;
// TMPro.TMP_InputField_ConsoleEdit
struct TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479;
// TMPro.TMP_InputField_ConsoleEdit/<CaretBlink>d__271
struct U3CCaretBlinkU3Ed__271_t0FCB1AD092B373935A2116429583A15663E7C10F;
// TMPro.TMP_InputField_ConsoleEdit/<MouseDragOutsideRect>d__289
struct U3CMouseDragOutsideRectU3Ed__289_t318F441378057958BE7D68DB758C9849F6ADE2A8;
// TMPro.TMP_InputField_ConsoleEdit/OnChangeEvent
struct OnChangeEvent_t3508BF8D24B925F0E0E06C2E99B96D7F372FFDF4;
// TMPro.TMP_InputField_ConsoleEdit/OnValidateInput
struct OnValidateInput_t7CE9BEEB4017B2BF3DFBF754BE4115D435F5BD67;
// TMPro.TMP_InputField_ConsoleEdit/SelectionEvent
struct SelectionEvent_tD9D56451156CBAD7E3547903B296D44F99533A1B;
// TMPro.TMP_InputField_ConsoleEdit/SubmitEvent
struct SubmitEvent_tB5A3385B64DCE4274DFF6EE320FBEEA1E1E70FEA;
// TMPro.TMP_InputField_ConsoleEdit/TextSelectionEvent
struct TextSelectionEvent_t5FDA432F2E55A23749FF5F8ACE1E6584EC466F16;
// TMPro.TMP_InputField_ConsoleEdit/TouchScreenKeyboardEvent
struct TouchScreenKeyboardEvent_tCAFB43F41CEA2FDFBAFA1766005E227994730F4B;
// TMPro.TMP_InputValidator
struct TMP_InputValidator_t4C673E12211AFB82AAF94D9DEA556FDC306E69CD;
// TMPro.TMP_ScrollbarEventHandler
struct TMP_ScrollbarEventHandler_t081C59DD8EC81899836C864E45E60977A40FBA83;
// TMPro.TMP_Text
struct TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7;
// TutorialWindow
struct TutorialWindow_tB236F04A1223810C096EECBA845819203B2AF3C4;
// UnityEngine.Camera
struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72;
// UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC;
// UnityEngine.Event
struct Event_t187FF6A6B357447B83EC2064823EE0AEC5263210;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F;
// UnityEngine.Events.UnityEvent`1<System.Int32Enum>
struct UnityEvent_1_tB72EF438E2905C3F0C9BDCA3CA7B1016767E8841;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t9E897A46A46C78F7104A831E63BB081546EFFF0D;
// UnityEngine.Events.UnityEvent`1<System.String>
struct UnityEvent_1_tACA444CD8B2CBDCD9393629F06117A47C27A8F15;
// UnityEngine.Events.UnityEvent`1<UnityEngine.TouchScreenKeyboard/Status>
struct UnityEvent_1_tCB4B91686362119976C8D499A756C59CB6D6169C;
// UnityEngine.Events.UnityEvent`3<System.Object,System.Int32,System.Int32>
struct UnityEvent_3_tFC992AA557296F35E887CA6A6D486BAD05CBE7E8;
// UnityEngine.Events.UnityEvent`3<System.String,System.Int32,System.Int32>
struct UnityEvent_3_t3CDB5DD99C7FB23EFDB392344A499C4B6EEC5930;
// UnityEngine.GUIContent
struct GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0;
// UnityEngine.GUIStyle
struct GUIStyle_t671F175A201A19166385EE3392292A5F50070572;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.Mesh
struct Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C;
// UnityEngine.RectTransform
struct RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t431F4FBD9C59AE097FE33C4354CC6251B01B527D;
// UnityEngine.Sprite
struct Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_t2A69F85698E9780470181532D3F2BC903623FD90;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5;
// UnityEngine.UI.Graphic
struct Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8;
// UnityEngine.UI.Scrollbar
struct Scrollbar_t8F8679D0EAFACBCBD603E6B0E741E6A783DB3389;
// UnityEngine.UI.Selectable
struct Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t98F7C5A863B20CD5DBE49CE288038BA954C83F02;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739;

IL2CPP_EXTERN_C RuntimeClass* Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DebugDisplayBase_t7A49B528861B231E746CB11DD89A8E14BE3E93EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectTransformUtility_t9B90669A72B05A33DD88BEBB817BC9CDBB614BBA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral121F6A09D5992B2D14139D41A1574C0AA639002E;
IL2CPP_EXTERN_C String_t* _stringLiteral1263B9B24F99331DB3A7D8749667B4DD2C6DBF57;
IL2CPP_EXTERN_C String_t* _stringLiteral2BE17AA181D8226BFAD83CE993E838FA79DCCE4D;
IL2CPP_EXTERN_C String_t* _stringLiteral37CF9896CA13AFB1696C7B34F76AE115296E283C;
IL2CPP_EXTERN_C String_t* _stringLiteral38765BD8B74D883322E68EFB3D5992A2B0EC302D;
IL2CPP_EXTERN_C String_t* _stringLiteral3ACCC4F9C5FB49473DD0F6EF8926BBC697C83F32;
IL2CPP_EXTERN_C String_t* _stringLiteral4FEF2BB715D18FCB07DD22AA60DBD3D68A85561C;
IL2CPP_EXTERN_C String_t* _stringLiteral55C67F49E292570FD4DDD1B9924883780735093D;
IL2CPP_EXTERN_C String_t* _stringLiteral76CE3EBFC6675CC540CE9B3B63F09608EC3AEB3D;
IL2CPP_EXTERN_C String_t* _stringLiteral7875DE8D40D6311E40F0A02EFFA10A3B01F859DD;
IL2CPP_EXTERN_C String_t* _stringLiteral7B932E7704C56AC279074ADF9CBEED98BB90A289;
IL2CPP_EXTERN_C String_t* _stringLiteral8BF95EA372568C7A254BA9FADA5F6F1701EBC5B5;
IL2CPP_EXTERN_C String_t* _stringLiteralB3B894885FC61377308A11F0620E629AA644A319;
IL2CPP_EXTERN_C String_t* _stringLiteralB4D50563D15BBABECC5A80B480EE8FD0952E3F83;
IL2CPP_EXTERN_C String_t* _stringLiteralB84B2BF13E923E3FBB67A0FD42BC0AAAFBBE8EA3;
IL2CPP_EXTERN_C String_t* _stringLiteralEB34EE46427E156C7D6E885A549E3E894BD8A8C1;
IL2CPP_EXTERN_C String_t* _stringLiteralF9AA613081F5DCB668F8AEC32DD0F7637197E0F2;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m04D6D6F6B0D572ED38D3E5CB80E2528C5E6360BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCaretBlinkU3Ed__271_System_Collections_IEnumerator_Reset_mF6265013EB0DE3BDAD2CD524A725CC6F73B1973B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CMouseDragOutsideRectU3Ed__289_System_Collections_IEnumerator_Reset_mAAEC169237DF556E60E30A339BCC0467C72D5A5C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_m1BEFBF3C6ACCCF495F4695F40ABAA3CA84A48274_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_mEAC66A07E9EE31DAB32788A5C29B5E2D0B239E91_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_3__ctor_m2B3ACFAA04EE3B8B19C0774ABE9F4511BD871713_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t OnChangeEvent__ctor_m27709A674918DDC866E0929E3FEE7C568C15C78B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t OnValidateInput_BeginInvoke_m00285FE10B1ADF4570D9A3A52EB9EBBA5E47B02B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SelectionEvent__ctor_mF780DBD37844F6B4DF9C2032D16F57C8057BC6BF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SubmitEvent__ctor_mBC1E9A9E88DFE0F0B6A3E2696600F38B7B82429E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TextSelectionEvent__ctor_m9253C84B4C66EB3CAA9AA98AE734C6D6DE121810_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TouchScreenKeyboardEvent__ctor_mF790A813B9F7769383F030E0FB8079CF2ADE5BCD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TutorialWindow_OnGUI_m727F6C4B5F5BDF1309C5347ACB13B7E8ADAD986D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TutorialWindow__ctor_mF8E9273264423EED094822F006B0331E91688771_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CCaretBlinkU3Ed__271_System_Collections_IEnumerator_Reset_mF6265013EB0DE3BDAD2CD524A725CC6F73B1973B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CMouseDragOutsideRectU3Ed__289_MoveNext_m1F44699CE4D99C4AE0949F94D8538B64C74FFC77_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CMouseDragOutsideRectU3Ed__289_System_Collections_IEnumerator_Reset_mAAEC169237DF556E60E30A339BCC0467C72D5A5C_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// TMPro.TMP_InputField_ConsoleEdit_<CaretBlink>d__271
struct  U3CCaretBlinkU3Ed__271_t0FCB1AD092B373935A2116429583A15663E7C10F  : public RuntimeObject
{
public:
	// System.Int32 TMPro.TMP_InputField_ConsoleEdit_<CaretBlink>d__271::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TMPro.TMP_InputField_ConsoleEdit_<CaretBlink>d__271::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// TMPro.TMP_InputField_ConsoleEdit TMPro.TMP_InputField_ConsoleEdit_<CaretBlink>d__271::<>4__this
	TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CCaretBlinkU3Ed__271_t0FCB1AD092B373935A2116429583A15663E7C10F, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CCaretBlinkU3Ed__271_t0FCB1AD092B373935A2116429583A15663E7C10F, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CCaretBlinkU3Ed__271_t0FCB1AD092B373935A2116429583A15663E7C10F, ___U3CU3E4__this_2)); }
	inline TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// TMPro.TMP_InputField_ConsoleEdit_<MouseDragOutsideRect>d__289
struct  U3CMouseDragOutsideRectU3Ed__289_t318F441378057958BE7D68DB758C9849F6ADE2A8  : public RuntimeObject
{
public:
	// System.Int32 TMPro.TMP_InputField_ConsoleEdit_<MouseDragOutsideRect>d__289::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TMPro.TMP_InputField_ConsoleEdit_<MouseDragOutsideRect>d__289::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// TMPro.TMP_InputField_ConsoleEdit TMPro.TMP_InputField_ConsoleEdit_<MouseDragOutsideRect>d__289::<>4__this
	TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479 * ___U3CU3E4__this_2;
	// UnityEngine.EventSystems.PointerEventData TMPro.TMP_InputField_ConsoleEdit_<MouseDragOutsideRect>d__289::eventData
	PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * ___eventData_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CMouseDragOutsideRectU3Ed__289_t318F441378057958BE7D68DB758C9849F6ADE2A8, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CMouseDragOutsideRectU3Ed__289_t318F441378057958BE7D68DB758C9849F6ADE2A8, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CMouseDragOutsideRectU3Ed__289_t318F441378057958BE7D68DB758C9849F6ADE2A8, ___U3CU3E4__this_2)); }
	inline TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_eventData_3() { return static_cast<int32_t>(offsetof(U3CMouseDragOutsideRectU3Ed__289_t318F441378057958BE7D68DB758C9849F6ADE2A8, ___eventData_3)); }
	inline PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * get_eventData_3() const { return ___eventData_3; }
	inline PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 ** get_address_of_eventData_3() { return &___eventData_3; }
	inline void set_eventData_3(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * value)
	{
		___eventData_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventData_3), (void*)value);
	}
};


// UnityEngine.CustomYieldInstruction
struct  CustomYieldInstruction_t819BB0973AFF22766749FF087B8AEFEAF3C2CB7D  : public RuntimeObject
{
public:

public:
};


// UnityEngine.EventSystems.AbstractEventData
struct  AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;

public:
	inline static int32_t get_offset_of_m_Used_0() { return static_cast<int32_t>(offsetof(AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6, ___m_Used_0)); }
	inline bool get_m_Used_0() const { return ___m_Used_0; }
	inline bool* get_address_of_m_Used_0() { return &___m_Used_0; }
	inline void set_m_Used_0(bool value)
	{
		___m_Used_0 = value;
	}
};


// UnityEngine.Events.UnityEventBase
struct  UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * ___m_PersistentCalls_1;
	// System.String UnityEngine.Events.UnityEventBase::m_TypeName
	String_t* ___m_TypeName_2;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_3;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_Calls_0)); }
	inline InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Calls_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PersistentCalls_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_TypeName_2() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_TypeName_2)); }
	inline String_t* get_m_TypeName_2() const { return ___m_TypeName_2; }
	inline String_t** get_address_of_m_TypeName_2() { return &___m_TypeName_2; }
	inline void set_m_TypeName_2(String_t* value)
	{
		___m_TypeName_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TypeName_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_3() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_CallsDirty_3)); }
	inline bool get_m_CallsDirty_3() const { return ___m_CallsDirty_3; }
	inline bool* get_address_of_m_CallsDirty_3() { return &___m_CallsDirty_3; }
	inline void set_m_CallsDirty_3(bool value)
	{
		___m_CallsDirty_3 = value;
	}
};


// UnityEngine.YieldInstruction
struct  YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
};

// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Char
struct  Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


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


// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// UnityEngine.Color
struct  Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 
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
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.EventSystems.BaseEventData
struct  BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5  : public AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6
{
public:
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * ___m_EventSystem_1;

public:
	inline static int32_t get_offset_of_m_EventSystem_1() { return static_cast<int32_t>(offsetof(BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5, ___m_EventSystem_1)); }
	inline EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * get_m_EventSystem_1() const { return ___m_EventSystem_1; }
	inline EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 ** get_address_of_m_EventSystem_1() { return &___m_EventSystem_1; }
	inline void set_m_EventSystem_1(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * value)
	{
		___m_EventSystem_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystem_1), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<System.String>
struct  UnityEvent_1_tACA444CD8B2CBDCD9393629F06117A47C27A8F15  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_1_tACA444CD8B2CBDCD9393629F06117A47C27A8F15, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_4), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<UnityEngine.TouchScreenKeyboard_Status>
struct  UnityEvent_1_tCB4B91686362119976C8D499A756C59CB6D6169C  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_1_tCB4B91686362119976C8D499A756C59CB6D6169C, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_4), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`3<System.String,System.Int32,System.Int32>
struct  UnityEvent_3_t3CDB5DD99C7FB23EFDB392344A499C4B6EEC5930  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`3::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_3_t3CDB5DD99C7FB23EFDB392344A499C4B6EEC5930, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_4), (void*)value);
	}
};


// UnityEngine.Rect
struct  Rect_t35B976DE901B5423C11705E156938EA27AB402CE 
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
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};


// UnityEngine.UI.SpriteState
struct  SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A, ___m_HighlightedSprite_0)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A, ___m_PressedSprite_1)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A, ___m_SelectedSprite_2)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A, ___m_DisabledSprite_3)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A_marshaled_pinvoke
{
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_HighlightedSprite_0;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_PressedSprite_1;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_SelectedSprite_2;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A_marshaled_com
{
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_HighlightedSprite_0;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_PressedSprite_1;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_SelectedSprite_2;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_DisabledSprite_3;
};

// UnityEngine.Vector2
struct  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.WaitForSecondsRealtime
struct  WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739  : public CustomYieldInstruction_t819BB0973AFF22766749FF087B8AEFEAF3C2CB7D
{
public:
	// System.Single UnityEngine.WaitForSecondsRealtime::<waitTime>k__BackingField
	float ___U3CwaitTimeU3Ek__BackingField_0;
	// System.Single UnityEngine.WaitForSecondsRealtime::m_WaitUntilTime
	float ___m_WaitUntilTime_1;

public:
	inline static int32_t get_offset_of_U3CwaitTimeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739, ___U3CwaitTimeU3Ek__BackingField_0)); }
	inline float get_U3CwaitTimeU3Ek__BackingField_0() const { return ___U3CwaitTimeU3Ek__BackingField_0; }
	inline float* get_address_of_U3CwaitTimeU3Ek__BackingField_0() { return &___U3CwaitTimeU3Ek__BackingField_0; }
	inline void set_U3CwaitTimeU3Ek__BackingField_0(float value)
	{
		___U3CwaitTimeU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_WaitUntilTime_1() { return static_cast<int32_t>(offsetof(WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739, ___m_WaitUntilTime_1)); }
	inline float get_m_WaitUntilTime_1() const { return ___m_WaitUntilTime_1; }
	inline float* get_address_of_m_WaitUntilTime_1() { return &___m_WaitUntilTime_1; }
	inline void set_m_WaitUntilTime_1(float value)
	{
		___m_WaitUntilTime_1 = value;
	}
};


// KDebugPackage.DebugDisplay.DebugDisplayBase
struct  DebugDisplayBase_t7A49B528861B231E746CB11DD89A8E14BE3E93EB  : public RuntimeObject
{
public:
	// KDebugPackage.DebugDisplay.DebugDisplayBase KDebugPackage.DebugDisplay.DebugDisplayBase::_parent
	DebugDisplayBase_t7A49B528861B231E746CB11DD89A8E14BE3E93EB * ____parent_0;
	// KDebugPackage.DebugDisplay.IDebugDisplayUIObject KDebugPackage.DebugDisplay.DebugDisplayBase::_uiObject
	RuntimeObject* ____uiObject_1;
	// System.Single KDebugPackage.DebugDisplay.DebugDisplayBase::_yOffset
	float ____yOffset_2;
	// UnityEngine.GUIStyle KDebugPackage.DebugDisplay.DebugDisplayBase::_Style
	GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ____Style_3;
	// UnityEngine.Color KDebugPackage.DebugDisplay.DebugDisplayBase::_defaultFontColour
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ____defaultFontColour_4;
	// System.Single KDebugPackage.DebugDisplay.DebugDisplayBase::_Padding
	float ____Padding_5;
	// UnityEngine.GUIContent KDebugPackage.DebugDisplay.DebugDisplayBase::_content
	GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 * ____content_8;

public:
	inline static int32_t get_offset_of__parent_0() { return static_cast<int32_t>(offsetof(DebugDisplayBase_t7A49B528861B231E746CB11DD89A8E14BE3E93EB, ____parent_0)); }
	inline DebugDisplayBase_t7A49B528861B231E746CB11DD89A8E14BE3E93EB * get__parent_0() const { return ____parent_0; }
	inline DebugDisplayBase_t7A49B528861B231E746CB11DD89A8E14BE3E93EB ** get_address_of__parent_0() { return &____parent_0; }
	inline void set__parent_0(DebugDisplayBase_t7A49B528861B231E746CB11DD89A8E14BE3E93EB * value)
	{
		____parent_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____parent_0), (void*)value);
	}

	inline static int32_t get_offset_of__uiObject_1() { return static_cast<int32_t>(offsetof(DebugDisplayBase_t7A49B528861B231E746CB11DD89A8E14BE3E93EB, ____uiObject_1)); }
	inline RuntimeObject* get__uiObject_1() const { return ____uiObject_1; }
	inline RuntimeObject** get_address_of__uiObject_1() { return &____uiObject_1; }
	inline void set__uiObject_1(RuntimeObject* value)
	{
		____uiObject_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____uiObject_1), (void*)value);
	}

	inline static int32_t get_offset_of__yOffset_2() { return static_cast<int32_t>(offsetof(DebugDisplayBase_t7A49B528861B231E746CB11DD89A8E14BE3E93EB, ____yOffset_2)); }
	inline float get__yOffset_2() const { return ____yOffset_2; }
	inline float* get_address_of__yOffset_2() { return &____yOffset_2; }
	inline void set__yOffset_2(float value)
	{
		____yOffset_2 = value;
	}

	inline static int32_t get_offset_of__Style_3() { return static_cast<int32_t>(offsetof(DebugDisplayBase_t7A49B528861B231E746CB11DD89A8E14BE3E93EB, ____Style_3)); }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * get__Style_3() const { return ____Style_3; }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 ** get_address_of__Style_3() { return &____Style_3; }
	inline void set__Style_3(GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * value)
	{
		____Style_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____Style_3), (void*)value);
	}

	inline static int32_t get_offset_of__defaultFontColour_4() { return static_cast<int32_t>(offsetof(DebugDisplayBase_t7A49B528861B231E746CB11DD89A8E14BE3E93EB, ____defaultFontColour_4)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get__defaultFontColour_4() const { return ____defaultFontColour_4; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of__defaultFontColour_4() { return &____defaultFontColour_4; }
	inline void set__defaultFontColour_4(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		____defaultFontColour_4 = value;
	}

	inline static int32_t get_offset_of__Padding_5() { return static_cast<int32_t>(offsetof(DebugDisplayBase_t7A49B528861B231E746CB11DD89A8E14BE3E93EB, ____Padding_5)); }
	inline float get__Padding_5() const { return ____Padding_5; }
	inline float* get_address_of__Padding_5() { return &____Padding_5; }
	inline void set__Padding_5(float value)
	{
		____Padding_5 = value;
	}

	inline static int32_t get_offset_of__content_8() { return static_cast<int32_t>(offsetof(DebugDisplayBase_t7A49B528861B231E746CB11DD89A8E14BE3E93EB, ____content_8)); }
	inline GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 * get__content_8() const { return ____content_8; }
	inline GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 ** get_address_of__content_8() { return &____content_8; }
	inline void set__content_8(GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 * value)
	{
		____content_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____content_8), (void*)value);
	}
};

struct DebugDisplayBase_t7A49B528861B231E746CB11DD89A8E14BE3E93EB_StaticFields
{
public:
	// UnityEngine.Vector2 KDebugPackage.DebugDisplay.DebugDisplayBase::s_DefaultDisplaySize
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___s_DefaultDisplaySize_6;
	// System.Text.StringBuilder KDebugPackage.DebugDisplay.DebugDisplayBase::s_StringBuilder
	StringBuilder_t * ___s_StringBuilder_7;

public:
	inline static int32_t get_offset_of_s_DefaultDisplaySize_6() { return static_cast<int32_t>(offsetof(DebugDisplayBase_t7A49B528861B231E746CB11DD89A8E14BE3E93EB_StaticFields, ___s_DefaultDisplaySize_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_s_DefaultDisplaySize_6() const { return ___s_DefaultDisplaySize_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_s_DefaultDisplaySize_6() { return &___s_DefaultDisplaySize_6; }
	inline void set_s_DefaultDisplaySize_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___s_DefaultDisplaySize_6 = value;
	}

	inline static int32_t get_offset_of_s_StringBuilder_7() { return static_cast<int32_t>(offsetof(DebugDisplayBase_t7A49B528861B231E746CB11DD89A8E14BE3E93EB_StaticFields, ___s_StringBuilder_7)); }
	inline StringBuilder_t * get_s_StringBuilder_7() const { return ___s_StringBuilder_7; }
	inline StringBuilder_t ** get_address_of_s_StringBuilder_7() { return &___s_StringBuilder_7; }
	inline void set_s_StringBuilder_7(StringBuilder_t * value)
	{
		___s_StringBuilder_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_StringBuilder_7), (void*)value);
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
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
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.NotSupportedException
struct  NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.Nullable`1<UnityEngine.Color>
struct  Nullable_1_tAF01623AB359AB6D460A6F432BF98EA08C7F9C60 
{
public:
	// T System.Nullable`1::value
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tAF01623AB359AB6D460A6F432BF98EA08C7F9C60, ___value_0)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_value_0() const { return ___value_0; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tAF01623AB359AB6D460A6F432BF98EA08C7F9C60, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// TMPro.TMP_InputField_ConsoleEdit_CharacterValidation
struct  CharacterValidation_t9A5171482C3D9361775AD893752B6B052F5232BE 
{
public:
	// System.Int32 TMPro.TMP_InputField_ConsoleEdit_CharacterValidation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CharacterValidation_t9A5171482C3D9361775AD893752B6B052F5232BE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TMP_InputField_ConsoleEdit_ContentType
struct  ContentType_tE55AC7062465C9FF2339D458A57225A2599B8769 
{
public:
	// System.Int32 TMPro.TMP_InputField_ConsoleEdit_ContentType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ContentType_tE55AC7062465C9FF2339D458A57225A2599B8769, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TMP_InputField_ConsoleEdit_EditState
struct  EditState_t10BE89A8F1F270FF26A66B7097CAB3B704B8DF7A 
{
public:
	// System.Int32 TMPro.TMP_InputField_ConsoleEdit_EditState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EditState_t10BE89A8F1F270FF26A66B7097CAB3B704B8DF7A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TMP_InputField_ConsoleEdit_InputType
struct  InputType_t931F6EA1155A7D39B63F3A6C20ED45F7FC0F70CE 
{
public:
	// System.Int32 TMPro.TMP_InputField_ConsoleEdit_InputType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputType_t931F6EA1155A7D39B63F3A6C20ED45F7FC0F70CE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TMP_InputField_ConsoleEdit_LineType
struct  LineType_tB5528084E7F3801F0D8B3FEF8302D788762F135F 
{
public:
	// System.Int32 TMPro.TMP_InputField_ConsoleEdit_LineType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LineType_tB5528084E7F3801F0D8B3FEF8302D788762F135F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TMP_InputField_ConsoleEdit_OnChangeEvent
struct  OnChangeEvent_t3508BF8D24B925F0E0E06C2E99B96D7F372FFDF4  : public UnityEvent_1_tACA444CD8B2CBDCD9393629F06117A47C27A8F15
{
public:

public:
};


// TMPro.TMP_InputField_ConsoleEdit_SelectionEvent
struct  SelectionEvent_tD9D56451156CBAD7E3547903B296D44F99533A1B  : public UnityEvent_1_tACA444CD8B2CBDCD9393629F06117A47C27A8F15
{
public:

public:
};


// TMPro.TMP_InputField_ConsoleEdit_SubmitEvent
struct  SubmitEvent_tB5A3385B64DCE4274DFF6EE320FBEEA1E1E70FEA  : public UnityEvent_1_tACA444CD8B2CBDCD9393629F06117A47C27A8F15
{
public:

public:
};


// TMPro.TMP_InputField_ConsoleEdit_TextSelectionEvent
struct  TextSelectionEvent_t5FDA432F2E55A23749FF5F8ACE1E6584EC466F16  : public UnityEvent_3_t3CDB5DD99C7FB23EFDB392344A499C4B6EEC5930
{
public:

public:
};


// TMPro.TMP_InputField_ConsoleEdit_TouchScreenKeyboardEvent
struct  TouchScreenKeyboardEvent_tCAFB43F41CEA2FDFBAFA1766005E227994730F4B  : public UnityEvent_1_tCB4B91686362119976C8D499A756C59CB6D6169C
{
public:

public:
};


// UnityEngine.Coroutine
struct  Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC  : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshaled_pinvoke : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshaled_com : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.EventSystems.PointerEventData_InputButton
struct  InputButton_tCC7470F9FD2AFE525243394F0215B47D4BF86AB0 
{
public:
	// System.Int32 UnityEngine.EventSystems.PointerEventData_InputButton::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputButton_tCC7470F9FD2AFE525243394F0215B47D4BF86AB0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.EventSystems.RaycastResult
struct  RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91 
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966 * ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___screenPosition_9;

public:
	inline static int32_t get_offset_of_m_GameObject_0() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___m_GameObject_0)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_m_GameObject_0() const { return ___m_GameObject_0; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_m_GameObject_0() { return &___m_GameObject_0; }
	inline void set_m_GameObject_0(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___m_GameObject_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GameObject_0), (void*)value);
	}

	inline static int32_t get_offset_of_module_1() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___module_1)); }
	inline BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966 * get_module_1() const { return ___module_1; }
	inline BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966 ** get_address_of_module_1() { return &___module_1; }
	inline void set_module_1(BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966 * value)
	{
		___module_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___module_1), (void*)value);
	}

	inline static int32_t get_offset_of_distance_2() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___distance_2)); }
	inline float get_distance_2() const { return ___distance_2; }
	inline float* get_address_of_distance_2() { return &___distance_2; }
	inline void set_distance_2(float value)
	{
		___distance_2 = value;
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___index_3)); }
	inline float get_index_3() const { return ___index_3; }
	inline float* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(float value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_depth_4() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___depth_4)); }
	inline int32_t get_depth_4() const { return ___depth_4; }
	inline int32_t* get_address_of_depth_4() { return &___depth_4; }
	inline void set_depth_4(int32_t value)
	{
		___depth_4 = value;
	}

	inline static int32_t get_offset_of_sortingLayer_5() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___sortingLayer_5)); }
	inline int32_t get_sortingLayer_5() const { return ___sortingLayer_5; }
	inline int32_t* get_address_of_sortingLayer_5() { return &___sortingLayer_5; }
	inline void set_sortingLayer_5(int32_t value)
	{
		___sortingLayer_5 = value;
	}

	inline static int32_t get_offset_of_sortingOrder_6() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___sortingOrder_6)); }
	inline int32_t get_sortingOrder_6() const { return ___sortingOrder_6; }
	inline int32_t* get_address_of_sortingOrder_6() { return &___sortingOrder_6; }
	inline void set_sortingOrder_6(int32_t value)
	{
		___sortingOrder_6 = value;
	}

	inline static int32_t get_offset_of_worldPosition_7() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___worldPosition_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_worldPosition_7() const { return ___worldPosition_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_worldPosition_7() { return &___worldPosition_7; }
	inline void set_worldPosition_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___worldPosition_7 = value;
	}

	inline static int32_t get_offset_of_worldNormal_8() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___worldNormal_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_worldNormal_8() const { return ___worldNormal_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_worldNormal_8() { return &___worldNormal_8; }
	inline void set_worldNormal_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___worldNormal_8 = value;
	}

	inline static int32_t get_offset_of_screenPosition_9() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___screenPosition_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_screenPosition_9() const { return ___screenPosition_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_screenPosition_9() { return &___screenPosition_9; }
	inline void set_screenPosition_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___screenPosition_9 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91_marshaled_pinvoke
{
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_GameObject_0;
	BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldPosition_7;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldNormal_8;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___screenPosition_9;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91_marshaled_com
{
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_GameObject_0;
	BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldPosition_7;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldNormal_8;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___screenPosition_9;
};

// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.TouchScreenKeyboardType
struct  TouchScreenKeyboardType_tDD21D45735F3021BF4C6C7C1A660ABF03EBCE602 
{
public:
	// System.Int32 UnityEngine.TouchScreenKeyboardType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchScreenKeyboardType_tDD21D45735F3021BF4C6C7C1A660ABF03EBCE602, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.ColorBlock
struct  ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_NormalColor_0)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_HighlightedColor_1)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_PressedColor_2)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_SelectedColor_3)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_DisabledColor_4)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};


// UnityEngine.UI.Navigation_Mode
struct  Mode_t93F92BD50B147AE38D82BA33FA77FD247A59FE26 
{
public:
	// System.Int32 UnityEngine.UI.Navigation_Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t93F92BD50B147AE38D82BA33FA77FD247A59FE26, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Selectable_Transition
struct  Transition_tA9261C608B54C52324084A0B080E7A3E0548A181 
{
public:
	// System.Int32 UnityEngine.UI.Selectable_Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_tA9261C608B54C52324084A0B080E7A3E0548A181, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// TutorialWindow
struct  TutorialWindow_tB236F04A1223810C096EECBA845819203B2AF3C4  : public DebugDisplayBase_t7A49B528861B231E746CB11DD89A8E14BE3E93EB
{
public:

public:
};


// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.EventSystems.PointerEventData
struct  PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63  : public BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91  ___U3CpointerCurrentRaycastU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91  ___U3CpointerPressRaycastU3Ek__BackingField_8;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * ___hovered_9;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_10;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_11;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___U3CpositionU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___U3CdeltaU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___U3CpressPositionU3Ek__BackingField_14;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CworldPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CworldNormalU3Ek__BackingField_16;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_17;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_18;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___U3CscrollDeltaU3Ek__BackingField_19;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_21;
	// UnityEngine.EventSystems.PointerEventData_InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_22;

public:
	inline static int32_t get_offset_of_U3CpointerEnterU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CpointerEnterU3Ek__BackingField_2)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_U3CpointerEnterU3Ek__BackingField_2() const { return ___U3CpointerEnterU3Ek__BackingField_2; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_U3CpointerEnterU3Ek__BackingField_2() { return &___U3CpointerEnterU3Ek__BackingField_2; }
	inline void set_U3CpointerEnterU3Ek__BackingField_2(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___U3CpointerEnterU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerEnterU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_PointerPress_3() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___m_PointerPress_3)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_m_PointerPress_3() const { return ___m_PointerPress_3; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_m_PointerPress_3() { return &___m_PointerPress_3; }
	inline void set_m_PointerPress_3(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___m_PointerPress_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PointerPress_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3ClastPressU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3ClastPressU3Ek__BackingField_4)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_U3ClastPressU3Ek__BackingField_4() const { return ___U3ClastPressU3Ek__BackingField_4; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_U3ClastPressU3Ek__BackingField_4() { return &___U3ClastPressU3Ek__BackingField_4; }
	inline void set_U3ClastPressU3Ek__BackingField_4(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___U3ClastPressU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ClastPressU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrawPointerPressU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CrawPointerPressU3Ek__BackingField_5)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_U3CrawPointerPressU3Ek__BackingField_5() const { return ___U3CrawPointerPressU3Ek__BackingField_5; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_U3CrawPointerPressU3Ek__BackingField_5() { return &___U3CrawPointerPressU3Ek__BackingField_5; }
	inline void set_U3CrawPointerPressU3Ek__BackingField_5(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___U3CrawPointerPressU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrawPointerPressU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerDragU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CpointerDragU3Ek__BackingField_6)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_U3CpointerDragU3Ek__BackingField_6() const { return ___U3CpointerDragU3Ek__BackingField_6; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_U3CpointerDragU3Ek__BackingField_6() { return &___U3CpointerDragU3Ek__BackingField_6; }
	inline void set_U3CpointerDragU3Ek__BackingField_6(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___U3CpointerDragU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerDragU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerCurrentRaycastU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CpointerCurrentRaycastU3Ek__BackingField_7)); }
	inline RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91  get_U3CpointerCurrentRaycastU3Ek__BackingField_7() const { return ___U3CpointerCurrentRaycastU3Ek__BackingField_7; }
	inline RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91 * get_address_of_U3CpointerCurrentRaycastU3Ek__BackingField_7() { return &___U3CpointerCurrentRaycastU3Ek__BackingField_7; }
	inline void set_U3CpointerCurrentRaycastU3Ek__BackingField_7(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91  value)
	{
		___U3CpointerCurrentRaycastU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerCurrentRaycastU3Ek__BackingField_7))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerCurrentRaycastU3Ek__BackingField_7))->___module_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CpointerPressRaycastU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CpointerPressRaycastU3Ek__BackingField_8)); }
	inline RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91  get_U3CpointerPressRaycastU3Ek__BackingField_8() const { return ___U3CpointerPressRaycastU3Ek__BackingField_8; }
	inline RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91 * get_address_of_U3CpointerPressRaycastU3Ek__BackingField_8() { return &___U3CpointerPressRaycastU3Ek__BackingField_8; }
	inline void set_U3CpointerPressRaycastU3Ek__BackingField_8(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91  value)
	{
		___U3CpointerPressRaycastU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerPressRaycastU3Ek__BackingField_8))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerPressRaycastU3Ek__BackingField_8))->___module_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_hovered_9() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___hovered_9)); }
	inline List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * get_hovered_9() const { return ___hovered_9; }
	inline List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 ** get_address_of_hovered_9() { return &___hovered_9; }
	inline void set_hovered_9(List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * value)
	{
		___hovered_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hovered_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CeligibleForClickU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CeligibleForClickU3Ek__BackingField_10)); }
	inline bool get_U3CeligibleForClickU3Ek__BackingField_10() const { return ___U3CeligibleForClickU3Ek__BackingField_10; }
	inline bool* get_address_of_U3CeligibleForClickU3Ek__BackingField_10() { return &___U3CeligibleForClickU3Ek__BackingField_10; }
	inline void set_U3CeligibleForClickU3Ek__BackingField_10(bool value)
	{
		___U3CeligibleForClickU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CpointerIdU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CpointerIdU3Ek__BackingField_11)); }
	inline int32_t get_U3CpointerIdU3Ek__BackingField_11() const { return ___U3CpointerIdU3Ek__BackingField_11; }
	inline int32_t* get_address_of_U3CpointerIdU3Ek__BackingField_11() { return &___U3CpointerIdU3Ek__BackingField_11; }
	inline void set_U3CpointerIdU3Ek__BackingField_11(int32_t value)
	{
		___U3CpointerIdU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CpositionU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CpositionU3Ek__BackingField_12)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_U3CpositionU3Ek__BackingField_12() const { return ___U3CpositionU3Ek__BackingField_12; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_U3CpositionU3Ek__BackingField_12() { return &___U3CpositionU3Ek__BackingField_12; }
	inline void set_U3CpositionU3Ek__BackingField_12(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___U3CpositionU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CdeltaU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CdeltaU3Ek__BackingField_13)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_U3CdeltaU3Ek__BackingField_13() const { return ___U3CdeltaU3Ek__BackingField_13; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_U3CdeltaU3Ek__BackingField_13() { return &___U3CdeltaU3Ek__BackingField_13; }
	inline void set_U3CdeltaU3Ek__BackingField_13(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___U3CdeltaU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CpressPositionU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CpressPositionU3Ek__BackingField_14)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_U3CpressPositionU3Ek__BackingField_14() const { return ___U3CpressPositionU3Ek__BackingField_14; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_U3CpressPositionU3Ek__BackingField_14() { return &___U3CpressPositionU3Ek__BackingField_14; }
	inline void set_U3CpressPositionU3Ek__BackingField_14(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___U3CpressPositionU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CworldPositionU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CworldPositionU3Ek__BackingField_15)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CworldPositionU3Ek__BackingField_15() const { return ___U3CworldPositionU3Ek__BackingField_15; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CworldPositionU3Ek__BackingField_15() { return &___U3CworldPositionU3Ek__BackingField_15; }
	inline void set_U3CworldPositionU3Ek__BackingField_15(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CworldPositionU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CworldNormalU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CworldNormalU3Ek__BackingField_16)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CworldNormalU3Ek__BackingField_16() const { return ___U3CworldNormalU3Ek__BackingField_16; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CworldNormalU3Ek__BackingField_16() { return &___U3CworldNormalU3Ek__BackingField_16; }
	inline void set_U3CworldNormalU3Ek__BackingField_16(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CworldNormalU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CclickTimeU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CclickTimeU3Ek__BackingField_17)); }
	inline float get_U3CclickTimeU3Ek__BackingField_17() const { return ___U3CclickTimeU3Ek__BackingField_17; }
	inline float* get_address_of_U3CclickTimeU3Ek__BackingField_17() { return &___U3CclickTimeU3Ek__BackingField_17; }
	inline void set_U3CclickTimeU3Ek__BackingField_17(float value)
	{
		___U3CclickTimeU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CclickCountU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CclickCountU3Ek__BackingField_18)); }
	inline int32_t get_U3CclickCountU3Ek__BackingField_18() const { return ___U3CclickCountU3Ek__BackingField_18; }
	inline int32_t* get_address_of_U3CclickCountU3Ek__BackingField_18() { return &___U3CclickCountU3Ek__BackingField_18; }
	inline void set_U3CclickCountU3Ek__BackingField_18(int32_t value)
	{
		___U3CclickCountU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CscrollDeltaU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CscrollDeltaU3Ek__BackingField_19)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_U3CscrollDeltaU3Ek__BackingField_19() const { return ___U3CscrollDeltaU3Ek__BackingField_19; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_U3CscrollDeltaU3Ek__BackingField_19() { return &___U3CscrollDeltaU3Ek__BackingField_19; }
	inline void set_U3CscrollDeltaU3Ek__BackingField_19(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___U3CscrollDeltaU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CuseDragThresholdU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CuseDragThresholdU3Ek__BackingField_20)); }
	inline bool get_U3CuseDragThresholdU3Ek__BackingField_20() const { return ___U3CuseDragThresholdU3Ek__BackingField_20; }
	inline bool* get_address_of_U3CuseDragThresholdU3Ek__BackingField_20() { return &___U3CuseDragThresholdU3Ek__BackingField_20; }
	inline void set_U3CuseDragThresholdU3Ek__BackingField_20(bool value)
	{
		___U3CuseDragThresholdU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CdraggingU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CdraggingU3Ek__BackingField_21)); }
	inline bool get_U3CdraggingU3Ek__BackingField_21() const { return ___U3CdraggingU3Ek__BackingField_21; }
	inline bool* get_address_of_U3CdraggingU3Ek__BackingField_21() { return &___U3CdraggingU3Ek__BackingField_21; }
	inline void set_U3CdraggingU3Ek__BackingField_21(bool value)
	{
		___U3CdraggingU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CbuttonU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CbuttonU3Ek__BackingField_22)); }
	inline int32_t get_U3CbuttonU3Ek__BackingField_22() const { return ___U3CbuttonU3Ek__BackingField_22; }
	inline int32_t* get_address_of_U3CbuttonU3Ek__BackingField_22() { return &___U3CbuttonU3Ek__BackingField_22; }
	inline void set_U3CbuttonU3Ek__BackingField_22(int32_t value)
	{
		___U3CbuttonU3Ek__BackingField_22 = value;
	}
};


// UnityEngine.UI.Navigation
struct  Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07 
{
public:
	// UnityEngine.UI.Navigation_Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnUp_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnDown_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnLeft_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnRight_4;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_1() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_SelectOnUp_1)); }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * get_m_SelectOnUp_1() const { return ___m_SelectOnUp_1; }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A ** get_address_of_m_SelectOnUp_1() { return &___m_SelectOnUp_1; }
	inline void set_m_SelectOnUp_1(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * value)
	{
		___m_SelectOnUp_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_2() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_SelectOnDown_2)); }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * get_m_SelectOnDown_2() const { return ___m_SelectOnDown_2; }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A ** get_address_of_m_SelectOnDown_2() { return &___m_SelectOnDown_2; }
	inline void set_m_SelectOnDown_2(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * value)
	{
		___m_SelectOnDown_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_3() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_SelectOnLeft_3)); }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * get_m_SelectOnLeft_3() const { return ___m_SelectOnLeft_3; }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A ** get_address_of_m_SelectOnLeft_3() { return &___m_SelectOnLeft_3; }
	inline void set_m_SelectOnLeft_3(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * value)
	{
		___m_SelectOnLeft_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_4() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_SelectOnRight_4)); }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * get_m_SelectOnRight_4() const { return ___m_SelectOnRight_4; }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A ** get_address_of_m_SelectOnRight_4() { return &___m_SelectOnRight_4; }
	inline void set_m_SelectOnRight_4(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * value)
	{
		___m_SelectOnRight_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_4), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnUp_1;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnDown_2;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnLeft_3;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnRight_4;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07_marshaled_com
{
	int32_t ___m_Mode_0;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnUp_1;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnDown_2;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnLeft_3;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnRight_4;
};

// System.AsyncCallback
struct  AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4  : public MulticastDelegate_t
{
public:

public:
};


// TMPro.TMP_InputField_ConsoleEdit_OnValidateInput
struct  OnValidateInput_t7CE9BEEB4017B2BF3DFBF754BE4115D435F5BD67  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Camera
struct  Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields
{
public:
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPreCull_4;
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPreRender_5;
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// UnityEngine.RectTransform
struct  RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20  : public Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA
{
public:

public:
};

struct RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20_StaticFields
{
public:
	// UnityEngine.RectTransform_ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t431F4FBD9C59AE097FE33C4354CC6251B01B527D * ___reapplyDrivenProperties_4;

public:
	inline static int32_t get_offset_of_reapplyDrivenProperties_4() { return static_cast<int32_t>(offsetof(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20_StaticFields, ___reapplyDrivenProperties_4)); }
	inline ReapplyDrivenProperties_t431F4FBD9C59AE097FE33C4354CC6251B01B527D * get_reapplyDrivenProperties_4() const { return ___reapplyDrivenProperties_4; }
	inline ReapplyDrivenProperties_t431F4FBD9C59AE097FE33C4354CC6251B01B527D ** get_address_of_reapplyDrivenProperties_4() { return &___reapplyDrivenProperties_4; }
	inline void set_reapplyDrivenProperties_4(ReapplyDrivenProperties_t431F4FBD9C59AE097FE33C4354CC6251B01B527D * value)
	{
		___reapplyDrivenProperties_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reapplyDrivenProperties_4), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// UnityEngine.UI.Selectable
struct  Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A  : public UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70
{
public:
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07  ___m_Navigation_7;
	// UnityEngine.UI.Selectable_Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA  ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A  ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5 * ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 * ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Boolean UnityEngine.UI.Selectable::m_WillRemove
	bool ___m_WillRemove_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t64BA96BFC713F221050385E91C868CE455C245D6 * ___m_CanvasGroupCache_19;

public:
	inline static int32_t get_offset_of_m_Navigation_7() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_Navigation_7)); }
	inline Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07  get_m_Navigation_7() const { return ___m_Navigation_7; }
	inline Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07 * get_address_of_m_Navigation_7() { return &___m_Navigation_7; }
	inline void set_m_Navigation_7(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07  value)
	{
		___m_Navigation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnUp_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnDown_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnLeft_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnRight_4), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_8() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_Transition_8)); }
	inline int32_t get_m_Transition_8() const { return ___m_Transition_8; }
	inline int32_t* get_address_of_m_Transition_8() { return &___m_Transition_8; }
	inline void set_m_Transition_8(int32_t value)
	{
		___m_Transition_8 = value;
	}

	inline static int32_t get_offset_of_m_Colors_9() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_Colors_9)); }
	inline ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA  get_m_Colors_9() const { return ___m_Colors_9; }
	inline ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA * get_address_of_m_Colors_9() { return &___m_Colors_9; }
	inline void set_m_Colors_9(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA  value)
	{
		___m_Colors_9 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_10() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_SpriteState_10)); }
	inline SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A  get_m_SpriteState_10() const { return ___m_SpriteState_10; }
	inline SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A * get_address_of_m_SpriteState_10() { return &___m_SpriteState_10; }
	inline void set_m_SpriteState_10(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A  value)
	{
		___m_SpriteState_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_DisabledSprite_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_11() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_AnimationTriggers_11)); }
	inline AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5 * get_m_AnimationTriggers_11() const { return ___m_AnimationTriggers_11; }
	inline AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5 ** get_address_of_m_AnimationTriggers_11() { return &___m_AnimationTriggers_11; }
	inline void set_m_AnimationTriggers_11(AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5 * value)
	{
		___m_AnimationTriggers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_12() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_Interactable_12)); }
	inline bool get_m_Interactable_12() const { return ___m_Interactable_12; }
	inline bool* get_address_of_m_Interactable_12() { return &___m_Interactable_12; }
	inline void set_m_Interactable_12(bool value)
	{
		___m_Interactable_12 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_13() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_TargetGraphic_13)); }
	inline Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 * get_m_TargetGraphic_13() const { return ___m_TargetGraphic_13; }
	inline Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 ** get_address_of_m_TargetGraphic_13() { return &___m_TargetGraphic_13; }
	inline void set_m_TargetGraphic_13(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 * value)
	{
		___m_TargetGraphic_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_14() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_GroupsAllowInteraction_14)); }
	inline bool get_m_GroupsAllowInteraction_14() const { return ___m_GroupsAllowInteraction_14; }
	inline bool* get_address_of_m_GroupsAllowInteraction_14() { return &___m_GroupsAllowInteraction_14; }
	inline void set_m_GroupsAllowInteraction_14(bool value)
	{
		___m_GroupsAllowInteraction_14 = value;
	}

	inline static int32_t get_offset_of_m_WillRemove_15() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_WillRemove_15)); }
	inline bool get_m_WillRemove_15() const { return ___m_WillRemove_15; }
	inline bool* get_address_of_m_WillRemove_15() { return &___m_WillRemove_15; }
	inline void set_m_WillRemove_15(bool value)
	{
		___m_WillRemove_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___U3CisPointerInsideU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_16() const { return ___U3CisPointerInsideU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_16() { return &___U3CisPointerInsideU3Ek__BackingField_16; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___U3CisPointerDownU3Ek__BackingField_17)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_17() const { return ___U3CisPointerDownU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_17() { return &___U3CisPointerDownU3Ek__BackingField_17; }
	inline void set_U3CisPointerDownU3Ek__BackingField_17(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___U3ChasSelectionU3Ek__BackingField_18)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_18() const { return ___U3ChasSelectionU3Ek__BackingField_18; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_18() { return &___U3ChasSelectionU3Ek__BackingField_18; }
	inline void set_U3ChasSelectionU3Ek__BackingField_18(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_19() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_CanvasGroupCache_19)); }
	inline List_1_t64BA96BFC713F221050385E91C868CE455C245D6 * get_m_CanvasGroupCache_19() const { return ___m_CanvasGroupCache_19; }
	inline List_1_t64BA96BFC713F221050385E91C868CE455C245D6 ** get_address_of_m_CanvasGroupCache_19() { return &___m_CanvasGroupCache_19; }
	inline void set_m_CanvasGroupCache_19(List_1_t64BA96BFC713F221050385E91C868CE455C245D6 * value)
	{
		___m_CanvasGroupCache_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_19), (void*)value);
	}
};

struct Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t98F7C5A863B20CD5DBE49CE288038BA954C83F02* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
	// System.Boolean UnityEngine.UI.Selectable::s_IsDirty
	bool ___s_IsDirty_6;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_t98F7C5A863B20CD5DBE49CE288038BA954C83F02* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_t98F7C5A863B20CD5DBE49CE288038BA954C83F02** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_t98F7C5A863B20CD5DBE49CE288038BA954C83F02* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}

	inline static int32_t get_offset_of_s_IsDirty_6() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A_StaticFields, ___s_IsDirty_6)); }
	inline bool get_s_IsDirty_6() const { return ___s_IsDirty_6; }
	inline bool* get_address_of_s_IsDirty_6() { return &___s_IsDirty_6; }
	inline void set_s_IsDirty_6(bool value)
	{
		___s_IsDirty_6 = value;
	}
};


// TMPro.TMP_InputField_ConsoleEdit
struct  TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479  : public Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A
{
public:
	// UnityEngine.TouchScreenKeyboard TMPro.TMP_InputField_ConsoleEdit::m_SoftKeyboard
	TouchScreenKeyboard_t2A69F85698E9780470181532D3F2BC903623FD90 * ___m_SoftKeyboard_20;
	// UnityEngine.RectTransform TMPro.TMP_InputField_ConsoleEdit::m_TextViewport
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___m_TextViewport_22;
	// TMPro.TMP_Text TMPro.TMP_InputField_ConsoleEdit::m_TextComponent
	TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * ___m_TextComponent_23;
	// UnityEngine.RectTransform TMPro.TMP_InputField_ConsoleEdit::m_TextComponentRectTransform
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___m_TextComponentRectTransform_24;
	// UnityEngine.UI.Graphic TMPro.TMP_InputField_ConsoleEdit::m_Placeholder
	Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 * ___m_Placeholder_25;
	// UnityEngine.UI.Scrollbar TMPro.TMP_InputField_ConsoleEdit::m_VerticalScrollbar
	Scrollbar_t8F8679D0EAFACBCBD603E6B0E741E6A783DB3389 * ___m_VerticalScrollbar_26;
	// TMPro.TMP_ScrollbarEventHandler TMPro.TMP_InputField_ConsoleEdit::m_VerticalScrollbarEventHandler
	TMP_ScrollbarEventHandler_t081C59DD8EC81899836C864E45E60977A40FBA83 * ___m_VerticalScrollbarEventHandler_27;
	// System.Boolean TMPro.TMP_InputField_ConsoleEdit::m_IsDrivenByLayoutComponents
	bool ___m_IsDrivenByLayoutComponents_28;
	// System.Single TMPro.TMP_InputField_ConsoleEdit::m_ScrollPosition
	float ___m_ScrollPosition_29;
	// System.Single TMPro.TMP_InputField_ConsoleEdit::m_ScrollSensitivity
	float ___m_ScrollSensitivity_30;
	// TMPro.TMP_InputField_ConsoleEdit_ContentType TMPro.TMP_InputField_ConsoleEdit::m_ContentType
	int32_t ___m_ContentType_31;
	// TMPro.TMP_InputField_ConsoleEdit_InputType TMPro.TMP_InputField_ConsoleEdit::m_InputType
	int32_t ___m_InputType_32;
	// System.Char TMPro.TMP_InputField_ConsoleEdit::m_AsteriskChar
	Il2CppChar ___m_AsteriskChar_33;
	// UnityEngine.TouchScreenKeyboardType TMPro.TMP_InputField_ConsoleEdit::m_KeyboardType
	int32_t ___m_KeyboardType_34;
	// TMPro.TMP_InputField_ConsoleEdit_LineType TMPro.TMP_InputField_ConsoleEdit::m_LineType
	int32_t ___m_LineType_35;
	// System.Boolean TMPro.TMP_InputField_ConsoleEdit::m_HideMobileInput
	bool ___m_HideMobileInput_36;
	// System.Boolean TMPro.TMP_InputField_ConsoleEdit::m_HideSoftKeyboard
	bool ___m_HideSoftKeyboard_37;
	// TMPro.TMP_InputField_ConsoleEdit_CharacterValidation TMPro.TMP_InputField_ConsoleEdit::m_CharacterValidation
	int32_t ___m_CharacterValidation_38;
	// System.String TMPro.TMP_InputField_ConsoleEdit::m_RegexValue
	String_t* ___m_RegexValue_39;
	// System.Single TMPro.TMP_InputField_ConsoleEdit::m_GlobalPointSize
	float ___m_GlobalPointSize_40;
	// System.Int32 TMPro.TMP_InputField_ConsoleEdit::m_CharacterLimit
	int32_t ___m_CharacterLimit_41;
	// TMPro.TMP_InputField_ConsoleEdit_SubmitEvent TMPro.TMP_InputField_ConsoleEdit::m_OnEndEdit
	SubmitEvent_tB5A3385B64DCE4274DFF6EE320FBEEA1E1E70FEA * ___m_OnEndEdit_42;
	// TMPro.TMP_InputField_ConsoleEdit_SubmitEvent TMPro.TMP_InputField_ConsoleEdit::m_OnSubmit
	SubmitEvent_tB5A3385B64DCE4274DFF6EE320FBEEA1E1E70FEA * ___m_OnSubmit_43;
	// TMPro.TMP_InputField_ConsoleEdit_SelectionEvent TMPro.TMP_InputField_ConsoleEdit::m_OnSelect
	SelectionEvent_tD9D56451156CBAD7E3547903B296D44F99533A1B * ___m_OnSelect_44;
	// TMPro.TMP_InputField_ConsoleEdit_SelectionEvent TMPro.TMP_InputField_ConsoleEdit::m_OnDeselect
	SelectionEvent_tD9D56451156CBAD7E3547903B296D44F99533A1B * ___m_OnDeselect_45;
	// TMPro.TMP_InputField_ConsoleEdit_TextSelectionEvent TMPro.TMP_InputField_ConsoleEdit::m_OnTextSelection
	TextSelectionEvent_t5FDA432F2E55A23749FF5F8ACE1E6584EC466F16 * ___m_OnTextSelection_46;
	// TMPro.TMP_InputField_ConsoleEdit_TextSelectionEvent TMPro.TMP_InputField_ConsoleEdit::m_OnEndTextSelection
	TextSelectionEvent_t5FDA432F2E55A23749FF5F8ACE1E6584EC466F16 * ___m_OnEndTextSelection_47;
	// TMPro.TMP_InputField_ConsoleEdit_OnChangeEvent TMPro.TMP_InputField_ConsoleEdit::m_OnValueChanged
	OnChangeEvent_t3508BF8D24B925F0E0E06C2E99B96D7F372FFDF4 * ___m_OnValueChanged_48;
	// TMPro.TMP_InputField_ConsoleEdit_TouchScreenKeyboardEvent TMPro.TMP_InputField_ConsoleEdit::m_OnTouchScreenKeyboardStatusChanged
	TouchScreenKeyboardEvent_tCAFB43F41CEA2FDFBAFA1766005E227994730F4B * ___m_OnTouchScreenKeyboardStatusChanged_49;
	// TMPro.TMP_InputField_ConsoleEdit_OnValidateInput TMPro.TMP_InputField_ConsoleEdit::m_OnValidateInput
	OnValidateInput_t7CE9BEEB4017B2BF3DFBF754BE4115D435F5BD67 * ___m_OnValidateInput_50;
	// UnityEngine.Color TMPro.TMP_InputField_ConsoleEdit::m_CaretColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_CaretColor_51;
	// System.Boolean TMPro.TMP_InputField_ConsoleEdit::m_CustomCaretColor
	bool ___m_CustomCaretColor_52;
	// UnityEngine.Color TMPro.TMP_InputField_ConsoleEdit::m_SelectionColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_SelectionColor_53;
	// System.String TMPro.TMP_InputField_ConsoleEdit::m_Text
	String_t* ___m_Text_54;
	// System.Single TMPro.TMP_InputField_ConsoleEdit::m_CaretBlinkRate
	float ___m_CaretBlinkRate_55;
	// System.Int32 TMPro.TMP_InputField_ConsoleEdit::m_CaretWidth
	int32_t ___m_CaretWidth_56;
	// System.Boolean TMPro.TMP_InputField_ConsoleEdit::m_ReadOnly
	bool ___m_ReadOnly_57;
	// System.Boolean TMPro.TMP_InputField_ConsoleEdit::m_RichText
	bool ___m_RichText_58;
	// System.Int32 TMPro.TMP_InputField_ConsoleEdit::m_StringPosition
	int32_t ___m_StringPosition_59;
	// System.Int32 TMPro.TMP_InputField_ConsoleEdit::m_StringSelectPosition
	int32_t ___m_StringSelectPosition_60;
	// System.Int32 TMPro.TMP_InputField_ConsoleEdit::m_CaretPosition
	int32_t ___m_CaretPosition_61;
	// System.Int32 TMPro.TMP_InputField_ConsoleEdit::m_CaretSelectPosition
	int32_t ___m_CaretSelectPosition_62;
	// UnityEngine.RectTransform TMPro.TMP_InputField_ConsoleEdit::caretRectTrans
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___caretRectTrans_63;
	// UnityEngine.UIVertex[] TMPro.TMP_InputField_ConsoleEdit::m_CursorVerts
	UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* ___m_CursorVerts_64;
	// UnityEngine.CanvasRenderer TMPro.TMP_InputField_ConsoleEdit::m_CachedInputRenderer
	CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * ___m_CachedInputRenderer_65;
	// UnityEngine.Vector2 TMPro.TMP_InputField_ConsoleEdit::m_LastPosition
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_LastPosition_66;
	// UnityEngine.Mesh TMPro.TMP_InputField_ConsoleEdit::m_Mesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___m_Mesh_67;
	// System.Boolean TMPro.TMP_InputField_ConsoleEdit::m_AllowInput
	bool ___m_AllowInput_68;
	// System.Boolean TMPro.TMP_InputField_ConsoleEdit::m_ShouldActivateNextUpdate
	bool ___m_ShouldActivateNextUpdate_69;
	// System.Boolean TMPro.TMP_InputField_ConsoleEdit::m_UpdateDrag
	bool ___m_UpdateDrag_70;
	// System.Boolean TMPro.TMP_InputField_ConsoleEdit::m_DragPositionOutOfBounds
	bool ___m_DragPositionOutOfBounds_71;
	// System.Boolean TMPro.TMP_InputField_ConsoleEdit::m_CaretVisible
	bool ___m_CaretVisible_74;
	// UnityEngine.Coroutine TMPro.TMP_InputField_ConsoleEdit::m_BlinkCoroutine
	Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * ___m_BlinkCoroutine_75;
	// System.Single TMPro.TMP_InputField_ConsoleEdit::m_BlinkStartTime
	float ___m_BlinkStartTime_76;
	// UnityEngine.Coroutine TMPro.TMP_InputField_ConsoleEdit::m_DragCoroutine
	Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * ___m_DragCoroutine_77;
	// System.String TMPro.TMP_InputField_ConsoleEdit::m_OriginalText
	String_t* ___m_OriginalText_78;
	// System.Boolean TMPro.TMP_InputField_ConsoleEdit::m_WasCanceled
	bool ___m_WasCanceled_79;
	// System.Boolean TMPro.TMP_InputField_ConsoleEdit::m_HasDoneFocusTransition
	bool ___m_HasDoneFocusTransition_80;
	// UnityEngine.WaitForSecondsRealtime TMPro.TMP_InputField_ConsoleEdit::m_WaitForSecondsRealtime
	WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739 * ___m_WaitForSecondsRealtime_81;
	// System.Boolean TMPro.TMP_InputField_ConsoleEdit::m_PreventCallback
	bool ___m_PreventCallback_82;
	// System.Boolean TMPro.TMP_InputField_ConsoleEdit::m_TouchKeyboardAllowsInPlaceEditing
	bool ___m_TouchKeyboardAllowsInPlaceEditing_83;
	// System.Boolean TMPro.TMP_InputField_ConsoleEdit::m_IsTextComponentUpdateRequired
	bool ___m_IsTextComponentUpdateRequired_84;
	// System.Boolean TMPro.TMP_InputField_ConsoleEdit::m_IsScrollbarUpdateRequired
	bool ___m_IsScrollbarUpdateRequired_85;
	// System.Boolean TMPro.TMP_InputField_ConsoleEdit::m_IsUpdatingScrollbarValues
	bool ___m_IsUpdatingScrollbarValues_86;
	// System.Boolean TMPro.TMP_InputField_ConsoleEdit::m_isLastKeyBackspace
	bool ___m_isLastKeyBackspace_87;
	// System.Single TMPro.TMP_InputField_ConsoleEdit::m_PointerDownClickStartTime
	float ___m_PointerDownClickStartTime_88;
	// System.Single TMPro.TMP_InputField_ConsoleEdit::m_KeyDownStartTime
	float ___m_KeyDownStartTime_89;
	// System.Single TMPro.TMP_InputField_ConsoleEdit::m_DoubleClickDelay
	float ___m_DoubleClickDelay_90;
	// System.Boolean TMPro.TMP_InputField_ConsoleEdit::m_IsModal
	bool ___m_IsModal_91;
	// TMPro.TMP_FontAsset TMPro.TMP_InputField_ConsoleEdit::m_GlobalFontAsset
	TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * ___m_GlobalFontAsset_93;
	// System.Boolean TMPro.TMP_InputField_ConsoleEdit::m_OnFocusSelectAll
	bool ___m_OnFocusSelectAll_94;
	// System.Boolean TMPro.TMP_InputField_ConsoleEdit::m_isSelectAll
	bool ___m_isSelectAll_95;
	// System.Boolean TMPro.TMP_InputField_ConsoleEdit::m_ResetOnDeActivation
	bool ___m_ResetOnDeActivation_96;
	// System.Boolean TMPro.TMP_InputField_ConsoleEdit::m_SelectionStillActive
	bool ___m_SelectionStillActive_97;
	// System.Boolean TMPro.TMP_InputField_ConsoleEdit::m_ReleaseSelection
	bool ___m_ReleaseSelection_98;
	// UnityEngine.GameObject TMPro.TMP_InputField_ConsoleEdit::m_SelectedObject
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_SelectedObject_99;
	// System.Boolean TMPro.TMP_InputField_ConsoleEdit::m_RestoreOriginalTextOnEscape
	bool ___m_RestoreOriginalTextOnEscape_100;
	// System.Boolean TMPro.TMP_InputField_ConsoleEdit::m_isRichTextEditingAllowed
	bool ___m_isRichTextEditingAllowed_101;
	// System.Int32 TMPro.TMP_InputField_ConsoleEdit::m_LineLimit
	int32_t ___m_LineLimit_102;
	// TMPro.TMP_InputValidator TMPro.TMP_InputField_ConsoleEdit::m_InputValidator
	TMP_InputValidator_t4C673E12211AFB82AAF94D9DEA556FDC306E69CD * ___m_InputValidator_103;
	// System.Boolean TMPro.TMP_InputField_ConsoleEdit::m_isSelected
	bool ___m_isSelected_104;
	// System.Boolean TMPro.TMP_InputField_ConsoleEdit::m_IsStringPositionDirty
	bool ___m_IsStringPositionDirty_105;
	// System.Boolean TMPro.TMP_InputField_ConsoleEdit::m_IsCaretPositionDirty
	bool ___m_IsCaretPositionDirty_106;
	// System.Boolean TMPro.TMP_InputField_ConsoleEdit::m_forceRectTransformAdjustment
	bool ___m_forceRectTransformAdjustment_107;
	// UnityEngine.Event TMPro.TMP_InputField_ConsoleEdit::m_ProcessingEvent
	Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * ___m_ProcessingEvent_108;

public:
	inline static int32_t get_offset_of_m_SoftKeyboard_20() { return static_cast<int32_t>(offsetof(TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479, ___m_SoftKeyboard_20)); }
	inline TouchScreenKeyboard_t2A69F85698E9780470181532D3F2BC903623FD90 * get_m_SoftKeyboard_20() const { return ___m_SoftKeyboard_20; }
	inline TouchScreenKeyboard_t2A69F85698E9780470181532D3F2BC903623FD90 ** get_address_of_m_SoftKeyboard_20() { return &___m_SoftKeyboard_20; }
	inline void set_m_SoftKeyboard_20(TouchScreenKeyboard_t2A69F85698E9780470181532D3F2BC903623FD90 * value)
	{
		___m_SoftKeyboard_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SoftKeyboard_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextViewport_22() { return static_cast<int32_t>(offsetof(TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479, ___m_TextViewport_22)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_m_TextViewport_22() const { return ___m_TextViewport_22; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_m_TextViewport_22() { return &___m_TextViewport_22; }
	inline void set_m_TextViewport_22(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___m_TextViewport_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextViewport_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextComponent_23() { return static_cast<int32_t>(offsetof(TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479, ___m_TextComponent_23)); }
	inline TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * get_m_TextComponent_23() const { return ___m_TextComponent_23; }
	inline TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 ** get_address_of_m_TextComponent_23() { return &___m_TextComponent_23; }
	inline void set_m_TextComponent_23(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * value)
	{
		___m_TextComponent_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextComponent_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextComponentRectTransform_24() { return static_cast<int32_t>(offsetof(TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479, ___m_TextComponentRectTransform_24)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_m_TextComponentRectTransform_24() const { return ___m_TextComponentRectTransform_24; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_m_TextComponentRectTransform_24() { return &___m_TextComponentRectTransform_24; }
	inline void set_m_TextComponentRectTransform_24(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___m_TextComponentRectTransform_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextComponentRectTransform_24), (void*)value);
	}

	inline static int32_t get_offset_of_m_Placeholder_25() { return static_cast<int32_t>(offsetof(TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479, ___m_Placeholder_25)); }
	inline Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 * get_m_Placeholder_25() const { return ___m_Placeholder_25; }
	inline Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 ** get_address_of_m_Placeholder_25() { return &___m_Placeholder_25; }
	inline void set_m_Placeholder_25(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 * value)
	{
		___m_Placeholder_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Placeholder_25), (void*)value);
	}

	inline static int32_t get_offset_of_m_VerticalScrollbar_26() { return static_cast<int32_t>(offsetof(TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479, ___m_VerticalScrollbar_26)); }
	inline Scrollbar_t8F8679D0EAFACBCBD603E6B0E741E6A783DB3389 * get_m_VerticalScrollbar_26() const { return ___m_VerticalScrollbar_26; }
	inline Scrollbar_t8F8679D0EAFACBCBD603E6B0E741E6A783DB3389 ** get_address_of_m_VerticalScrollbar_26() { return &___m_VerticalScrollbar_26; }
	inline void set_m_VerticalScrollbar_26(Scrollbar_t8F8679D0EAFACBCBD603E6B0E741E6A783DB3389 * value)
	{
		___m_VerticalScrollbar_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_VerticalScrollbar_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_VerticalScrollbarEventHandler_27() { return static_cast<int32_t>(offsetof(TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479, ___m_VerticalScrollbarEventHandler_27)); }
	inline TMP_ScrollbarEventHandler_t081C59DD8EC81899836C864E45E60977A40FBA83 * get_m_VerticalScrollbarEventHandler_27() const { return ___m_VerticalScrollbarEventHandler_27; }
	inline TMP_ScrollbarEventHandler_t081C59DD8EC81899836C864E45E60977A40FBA83 ** get_address_of_m_VerticalScrollbarEventHandler_27() { return &___m_VerticalScrollbarEventHandler_27; }
	inline void set_m_VerticalScrollbarEventHandler_27(TMP_ScrollbarEventHandler_t081C59DD8EC81899836C864E45E60977A40FBA83 * value)
	{
		___m_VerticalScrollbarEventHandler_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_VerticalScrollbarEventHandler_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_IsDrivenByLayoutComponents_28() { return static_cast<int32_t>(offsetof(TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479, ___m_IsDrivenByLayoutComponents_28)); }
	inline bool get_m_IsDrivenByLayoutComponents_28() const { return ___m_IsDrivenByLayoutComponents_28; }
	inline bool* get_address_of_m_IsDrivenByLayoutComponents_28() { return &___m_IsDrivenByLayoutComponents_28; }
	inline void set_m_IsDrivenByLayoutComponents_28(bool value)
	{
		___m_IsDrivenByLayoutComponents_28 = value;
	}

	inline static int32_t get_offset_of_m_ScrollPosition_29() { return static_cast<int32_t>(offsetof(TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479, ___m_ScrollPosition_29)); }
	inline float get_m_ScrollPosition_29() const { return ___m_ScrollPosition_29; }
	inline float* get_address_of_m_ScrollPosition_29() { return &___m_ScrollPosition_29; }
	inline void set_m_ScrollPosition_29(float value)
	{
		___m_ScrollPosition_29 = value;
	}

	inline static int32_t get_offset_of_m_ScrollSensitivity_30() { return static_cast<int32_t>(offsetof(TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479, ___m_ScrollSensitivity_30)); }
	inline float get_m_ScrollSensitivity_30() const { return ___m_ScrollSensitivity_30; }
	inline float* get_address_of_m_ScrollSensitivity_30() { return &___m_ScrollSensitivity_30; }
	inline void set_m_ScrollSensitivity_30(float value)
	{
		___m_ScrollSensitivity_30 = value;
	}

	inline static int32_t get_offset_of_m_ContentType_31() { return static_cast<int32_t>(offsetof(TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479, ___m_ContentType_31)); }
	inline int32_t get_m_ContentType_31() const { return ___m_ContentType_31; }
	inline int32_t* get_address_of_m_ContentType_31() { return &___m_ContentType_31; }
	inline void set_m_ContentType_31(int32_t value)
	{
		___m_ContentType_31 = value;
	}

	inline static int32_t get_offset_of_m_InputType_32() { return static_cast<int32_t>(offsetof(TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479, ___m_InputType_32)); }
	inline int32_t get_m_InputType_32() const { return ___m_InputType_32; }
	inline int32_t* get_address_of_m_InputType_32() { return &___m_InputType_32; }
	inline void set_m_InputType_32(int32_t value)
	{
		___m_InputType_32 = value;
	}

	inline static int32_t get_offset_of_m_AsteriskChar_33() { return static_cast<int32_t>(offsetof(TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479, ___m_AsteriskChar_33)); }
	inline Il2CppChar get_m_AsteriskChar_33() const { return ___m_AsteriskChar_33; }
	inline Il2CppChar* get_address_of_m_AsteriskChar_33() { return &___m_AsteriskChar_33; }
	inline void set_m_AsteriskChar_33(Il2CppChar value)
	{
		___m_AsteriskChar_33 = value;
	}

	inline static int32_t get_offset_of_m_KeyboardType_34() { return static_cast<int32_t>(offsetof(TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479, ___m_KeyboardType_34)); }
	inline int32_t get_m_KeyboardType_34() const { return ___m_KeyboardType_34; }
	inline int32_t* get_address_of_m_KeyboardType_34() { return &___m_KeyboardType_34; }
	inline void set_m_KeyboardType_34(int32_t value)
	{
		___m_KeyboardType_34 = value;
	}

	inline static int32_t get_offset_of_m_LineType_35() { return static_cast<int32_t>(offsetof(TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479, ___m_LineType_35)); }
	inline int32_t get_m_LineType_35() const { return ___m_LineType_35; }
	inline int32_t* get_address_of_m_LineType_35() { return &___m_LineType_35; }
	inline void set_m_LineType_35(int32_t value)
	{
		___m_LineType_35 = value;
	}

	inline static int32_t get_offset_of_m_HideMobileInput_36() { return static_cast<int32_t>(offsetof(TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479, ___m_HideMobileInput_36)); }
	inline bool get_m_HideMobileInput_36() const { return ___m_HideMobileInput_36; }
	inline bool* get_address_of_m_HideMobileInput_36() { return &___m_HideMobileInput_36; }
	inline void set_m_HideMobileInput_36(bool value)
	{
		___m_HideMobileInput_36 = value;
	}

	inline static int32_t get_offset_of_m_HideSoftKeyboard_37() { return static_cast<int32_t>(offsetof(TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479, ___m_HideSoftKeyboard_37)); }
	inline bool get_m_HideSoftKeyboard_37() const { return ___m_HideSoftKeyboard_37; }
	inline bool* get_address_of_m_HideSoftKeyboard_37() { return &___m_HideSoftKeyboard_37; }
	inline void set_m_HideSoftKeyboard_37(bool value)
	{
		___m_HideSoftKeyboard_37 = value;
	}

	inline static int32_t get_offset_of_m_CharacterValidation_38() { return static_cast<int32_t>(offsetof(TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479, ___m_CharacterValidation_38)); }
	inline int32_t get_m_CharacterValidation_38() const { return ___m_CharacterValidation_38; }
	inline int32_t* get_address_of_m_CharacterValidation_38() { return &___m_CharacterValidation_38; }
	inline void set_m_CharacterValidation_38(int32_t value)
	{
		___m_CharacterValidation_38 = value;
	}

	inline static int32_t get_offset_of_m_RegexValue_39() { return static_cast<int32_t>(offsetof(TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479, ___m_RegexValue_39)); }
	inline String_t* get_m_RegexValue_39() const { return ___m_RegexValue_39; }
	inline String_t** get_address_of_m_RegexValue_39() { return &___m_RegexValue_39; }
	inline void set_m_RegexValue_39(String_t* value)
	{
		___m_RegexValue_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RegexValue_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_GlobalPointSize_40() { return static_cast<int32_t>(offsetof(TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479, ___m_GlobalPointSize_40)); }
	inline float get_m_GlobalPointSize_40() const { return ___m_GlobalPointSize_40; }
	inline float* get_address_of_m_GlobalPointSize_40() { return &___m_GlobalPointSize_40; }
	inline void set_m_GlobalPointSize_40(float value)
	{
		___m_GlobalPointSize_40 = value;
	}

	inline static int32_t get_offset_of_m_CharacterLimit_41() { return static_cast<int32_t>(offsetof(TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479, ___m_CharacterLimit_41)); }
	inline int32_t get_m_CharacterLimit_41() const { return ___m_CharacterLimit_41; }
	inline int32_t* get_address_of_m_CharacterLimit_41() { return &___m_CharacterLimit_41; }
	inline void set_m_CharacterLimit_41(int32_t value)
	{
		___m_CharacterLimit_41 = value;
	}

	inline static int32_t get_offset_of_m_OnEndEdit_42() { return static_cast<int32_t>(offsetof(TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479, ___m_OnEndEdit_42)); }
	inline SubmitEvent_tB5A3385B64DCE4274DFF6EE320FBEEA1E1E70FEA * get_m_OnEndEdit_42() const { return ___m_OnEndEdit_42; }
	inline SubmitEvent_tB5A3385B64DCE4274DFF6EE320FBEEA1E1E70FEA ** get_address_of_m_OnEndEdit_42() { return &___m_OnEndEdit_42; }
	inline void set_m_OnEndEdit_42(SubmitEvent_tB5A3385B64DCE4274DFF6EE320FBEEA1E1E70FEA * value)
	{
		___m_OnEndEdit_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnEndEdit_42), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnSubmit_43() { return static_cast<int32_t>(offsetof(TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479, ___m_OnSubmit_43)); }
	inline SubmitEvent_tB5A3385B64DCE4274DFF6EE320FBEEA1E1E70FEA * get_m_OnSubmit_43() const { return ___m_OnSubmit_43; }
	inline SubmitEvent_tB5A3385B64DCE4274DFF6EE320FBEEA1E1E70FEA ** get_address_of_m_OnSubmit_43() { return &___m_OnSubmit_43; }
	inline void set_m_OnSubmit_43(SubmitEvent_tB5A3385B64DCE4274DFF6EE320FBEEA1E1E70FEA * value)
	{
		___m_OnSubmit_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnSubmit_43), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnSelect_44() { return static_cast<int32_t>(offsetof(TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479, ___m_OnSelect_44)); }
	inline SelectionEvent_tD9D56451156CBAD7E3547903B296D44F99533A1B * get_m_OnSelect_44() const { return ___m_OnSelect_44; }
	inline SelectionEvent_tD9D56451156CBAD7E3547903B296D44F99533A1B ** get_address_of_m_OnSelect_44() { return &___m_OnSelect_44; }
	inline void set_m_OnSelect_44(SelectionEvent_tD9D56451156CBAD7E3547903B296D44F99533A1B * value)
	{
		___m_OnSelect_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnSelect_44), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDeselect_45() { return static_cast<int32_t>(offsetof(TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479, ___m_OnDeselect_45)); }
	inline SelectionEvent_tD9D56451156CBAD7E3547903B296D44F99533A1B * get_m_OnDeselect_45() const { return ___m_OnDeselect_45; }
	inline SelectionEvent_tD9D56451156CBAD7E3547903B296D44F99533A1B ** get_address_of_m_OnDeselect_45() { return &___m_OnDeselect_45; }
	inline void set_m_OnDeselect_45(SelectionEvent_tD9D56451156CBAD7E3547903B296D44F99533A1B * value)
	{
		___m_OnDeselect_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDeselect_45), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnTextSelection_46() { return static_cast<int32_t>(offsetof(TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479, ___m_OnTextSelection_46)); }
	inline TextSelectionEvent_t5FDA432F2E55A23749FF5F8ACE1E6584EC466F16 * get_m_OnTextSelection_46() const { return ___m_OnTextSelection_46; }
	inline TextSelectionEvent_t5FDA432F2E55A23749FF5F8ACE1E6584EC466F16 ** get_address_of_m_OnTextSelection_46() { return &___m_OnTextSelection_46; }
	inline void set_m_OnTextSelection_46(TextSelectionEvent_t5FDA432F2E55A23749FF5F8ACE1E6584EC466F16 * value)
	{
		___m_OnTextSelection_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnTextSelection_46), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnEndTextSelection_47() { return static_cast<int32_t>(offsetof(TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479, ___m_OnEndTextSelection_47)); }
	inline TextSelectionEvent_t5FDA432F2E55A23749FF5F8ACE1E6584EC466F16 * get_m_OnEndTextSelection_47() const { return ___m_OnEndTextSelection_47; }
	inline TextSelectionEvent_t5FDA432F2E55A23749FF5F8ACE1E6584EC466F16 ** get_address_of_m_OnEndTextSelection_47() { return &___m_OnEndTextSelection_47; }
	inline void set_m_OnEndTextSelection_47(TextSelectionEvent_t5FDA432F2E55A23749FF5F8ACE1E6584EC466F16 * value)
	{
		___m_OnEndTextSelection_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnEndTextSelection_47), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnValueChanged_48() { return static_cast<int32_t>(offsetof(TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479, ___m_OnValueChanged_48)); }
	inline OnChangeEvent_t3508BF8D24B925F0E0E06C2E99B96D7F372FFDF4 * get_m_OnValueChanged_48() const { return ___m_OnValueChanged_48; }
	inline OnChangeEvent_t3508BF8D24B925F0E0E06C2E99B96D7F372FFDF4 ** get_address_of_m_OnValueChanged_48() { return &___m_OnValueChanged_48; }
	inline void set_m_OnValueChanged_48(OnChangeEvent_t3508BF8D24B925F0E0E06C2E99B96D7F372FFDF4 * value)
	{
		___m_OnValueChanged_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValueChanged_48), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnTouchScreenKeyboardStatusChanged_49() { return static_cast<int32_t>(offsetof(TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479, ___m_OnTouchScreenKeyboardStatusChanged_49)); }
	inline TouchScreenKeyboardEvent_tCAFB43F41CEA2FDFBAFA1766005E227994730F4B * get_m_OnTouchScreenKeyboardStatusChanged_49() const { return ___m_OnTouchScreenKeyboardStatusChanged_49; }
	inline TouchScreenKeyboardEvent_tCAFB43F41CEA2FDFBAFA1766005E227994730F4B ** get_address_of_m_OnTouchScreenKeyboardStatusChanged_49() { return &___m_OnTouchScreenKeyboardStatusChanged_49; }
	inline void set_m_OnTouchScreenKeyboardStatusChanged_49(TouchScreenKeyboardEvent_tCAFB43F41CEA2FDFBAFA1766005E227994730F4B * value)
	{
		___m_OnTouchScreenKeyboardStatusChanged_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnTouchScreenKeyboardStatusChanged_49), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnValidateInput_50() { return static_cast<int32_t>(offsetof(TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479, ___m_OnValidateInput_50)); }
	inline OnValidateInput_t7CE9BEEB4017B2BF3DFBF754BE4115D435F5BD67 * get_m_OnValidateInput_50() const { return ___m_OnValidateInput_50; }
	inline OnValidateInput_t7CE9BEEB4017B2BF3DFBF754BE4115D435F5BD67 ** get_address_of_m_OnValidateInput_50() { return &___m_OnValidateInput_50; }
	inline void set_m_OnValidateInput_50(OnValidateInput_t7CE9BEEB4017B2BF3DFBF754BE4115D435F5BD67 * value)
	{
		___m_OnValidateInput_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValidateInput_50), (void*)value);
	}

	inline static int32_t get_offset_of_m_CaretColor_51() { return static_cast<int32_t>(offsetof(TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479, ___m_CaretColor_51)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_CaretColor_51() const { return ___m_CaretColor_51; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_CaretColor_51() { return &___m_CaretColor_51; }
	inline void set_m_CaretColor_51(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_CaretColor_51 = value;
	}

	inline static int32_t get_offset_of_m_CustomCaretColor_52() { return static_cast<int32_t>(offsetof(TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479, ___m_CustomCaretColor_52)); }
	inline bool get_m_CustomCaretColor_52() const { return ___m_CustomCaretColor_52; }
	inline bool* get_address_of_m_CustomCaretColor_52() { return &___m_CustomCaretColor_52; }
	inline void set_m_CustomCaretColor_52(bool value)
	{
		___m_CustomCaretColor_52 = value;
	}

	inline static int32_t get_offset_of_m_SelectionColor_53() { return static_cast<int32_t>(offsetof(TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479, ___m_SelectionColor_53)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_SelectionColor_53() const { return ___m_SelectionColor_53; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_SelectionColor_53() { return &___m_SelectionColor_53; }
	inline void set_m_SelectionColor_53(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_SelectionColor_53 = value;
	}

	inline static int32_t get_offset_of_m_Text_54() { return static_cast<int32_t>(offsetof(TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479, ___m_Text_54)); }
	inline String_t* get_m_Text_54() const { return ___m_Text_54; }
	inline String_t** get_address_of_m_Text_54() { return &___m_Text_54; }
	inline void set_m_Text_54(String_t* value)
	{
		___m_Text_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_54), (void*)value);
	}

	inline static int32_t get_offset_of_m_CaretBlinkRate_55() { return static_cast<int32_t>(offsetof(TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479, ___m_CaretBlinkRate_55)); }
	inline float get_m_CaretBlinkRate_55() const { return ___m_CaretBlinkRate_55; }
	inline float* get_address_of_m_CaretBlinkRate_55() { return &___m_CaretBlinkRate_55; }
	inline void set_m_CaretBlinkRate_55(float value)
	{
		___m_CaretBlinkRate_55 = value;
	}

	inline static int32_t get_offset_of_m_CaretWidth_56() { return static_cast<int32_t>(offsetof(TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479, ___m_CaretWidth_56)); }
	inline int32_t get_m_CaretWidth_56() const { return ___m_CaretWidth_56; }
	inline int32_t* get_address_of_m_CaretWidth_56() { return &___m_CaretWidth_56; }
	inline void set_m_CaretWidth_56(int32_t value)
	{
		___m_CaretWidth_56 = value;
	}

	inline static int32_t get_offset_of_m_ReadOnly_57() { return static_cast<int32_t>(offsetof(TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479, ___m_ReadOnly_57)); }
	inline bool get_m_ReadOnly_57() const { return ___m_ReadOnly_57; }
	inline bool* get_address_of_m_ReadOnly_57() { return &___m_ReadOnly_57; }
	inline void set_m_ReadOnly_57(bool value)
	{
		___m_ReadOnly_57 = value;
	}

	inline static int32_t get_offset_of_m_RichText_58() { return static_cast<int32_t>(offsetof(TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479, ___m_RichText_58)); }
	inline bool get_m_RichText_58() const { return ___m_RichText_58; }
	inline bool* get_address_of_m_RichText_58() { return &___m_RichText_58; }
	inline void set_m_RichText_58(bool value)
	{
		___m_RichText_58 = value;
	}

	inline static int32_t get_offset_of_m_StringPosition_59() { return static_cast<int32_t>(offsetof(TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479, ___m_StringPosition_59)); }
	inline int32_t get_m_StringPosition_59() const { return ___m_StringPosition_59; }
	inline int32_t* get_address_of_m_StringPosition_59() { return &___m_StringPosition_59; }
	inline void set_m_StringPosition_59(int32_t value)
	{
		___m_StringPosition_59 = value;
	}

	inline static int32_t get_offset_of_m_StringSelectPosition_60() { return static_cast<int32_t>(offsetof(TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479, ___m_StringSelectPosition_60)); }
	inline int32_t get_m_StringSelectPosition_60() const { return ___m_StringSelectPosition_60; }
	inline int32_t* get_address_of_m_StringSelectPosition_60() { return &___m_StringSelectPosition_60; }
	inline void set_m_StringSelectPosition_60(int32_t value)
	{
		___m_StringSelectPosition_60 = value;
	}

	inline static int32_t get_offset_of_m_CaretPosition_61() { return static_cast<int32_t>(offsetof(TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479, ___m_CaretPosition_61)); }
	inline int32_t get_m_CaretPosition_61() const { return ___m_CaretPosition_61; }
	inline int32_t* get_address_of_m_CaretPosition_61() { return &___m_CaretPosition_61; }
	inline void set_m_CaretPosition_61(int32_t value)
	{
		___m_CaretPosition_61 = value;
	}

	inline static int32_t get_offset_of_m_CaretSelectPosition_62() { return static_cast<int32_t>(offsetof(TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479, ___m_CaretSelectPosition_62)); }
	inline int32_t get_m_CaretSelectPosition_62() const { return ___m_CaretSelectPosition_62; }
	inline int32_t* get_address_of_m_CaretSelectPosition_62() { return &___m_CaretSelectPosition_62; }
	inline void set_m_CaretSelectPosition_62(int32_t value)
	{
		___m_CaretSelectPosition_62 = value;
	}

	inline static int32_t get_offset_of_caretRectTrans_63() { return static_cast<int32_t>(offsetof(TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479, ___caretRectTrans_63)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_caretRectTrans_63() const { return ___caretRectTrans_63; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_caretRectTrans_63() { return &___caretRectTrans_63; }
	inline void set_caretRectTrans_63(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___caretRectTrans_63 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___caretRectTrans_63), (void*)value);
	}

	inline static int32_t get_offset_of_m_CursorVerts_64() { return static_cast<int32_t>(offsetof(TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479, ___m_CursorVerts_64)); }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* get_m_CursorVerts_64() const { return ___m_CursorVerts_64; }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A** get_address_of_m_CursorVerts_64() { return &___m_CursorVerts_64; }
	inline void set_m_CursorVerts_64(UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* value)
	{
		___m_CursorVerts_64 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CursorVerts_64), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedInputRenderer_65() { return static_cast<int32_t>(offsetof(TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479, ___m_CachedInputRenderer_65)); }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * get_m_CachedInputRenderer_65() const { return ___m_CachedInputRenderer_65; }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 ** get_address_of_m_CachedInputRenderer_65() { return &___m_CachedInputRenderer_65; }
	inline void set_m_CachedInputRenderer_65(CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * value)
	{
		___m_CachedInputRenderer_65 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedInputRenderer_65), (void*)value);
	}

	inline static int32_t get_offset_of_m_LastPosition_66() { return static_cast<int32_t>(offsetof(TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479, ___m_LastPosition_66)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_LastPosition_66() const { return ___m_LastPosition_66; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_LastPosition_66() { return &___m_LastPosition_66; }
	inline void set_m_LastPosition_66(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_LastPosition_66 = value;
	}

	inline static int32_t get_offset_of_m_Mesh_67() { return static_cast<int32_t>(offsetof(TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479, ___m_Mesh_67)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_m_Mesh_67() const { return ___m_Mesh_67; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_m_Mesh_67() { return &___m_Mesh_67; }
	inline void set_m_Mesh_67(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___m_Mesh_67 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Mesh_67), (void*)value);
	}

	inline static int32_t get_offset_of_m_AllowInput_68() { return static_cast<int32_t>(offsetof(TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479, ___m_AllowInput_68)); }
	inline bool get_m_AllowInput_68() const { return ___m_AllowInput_68; }
	inline bool* get_address_of_m_AllowInput_68() { return &___m_AllowInput_68; }
	inline void set_m_AllowInput_68(bool value)
	{
		___m_AllowInput_68 = value;
	}

	inline static int32_t get_offset_of_m_ShouldActivateNextUpdate_69() { return static_cast<int32_t>(offsetof(TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479, ___m_ShouldActivateNextUpdate_69)); }
	inline bool get_m_ShouldActivateNextUpdate_69() const { return ___m_ShouldActivateNextUpdate_69; }
	inline bool* get_address_of_m_ShouldActivateNextUpdate_69() { return &___m_ShouldActivateNextUpdate_69; }
	inline void set_m_ShouldActivateNextUpdate_69(bool value)
	{
		___m_ShouldActivateNextUpdate_69 = value;
	}

	inline static int32_t get_offset_of_m_UpdateDrag_70() { return static_cast<int32_t>(offsetof(TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479, ___m_UpdateDrag_70)); }
	inline bool get_m_UpdateDrag_70() const { return ___m_UpdateDrag_70; }
	inline bool* get_address_of_m_UpdateDrag_70() { return &___m_UpdateDrag_70; }
	inline void set_m_UpdateDrag_70(bool value)
	{
		___m_UpdateDrag_70 = value;
	}

	inline static int32_t get_offset_of_m_DragPositionOutOfBounds_71() { return static_cast<int32_t>(offsetof(TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479, ___m_DragPositionOutOfBounds_71)); }
	inline bool get_m_DragPositionOutOfBounds_71() const { return ___m_DragPositionOutOfBounds_71; }
	inline bool* get_address_of_m_DragPositionOutOfBounds_71() { return &___m_DragPositionOutOfBounds_71; }
	inline void set_m_DragPositionOutOfBounds_71(bool value)
	{
		___m_DragPositionOutOfBounds_71 = value;
	}

	inline static int32_t get_offset_of_m_CaretVisible_74() { return static_cast<int32_t>(offsetof(TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479, ___m_CaretVisible_74)); }
	inline bool get_m_CaretVisible_74() const { return ___m_CaretVisible_74; }
	inline bool* get_address_of_m_CaretVisible_74() { return &___m_CaretVisible_74; }
	inline void set_m_CaretVisible_74(bool value)
	{
		___m_CaretVisible_74 = value;
	}

	inline static int32_t get_offset_of_m_BlinkCoroutine_75() { return static_cast<int32_t>(offsetof(TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479, ___m_BlinkCoroutine_75)); }
	inline Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * get_m_BlinkCoroutine_75() const { return ___m_BlinkCoroutine_75; }
	inline Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC ** get_address_of_m_BlinkCoroutine_75() { return &___m_BlinkCoroutine_75; }
	inline void set_m_BlinkCoroutine_75(Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * value)
	{
		___m_BlinkCoroutine_75 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BlinkCoroutine_75), (void*)value);
	}

	inline static int32_t get_offset_of_m_BlinkStartTime_76() { return static_cast<int32_t>(offsetof(TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479, ___m_BlinkStartTime_76)); }
	inline float get_m_BlinkStartTime_76() const { return ___m_BlinkStartTime_76; }
	inline float* get_address_of_m_BlinkStartTime_76() { return &___m_BlinkStartTime_76; }
	inline void set_m_BlinkStartTime_76(float value)
	{
		___m_BlinkStartTime_76 = value;
	}

	inline static int32_t get_offset_of_m_DragCoroutine_77() { return static_cast<int32_t>(offsetof(TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479, ___m_DragCoroutine_77)); }
	inline Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * get_m_DragCoroutine_77() const { return ___m_DragCoroutine_77; }
	inline Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC ** get_address_of_m_DragCoroutine_77() { return &___m_DragCoroutine_77; }
	inline void set_m_DragCoroutine_77(Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * value)
	{
		___m_DragCoroutine_77 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DragCoroutine_77), (void*)value);
	}

	inline static int32_t get_offset_of_m_OriginalText_78() { return static_cast<int32_t>(offsetof(TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479, ___m_OriginalText_78)); }
	inline String_t* get_m_OriginalText_78() const { return ___m_OriginalText_78; }
	inline String_t** get_address_of_m_OriginalText_78() { return &___m_OriginalText_78; }
	inline void set_m_OriginalText_78(String_t* value)
	{
		___m_OriginalText_78 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OriginalText_78), (void*)value);
	}

	inline static int32_t get_offset_of_m_WasCanceled_79() { return static_cast<int32_t>(offsetof(TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479, ___m_WasCanceled_79)); }
	inline bool get_m_WasCanceled_79() const { return ___m_WasCanceled_79; }
	inline bool* get_address_of_m_WasCanceled_79() { return &___m_WasCanceled_79; }
	inline void set_m_WasCanceled_79(bool value)
	{
		___m_WasCanceled_79 = value;
	}

	inline static int32_t get_offset_of_m_HasDoneFocusTransition_80() { return static_cast<int32_t>(offsetof(TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479, ___m_HasDoneFocusTransition_80)); }
	inline bool get_m_HasDoneFocusTransition_80() const { return ___m_HasDoneFocusTransition_80; }
	inline bool* get_address_of_m_HasDoneFocusTransition_80() { return &___m_HasDoneFocusTransition_80; }
	inline void set_m_HasDoneFocusTransition_80(bool value)
	{
		___m_HasDoneFocusTransition_80 = value;
	}

	inline static int32_t get_offset_of_m_WaitForSecondsRealtime_81() { return static_cast<int32_t>(offsetof(TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479, ___m_WaitForSecondsRealtime_81)); }
	inline WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739 * get_m_WaitForSecondsRealtime_81() const { return ___m_WaitForSecondsRealtime_81; }
	inline WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739 ** get_address_of_m_WaitForSecondsRealtime_81() { return &___m_WaitForSecondsRealtime_81; }
	inline void set_m_WaitForSecondsRealtime_81(WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739 * value)
	{
		___m_WaitForSecondsRealtime_81 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_WaitForSecondsRealtime_81), (void*)value);
	}

	inline static int32_t get_offset_of_m_PreventCallback_82() { return static_cast<int32_t>(offsetof(TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479, ___m_PreventCallback_82)); }
	inline bool get_m_PreventCallback_82() const { return ___m_PreventCallback_82; }
	inline bool* get_address_of_m_PreventCallback_82() { return &___m_PreventCallback_82; }
	inline void set_m_PreventCallback_82(bool value)
	{
		___m_PreventCallback_82 = value;
	}

	inline static int32_t get_offset_of_m_TouchKeyboardAllowsInPlaceEditing_83() { return static_cast<int32_t>(offsetof(TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479, ___m_TouchKeyboardAllowsInPlaceEditing_83)); }
	inline bool get_m_TouchKeyboardAllowsInPlaceEditing_83() const { return ___m_TouchKeyboardAllowsInPlaceEditing_83; }
	inline bool* get_address_of_m_TouchKeyboardAllowsInPlaceEditing_83() { return &___m_TouchKeyboardAllowsInPlaceEditing_83; }
	inline void set_m_TouchKeyboardAllowsInPlaceEditing_83(bool value)
	{
		___m_TouchKeyboardAllowsInPlaceEditing_83 = value;
	}

	inline static int32_t get_offset_of_m_IsTextComponentUpdateRequired_84() { return static_cast<int32_t>(offsetof(TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479, ___m_IsTextComponentUpdateRequired_84)); }
	inline bool get_m_IsTextComponentUpdateRequired_84() const { return ___m_IsTextComponentUpdateRequired_84; }
	inline bool* get_address_of_m_IsTextComponentUpdateRequired_84() { return &___m_IsTextComponentUpdateRequired_84; }
	inline void set_m_IsTextComponentUpdateRequired_84(bool value)
	{
		___m_IsTextComponentUpdateRequired_84 = value;
	}

	inline static int32_t get_offset_of_m_IsScrollbarUpdateRequired_85() { return static_cast<int32_t>(offsetof(TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479, ___m_IsScrollbarUpdateRequired_85)); }
	inline bool get_m_IsScrollbarUpdateRequired_85() const { return ___m_IsScrollbarUpdateRequired_85; }
	inline bool* get_address_of_m_IsScrollbarUpdateRequired_85() { return &___m_IsScrollbarUpdateRequired_85; }
	inline void set_m_IsScrollbarUpdateRequired_85(bool value)
	{
		___m_IsScrollbarUpdateRequired_85 = value;
	}

	inline static int32_t get_offset_of_m_IsUpdatingScrollbarValues_86() { return static_cast<int32_t>(offsetof(TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479, ___m_IsUpdatingScrollbarValues_86)); }
	inline bool get_m_IsUpdatingScrollbarValues_86() const { return ___m_IsUpdatingScrollbarValues_86; }
	inline bool* get_address_of_m_IsUpdatingScrollbarValues_86() { return &___m_IsUpdatingScrollbarValues_86; }
	inline void set_m_IsUpdatingScrollbarValues_86(bool value)
	{
		___m_IsUpdatingScrollbarValues_86 = value;
	}

	inline static int32_t get_offset_of_m_isLastKeyBackspace_87() { return static_cast<int32_t>(offsetof(TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479, ___m_isLastKeyBackspace_87)); }
	inline bool get_m_isLastKeyBackspace_87() const { return ___m_isLastKeyBackspace_87; }
	inline bool* get_address_of_m_isLastKeyBackspace_87() { return &___m_isLastKeyBackspace_87; }
	inline void set_m_isLastKeyBackspace_87(bool value)
	{
		___m_isLastKeyBackspace_87 = value;
	}

	inline static int32_t get_offset_of_m_PointerDownClickStartTime_88() { return static_cast<int32_t>(offsetof(TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479, ___m_PointerDownClickStartTime_88)); }
	inline float get_m_PointerDownClickStartTime_88() const { return ___m_PointerDownClickStartTime_88; }
	inline float* get_address_of_m_PointerDownClickStartTime_88() { return &___m_PointerDownClickStartTime_88; }
	inline void set_m_PointerDownClickStartTime_88(float value)
	{
		___m_PointerDownClickStartTime_88 = value;
	}

	inline static int32_t get_offset_of_m_KeyDownStartTime_89() { return static_cast<int32_t>(offsetof(TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479, ___m_KeyDownStartTime_89)); }
	inline float get_m_KeyDownStartTime_89() const { return ___m_KeyDownStartTime_89; }
	inline float* get_address_of_m_KeyDownStartTime_89() { return &___m_KeyDownStartTime_89; }
	inline void set_m_KeyDownStartTime_89(float value)
	{
		___m_KeyDownStartTime_89 = value;
	}

	inline static int32_t get_offset_of_m_DoubleClickDelay_90() { return static_cast<int32_t>(offsetof(TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479, ___m_DoubleClickDelay_90)); }
	inline float get_m_DoubleClickDelay_90() const { return ___m_DoubleClickDelay_90; }
	inline float* get_address_of_m_DoubleClickDelay_90() { return &___m_DoubleClickDelay_90; }
	inline void set_m_DoubleClickDelay_90(float value)
	{
		___m_DoubleClickDelay_90 = value;
	}

	inline static int32_t get_offset_of_m_IsModal_91() { return static_cast<int32_t>(offsetof(TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479, ___m_IsModal_91)); }
	inline bool get_m_IsModal_91() const { return ___m_IsModal_91; }
	inline bool* get_address_of_m_IsModal_91() { return &___m_IsModal_91; }
	inline void set_m_IsModal_91(bool value)
	{
		___m_IsModal_91 = value;
	}

	inline static int32_t get_offset_of_m_GlobalFontAsset_93() { return static_cast<int32_t>(offsetof(TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479, ___m_GlobalFontAsset_93)); }
	inline TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * get_m_GlobalFontAsset_93() const { return ___m_GlobalFontAsset_93; }
	inline TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C ** get_address_of_m_GlobalFontAsset_93() { return &___m_GlobalFontAsset_93; }
	inline void set_m_GlobalFontAsset_93(TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * value)
	{
		___m_GlobalFontAsset_93 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GlobalFontAsset_93), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnFocusSelectAll_94() { return static_cast<int32_t>(offsetof(TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479, ___m_OnFocusSelectAll_94)); }
	inline bool get_m_OnFocusSelectAll_94() const { return ___m_OnFocusSelectAll_94; }
	inline bool* get_address_of_m_OnFocusSelectAll_94() { return &___m_OnFocusSelectAll_94; }
	inline void set_m_OnFocusSelectAll_94(bool value)
	{
		___m_OnFocusSelectAll_94 = value;
	}

	inline static int32_t get_offset_of_m_isSelectAll_95() { return static_cast<int32_t>(offsetof(TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479, ___m_isSelectAll_95)); }
	inline bool get_m_isSelectAll_95() const { return ___m_isSelectAll_95; }
	inline bool* get_address_of_m_isSelectAll_95() { return &___m_isSelectAll_95; }
	inline void set_m_isSelectAll_95(bool value)
	{
		___m_isSelectAll_95 = value;
	}

	inline static int32_t get_offset_of_m_ResetOnDeActivation_96() { return static_cast<int32_t>(offsetof(TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479, ___m_ResetOnDeActivation_96)); }
	inline bool get_m_ResetOnDeActivation_96() const { return ___m_ResetOnDeActivation_96; }
	inline bool* get_address_of_m_ResetOnDeActivation_96() { return &___m_ResetOnDeActivation_96; }
	inline void set_m_ResetOnDeActivation_96(bool value)
	{
		___m_ResetOnDeActivation_96 = value;
	}

	inline static int32_t get_offset_of_m_SelectionStillActive_97() { return static_cast<int32_t>(offsetof(TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479, ___m_SelectionStillActive_97)); }
	inline bool get_m_SelectionStillActive_97() const { return ___m_SelectionStillActive_97; }
	inline bool* get_address_of_m_SelectionStillActive_97() { return &___m_SelectionStillActive_97; }
	inline void set_m_SelectionStillActive_97(bool value)
	{
		___m_SelectionStillActive_97 = value;
	}

	inline static int32_t get_offset_of_m_ReleaseSelection_98() { return static_cast<int32_t>(offsetof(TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479, ___m_ReleaseSelection_98)); }
	inline bool get_m_ReleaseSelection_98() const { return ___m_ReleaseSelection_98; }
	inline bool* get_address_of_m_ReleaseSelection_98() { return &___m_ReleaseSelection_98; }
	inline void set_m_ReleaseSelection_98(bool value)
	{
		___m_ReleaseSelection_98 = value;
	}

	inline static int32_t get_offset_of_m_SelectedObject_99() { return static_cast<int32_t>(offsetof(TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479, ___m_SelectedObject_99)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_m_SelectedObject_99() const { return ___m_SelectedObject_99; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_m_SelectedObject_99() { return &___m_SelectedObject_99; }
	inline void set_m_SelectedObject_99(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___m_SelectedObject_99 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedObject_99), (void*)value);
	}

	inline static int32_t get_offset_of_m_RestoreOriginalTextOnEscape_100() { return static_cast<int32_t>(offsetof(TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479, ___m_RestoreOriginalTextOnEscape_100)); }
	inline bool get_m_RestoreOriginalTextOnEscape_100() const { return ___m_RestoreOriginalTextOnEscape_100; }
	inline bool* get_address_of_m_RestoreOriginalTextOnEscape_100() { return &___m_RestoreOriginalTextOnEscape_100; }
	inline void set_m_RestoreOriginalTextOnEscape_100(bool value)
	{
		___m_RestoreOriginalTextOnEscape_100 = value;
	}

	inline static int32_t get_offset_of_m_isRichTextEditingAllowed_101() { return static_cast<int32_t>(offsetof(TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479, ___m_isRichTextEditingAllowed_101)); }
	inline bool get_m_isRichTextEditingAllowed_101() const { return ___m_isRichTextEditingAllowed_101; }
	inline bool* get_address_of_m_isRichTextEditingAllowed_101() { return &___m_isRichTextEditingAllowed_101; }
	inline void set_m_isRichTextEditingAllowed_101(bool value)
	{
		___m_isRichTextEditingAllowed_101 = value;
	}

	inline static int32_t get_offset_of_m_LineLimit_102() { return static_cast<int32_t>(offsetof(TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479, ___m_LineLimit_102)); }
	inline int32_t get_m_LineLimit_102() const { return ___m_LineLimit_102; }
	inline int32_t* get_address_of_m_LineLimit_102() { return &___m_LineLimit_102; }
	inline void set_m_LineLimit_102(int32_t value)
	{
		___m_LineLimit_102 = value;
	}

	inline static int32_t get_offset_of_m_InputValidator_103() { return static_cast<int32_t>(offsetof(TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479, ___m_InputValidator_103)); }
	inline TMP_InputValidator_t4C673E12211AFB82AAF94D9DEA556FDC306E69CD * get_m_InputValidator_103() const { return ___m_InputValidator_103; }
	inline TMP_InputValidator_t4C673E12211AFB82AAF94D9DEA556FDC306E69CD ** get_address_of_m_InputValidator_103() { return &___m_InputValidator_103; }
	inline void set_m_InputValidator_103(TMP_InputValidator_t4C673E12211AFB82AAF94D9DEA556FDC306E69CD * value)
	{
		___m_InputValidator_103 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InputValidator_103), (void*)value);
	}

	inline static int32_t get_offset_of_m_isSelected_104() { return static_cast<int32_t>(offsetof(TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479, ___m_isSelected_104)); }
	inline bool get_m_isSelected_104() const { return ___m_isSelected_104; }
	inline bool* get_address_of_m_isSelected_104() { return &___m_isSelected_104; }
	inline void set_m_isSelected_104(bool value)
	{
		___m_isSelected_104 = value;
	}

	inline static int32_t get_offset_of_m_IsStringPositionDirty_105() { return static_cast<int32_t>(offsetof(TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479, ___m_IsStringPositionDirty_105)); }
	inline bool get_m_IsStringPositionDirty_105() const { return ___m_IsStringPositionDirty_105; }
	inline bool* get_address_of_m_IsStringPositionDirty_105() { return &___m_IsStringPositionDirty_105; }
	inline void set_m_IsStringPositionDirty_105(bool value)
	{
		___m_IsStringPositionDirty_105 = value;
	}

	inline static int32_t get_offset_of_m_IsCaretPositionDirty_106() { return static_cast<int32_t>(offsetof(TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479, ___m_IsCaretPositionDirty_106)); }
	inline bool get_m_IsCaretPositionDirty_106() const { return ___m_IsCaretPositionDirty_106; }
	inline bool* get_address_of_m_IsCaretPositionDirty_106() { return &___m_IsCaretPositionDirty_106; }
	inline void set_m_IsCaretPositionDirty_106(bool value)
	{
		___m_IsCaretPositionDirty_106 = value;
	}

	inline static int32_t get_offset_of_m_forceRectTransformAdjustment_107() { return static_cast<int32_t>(offsetof(TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479, ___m_forceRectTransformAdjustment_107)); }
	inline bool get_m_forceRectTransformAdjustment_107() const { return ___m_forceRectTransformAdjustment_107; }
	inline bool* get_address_of_m_forceRectTransformAdjustment_107() { return &___m_forceRectTransformAdjustment_107; }
	inline void set_m_forceRectTransformAdjustment_107(bool value)
	{
		___m_forceRectTransformAdjustment_107 = value;
	}

	inline static int32_t get_offset_of_m_ProcessingEvent_108() { return static_cast<int32_t>(offsetof(TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479, ___m_ProcessingEvent_108)); }
	inline Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * get_m_ProcessingEvent_108() const { return ___m_ProcessingEvent_108; }
	inline Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 ** get_address_of_m_ProcessingEvent_108() { return &___m_ProcessingEvent_108; }
	inline void set_m_ProcessingEvent_108(Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * value)
	{
		___m_ProcessingEvent_108 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ProcessingEvent_108), (void*)value);
	}
};

struct TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479_StaticFields
{
public:
	// System.Char[] TMPro.TMP_InputField_ConsoleEdit::kSeparators
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___kSeparators_21;

public:
	inline static int32_t get_offset_of_kSeparators_21() { return static_cast<int32_t>(offsetof(TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479_StaticFields, ___kSeparators_21)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_kSeparators_21() const { return ___kSeparators_21; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_kSeparators_21() { return &___kSeparators_21; }
	inline void set_kSeparators_21(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___kSeparators_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___kSeparators_21), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_m38CD236F782AA440F6DDB5D90B4C9DA24CDBA3A7_gshared (UnityEvent_1_t9E897A46A46C78F7104A831E63BB081546EFFF0D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`3<System.Object,System.Int32,System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_3__ctor_mDAFC5615641C9252BAA08BCCC90C90101C91603A_gshared (UnityEvent_3_tFC992AA557296F35E887CA6A6D486BAD05CBE7E8 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32Enum>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_m9EEAAD8CC96132F8F656844953FD64FF5390B92A_gshared (UnityEvent_1_tB72EF438E2905C3F0C9BDCA3CA7B1016767E8841 * __this, const RuntimeMethod* method);
// System.Void System.Nullable`1<UnityEngine.Color>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m04D6D6F6B0D572ED38D3E5CB80E2528C5E6360BD_gshared (Nullable_1_tAF01623AB359AB6D460A6F432BF98EA08C7F9C60 * __this, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  p0, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_unscaledTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_unscaledTime_m57F78B855097C5BA632CF9BE60667A9DEBCAA472 (const RuntimeMethod* method);
// System.Boolean TMPro.TMP_InputField_ConsoleEdit::get_hasSelection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TMP_InputField_ConsoleEdit_get_hasSelection_m458C2499D9ADD555DA984A4F11471D8577F8E469 (TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479 * __this, const RuntimeMethod* method);
// System.Void TMPro.TMP_InputField_ConsoleEdit::MarkGeometryAsDirty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_InputField_ConsoleEdit_MarkGeometryAsDirty_m5A1D96CB0342B04CFE7BC804C138660AF932E638 (TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479 * __this, const RuntimeMethod* method);
// System.Boolean TMPro.TMP_InputField_ConsoleEdit::get_isFocused()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TMP_InputField_ConsoleEdit_get_isFocused_m692D3E97BCE66997EC296D02BDC1BE98944ACE2A (TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33 (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * __this, const RuntimeMethod* method);
// UnityEngine.RectTransform TMPro.TMP_InputField_ConsoleEdit::get_textViewport()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * TMP_InputField_ConsoleEdit_get_textViewport_m6775CE42EDFEAE5A58518426FFC460745EA43575 (TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  PointerEventData_get_position_m00FFBA0CB6385B8E8B82BE9C8AAC45E027B2D061 (PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * __this, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.EventSystems.PointerEventData::get_pressEventCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * PointerEventData_get_pressEventCamera_m67D6A0046313FF44CD3071EA68691846203C1756 (PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.RectTransformUtility::ScreenPointToLocalPointInRectangle(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RectTransformUtility_ScreenPointToLocalPointInRectangle_m2C389D4DCBB3CADB51A793702F13DF7CE837E153 (RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * p0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  p1, Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * p2, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * p3, const RuntimeMethod* method);
// UnityEngine.Rect UnityEngine.RectTransform::get_rect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t35B976DE901B5423C11705E156938EA27AB402CE  RectTransform_get_rect_mE5F283FCB99A66403AC1F0607CA49C156D73A15E (RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * __this, const RuntimeMethod* method);
// System.Boolean TMPro.TMP_InputField_ConsoleEdit::get_multiLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TMP_InputField_ConsoleEdit_get_multiLine_m2CCED77D097E104C8A265DE9807EF28EDD863293 (TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_yMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_yMax_m8AA5E92C322AF3FF571330F00579DA864F33341B (Rect_t35B976DE901B5423C11705E156938EA27AB402CE * __this, const RuntimeMethod* method);
// System.Void TMPro.TMP_InputField_ConsoleEdit::MoveUp(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_InputField_ConsoleEdit_MoveUp_m4F0A1731CBD39C5B25C7D31E58EA00171207BBA3 (TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479 * __this, bool ___shift0, bool ___goToFirstChar1, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_yMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_yMin_m31EDC3262BE39D2F6464B15397F882237E6158C3 (Rect_t35B976DE901B5423C11705E156938EA27AB402CE * __this, const RuntimeMethod* method);
// System.Void TMPro.TMP_InputField_ConsoleEdit::MoveDown(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_InputField_ConsoleEdit_MoveDown_m26C61B9B24B05466CEAEB640BF0F39FAC689DB90 (TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479 * __this, bool ___shift0, bool ___goToLastChar1, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_xMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_xMin_mFDFA74F66595FD2B8CE360183D1A92B575F0A76E (Rect_t35B976DE901B5423C11705E156938EA27AB402CE * __this, const RuntimeMethod* method);
// System.Void TMPro.TMP_InputField_ConsoleEdit::MoveLeft(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_InputField_ConsoleEdit_MoveLeft_m46B396E3B80FF508ADFDD55B70A8AE480123AFBA (TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479 * __this, bool ___shift0, bool ___ctrl1, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_xMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_xMax_mA16D7C3C2F30F8608719073ED79028C11CE90983 (Rect_t35B976DE901B5423C11705E156938EA27AB402CE * __this, const RuntimeMethod* method);
// System.Void TMPro.TMP_InputField_ConsoleEdit::MoveRight(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_InputField_ConsoleEdit_MoveRight_mB38AFCB8546BB8E3FC9314F2450F5B80909ED8F9 (TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479 * __this, bool ___shift0, bool ___ctrl1, const RuntimeMethod* method);
// System.Void TMPro.TMP_InputField_ConsoleEdit::UpdateLabel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_InputField_ConsoleEdit_UpdateLabel_m120F56C5820072C5528BB1FDAACBC772C91F4419 (TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSecondsRealtime::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSecondsRealtime__ctor_m775503EC1F4963D8E5BBDD7989B40F6A000E0525 (WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739 * __this, float p0, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSecondsRealtime::set_waitTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSecondsRealtime_set_waitTime_m867F4482BEE354E33A6FD9191344D74B9CC8C790 (WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739 * __this, float p0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.String>::.ctor()
inline void UnityEvent_1__ctor_mEAC66A07E9EE31DAB32788A5C29B5E2D0B239E91 (UnityEvent_1_tACA444CD8B2CBDCD9393629F06117A47C27A8F15 * __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tACA444CD8B2CBDCD9393629F06117A47C27A8F15 *, const RuntimeMethod*))UnityEvent_1__ctor_m38CD236F782AA440F6DDB5D90B4C9DA24CDBA3A7_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`3<System.String,System.Int32,System.Int32>::.ctor()
inline void UnityEvent_3__ctor_m2B3ACFAA04EE3B8B19C0774ABE9F4511BD871713 (UnityEvent_3_t3CDB5DD99C7FB23EFDB392344A499C4B6EEC5930 * __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_3_t3CDB5DD99C7FB23EFDB392344A499C4B6EEC5930 *, const RuntimeMethod*))UnityEvent_3__ctor_mDAFC5615641C9252BAA08BCCC90C90101C91603A_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.TouchScreenKeyboard/Status>::.ctor()
inline void UnityEvent_1__ctor_m1BEFBF3C6ACCCF495F4695F40ABAA3CA84A48274 (UnityEvent_1_tCB4B91686362119976C8D499A756C59CB6D6169C * __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tCB4B91686362119976C8D499A756C59CB6D6169C *, const RuntimeMethod*))UnityEvent_1__ctor_m9EEAAD8CC96132F8F656844953FD64FF5390B92A_gshared)(__this, method);
}
// UnityEngine.Color KDebugPackage.DebugDisplay.DebugDisplayBase::get_DefaultFontColour()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  DebugDisplayBase_get_DefaultFontColour_mFB587686A9058B1D5679251FE8BBA6A68736EBF2 (DebugDisplayBase_t7A49B528861B231E746CB11DD89A8E14BE3E93EB * __this, const RuntimeMethod* method);
// System.Void System.Nullable`1<UnityEngine.Color>::.ctor(!0)
inline void Nullable_1__ctor_m04D6D6F6B0D572ED38D3E5CB80E2528C5E6360BD (Nullable_1_tAF01623AB359AB6D460A6F432BF98EA08C7F9C60 * __this, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  p0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_tAF01623AB359AB6D460A6F432BF98EA08C7F9C60 *, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 , const RuntimeMethod*))Nullable_1__ctor_m04D6D6F6B0D572ED38D3E5CB80E2528C5E6360BD_gshared)(__this, p0, method);
}
// System.Void KDebugPackage.DebugDisplay.DebugDisplayBase::DrawText(System.String,System.Boolean,System.Nullable`1<UnityEngine.Color>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugDisplayBase_DrawText_m57EC03CF6F32BC1850C73B27BB421BD94B538F6D (DebugDisplayBase_t7A49B528861B231E746CB11DD89A8E14BE3E93EB * __this, String_t* ___a_text0, bool ___a_bBold1, Nullable_1_tAF01623AB359AB6D460A6F432BF98EA08C7F9C60  ___a_color2, const RuntimeMethod* method);
// System.Void KDebugPackage.DebugDisplay.DebugDisplayBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugDisplayBase__ctor_m3F0F9B90CBF98AB506D96AF6FB644B73ADD880D8 (DebugDisplayBase_t7A49B528861B231E746CB11DD89A8E14BE3E93EB * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TMPro.TMP_InputField_ConsoleEdit_<CaretBlink>d__271::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCaretBlinkU3Ed__271__ctor_mE91AE7EF35D93758C9B9DFC5888BC84E52F06C42 (U3CCaretBlinkU3Ed__271_t0FCB1AD092B373935A2116429583A15663E7C10F * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void TMPro.TMP_InputField_ConsoleEdit_<CaretBlink>d__271::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCaretBlinkU3Ed__271_System_IDisposable_Dispose_m5A01BE8E93F64449806C56709570567DE76094B6 (U3CCaretBlinkU3Ed__271_t0FCB1AD092B373935A2116429583A15663E7C10F * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean TMPro.TMP_InputField_ConsoleEdit_<CaretBlink>d__271::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCaretBlinkU3Ed__271_MoveNext_mF5FB774E696251F4EF81C6CCA7B408C47B4A7E17 (U3CCaretBlinkU3Ed__271_t0FCB1AD092B373935A2116429583A15663E7C10F * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479 * V_1 = NULL;
	float V_2 = 0.0f;
	bool V_3 = false;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0040;
			}
			case 2:
			{
				goto IL_009c;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479 * L_3 = V_1;
		NullCheck(L_3);
		L_3->set_m_CaretVisible_74((bool)1);
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0040:
	{
		__this->set_U3CU3E1__state_0((-1));
		goto IL_00a3;
	}

IL_0049:
	{
		TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479 * L_4 = V_1;
		NullCheck(L_4);
		float L_5 = L_4->get_m_CaretBlinkRate_55();
		V_2 = ((float)((float)(1.0f)/(float)L_5));
		float L_6 = Time_get_unscaledTime_m57F78B855097C5BA632CF9BE60667A9DEBCAA472(/*hidden argument*/NULL);
		TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479 * L_7 = V_1;
		NullCheck(L_7);
		float L_8 = L_7->get_m_BlinkStartTime_76();
		float L_9 = V_2;
		float L_10 = V_2;
		V_3 = (bool)((((float)(fmodf(((float)il2cpp_codegen_subtract((float)L_6, (float)L_8)), L_9))) < ((float)((float)((float)L_10/(float)(2.0f)))))? 1 : 0);
		TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479 * L_11 = V_1;
		NullCheck(L_11);
		bool L_12 = L_11->get_m_CaretVisible_74();
		bool L_13 = V_3;
		if ((((int32_t)L_12) == ((int32_t)L_13)))
		{
			goto IL_008c;
		}
	}
	{
		TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479 * L_14 = V_1;
		bool L_15 = V_3;
		NullCheck(L_14);
		L_14->set_m_CaretVisible_74(L_15);
		TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479 * L_16 = V_1;
		NullCheck(L_16);
		bool L_17 = TMP_InputField_ConsoleEdit_get_hasSelection_m458C2499D9ADD555DA984A4F11471D8577F8E469(L_16, /*hidden argument*/NULL);
		if (L_17)
		{
			goto IL_008c;
		}
	}
	{
		TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479 * L_18 = V_1;
		NullCheck(L_18);
		TMP_InputField_ConsoleEdit_MarkGeometryAsDirty_m5A1D96CB0342B04CFE7BC804C138660AF932E638(L_18, /*hidden argument*/NULL);
	}

IL_008c:
	{
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_009c:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_00a3:
	{
		TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479 * L_19 = V_1;
		NullCheck(L_19);
		bool L_20 = TMP_InputField_ConsoleEdit_get_isFocused_m692D3E97BCE66997EC296D02BDC1BE98944ACE2A(L_19, /*hidden argument*/NULL);
		if (L_20)
		{
			goto IL_00b3;
		}
	}
	{
		TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479 * L_21 = V_1;
		NullCheck(L_21);
		bool L_22 = L_21->get_m_SelectionStillActive_97();
		if (!L_22)
		{
			goto IL_00c0;
		}
	}

IL_00b3:
	{
		TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479 * L_23 = V_1;
		NullCheck(L_23);
		float L_24 = L_23->get_m_CaretBlinkRate_55();
		if ((((float)L_24) > ((float)(0.0f))))
		{
			goto IL_0049;
		}
	}

IL_00c0:
	{
		TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479 * L_25 = V_1;
		NullCheck(L_25);
		L_25->set_m_BlinkCoroutine_75((Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC *)NULL);
		return (bool)0;
	}
}
// System.Object TMPro.TMP_InputField_ConsoleEdit_<CaretBlink>d__271::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCaretBlinkU3Ed__271_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m0F55F1B69ED6165834921D6A12A7287E4D5F2BBD (U3CCaretBlinkU3Ed__271_t0FCB1AD092B373935A2116429583A15663E7C10F * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void TMPro.TMP_InputField_ConsoleEdit_<CaretBlink>d__271::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCaretBlinkU3Ed__271_System_Collections_IEnumerator_Reset_mF6265013EB0DE3BDAD2CD524A725CC6F73B1973B (U3CCaretBlinkU3Ed__271_t0FCB1AD092B373935A2116429583A15663E7C10F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CCaretBlinkU3Ed__271_System_Collections_IEnumerator_Reset_mF6265013EB0DE3BDAD2CD524A725CC6F73B1973B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CCaretBlinkU3Ed__271_System_Collections_IEnumerator_Reset_mF6265013EB0DE3BDAD2CD524A725CC6F73B1973B_RuntimeMethod_var);
	}
}
// System.Object TMPro.TMP_InputField_ConsoleEdit_<CaretBlink>d__271::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCaretBlinkU3Ed__271_System_Collections_IEnumerator_get_Current_mC16D934F72E9EEEA5A8BF850666D0D731E1E9B58 (U3CCaretBlinkU3Ed__271_t0FCB1AD092B373935A2116429583A15663E7C10F * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TMPro.TMP_InputField_ConsoleEdit_<MouseDragOutsideRect>d__289::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMouseDragOutsideRectU3Ed__289__ctor_m63FD80970F6343353B18C5A657D90E89B7A8D070 (U3CMouseDragOutsideRectU3Ed__289_t318F441378057958BE7D68DB758C9849F6ADE2A8 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void TMPro.TMP_InputField_ConsoleEdit_<MouseDragOutsideRect>d__289::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMouseDragOutsideRectU3Ed__289_System_IDisposable_Dispose_m45D95EE09B428D28F8E8017DFB2150D6FB8BFC93 (U3CMouseDragOutsideRectU3Ed__289_t318F441378057958BE7D68DB758C9849F6ADE2A8 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean TMPro.TMP_InputField_ConsoleEdit_<MouseDragOutsideRect>d__289::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CMouseDragOutsideRectU3Ed__289_MoveNext_m1F44699CE4D99C4AE0949F94D8538B64C74FFC77 (U3CMouseDragOutsideRectU3Ed__289_t318F441378057958BE7D68DB758C9849F6ADE2A8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CMouseDragOutsideRectU3Ed__289_MoveNext_m1F44699CE4D99C4AE0949F94D8538B64C74FFC77_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479 * V_1 = NULL;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Rect_t35B976DE901B5423C11705E156938EA27AB402CE  V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	float G_B16_0 = 0.0f;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0115;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		goto IL_011c;
	}

IL_0026:
	{
		TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479 * L_4 = V_1;
		NullCheck(L_4);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_5 = TMP_InputField_ConsoleEdit_get_textViewport_m6775CE42EDFEAE5A58518426FFC460745EA43575(L_4, /*hidden argument*/NULL);
		PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * L_6 = __this->get_eventData_3();
		NullCheck(L_6);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_7 = PointerEventData_get_position_m00FFBA0CB6385B8E8B82BE9C8AAC45E027B2D061(L_6, /*hidden argument*/NULL);
		PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * L_8 = __this->get_eventData_3();
		NullCheck(L_8);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_9 = PointerEventData_get_pressEventCamera_m67D6A0046313FF44CD3071EA68691846203C1756(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t9B90669A72B05A33DD88BEBB817BC9CDBB614BBA_il2cpp_TypeInfo_var);
		RectTransformUtility_ScreenPointToLocalPointInRectangle_m2C389D4DCBB3CADB51A793702F13DF7CE837E153(L_5, L_7, L_9, (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)(&V_2), /*hidden argument*/NULL);
		TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479 * L_10 = V_1;
		NullCheck(L_10);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_11 = TMP_InputField_ConsoleEdit_get_textViewport_m6775CE42EDFEAE5A58518426FFC460745EA43575(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_12 = RectTransform_get_rect_mE5F283FCB99A66403AC1F0607CA49C156D73A15E(L_11, /*hidden argument*/NULL);
		V_3 = L_12;
		TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479 * L_13 = V_1;
		NullCheck(L_13);
		bool L_14 = TMP_InputField_ConsoleEdit_get_multiLine_m2CCED77D097E104C8A265DE9807EF28EDD863293(L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0090;
		}
	}
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_15 = V_2;
		float L_16 = L_15.get_y_1();
		float L_17 = Rect_get_yMax_m8AA5E92C322AF3FF571330F00579DA864F33341B((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_3), /*hidden argument*/NULL);
		if ((!(((float)L_16) > ((float)L_17))))
		{
			goto IL_0077;
		}
	}
	{
		TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479 * L_18 = V_1;
		NullCheck(L_18);
		TMP_InputField_ConsoleEdit_MoveUp_m4F0A1731CBD39C5B25C7D31E58EA00171207BBA3(L_18, (bool)1, (bool)1, /*hidden argument*/NULL);
		goto IL_00c0;
	}

IL_0077:
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_19 = V_2;
		float L_20 = L_19.get_y_1();
		float L_21 = Rect_get_yMin_m31EDC3262BE39D2F6464B15397F882237E6158C3((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_3), /*hidden argument*/NULL);
		if ((!(((float)L_20) < ((float)L_21))))
		{
			goto IL_00c0;
		}
	}
	{
		TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479 * L_22 = V_1;
		NullCheck(L_22);
		TMP_InputField_ConsoleEdit_MoveDown_m26C61B9B24B05466CEAEB640BF0F39FAC689DB90(L_22, (bool)1, (bool)1, /*hidden argument*/NULL);
		goto IL_00c0;
	}

IL_0090:
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_23 = V_2;
		float L_24 = L_23.get_x_0();
		float L_25 = Rect_get_xMin_mFDFA74F66595FD2B8CE360183D1A92B575F0A76E((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_3), /*hidden argument*/NULL);
		if ((!(((float)L_24) < ((float)L_25))))
		{
			goto IL_00a9;
		}
	}
	{
		TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479 * L_26 = V_1;
		NullCheck(L_26);
		TMP_InputField_ConsoleEdit_MoveLeft_m46B396E3B80FF508ADFDD55B70A8AE480123AFBA(L_26, (bool)1, (bool)0, /*hidden argument*/NULL);
		goto IL_00c0;
	}

IL_00a9:
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_27 = V_2;
		float L_28 = L_27.get_x_0();
		float L_29 = Rect_get_xMax_mA16D7C3C2F30F8608719073ED79028C11CE90983((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_3), /*hidden argument*/NULL);
		if ((!(((float)L_28) > ((float)L_29))))
		{
			goto IL_00c0;
		}
	}
	{
		TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479 * L_30 = V_1;
		NullCheck(L_30);
		TMP_InputField_ConsoleEdit_MoveRight_mB38AFCB8546BB8E3FC9314F2450F5B80909ED8F9(L_30, (bool)1, (bool)0, /*hidden argument*/NULL);
	}

IL_00c0:
	{
		TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479 * L_31 = V_1;
		NullCheck(L_31);
		TMP_InputField_ConsoleEdit_UpdateLabel_m120F56C5820072C5528BB1FDAACBC772C91F4419(L_31, /*hidden argument*/NULL);
		TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479 * L_32 = V_1;
		NullCheck(L_32);
		bool L_33 = TMP_InputField_ConsoleEdit_get_multiLine_m2CCED77D097E104C8A265DE9807EF28EDD863293(L_32, /*hidden argument*/NULL);
		if (L_33)
		{
			goto IL_00d5;
		}
	}
	{
		G_B16_0 = (0.05f);
		goto IL_00da;
	}

IL_00d5:
	{
		G_B16_0 = (0.1f);
	}

IL_00da:
	{
		V_4 = G_B16_0;
		TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479 * L_34 = V_1;
		NullCheck(L_34);
		WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739 * L_35 = L_34->get_m_WaitForSecondsRealtime_81();
		if (L_35)
		{
			goto IL_00f3;
		}
	}
	{
		TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479 * L_36 = V_1;
		float L_37 = V_4;
		WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739 * L_38 = (WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739 *)il2cpp_codegen_object_new(WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739_il2cpp_TypeInfo_var);
		WaitForSecondsRealtime__ctor_m775503EC1F4963D8E5BBDD7989B40F6A000E0525(L_38, L_37, /*hidden argument*/NULL);
		NullCheck(L_36);
		L_36->set_m_WaitForSecondsRealtime_81(L_38);
		goto IL_0100;
	}

IL_00f3:
	{
		TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479 * L_39 = V_1;
		NullCheck(L_39);
		WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739 * L_40 = L_39->get_m_WaitForSecondsRealtime_81();
		float L_41 = V_4;
		NullCheck(L_40);
		WaitForSecondsRealtime_set_waitTime_m867F4482BEE354E33A6FD9191344D74B9CC8C790(L_40, L_41, /*hidden argument*/NULL);
	}

IL_0100:
	{
		TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479 * L_42 = V_1;
		NullCheck(L_42);
		WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739 * L_43 = L_42->get_m_WaitForSecondsRealtime_81();
		__this->set_U3CU3E2__current_1(L_43);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0115:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_011c:
	{
		TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479 * L_44 = V_1;
		NullCheck(L_44);
		bool L_45 = L_44->get_m_UpdateDrag_70();
		if (!L_45)
		{
			goto IL_012f;
		}
	}
	{
		TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479 * L_46 = V_1;
		NullCheck(L_46);
		bool L_47 = L_46->get_m_DragPositionOutOfBounds_71();
		if (L_47)
		{
			goto IL_0026;
		}
	}

IL_012f:
	{
		TMP_InputField_ConsoleEdit_t581C3FECBE1C08D9C6A0FC50228ECAE798A1B479 * L_48 = V_1;
		NullCheck(L_48);
		L_48->set_m_DragCoroutine_77((Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC *)NULL);
		return (bool)0;
	}
}
// System.Object TMPro.TMP_InputField_ConsoleEdit_<MouseDragOutsideRect>d__289::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CMouseDragOutsideRectU3Ed__289_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m8E4FE7C0A62C3F47FFBCA9ADE16DD15E83AE7005 (U3CMouseDragOutsideRectU3Ed__289_t318F441378057958BE7D68DB758C9849F6ADE2A8 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void TMPro.TMP_InputField_ConsoleEdit_<MouseDragOutsideRect>d__289::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMouseDragOutsideRectU3Ed__289_System_Collections_IEnumerator_Reset_mAAEC169237DF556E60E30A339BCC0467C72D5A5C (U3CMouseDragOutsideRectU3Ed__289_t318F441378057958BE7D68DB758C9849F6ADE2A8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CMouseDragOutsideRectU3Ed__289_System_Collections_IEnumerator_Reset_mAAEC169237DF556E60E30A339BCC0467C72D5A5C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CMouseDragOutsideRectU3Ed__289_System_Collections_IEnumerator_Reset_mAAEC169237DF556E60E30A339BCC0467C72D5A5C_RuntimeMethod_var);
	}
}
// System.Object TMPro.TMP_InputField_ConsoleEdit_<MouseDragOutsideRect>d__289::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CMouseDragOutsideRectU3Ed__289_System_Collections_IEnumerator_get_Current_m1B55254D45318BEBFAC91B9FE353C47B43946E54 (U3CMouseDragOutsideRectU3Ed__289_t318F441378057958BE7D68DB758C9849F6ADE2A8 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TMPro.TMP_InputField_ConsoleEdit_OnChangeEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnChangeEvent__ctor_m27709A674918DDC866E0929E3FEE7C568C15C78B (OnChangeEvent_t3508BF8D24B925F0E0E06C2E99B96D7F372FFDF4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OnChangeEvent__ctor_m27709A674918DDC866E0929E3FEE7C568C15C78B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mEAC66A07E9EE31DAB32788A5C29B5E2D0B239E91(__this, /*hidden argument*/UnityEvent_1__ctor_mEAC66A07E9EE31DAB32788A5C29B5E2D0B239E91_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  Il2CppChar DelegatePInvokeWrapper_OnValidateInput_t7CE9BEEB4017B2BF3DFBF754BE4115D435F5BD67 (OnValidateInput_t7CE9BEEB4017B2BF3DFBF754BE4115D435F5BD67 * __this, String_t* ___text0, int32_t ___charIndex1, Il2CppChar ___addedChar2, const RuntimeMethod* method)
{
	typedef uint8_t (DEFAULT_CALL *PInvokeFunc)(char*, int32_t, uint8_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___text0' to native representation
	char* ____text0_marshaled = NULL;
	____text0_marshaled = il2cpp_codegen_marshal_string(___text0);

	// Native function invocation
	uint8_t returnValue = il2cppPInvokeFunc(____text0_marshaled, ___charIndex1, static_cast<uint8_t>(___addedChar2));

	// Marshaling cleanup of parameter '___text0' native representation
	il2cpp_codegen_marshal_free(____text0_marshaled);
	____text0_marshaled = NULL;

	return static_cast<Il2CppChar>(returnValue);
}
// System.Void TMPro.TMP_InputField_ConsoleEdit_OnValidateInput::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnValidateInput__ctor_mBABF6C9912296FEC1BEB47338220AC4676F6E36C (OnValidateInput_t7CE9BEEB4017B2BF3DFBF754BE4115D435F5BD67 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Char TMPro.TMP_InputField_ConsoleEdit_OnValidateInput::Invoke(System.String,System.Int32,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar OnValidateInput_Invoke_m422A42E3025E820702E5216AA8F1EC7E9CE87214 (OnValidateInput_t7CE9BEEB4017B2BF3DFBF754BE4115D435F5BD67 * __this, String_t* ___text0, int32_t ___charIndex1, Il2CppChar ___addedChar2, const RuntimeMethod* method)
{
	Il2CppChar result = 0x0;
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef Il2CppChar (*FunctionPointerType) (String_t*, int32_t, Il2CppChar, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___text0, ___charIndex1, ___addedChar2, targetMethod);
			}
			else
			{
				// closed
				typedef Il2CppChar (*FunctionPointerType) (void*, String_t*, int32_t, Il2CppChar, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___text0, ___charIndex1, ___addedChar2, targetMethod);
			}
		}
		else if (___parameterCount != 3)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker2< Il2CppChar, int32_t, Il2CppChar >::Invoke(targetMethod, ___text0, ___charIndex1, ___addedChar2);
					else
						result = GenericVirtFuncInvoker2< Il2CppChar, int32_t, Il2CppChar >::Invoke(targetMethod, ___text0, ___charIndex1, ___addedChar2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< Il2CppChar, int32_t, Il2CppChar >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___text0, ___charIndex1, ___addedChar2);
					else
						result = VirtFuncInvoker2< Il2CppChar, int32_t, Il2CppChar >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___text0, ___charIndex1, ___addedChar2);
				}
			}
			else
			{
				typedef Il2CppChar (*FunctionPointerType) (String_t*, int32_t, Il2CppChar, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___text0, ___charIndex1, ___addedChar2, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef Il2CppChar (*FunctionPointerType) (String_t*, int32_t, Il2CppChar, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___text0, ___charIndex1, ___addedChar2, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker3< Il2CppChar, String_t*, int32_t, Il2CppChar >::Invoke(targetMethod, targetThis, ___text0, ___charIndex1, ___addedChar2);
					else
						result = GenericVirtFuncInvoker3< Il2CppChar, String_t*, int32_t, Il2CppChar >::Invoke(targetMethod, targetThis, ___text0, ___charIndex1, ___addedChar2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker3< Il2CppChar, String_t*, int32_t, Il2CppChar >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___text0, ___charIndex1, ___addedChar2);
					else
						result = VirtFuncInvoker3< Il2CppChar, String_t*, int32_t, Il2CppChar >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___text0, ___charIndex1, ___addedChar2);
				}
			}
			else
			{
				typedef Il2CppChar (*FunctionPointerType) (void*, String_t*, int32_t, Il2CppChar, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___text0, ___charIndex1, ___addedChar2, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult TMPro.TMP_InputField_ConsoleEdit_OnValidateInput::BeginInvoke(System.String,System.Int32,System.Char,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnValidateInput_BeginInvoke_m00285FE10B1ADF4570D9A3A52EB9EBBA5E47B02B (OnValidateInput_t7CE9BEEB4017B2BF3DFBF754BE4115D435F5BD67 * __this, String_t* ___text0, int32_t ___charIndex1, Il2CppChar ___addedChar2, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OnValidateInput_BeginInvoke_m00285FE10B1ADF4570D9A3A52EB9EBBA5E47B02B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___text0;
	__d_args[1] = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &___charIndex1);
	__d_args[2] = Box(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_il2cpp_TypeInfo_var, &___addedChar2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Char TMPro.TMP_InputField_ConsoleEdit_OnValidateInput::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar OnValidateInput_EndInvoke_m491B356E938FC5AD281F34C2EC6A9704B0AF2D38 (OnValidateInput_t7CE9BEEB4017B2BF3DFBF754BE4115D435F5BD67 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(Il2CppChar*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TMPro.TMP_InputField_ConsoleEdit_SelectionEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectionEvent__ctor_mF780DBD37844F6B4DF9C2032D16F57C8057BC6BF (SelectionEvent_tD9D56451156CBAD7E3547903B296D44F99533A1B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SelectionEvent__ctor_mF780DBD37844F6B4DF9C2032D16F57C8057BC6BF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mEAC66A07E9EE31DAB32788A5C29B5E2D0B239E91(__this, /*hidden argument*/UnityEvent_1__ctor_mEAC66A07E9EE31DAB32788A5C29B5E2D0B239E91_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TMPro.TMP_InputField_ConsoleEdit_SubmitEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubmitEvent__ctor_mBC1E9A9E88DFE0F0B6A3E2696600F38B7B82429E (SubmitEvent_tB5A3385B64DCE4274DFF6EE320FBEEA1E1E70FEA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SubmitEvent__ctor_mBC1E9A9E88DFE0F0B6A3E2696600F38B7B82429E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mEAC66A07E9EE31DAB32788A5C29B5E2D0B239E91(__this, /*hidden argument*/UnityEvent_1__ctor_mEAC66A07E9EE31DAB32788A5C29B5E2D0B239E91_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TMPro.TMP_InputField_ConsoleEdit_TextSelectionEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextSelectionEvent__ctor_m9253C84B4C66EB3CAA9AA98AE734C6D6DE121810 (TextSelectionEvent_t5FDA432F2E55A23749FF5F8ACE1E6584EC466F16 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextSelectionEvent__ctor_m9253C84B4C66EB3CAA9AA98AE734C6D6DE121810_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_3__ctor_m2B3ACFAA04EE3B8B19C0774ABE9F4511BD871713(__this, /*hidden argument*/UnityEvent_3__ctor_m2B3ACFAA04EE3B8B19C0774ABE9F4511BD871713_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TMPro.TMP_InputField_ConsoleEdit_TouchScreenKeyboardEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchScreenKeyboardEvent__ctor_mF790A813B9F7769383F030E0FB8079CF2ADE5BCD (TouchScreenKeyboardEvent_tCAFB43F41CEA2FDFBAFA1766005E227994730F4B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TouchScreenKeyboardEvent__ctor_mF790A813B9F7769383F030E0FB8079CF2ADE5BCD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m1BEFBF3C6ACCCF495F4695F40ABAA3CA84A48274(__this, /*hidden argument*/UnityEvent_1__ctor_m1BEFBF3C6ACCCF495F4695F40ABAA3CA84A48274_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TutorialWindow::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TutorialWindow_OnGUI_m727F6C4B5F5BDF1309C5347ACB13B7E8ADAD986D (TutorialWindow_tB236F04A1223810C096EECBA845819203B2AF3C4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TutorialWindow_OnGUI_m727F6C4B5F5BDF1309C5347ACB13B7E8ADAD986D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_tAF01623AB359AB6D460A6F432BF98EA08C7F9C60  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_0 = DebugDisplayBase_get_DefaultFontColour_mFB587686A9058B1D5679251FE8BBA6A68736EBF2(__this, /*hidden argument*/NULL);
		Nullable_1_tAF01623AB359AB6D460A6F432BF98EA08C7F9C60  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Nullable_1__ctor_m04D6D6F6B0D572ED38D3E5CB80E2528C5E6360BD((&L_1), L_0, /*hidden argument*/Nullable_1__ctor_m04D6D6F6B0D572ED38D3E5CB80E2528C5E6360BD_RuntimeMethod_var);
		DebugDisplayBase_DrawText_m57EC03CF6F32BC1850C73B27BB421BD94B538F6D(__this, _stringLiteral38765BD8B74D883322E68EFB3D5992A2B0EC302D, (bool)1, L_1, /*hidden argument*/NULL);
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_tAF01623AB359AB6D460A6F432BF98EA08C7F9C60 ));
		Nullable_1_tAF01623AB359AB6D460A6F432BF98EA08C7F9C60  L_2 = V_0;
		DebugDisplayBase_DrawText_m57EC03CF6F32BC1850C73B27BB421BD94B538F6D(__this, _stringLiteral121F6A09D5992B2D14139D41A1574C0AA639002E, (bool)0, L_2, /*hidden argument*/NULL);
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_tAF01623AB359AB6D460A6F432BF98EA08C7F9C60 ));
		Nullable_1_tAF01623AB359AB6D460A6F432BF98EA08C7F9C60  L_3 = V_0;
		DebugDisplayBase_DrawText_m57EC03CF6F32BC1850C73B27BB421BD94B538F6D(__this, _stringLiteralB3B894885FC61377308A11F0620E629AA644A319, (bool)0, L_3, /*hidden argument*/NULL);
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_tAF01623AB359AB6D460A6F432BF98EA08C7F9C60 ));
		Nullable_1_tAF01623AB359AB6D460A6F432BF98EA08C7F9C60  L_4 = V_0;
		DebugDisplayBase_DrawText_m57EC03CF6F32BC1850C73B27BB421BD94B538F6D(__this, _stringLiteral7875DE8D40D6311E40F0A02EFFA10A3B01F859DD, (bool)0, L_4, /*hidden argument*/NULL);
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_tAF01623AB359AB6D460A6F432BF98EA08C7F9C60 ));
		Nullable_1_tAF01623AB359AB6D460A6F432BF98EA08C7F9C60  L_5 = V_0;
		DebugDisplayBase_DrawText_m57EC03CF6F32BC1850C73B27BB421BD94B538F6D(__this, _stringLiteral7875DE8D40D6311E40F0A02EFFA10A3B01F859DD, (bool)0, L_5, /*hidden argument*/NULL);
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_tAF01623AB359AB6D460A6F432BF98EA08C7F9C60 ));
		Nullable_1_tAF01623AB359AB6D460A6F432BF98EA08C7F9C60  L_6 = V_0;
		DebugDisplayBase_DrawText_m57EC03CF6F32BC1850C73B27BB421BD94B538F6D(__this, _stringLiteral37CF9896CA13AFB1696C7B34F76AE115296E283C, (bool)0, L_6, /*hidden argument*/NULL);
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_tAF01623AB359AB6D460A6F432BF98EA08C7F9C60 ));
		Nullable_1_tAF01623AB359AB6D460A6F432BF98EA08C7F9C60  L_7 = V_0;
		DebugDisplayBase_DrawText_m57EC03CF6F32BC1850C73B27BB421BD94B538F6D(__this, _stringLiteralB84B2BF13E923E3FBB67A0FD42BC0AAAFBBE8EA3, (bool)0, L_7, /*hidden argument*/NULL);
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_tAF01623AB359AB6D460A6F432BF98EA08C7F9C60 ));
		Nullable_1_tAF01623AB359AB6D460A6F432BF98EA08C7F9C60  L_8 = V_0;
		DebugDisplayBase_DrawText_m57EC03CF6F32BC1850C73B27BB421BD94B538F6D(__this, _stringLiteralB3B894885FC61377308A11F0620E629AA644A319, (bool)0, L_8, /*hidden argument*/NULL);
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_tAF01623AB359AB6D460A6F432BF98EA08C7F9C60 ));
		Nullable_1_tAF01623AB359AB6D460A6F432BF98EA08C7F9C60  L_9 = V_0;
		DebugDisplayBase_DrawText_m57EC03CF6F32BC1850C73B27BB421BD94B538F6D(__this, _stringLiteral3ACCC4F9C5FB49473DD0F6EF8926BBC697C83F32, (bool)0, L_9, /*hidden argument*/NULL);
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_tAF01623AB359AB6D460A6F432BF98EA08C7F9C60 ));
		Nullable_1_tAF01623AB359AB6D460A6F432BF98EA08C7F9C60  L_10 = V_0;
		DebugDisplayBase_DrawText_m57EC03CF6F32BC1850C73B27BB421BD94B538F6D(__this, _stringLiteralEB34EE46427E156C7D6E885A549E3E894BD8A8C1, (bool)0, L_10, /*hidden argument*/NULL);
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_tAF01623AB359AB6D460A6F432BF98EA08C7F9C60 ));
		Nullable_1_tAF01623AB359AB6D460A6F432BF98EA08C7F9C60  L_11 = V_0;
		DebugDisplayBase_DrawText_m57EC03CF6F32BC1850C73B27BB421BD94B538F6D(__this, _stringLiteral7B932E7704C56AC279074ADF9CBEED98BB90A289, (bool)0, L_11, /*hidden argument*/NULL);
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_tAF01623AB359AB6D460A6F432BF98EA08C7F9C60 ));
		Nullable_1_tAF01623AB359AB6D460A6F432BF98EA08C7F9C60  L_12 = V_0;
		DebugDisplayBase_DrawText_m57EC03CF6F32BC1850C73B27BB421BD94B538F6D(__this, _stringLiteralB3B894885FC61377308A11F0620E629AA644A319, (bool)0, L_12, /*hidden argument*/NULL);
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_tAF01623AB359AB6D460A6F432BF98EA08C7F9C60 ));
		Nullable_1_tAF01623AB359AB6D460A6F432BF98EA08C7F9C60  L_13 = V_0;
		DebugDisplayBase_DrawText_m57EC03CF6F32BC1850C73B27BB421BD94B538F6D(__this, _stringLiteral76CE3EBFC6675CC540CE9B3B63F09608EC3AEB3D, (bool)0, L_13, /*hidden argument*/NULL);
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_tAF01623AB359AB6D460A6F432BF98EA08C7F9C60 ));
		Nullable_1_tAF01623AB359AB6D460A6F432BF98EA08C7F9C60  L_14 = V_0;
		DebugDisplayBase_DrawText_m57EC03CF6F32BC1850C73B27BB421BD94B538F6D(__this, _stringLiteral4FEF2BB715D18FCB07DD22AA60DBD3D68A85561C, (bool)0, L_14, /*hidden argument*/NULL);
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_tAF01623AB359AB6D460A6F432BF98EA08C7F9C60 ));
		Nullable_1_tAF01623AB359AB6D460A6F432BF98EA08C7F9C60  L_15 = V_0;
		DebugDisplayBase_DrawText_m57EC03CF6F32BC1850C73B27BB421BD94B538F6D(__this, _stringLiteralF9AA613081F5DCB668F8AEC32DD0F7637197E0F2, (bool)0, L_15, /*hidden argument*/NULL);
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_tAF01623AB359AB6D460A6F432BF98EA08C7F9C60 ));
		Nullable_1_tAF01623AB359AB6D460A6F432BF98EA08C7F9C60  L_16 = V_0;
		DebugDisplayBase_DrawText_m57EC03CF6F32BC1850C73B27BB421BD94B538F6D(__this, _stringLiteralB3B894885FC61377308A11F0620E629AA644A319, (bool)0, L_16, /*hidden argument*/NULL);
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_tAF01623AB359AB6D460A6F432BF98EA08C7F9C60 ));
		Nullable_1_tAF01623AB359AB6D460A6F432BF98EA08C7F9C60  L_17 = V_0;
		DebugDisplayBase_DrawText_m57EC03CF6F32BC1850C73B27BB421BD94B538F6D(__this, _stringLiteralB4D50563D15BBABECC5A80B480EE8FD0952E3F83, (bool)0, L_17, /*hidden argument*/NULL);
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_tAF01623AB359AB6D460A6F432BF98EA08C7F9C60 ));
		Nullable_1_tAF01623AB359AB6D460A6F432BF98EA08C7F9C60  L_18 = V_0;
		DebugDisplayBase_DrawText_m57EC03CF6F32BC1850C73B27BB421BD94B538F6D(__this, _stringLiteral2BE17AA181D8226BFAD83CE993E838FA79DCCE4D, (bool)0, L_18, /*hidden argument*/NULL);
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_tAF01623AB359AB6D460A6F432BF98EA08C7F9C60 ));
		Nullable_1_tAF01623AB359AB6D460A6F432BF98EA08C7F9C60  L_19 = V_0;
		DebugDisplayBase_DrawText_m57EC03CF6F32BC1850C73B27BB421BD94B538F6D(__this, _stringLiteral1263B9B24F99331DB3A7D8749667B4DD2C6DBF57, (bool)0, L_19, /*hidden argument*/NULL);
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_tAF01623AB359AB6D460A6F432BF98EA08C7F9C60 ));
		Nullable_1_tAF01623AB359AB6D460A6F432BF98EA08C7F9C60  L_20 = V_0;
		DebugDisplayBase_DrawText_m57EC03CF6F32BC1850C73B27BB421BD94B538F6D(__this, _stringLiteralB3B894885FC61377308A11F0620E629AA644A319, (bool)0, L_20, /*hidden argument*/NULL);
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_tAF01623AB359AB6D460A6F432BF98EA08C7F9C60 ));
		Nullable_1_tAF01623AB359AB6D460A6F432BF98EA08C7F9C60  L_21 = V_0;
		DebugDisplayBase_DrawText_m57EC03CF6F32BC1850C73B27BB421BD94B538F6D(__this, _stringLiteral55C67F49E292570FD4DDD1B9924883780735093D, (bool)0, L_21, /*hidden argument*/NULL);
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_tAF01623AB359AB6D460A6F432BF98EA08C7F9C60 ));
		Nullable_1_tAF01623AB359AB6D460A6F432BF98EA08C7F9C60  L_22 = V_0;
		DebugDisplayBase_DrawText_m57EC03CF6F32BC1850C73B27BB421BD94B538F6D(__this, _stringLiteral8BF95EA372568C7A254BA9FADA5F6F1701EBC5B5, (bool)0, L_22, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TutorialWindow::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TutorialWindow__ctor_mF8E9273264423EED094822F006B0331E91688771 (TutorialWindow_tB236F04A1223810C096EECBA845819203B2AF3C4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TutorialWindow__ctor_mF8E9273264423EED094822F006B0331E91688771_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DebugDisplayBase_t7A49B528861B231E746CB11DD89A8E14BE3E93EB_il2cpp_TypeInfo_var);
		DebugDisplayBase__ctor_m3F0F9B90CBF98AB506D96AF6FB644B73ADD880D8(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
