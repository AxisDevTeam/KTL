#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractableRegisteredEventArgs>
struct Action_1_tB8CA4FD5AE31D22DB74D262F9D03ACFA1C0B2CA8;
// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractableUnregisteredEventArgs>
struct Action_1_tCB862C932EAF49C2968D3AD96CEDF6D2DFED41F0;
// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractorRegisteredEventArgs>
struct Action_1_tBE7729820CBA793D8D5D57207BA5938B012863C5;
// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractorUnregisteredEventArgs>
struct Action_1_t9A06C49FCB3ADF4C984887951A3DC1DA07CFFBF0;
// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>
struct Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRInteractor,UnityEngine.GameObject>
struct Dictionary_2_t0582B78260B6945022313E08E6945DDC2F648137;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable,UnityEngine.Pose>
struct Dictionary_2_tC8CDB97AFC9E538A6AF3126874A321065572174C;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor,UnityEngine.Pose>
struct Dictionary_2_tB8AE3DDA8EA7929AFBFE51780B779705E45D363D;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.HashSet`1<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable>
struct HashSet_1_t442C406BB3DAA0091640BF5E45C6E255DCE9BC88;
// System.Collections.Generic.HashSet`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable>
struct HashSet_1_t393CE008A524DA1CCED603B4564BFAB7574A9EDF;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.Collider>
struct List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable>
struct List_1_tEDA90BAEBDE9ABE36C7E54D6A64EE12E2E3A93F0;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor>
struct List_1_tEDB0482081C5116241976F52FC9FF27C4DF3E5A1;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable>
struct List_1_tC3FDFEE51803D5C604CED1C088BC2B8A566E0E5B;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor>
struct List_1_t4A80F0DB75823AFFF5BFC6F95355F0079537C102;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable>
struct List_1_t02510C493B34D49F210C22C40442D863A08509CB;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor>
struct List_1_tC6684CD164AA8009B3DC3C06499A47813321B877;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRSimpleInteractable>
struct List_1_tEB4CD4A0B4ED2014FB371ED7CE298DE95E157E5D;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A;
// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>
struct UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B;
// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>
struct UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E;
// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor>
struct UnityAction_1_tDAC4559DCCBC652E7AF517C7243B19899DE2AAD9;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205;
// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>
struct UnityEvent_1_t8C99CC340A51BB1718EAC4102D4F90EE78F667F8;
// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>
struct UnityEvent_1_t6653C165067CA012C0771D17D5AF3506C58F446B;
// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor>
struct UnityEvent_1_tA1FEDF2DDBADC48134C49F2E20E0FC2BA29AA88D;
// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>[]
struct Action_1U5BU5D_tB846E6FE2326CCD34124D1E5D70117C9D33DEE76;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Collider[]
struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// UnityEngine.InputSystem.InputBinding[]
struct InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// UnityEngine.XR.Interaction.Toolkit.XRSimpleInteractable[]
struct XRSimpleInteractableU5BU5D_tD412F0AF080508BAAD7A04DB32A343DF9D04ECDA;
// Readme/Section[]
struct SectionU5BU5D_t9D3017555FFF42E71BE91904A2486EAF429F24C4;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// UnityEngine.XR.Interaction.Toolkit.ActionBasedController
struct ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68;
// UnityEngine.XR.Interaction.Toolkit.ActivateEvent
struct ActivateEvent_tA1D392B588AC99958CB847AE6911DC5131BCFB43;
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// UnityEngine.XR.Interaction.Toolkit.BaseInteractionEventArgs
struct BaseInteractionEventArgs_t8B38B6C63C6C9EA4BD179EF5FD40106872B82D7E;
// CallbackOptions
struct CallbackOptions_tE88786BE9215C5F30F7D097E607C57BE26A0D17D;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// UnityEngine.XR.Interaction.Toolkit.DeactivateEvent
struct DeactivateEvent_tFE44262C3D8377F947FD46D4561BB9DAC7E0785D;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// OmniSARTechnologies.Helper.DisplayNameAttribute
struct DisplayNameAttribute_t883731B156E25A7E377EA4EA9FA529A06482B4B9;
// OmniSARTechnologies.Helper.DocsAttribute
struct DocsAttribute_t74EDF00BFDF7AA7044A6F3A5920EF844EB48BB0E;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// UnityStandardAssets.Utility.FPSCounter
struct FPSCounter_t579A2057A5922B07D6809F0F66C7933E6B5805AA;
// UnityEngine.FixedJoint
struct FixedJoint_tA10A077292A86BA2A2AB3542E3441610055F806E;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.Gradient
struct Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// HPPhysics
struct HPPhysics_tFE650867FB6DB420D23C6AC43C7DD33836B5AEE9;
// Hand
struct Hand_t68D826D6A2994AEFBCC1627833F8CA60C8A4A7B1;
// Hand2Grip
struct Hand2Grip_tA60221CD2ACC5BB10EA2928B86A49D333508D335;
// HandController
struct HandController_tD866B993094B1833037D30396BB39F6C15DDC10C;
// OmniSARTechnologies.LiteFPSCounter.Examples.HeavyRenderingController
struct HeavyRenderingController_t759B9EDA9999712110938F1E8EB376F3E6816836;
// UnityEngine.XR.Interaction.Toolkit.HoverEnterEvent
struct HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB;
// UnityEngine.XR.Interaction.Toolkit.HoverExitEvent
struct HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.XR.Interaction.Toolkit.IXRInteractable
struct IXRInteractable_t31CD4FF4D45899471D81D43D605D9C6118BF50CA;
// UnityEngine.XR.Interaction.Toolkit.IXRInteractor
struct IXRInteractor_t0E1112913D56F678962B999BA5CC139CFE0D344A;
// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable
struct IXRSelectInteractable_t588B8BE99E84540D5A1A9D6E5AAC9EDF12985735;
// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor
struct IXRSelectInteractor_tF9278B9892CA9B8C1F0E0C70E2E2362DC860E3F1;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.InputSystem.InputAction
struct InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD;
// UnityEngine.InputSystem.InputActionMap
struct InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09;
// UnityEngine.InputSystem.InputActionReference
struct InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1;
// UnityEngine.InputSystem.InputActionState
struct InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// UnityEngine.Joint
struct Joint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// OmniSARTechnologies.LiteFPSCounter.LiteFPSCounter
struct LiteFPSCounter_t6420951027E81BF859AC1A3DEF1F5A932DE9641E;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// UnityEngine.PropertyAttribute
struct PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0;
// Readme
struct Readme_tE17B99201D0F52BD5727638AD3F41072A65B3BBB;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent
struct SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0;
// UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs
struct SelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938;
// UnityEngine.XR.Interaction.Toolkit.SelectExitEvent
struct SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6;
// UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs
struct SelectExitEventArgs_t56125CE0360D37AC0B50EB6066B5AB5957EF559A;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// OmniSARTechnologies.LiteFPSCounter.Examples.SimpleSceneSwitcher
struct SimpleSceneSwitcher_tD3AA6A533EBB5552FECD46E054DF980D3FBA9801;
// UnityEngine.SkinnedMeshRenderer
struct SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E;
// Slice
struct Slice_t2AC8BEA47D927D39DB8D1C967C7789F7E06D57D7;
// SliceOptions
struct SliceOptions_t9487C4C1BC769948517C8CC1D6F1BF67E0ED09BD;
// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// UnityEngine.XR.Interaction.Toolkit.TeleportationProvider
struct TeleportationProvider_t97A0AC16C69ACC50C842581737181148614AF972;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// OmniSARTechnologies.Helper.TransformRotate
struct TransformRotate_t6CCB381D315072B495139E015F8A31085207F5A8;
// TwoHandGrabInteractable
struct TwoHandGrabInteractable_tB257131B5385A5451C6347829D0F1FC0B8B550F7;
// TwoHandGrabInteractable2
struct TwoHandGrabInteractable2_t672C12A139F4D3E821B04134EA423288F1E01253;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663;
// OmniSARTechnologies.Helper.WhatsThisAttribute
struct WhatsThisAttribute_tD9C1FBDC446A37988EC07D87BD79CE99FD3500F1;
// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable
struct XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6;
// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor
struct XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158;
// UnityEngine.XR.Interaction.Toolkit.XRControllerState
struct XRControllerState_tC34C40CB942A51408D8799940A87A6AD87218B50;
// UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable
struct XRGrabInteractable_t8F7EA04527E7074002690EA93ACEAEFEBD79A772;
// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent
struct XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093;
// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager
struct XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD;
// UnityEngine.XR.Interaction.Toolkit.XRInteractorEvent
struct XRInteractorEvent_tA90E755406526412871F25BB621E7F4536CD00E2;
// UnityEngine.XR.Interaction.Toolkit.XRSimpleInteractable
struct XRSimpleInteractable_t3A9B4306E28507FF98E52F5203CE896262679E79;
// axeCut
struct axeCut_t39EC9EFEF85C26D5FC9A8E2A1D63498F8B6F65EF;
// ghostHand
struct ghostHand_tB76C2FCBF103603D3365141EE104F51CCD677BB9;
// movingCube
struct movingCube_tEEF083DD8B4B6F91F84E28E3D6B4B2503BBAE332;
// newFakeTwoHand
struct newFakeTwoHand_t9A1DA409DAB5671919A919C9DA0E9FABA2EAAF69;
// swordCut
struct swordCut_t343FBCB45EAA8EBE99A89D3CAF80116E5E82303F;
// twoHandedFake
struct twoHandedFake_tBA193E4DF5638905097FDA663F5A0DB0C8A1FAB1;
// Hand2Grip/<GrabObject>d__19
struct U3CGrabObjectU3Ed__19_tBFDE29A4FAB001C3A70BC091DAC9C946DCC3FCA0;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// Readme/Section
struct Section_t50C894D0A717C2368EBAAE5477D4E8626D0B5401;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555;
// swordCut/<cut>d__15
struct U3CcutU3Ed__15_t1949A920ADEF65495A6ABFF41F9E7E47BF2E9DF6;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GraphicsDeviceType_t65150C9055D1BC1E377E894972629BF22BA2CBF5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tEB4CD4A0B4ED2014FB371ED7CE298DE95E157E5D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LiteFPSCounter_t6420951027E81BF859AC1A3DEF1F5A932DE9641E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGrabObjectU3Ed__19_tBFDE29A4FAB001C3A70BC091DAC9C946DCC3FCA0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CcutU3Ed__15_t1949A920ADEF65495A6ABFF41F9E7E47BF2E9DF6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_tDAC4559DCCBC652E7AF517C7243B19899DE2AAD9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0A193B0D3A98F2E1455B8353A078E77A8E66250D;
IL2CPP_EXTERN_C String_t* _stringLiteral0B0FEB3147CE20EB2C90076367F895C59BCD14B3;
IL2CPP_EXTERN_C String_t* _stringLiteral0E3A03BC1BD2EADCE4C285DC75A3CD13BC69A94F;
IL2CPP_EXTERN_C String_t* _stringLiteral0E674B4241396171BD95F77FB6CDDEAA63AEAE5A;
IL2CPP_EXTERN_C String_t* _stringLiteral115CB6EBDC537323F2B3DEDE4DB394FD063F9B92;
IL2CPP_EXTERN_C String_t* _stringLiteral23114468D04FA2B7A2DA455B545DB914D0A3ED94;
IL2CPP_EXTERN_C String_t* _stringLiteral2409165FB90CD4A8B916FCA75790766B82C91748;
IL2CPP_EXTERN_C String_t* _stringLiteral2A01F063E3BB9F5256438F6450C2AF645EA23D2C;
IL2CPP_EXTERN_C String_t* _stringLiteral2BF04C30F2E8919D22E97329123DDD48BF44873F;
IL2CPP_EXTERN_C String_t* _stringLiteral2F27F2E70D75C32B101C2B5B83AF222261FD3DAF;
IL2CPP_EXTERN_C String_t* _stringLiteral2FB16ADC66DC3256DFAE2E8B676A3977A1DA71B5;
IL2CPP_EXTERN_C String_t* _stringLiteral3ADD8118F3673221E22D64C97568B4FEA83DCDDA;
IL2CPP_EXTERN_C String_t* _stringLiteral51A7015B3E634B5A44BCE24D0DE3A94B3D7E3A0F;
IL2CPP_EXTERN_C String_t* _stringLiteral52FDF7CF1B1E8668E67E21F7B44F8A511926D359;
IL2CPP_EXTERN_C String_t* _stringLiteral5837BDA26AD3EE1413093A16D86981B8DE8E9B28;
IL2CPP_EXTERN_C String_t* _stringLiteral5A65C5353FCF9B2392130B62992E8D50E5552C89;
IL2CPP_EXTERN_C String_t* _stringLiteral5E951E8F4D17A84BD237E21C35AF91A13D78A415;
IL2CPP_EXTERN_C String_t* _stringLiteral69CB7A9CE60B3C7A43D9DD5963D72ABE15FA2807;
IL2CPP_EXTERN_C String_t* _stringLiteral6C066B34F4DB79023C0642AFBC43B25A5327F710;
IL2CPP_EXTERN_C String_t* _stringLiteral76C19B4D5FC4950234157CB099AE324698EA624D;
IL2CPP_EXTERN_C String_t* _stringLiteral83020F5B9FF8736D04935697B2BFFAD6F95A3AEC;
IL2CPP_EXTERN_C String_t* _stringLiteral87303BB82CC0CA384F7E11B35E0877623A8D4B00;
IL2CPP_EXTERN_C String_t* _stringLiteral87743FCDE4168E8D60D6FA285DD63DCD0619CA6D;
IL2CPP_EXTERN_C String_t* _stringLiteral8AF8E1B2C01884986FB59DE13E7870F59BA4D664;
IL2CPP_EXTERN_C String_t* _stringLiteral8E752B76D455A50FE476984D4B09A7CDBF2A753E;
IL2CPP_EXTERN_C String_t* _stringLiteral8F8D61A714E28EAFC17AF72E13E7741ACB196BF6;
IL2CPP_EXTERN_C String_t* _stringLiteral961D6B16BF0F373B2C5F9E7FACC273326DC3B72E;
IL2CPP_EXTERN_C String_t* _stringLiteral9E27E42993FA8B5B3DE893DAD1F70F3DFC0BCA2B;
IL2CPP_EXTERN_C String_t* _stringLiteral9E6DEA6E609FD74FD29A7E5BB6D900CCBA5F3FBF;
IL2CPP_EXTERN_C String_t* _stringLiteralB062586C8903B7ACECD5511FF254C2FC443B4352;
IL2CPP_EXTERN_C String_t* _stringLiteralC30A1963B6F2470B452FB7E6EE1904F81F1D16DC;
IL2CPP_EXTERN_C String_t* _stringLiteralC613D4D2FE3F5D74727D376F793286A2BCBB1391;
IL2CPP_EXTERN_C String_t* _stringLiteralCBE844AF922BC0AC1AB4CA94466DC7FD7038D0E2;
IL2CPP_EXTERN_C String_t* _stringLiteralD77E60CAF7EAB2E17AAD1FAC2212E74EE65C2A2C;
IL2CPP_EXTERN_C String_t* _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1;
IL2CPP_EXTERN_C String_t* _stringLiteralD98F332A820D5A00ED719752CD9425AB178C1BB6;
IL2CPP_EXTERN_C String_t* _stringLiteralD9A06480B863F17591B1E98A1FFA071A33835A8F;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE04E4FA5B755F063C0491FB6C1599F389CCF0AB5;
IL2CPP_EXTERN_C String_t* _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC;
IL2CPP_EXTERN_C String_t* _stringLiteralEE23A92CA310FD038105405925DC1E20D4B77D5E;
IL2CPP_EXTERN_C String_t* _stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5;
IL2CPP_EXTERN_C String_t* _stringLiteralF336926F41B46C0C26BCA588FDCDF1676B0DD713;
IL2CPP_EXTERN_C String_t* _stringLiteralF5B0C9DE0365CB9E066942A7B52AE715D4A9CA81;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68_mEDBB78EACD2B75F6F4F8F67DDB48C086DE383FF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisXRGrabInteractable_t8F7EA04527E7074002690EA93ACEAEFEBD79A772_m45D42D0442D2EA51C90CBC916300D8E554443089_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mB3EEC14FD31AB50D776081451214E953D79816B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m40B43470B62F9642C8458E2649415E3B81E9985A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m32B311E84551374FA832EC51E87B12F059954EE9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisFixedJoint_tA10A077292A86BA2A2AB3542E3441610055F806E_m55087CF9E0B9B9026B0844811592B36880109159_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInParent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m66D52D503CE2159E5EDCB09F789D3AA7FE787C35_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSlice_t2AC8BEA47D927D39DB8D1C967C7789F7E06D57D7_m7208B4E1299AEDC51A77819601999BCE66049916_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Hand2Grip_Grab_m7A0A6B9F5CC42EE4FB8532561B5F27B72BE708AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Hand2Grip_Released_m499A2C7E7F66B1B16C9ECD313B56A2382342F0B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m8D2C9B0C7844486763AE6C2CA3C04FA4BBA9B384_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m5BFEB7CA7D4644B762C9DECE0006F2AA0C107662_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m0CDD6F02F45026B4267E7117C5DDC188F87EE7BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m26C4D679120B4C84D188324789777E5A5580CE84_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TwoHandGrabInteractable2_OnSecondHandGrab_m5F712468AE96C1D1D68191272A6F81C491E0FA0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TwoHandGrabInteractable2_OnSecondHandRelease_m5039039BD619E049D8289E0D754E9265F4E830D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TwoHandGrabInteractable_OnSecondHandGrab_m1DB8CC8E65C4EA17061C4156664811172A10DEC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TwoHandGrabInteractable_OnSecondHandRelease_mC2B41610D7DD04085D019603A63F744974C5C417_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGrabObjectU3Ed__19_System_Collections_IEnumerator_Reset_m4D04E6670F051DB4AED8943F9061F463D6D08E2F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CcutU3Ed__15_System_Collections_IEnumerator_Reset_m7F3BCCC335227826F07EC124162B3243FCC57252_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_m6D1A1588C83361B2FB48DBE10DC960718D33666F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_mAE71681FB0832FD7DBA813E5ADDBA574EA32EED2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_mB662756036996A6B6F83F6492CE9E26797AF9602_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* newFakeTwoHand_OnSecondHandGrab_m0DE55844212C94F41E592B4EE738BBD510D7046A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* newFakeTwoHand_OnSecondHandRelease_mA657C0E83EAC3DD19D5FE5EEF3902A75B439E06C_RuntimeMethod_var;
struct ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787;
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.List`1<UnityEngine.Collider>
struct List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRSimpleInteractable>
struct List_1_tEB4CD4A0B4ED2014FB371ED7CE298DE95E157E5D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	XRSimpleInteractableU5BU5D_tD412F0AF080508BAAD7A04DB32A343DF9D04ECDA* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tEB4CD4A0B4ED2014FB371ED7CE298DE95E157E5D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	XRSimpleInteractableU5BU5D_tD412F0AF080508BAAD7A04DB32A343DF9D04ECDA* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// UnityEngine.XR.Interaction.Toolkit.BaseInteractionEventArgs
struct BaseInteractionEventArgs_t8B38B6C63C6C9EA4BD179EF5FD40106872B82D7E  : public RuntimeObject
{
	// UnityEngine.XR.Interaction.Toolkit.IXRInteractor UnityEngine.XR.Interaction.Toolkit.BaseInteractionEventArgs::<interactorObject>k__BackingField
	RuntimeObject* ___U3CinteractorObjectU3Ek__BackingField_0;
	// UnityEngine.XR.Interaction.Toolkit.IXRInteractable UnityEngine.XR.Interaction.Toolkit.BaseInteractionEventArgs::<interactableObject>k__BackingField
	RuntimeObject* ___U3CinteractableObjectU3Ek__BackingField_1;
};

// OmniSARTechnologies.Helper.ColorHelper
struct ColorHelper_t820A2CFBFB9E548329BC2E17705BDBB270800C02  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// Hand2Grip/<GrabObject>d__19
struct U3CGrabObjectU3Ed__19_tBFDE29A4FAB001C3A70BC091DAC9C946DCC3FCA0  : public RuntimeObject
{
	// System.Int32 Hand2Grip/<GrabObject>d__19::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Hand2Grip/<GrabObject>d__19::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Hand2Grip Hand2Grip/<GrabObject>d__19::<>4__this
	Hand2Grip_tA60221CD2ACC5BB10EA2928B86A49D333508D335* ___U3CU3E4__this_2;
	// UnityEngine.Collider Hand2Grip/<GrabObject>d__19::collider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___collider_3;
	// UnityEngine.Rigidbody Hand2Grip/<GrabObject>d__19::targetBody
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___targetBody_4;
};

// Readme/Section
struct Section_t50C894D0A717C2368EBAAE5477D4E8626D0B5401  : public RuntimeObject
{
	// System.String Readme/Section::heading
	String_t* ___heading_0;
	// System.String Readme/Section::text
	String_t* ___text_1;
	// System.String Readme/Section::linkText
	String_t* ___linkText_2;
	// System.String Readme/Section::url
	String_t* ___url_3;
};

// swordCut/<cut>d__15
struct U3CcutU3Ed__15_t1949A920ADEF65495A6ABFF41F9E7E47BF2E9DF6  : public RuntimeObject
{
	// System.Int32 swordCut/<cut>d__15::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object swordCut/<cut>d__15::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// swordCut swordCut/<cut>d__15::<>4__this
	swordCut_t343FBCB45EAA8EBE99A89D3CAF80116E5E82303F* ___U3CU3E4__this_2;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>
struct Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.Interaction.Toolkit.XRSimpleInteractable>
struct Enumerator_tF071AAB5FF1123FC757BF8F9D75AC106DA940690 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tEB4CD4A0B4ED2014FB371ED7CE298DE95E157E5D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	XRSimpleInteractable_t3A9B4306E28507FF98E52F5203CE896262679E79* ____current_3;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>
struct InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Action_1U5BU5D_tB846E6FE2326CCD34124D1E5D70117C9D33DEE76* ___additionalValues_2;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>
struct UnityEvent_1_t8C99CC340A51BB1718EAC4102D4F90EE78F667F8  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>
struct UnityEvent_1_t6653C165067CA012C0771D17D5AF3506C58F446B  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor>
struct UnityEvent_1_tA1FEDF2DDBADC48134C49F2E20E0FC2BA29AA88D  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 
{
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1__padding[1];
	};
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// UnityEngine.InputSystem.InputActionProperty
struct InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD 
{
	// System.Boolean UnityEngine.InputSystem.InputActionProperty::m_UseReference
	bool ___m_UseReference_0;
	// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionProperty::m_Action
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Action_1;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.InputSystem.InputActionProperty::m_Reference
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_Reference_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputActionProperty
struct InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD_marshaled_pinvoke
{
	int32_t ___m_UseReference_0;
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Action_1;
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_Reference_2;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputActionProperty
struct InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD_marshaled_com
{
	int32_t ___m_UseReference_0;
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Action_1;
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_Reference_2;
};

// UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 
{
	// System.String UnityEngine.InputSystem.InputBinding::m_Name
	String_t* ___m_Name_2;
	// System.String UnityEngine.InputSystem.InputBinding::m_Id
	String_t* ___m_Id_3;
	// System.String UnityEngine.InputSystem.InputBinding::m_Path
	String_t* ___m_Path_4;
	// System.String UnityEngine.InputSystem.InputBinding::m_Interactions
	String_t* ___m_Interactions_5;
	// System.String UnityEngine.InputSystem.InputBinding::m_Processors
	String_t* ___m_Processors_6;
	// System.String UnityEngine.InputSystem.InputBinding::m_Groups
	String_t* ___m_Groups_7;
	// System.String UnityEngine.InputSystem.InputBinding::m_Action
	String_t* ___m_Action_8;
	// UnityEngine.InputSystem.InputBinding/Flags UnityEngine.InputSystem.InputBinding::m_Flags
	int32_t ___m_Flags_9;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverridePath
	String_t* ___m_OverridePath_10;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideInteractions
	String_t* ___m_OverrideInteractions_11;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideProcessors
	String_t* ___m_OverrideProcessors_12;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5_marshaled_pinvoke
{
	char* ___m_Name_2;
	char* ___m_Id_3;
	char* ___m_Path_4;
	char* ___m_Interactions_5;
	char* ___m_Processors_6;
	char* ___m_Groups_7;
	char* ___m_Action_8;
	int32_t ___m_Flags_9;
	char* ___m_OverridePath_10;
	char* ___m_OverrideInteractions_11;
	char* ___m_OverrideProcessors_12;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5_marshaled_com
{
	Il2CppChar* ___m_Name_2;
	Il2CppChar* ___m_Id_3;
	Il2CppChar* ___m_Path_4;
	Il2CppChar* ___m_Interactions_5;
	Il2CppChar* ___m_Processors_6;
	Il2CppChar* ___m_Groups_7;
	Il2CppChar* ___m_Action_8;
	int32_t ___m_Flags_9;
	Il2CppChar* ___m_OverridePath_10;
	Il2CppChar* ___m_OverrideInteractions_11;
	Il2CppChar* ___m_OverrideProcessors_12;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask
struct InteractionLayerMask_t3B3480A4A5E1E0C43314C0D2CEB3BB39175E1FD4 
{
	// System.UInt32 UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask::m_Bits
	uint32_t ___m_Bits_0;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask::m_Mask
	int32_t ___m_Mask_1;
};

// UnityEngine.XR.Interaction.Toolkit.InteractionState
struct InteractionState_tA1AFAB17758E43BA3F654BEAD6A61A05992003AB 
{
	// System.Single UnityEngine.XR.Interaction.Toolkit.InteractionState::m_Value
	float ___m_Value_0;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.InteractionState::m_Active
	bool ___m_Active_1;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.InteractionState::m_ActivatedThisFrame
	bool ___m_ActivatedThisFrame_2;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.InteractionState::m_DeactivatedThisFrame
	bool ___m_DeactivatedThisFrame_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.Interaction.Toolkit.InteractionState
struct InteractionState_tA1AFAB17758E43BA3F654BEAD6A61A05992003AB_marshaled_pinvoke
{
	float ___m_Value_0;
	int32_t ___m_Active_1;
	int32_t ___m_ActivatedThisFrame_2;
	int32_t ___m_DeactivatedThisFrame_3;
};
// Native definition for COM marshalling of UnityEngine.XR.Interaction.Toolkit.InteractionState
struct InteractionState_tA1AFAB17758E43BA3F654BEAD6A61A05992003AB_marshaled_com
{
	float ___m_Value_0;
	int32_t ___m_Active_1;
	int32_t ___m_ActivatedThisFrame_2;
	int32_t ___m_DeactivatedThisFrame_3;
};

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
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
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// UnityEngine.PropertyAttribute
struct PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// UnityEngine.SceneManagement.Scene
struct Scene_tA1DC762B79745EB5140F054C884855B922318356 
{
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;
};

// UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs
struct SelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938  : public BaseInteractionEventArgs_t8B38B6C63C6C9EA4BD179EF5FD40106872B82D7E
{
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs::<manager>k__BackingField
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___U3CmanagerU3Ek__BackingField_2;
};

// UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs
struct SelectExitEventArgs_t56125CE0360D37AC0B50EB6066B5AB5957EF559A  : public BaseInteractionEventArgs_t8B38B6C63C6C9EA4BD179EF5FD40106872B82D7E
{
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs::<manager>k__BackingField
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___U3CmanagerU3Ek__BackingField_2;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs::<isCanceled>k__BackingField
	bool ___U3CisCanceledU3Ek__BackingField_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6_StaticFields
{
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___k_ZeroOffset_4;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
};

// UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 
{
	// UnityEngine.InputSystem.InputActionState UnityEngine.InputSystem.InputAction/CallbackContext::m_State
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	// System.Int32 UnityEngine.InputSystem.InputAction/CallbackContext::m_ActionIndex
	int32_t ___m_ActionIndex_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8_marshaled_pinvoke
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	int32_t ___m_ActionIndex_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8_marshaled_com
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	int32_t ___m_ActionIndex_1;
};

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>
struct CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 
{
	// System.Boolean UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CannotMutateCallbacksArray
	bool ___m_CannotMutateCallbacksArray_0;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_Callbacks
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_Callbacks_1;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToAdd
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_CallbacksToAdd_2;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToRemove
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_CallbacksToRemove_3;
};

// System.Nullable`1<UnityEngine.InputSystem.InputBinding>
struct Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 ___value_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0  : public RuntimeObject
{
	// UnityEngine.Vector3 UnityEngine.Collision::m_Impulse
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	// UnityEngine.Vector3 UnityEngine.Collision::m_RelativeVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	// UnityEngine.Component UnityEngine.Collision::m_Body
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	// UnityEngine.Collider UnityEngine.Collision::m_Collider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	// System.Int32 UnityEngine.Collision::m_ContactCount
	int32_t ___m_ContactCount_4;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_ReusedContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_ReusedContacts_5;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_LegacyContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_LegacyContacts_6;
};
// Native definition for P/Invoke marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_pinvoke
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};
// Native definition for COM marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_com
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// OmniSARTechnologies.Helper.DisplayNameAttribute
struct DisplayNameAttribute_t883731B156E25A7E377EA4EA9FA529A06482B4B9  : public PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0
{
	// System.String OmniSARTechnologies.Helper.DisplayNameAttribute::displayName
	String_t* ___displayName_0;
};

// OmniSARTechnologies.Helper.DocsAttribute
struct DocsAttribute_t74EDF00BFDF7AA7044A6F3A5920EF844EB48BB0E  : public PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0
{
	// System.String OmniSARTechnologies.Helper.DocsAttribute::text
	String_t* ___text_0;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8_StaticFields
{
	// TMPro.Extents TMPro.Extents::zero
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___uninitialized_1;
};

// UnityEngine.Gradient
struct Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Gradient::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Gradient
struct Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Gradient
struct Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Plane
struct Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C 
{
	// UnityEngine.Vector3 UnityEngine.Plane::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.Single UnityEngine.Plane::m_Distance
	float ___m_Distance_2;
};

// UnityEngine.Pose
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 
{
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_1;
};

struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_StaticFields
{
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___k_Identity_2;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent
struct SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0  : public UnityEvent_1_t8C99CC340A51BB1718EAC4102D4F90EE78F667F8
{
};

// UnityEngine.XR.Interaction.Toolkit.SelectExitEvent
struct SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6  : public UnityEvent_1_t6653C165067CA012C0771D17D5AF3506C58F446B
{
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// OmniSARTechnologies.Helper.WhatsThisAttribute
struct WhatsThisAttribute_tD9C1FBDC446A37988EC07D87BD79CE99FD3500F1  : public PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0
{
	// System.String OmniSARTechnologies.Helper.WhatsThisAttribute::message
	String_t* ___message_0;
};

// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent
struct XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093  : public UnityEvent_1_tA1FEDF2DDBADC48134C49F2E20E0FC2BA29AA88D
{
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.InputSystem.InputAction
struct InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD  : public RuntimeObject
{
	// System.String UnityEngine.InputSystem.InputAction::m_Name
	String_t* ___m_Name_0;
	// UnityEngine.InputSystem.InputActionType UnityEngine.InputSystem.InputAction::m_Type
	int32_t ___m_Type_1;
	// System.String UnityEngine.InputSystem.InputAction::m_ExpectedControlType
	String_t* ___m_ExpectedControlType_2;
	// System.String UnityEngine.InputSystem.InputAction::m_Id
	String_t* ___m_Id_3;
	// System.String UnityEngine.InputSystem.InputAction::m_Processors
	String_t* ___m_Processors_4;
	// System.String UnityEngine.InputSystem.InputAction::m_Interactions
	String_t* ___m_Interactions_5;
	// UnityEngine.InputSystem.InputBinding[] UnityEngine.InputSystem.InputAction::m_SingletonActionBindings
	InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57* ___m_SingletonActionBindings_6;
	// UnityEngine.InputSystem.InputAction/ActionFlags UnityEngine.InputSystem.InputAction::m_Flags
	int32_t ___m_Flags_7;
	// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputAction::m_BindingMask
	Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 ___m_BindingMask_8;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_BindingsStartIndex
	int32_t ___m_BindingsStartIndex_9;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_BindingsCount
	int32_t ___m_BindingsCount_10;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ControlStartIndex
	int32_t ___m_ControlStartIndex_11;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ControlCount
	int32_t ___m_ControlCount_12;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ActionIndexInState
	int32_t ___m_ActionIndexInState_13;
	// UnityEngine.InputSystem.InputActionMap UnityEngine.InputSystem.InputAction::m_ActionMap
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* ___m_ActionMap_14;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnStarted
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnStarted_15;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnCanceled
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnCanceled_16;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnPerformed
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnPerformed_17;
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>
struct Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>
struct UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>
struct UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor>
struct UnityAction_1_tDAC4559DCCBC652E7AF517C7243B19899DE2AAD9  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Joint
struct Joint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// Readme
struct Readme_tE17B99201D0F52BD5727638AD3F41072A65B3BBB  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.Texture2D Readme::icon
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___icon_4;
	// System.String Readme::title
	String_t* ___title_5;
	// Readme/Section[] Readme::sections
	SectionU5BU5D_t9D3017555FFF42E71BE91904A2486EAF429F24C4* ___sections_6;
	// System.Boolean Readme::loadedLayout
	bool ___loadedLayout_7;
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.FixedJoint
struct FixedJoint_tA10A077292A86BA2A2AB3542E3441610055F806E  : public Joint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.SkinnedMeshRenderer
struct SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityStandardAssets.Utility.FPSCounter
struct FPSCounter_t579A2057A5922B07D6809F0F66C7933E6B5805AA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 UnityStandardAssets.Utility.FPSCounter::m_FpsAccumulator
	int32_t ___m_FpsAccumulator_5;
	// System.Single UnityStandardAssets.Utility.FPSCounter::m_FpsNextPeriod
	float ___m_FpsNextPeriod_6;
	// System.Int32 UnityStandardAssets.Utility.FPSCounter::m_CurrentFps
	int32_t ___m_CurrentFps_7;
	// TMPro.TextMeshProUGUI UnityStandardAssets.Utility.FPSCounter::m_Text
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___m_Text_9;
};

// HPPhysics
struct HPPhysics_tFE650867FB6DB420D23C6AC43C7DD33836B5AEE9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform HPPhysics::target
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target_4;
	// UnityEngine.Rigidbody HPPhysics::rb
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rb_5;
};

// Hand
struct Hand_t68D826D6A2994AEFBCC1627833F8CA60C8A4A7B1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.XR.Interaction.Toolkit.ActionBasedController Hand::controller
	ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68* ___controller_4;
	// System.Single Hand::followSpeed
	float ___followSpeed_5;
	// System.Single Hand::rotateSpeed
	float ___rotateSpeed_6;
	// UnityEngine.Vector3 Hand::positionOffset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positionOffset_7;
	// UnityEngine.Vector3 Hand::rotationOffset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rotationOffset_8;
	// UnityEngine.Transform Hand::followTarget
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___followTarget_9;
	// System.Single Hand::maxDist
	float ___maxDist_10;
	// UnityEngine.Rigidbody Hand::body
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___body_11;
};

// Hand2Grip
struct Hand2Grip_tA60221CD2ACC5BB10EA2928B86A49D333508D335  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.XR.Interaction.Toolkit.ActionBasedController Hand2Grip::controller
	ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68* ___controller_4;
	// System.Single Hand2Grip::followSpeed
	float ___followSpeed_5;
	// System.Single Hand2Grip::rotateSpeed
	float ___rotateSpeed_6;
	// UnityEngine.Vector3 Hand2Grip::positionOffset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positionOffset_7;
	// UnityEngine.Vector3 Hand2Grip::rotationOffset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rotationOffset_8;
	// UnityEngine.Transform Hand2Grip::palm
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___palm_9;
	// System.Single Hand2Grip::reachDistance
	float ___reachDistance_10;
	// System.Single Hand2Grip::joinDistance
	float ___joinDistance_11;
	// UnityEngine.LayerMask Hand2Grip::grabbableLayer
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___grabbableLayer_12;
	// UnityEngine.Transform Hand2Grip::followTarget
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___followTarget_13;
	// UnityEngine.Rigidbody Hand2Grip::body
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___body_14;
	// System.Boolean Hand2Grip::isGrabbing
	bool ___isGrabbing_15;
	// UnityEngine.GameObject Hand2Grip::heldObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___heldObject_16;
	// UnityEngine.Transform Hand2Grip::grabPoint
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___grabPoint_17;
	// UnityEngine.FixedJoint Hand2Grip::joint1
	FixedJoint_tA10A077292A86BA2A2AB3542E3441610055F806E* ___joint1_18;
	// UnityEngine.FixedJoint Hand2Grip::joint2
	FixedJoint_tA10A077292A86BA2A2AB3542E3441610055F806E* ___joint2_19;
};

// HandController
struct HandController_tD866B993094B1833037D30396BB39F6C15DDC10C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.XR.Interaction.Toolkit.ActionBasedController HandController::controller
	ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68* ___controller_4;
	// Hand HandController::hand
	Hand_t68D826D6A2994AEFBCC1627833F8CA60C8A4A7B1* ___hand_5;
};

// OmniSARTechnologies.LiteFPSCounter.Examples.HeavyRenderingController
struct HeavyRenderingController_t759B9EDA9999712110938F1E8EB376F3E6816836  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material OmniSARTechnologies.LiteFPSCounter.Examples.HeavyRenderingController::heavyRenderingMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___heavyRenderingMaterial_4;
	// System.Single OmniSARTechnologies.LiteFPSCounter.Examples.HeavyRenderingController::complexity
	float ___complexity_5;
	// UnityEngine.UI.Text OmniSARTechnologies.LiteFPSCounter.Examples.HeavyRenderingController::complexityText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___complexityText_6;
	// UnityEngine.UI.Slider OmniSARTechnologies.LiteFPSCounter.Examples.HeavyRenderingController::complexitySlider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___complexitySlider_7;
	// UnityEngine.Gradient OmniSARTechnologies.LiteFPSCounter.Examples.HeavyRenderingController::complexityHeatMap
	Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* ___complexityHeatMap_8;
};

// OmniSARTechnologies.LiteFPSCounter.LiteFPSCounter
struct LiteFPSCounter_t6420951027E81BF859AC1A3DEF1F5A932DE9641E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text OmniSARTechnologies.LiteFPSCounter.LiteFPSCounter::dynamicInfoText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___dynamicInfoText_4;
	// UnityEngine.UI.Text OmniSARTechnologies.LiteFPSCounter.LiteFPSCounter::staticInfoText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___staticInfoText_5;
	// System.Single OmniSARTechnologies.LiteFPSCounter.LiteFPSCounter::m_FrameTime
	float ___m_FrameTime_6;
	// System.Single OmniSARTechnologies.LiteFPSCounter.LiteFPSCounter::m_MinFrameTime
	float ___m_MinFrameTime_7;
	// System.Single OmniSARTechnologies.LiteFPSCounter.LiteFPSCounter::m_MaxFrameTime
	float ___m_MaxFrameTime_8;
	// System.Single OmniSARTechnologies.LiteFPSCounter.LiteFPSCounter::m_FrameTimeFlutuation
	float ___m_FrameTimeFlutuation_9;
	// System.Single OmniSARTechnologies.LiteFPSCounter.LiteFPSCounter::m_FrameRate
	float ___m_FrameRate_10;
	// System.Single OmniSARTechnologies.LiteFPSCounter.LiteFPSCounter::m_MinFrameRate
	float ___m_MinFrameRate_11;
	// System.Single OmniSARTechnologies.LiteFPSCounter.LiteFPSCounter::m_MaxFrameRate
	float ___m_MaxFrameRate_12;
	// System.Single OmniSARTechnologies.LiteFPSCounter.LiteFPSCounter::m_FrameRateFlutuation
	float ___m_FrameRateFlutuation_13;
	// UnityEngine.Color OmniSARTechnologies.LiteFPSCounter.LiteFPSCounter::m_FPSFieldsColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_FPSFieldsColor_14;
	// UnityEngine.Color OmniSARTechnologies.LiteFPSCounter.LiteFPSCounter::m_FPSMinFieldsColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_FPSMinFieldsColor_15;
	// UnityEngine.Color OmniSARTechnologies.LiteFPSCounter.LiteFPSCounter::m_FPSMaxFieldsColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_FPSMaxFieldsColor_16;
	// UnityEngine.Color OmniSARTechnologies.LiteFPSCounter.LiteFPSCounter::m_FPSFluctuationFieldsColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_FPSFluctuationFieldsColor_17;
	// UnityEngine.Color OmniSARTechnologies.LiteFPSCounter.LiteFPSCounter::m_GPUFieldsColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_GPUFieldsColor_18;
	// UnityEngine.Color OmniSARTechnologies.LiteFPSCounter.LiteFPSCounter::m_GPUDetailFieldsColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_GPUDetailFieldsColor_19;
	// UnityEngine.Color OmniSARTechnologies.LiteFPSCounter.LiteFPSCounter::m_CPUFieldsColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_CPUFieldsColor_20;
	// UnityEngine.Color OmniSARTechnologies.LiteFPSCounter.LiteFPSCounter::m_SysFieldsColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SysFieldsColor_21;
	// System.Single OmniSARTechnologies.LiteFPSCounter.LiteFPSCounter::m_AccumulatedTime
	float ___m_AccumulatedTime_22;
	// System.Int32 OmniSARTechnologies.LiteFPSCounter.LiteFPSCounter::m_AccumulatedFrames
	int32_t ___m_AccumulatedFrames_23;
	// System.Single OmniSARTechnologies.LiteFPSCounter.LiteFPSCounter::m_LastUpdateTime
	float ___m_LastUpdateTime_24;
	// System.String OmniSARTechnologies.LiteFPSCounter.LiteFPSCounter::m_StaticInfoDisplay
	String_t* ___m_StaticInfoDisplay_25;
	// System.String OmniSARTechnologies.LiteFPSCounter.LiteFPSCounter::m_DynamicConfigurationFormat
	String_t* ___m_DynamicConfigurationFormat_26;
};

struct LiteFPSCounter_t6420951027E81BF859AC1A3DEF1F5A932DE9641E_StaticFields
{
	// System.Single OmniSARTechnologies.LiteFPSCounter.LiteFPSCounter::UpdateInterval
	float ___UpdateInterval_27;
	// System.Single OmniSARTechnologies.LiteFPSCounter.LiteFPSCounter::MinTime
	float ___MinTime_28;
};

// OmniSARTechnologies.LiteFPSCounter.Examples.SimpleSceneSwitcher
struct SimpleSceneSwitcher_tD3AA6A533EBB5552FECD46E054DF980D3FBA9801  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text OmniSARTechnologies.LiteFPSCounter.Examples.SimpleSceneSwitcher::sceneNameText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___sceneNameText_4;
};

// Slice
struct Slice_t2AC8BEA47D927D39DB8D1C967C7789F7E06D57D7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// SliceOptions Slice::sliceOptions
	SliceOptions_t9487C4C1BC769948517C8CC1D6F1BF67E0ED09BD* ___sliceOptions_4;
	// CallbackOptions Slice::callbackOptions
	CallbackOptions_tE88786BE9215C5F30F7D097E607C57BE26A0D17D* ___callbackOptions_5;
	// System.Int32 Slice::currentSliceCount
	int32_t ___currentSliceCount_6;
	// UnityEngine.GameObject Slice::fragmentRoot
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___fragmentRoot_7;
};

// OmniSARTechnologies.Helper.TransformRotate
struct TransformRotate_t6CCB381D315072B495139E015F8A31085207F5A8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector3 OmniSARTechnologies.Helper.TransformRotate::eulerAnglesSpeed
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___eulerAnglesSpeed_4;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.XR.Interaction.Toolkit.XRBaseController
struct XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.XR.Interaction.Toolkit.XRBaseController/UpdateType UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_UpdateTrackingType
	int32_t ___m_UpdateTrackingType_4;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_EnableInputTracking
	bool ___m_EnableInputTracking_5;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_EnableInputActions
	bool ___m_EnableInputActions_6;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_ModelPrefab
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_ModelPrefab_7;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_ModelParent
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_ModelParent_8;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_Model
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Model_9;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_AnimateModel
	bool ___m_AnimateModel_10;
	// System.String UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_ModelSelectTransition
	String_t* ___m_ModelSelectTransition_11;
	// System.String UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_ModelDeSelectTransition
	String_t* ___m_ModelDeSelectTransition_12;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_HideControllerModel
	bool ___m_HideControllerModel_13;
	// UnityEngine.XR.Interaction.Toolkit.InteractionState UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_SelectInteractionState
	InteractionState_tA1AFAB17758E43BA3F654BEAD6A61A05992003AB ___m_SelectInteractionState_14;
	// UnityEngine.XR.Interaction.Toolkit.InteractionState UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_ActivateInteractionState
	InteractionState_tA1AFAB17758E43BA3F654BEAD6A61A05992003AB ___m_ActivateInteractionState_15;
	// UnityEngine.XR.Interaction.Toolkit.InteractionState UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_UIPressInteractionState
	InteractionState_tA1AFAB17758E43BA3F654BEAD6A61A05992003AB ___m_UIPressInteractionState_16;
	// UnityEngine.XR.Interaction.Toolkit.XRControllerState UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_ControllerState
	XRControllerState_tC34C40CB942A51408D8799940A87A6AD87218B50* ___m_ControllerState_17;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_CreateControllerState
	bool ___m_CreateControllerState_18;
	// UnityEngine.Animator UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_ModelAnimator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___m_ModelAnimator_19;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_HasWarnedAnimatorMissing
	bool ___m_HasWarnedAnimatorMissing_20;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_PerformSetup
	bool ___m_PerformSetup_21;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseController::<anchorControlDeadzone>k__BackingField
	float ___U3CanchorControlDeadzoneU3Ek__BackingField_22;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseController::<anchorControlOffAxisDeadzone>k__BackingField
	float ___U3CanchorControlOffAxisDeadzoneU3Ek__BackingField_23;
};

// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable
struct XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractableRegisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::registered
	Action_1_tB8CA4FD5AE31D22DB74D262F9D03ACFA1C0B2CA8* ___registered_4;
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractableUnregisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::unregistered
	Action_1_tCB862C932EAF49C2968D3AD96CEDF6D2DFED41F0* ___unregistered_5;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_InteractionManager
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___m_InteractionManager_6;
	// System.Collections.Generic.List`1<UnityEngine.Collider> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_Colliders
	List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* ___m_Colliders_7;
	// UnityEngine.LayerMask UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_InteractionLayerMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___m_InteractionLayerMask_8;
	// UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_InteractionLayers
	InteractionLayerMask_t3B3480A4A5E1E0C43314C0D2CEB3BB39175E1FD4 ___m_InteractionLayers_9;
	// UnityEngine.XR.Interaction.Toolkit.InteractableSelectMode UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_SelectMode
	int32_t ___m_SelectMode_10;
	// UnityEngine.GameObject UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_CustomReticle
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_CustomReticle_11;
	// UnityEngine.XR.Interaction.Toolkit.HoverEnterEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_FirstHoverEntered
	HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB* ___m_FirstHoverEntered_12;
	// UnityEngine.XR.Interaction.Toolkit.HoverExitEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_LastHoverExited
	HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832* ___m_LastHoverExited_13;
	// UnityEngine.XR.Interaction.Toolkit.HoverEnterEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_HoverEntered
	HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB* ___m_HoverEntered_14;
	// UnityEngine.XR.Interaction.Toolkit.HoverExitEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_HoverExited
	HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832* ___m_HoverExited_15;
	// UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_FirstSelectEntered
	SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* ___m_FirstSelectEntered_16;
	// UnityEngine.XR.Interaction.Toolkit.SelectExitEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_LastSelectExited
	SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* ___m_LastSelectExited_17;
	// UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_SelectEntered
	SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* ___m_SelectEntered_18;
	// UnityEngine.XR.Interaction.Toolkit.SelectExitEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_SelectExited
	SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* ___m_SelectExited_19;
	// UnityEngine.XR.Interaction.Toolkit.ActivateEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_Activated
	ActivateEvent_tA1D392B588AC99958CB847AE6911DC5131BCFB43* ___m_Activated_20;
	// UnityEngine.XR.Interaction.Toolkit.DeactivateEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_Deactivated
	DeactivateEvent_tFE44262C3D8377F947FD46D4561BB9DAC7E0785D* ___m_Deactivated_21;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::<interactorsHovering>k__BackingField
	List_1_tEDB0482081C5116241976F52FC9FF27C4DF3E5A1* ___U3CinteractorsHoveringU3Ek__BackingField_22;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::<interactorsSelecting>k__BackingField
	List_1_t4A80F0DB75823AFFF5BFC6F95355F0079537C102* ___U3CinteractorsSelectingU3Ek__BackingField_23;
	// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::<firstInteractorSelecting>k__BackingField
	RuntimeObject* ___U3CfirstInteractorSelectingU3Ek__BackingField_24;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor,UnityEngine.Pose> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_AttachPoseOnSelect
	Dictionary_2_tB8AE3DDA8EA7929AFBFE51780B779705E45D363D* ___m_AttachPoseOnSelect_25;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor,UnityEngine.Pose> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_LocalAttachPoseOnSelect
	Dictionary_2_tB8AE3DDA8EA7929AFBFE51780B779705E45D363D* ___m_LocalAttachPoseOnSelect_26;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRInteractor,UnityEngine.GameObject> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_ReticleCache
	Dictionary_2_t0582B78260B6945022313E08E6945DDC2F648137* ___m_ReticleCache_27;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_RegisteredInteractionManager
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___m_RegisteredInteractionManager_28;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnFirstHoverEntered
	XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093* ___m_OnFirstHoverEntered_30;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnLastHoverExited
	XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093* ___m_OnLastHoverExited_31;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnHoverEntered
	XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093* ___m_OnHoverEntered_32;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnHoverExited
	XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093* ___m_OnHoverExited_33;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnSelectEntered
	XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093* ___m_OnSelectEntered_34;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnSelectExited
	XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093* ___m_OnSelectExited_35;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnSelectCanceled
	XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093* ___m_OnSelectCanceled_36;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnActivate
	XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093* ___m_OnActivate_37;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnDeactivate
	XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093* ___m_OnDeactivate_38;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::<hoveringInteractors>k__BackingField
	List_1_tC6684CD164AA8009B3DC3C06499A47813321B877* ___U3ChoveringInteractorsU3Ek__BackingField_39;
};

struct XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6_StaticFields
{
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::s_InteractionManagerCache
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___s_InteractionManagerCache_29;
};

// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor
struct XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractorRegisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::registered
	Action_1_tBE7729820CBA793D8D5D57207BA5938B012863C5* ___registered_4;
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractorUnregisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::unregistered
	Action_1_t9A06C49FCB3ADF4C984887951A3DC1DA07CFFBF0* ___unregistered_5;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_InteractionManager
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___m_InteractionManager_6;
	// UnityEngine.LayerMask UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_InteractionLayerMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___m_InteractionLayerMask_7;
	// UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_InteractionLayers
	InteractionLayerMask_t3B3480A4A5E1E0C43314C0D2CEB3BB39175E1FD4 ___m_InteractionLayers_8;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_AttachTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_AttachTransform_9;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_KeepSelectedTargetValid
	bool ___m_KeepSelectedTargetValid_10;
	// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_StartingSelectedInteractable
	XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* ___m_StartingSelectedInteractable_11;
	// UnityEngine.XR.Interaction.Toolkit.HoverEnterEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_HoverEntered
	HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB* ___m_HoverEntered_12;
	// UnityEngine.XR.Interaction.Toolkit.HoverExitEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_HoverExited
	HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832* ___m_HoverExited_13;
	// UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_SelectEntered
	SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* ___m_SelectEntered_14;
	// UnityEngine.XR.Interaction.Toolkit.SelectExitEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_SelectExited
	SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* ___m_SelectExited_15;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_AllowHover
	bool ___m_AllowHover_16;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_AllowSelect
	bool ___m_AllowSelect_17;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_IsPerformingManualInteraction
	bool ___m_IsPerformingManualInteraction_18;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::<interactablesHovered>k__BackingField
	List_1_tEDA90BAEBDE9ABE36C7E54D6A64EE12E2E3A93F0* ___U3CinteractablesHoveredU3Ek__BackingField_19;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::<interactablesSelected>k__BackingField
	List_1_tC3FDFEE51803D5C604CED1C088BC2B8A566E0E5B* ___U3CinteractablesSelectedU3Ek__BackingField_20;
	// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::<firstInteractableSelected>k__BackingField
	RuntimeObject* ___U3CfirstInteractableSelectedU3Ek__BackingField_21;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable,UnityEngine.Pose> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_AttachPoseOnSelect
	Dictionary_2_tC8CDB97AFC9E538A6AF3126874A321065572174C* ___m_AttachPoseOnSelect_22;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable,UnityEngine.Pose> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_LocalAttachPoseOnSelect
	Dictionary_2_tC8CDB97AFC9E538A6AF3126874A321065572174C* ___m_LocalAttachPoseOnSelect_23;
	// System.Collections.Generic.HashSet`1<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_UnorderedInteractablesHovered
	HashSet_1_t442C406BB3DAA0091640BF5E45C6E255DCE9BC88* ___m_UnorderedInteractablesHovered_24;
	// System.Collections.Generic.HashSet`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_UnorderedInteractablesSelected
	HashSet_1_t393CE008A524DA1CCED603B4564BFAB7574A9EDF* ___m_UnorderedInteractablesSelected_25;
	// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_ManualInteractionInteractable
	RuntimeObject* ___m_ManualInteractionInteractable_26;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_RegisteredInteractionManager
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___m_RegisteredInteractionManager_27;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractorEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_OnHoverEntered
	XRInteractorEvent_tA90E755406526412871F25BB621E7F4536CD00E2* ___m_OnHoverEntered_29;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractorEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_OnHoverExited
	XRInteractorEvent_tA90E755406526412871F25BB621E7F4536CD00E2* ___m_OnHoverExited_30;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractorEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_OnSelectEntered
	XRInteractorEvent_tA90E755406526412871F25BB621E7F4536CD00E2* ___m_OnSelectEntered_31;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractorEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_OnSelectExited
	XRInteractorEvent_tA90E755406526412871F25BB621E7F4536CD00E2* ___m_OnSelectExited_32;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::<hoverTargets>k__BackingField
	List_1_t02510C493B34D49F210C22C40442D863A08509CB* ___U3ChoverTargetsU3Ek__BackingField_33;
};

struct XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158_StaticFields
{
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::s_InteractionManagerCache
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___s_InteractionManagerCache_28;
};

// axeCut
struct axeCut_t39EC9EFEF85C26D5FC9A8E2A1D63498F8B6F65EF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject axeCut::point1
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___point1_4;
	// UnityEngine.GameObject axeCut::point2
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___point2_5;
	// UnityEngine.Plane axeCut::cutPlane
	Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C ___cutPlane_6;
	// UnityEngine.Vector3 axeCut::previous
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___previous_7;
	// UnityEngine.Vector3 axeCut::velocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___velocity_8;
	// System.Single axeCut::minSpeed
	float ___minSpeed_9;
	// System.Single axeCut::cooldown
	float ___cooldown_10;
	// System.Single axeCut::timer
	float ___timer_11;
	// System.Boolean axeCut::canCut
	bool ___canCut_12;
	// UnityEngine.Collider[] axeCut::cols
	ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* ___cols_13;
};

// ghostHand
struct ghostHand_tB76C2FCBF103603D3365141EE104F51CCD677BB9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject ghostHand::followObj
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___followObj_4;
	// UnityEngine.SkinnedMeshRenderer ghostHand::meshRenderer
	SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* ___meshRenderer_5;
};

// movingCube
struct movingCube_tEEF083DD8B4B6F91F84E28E3D6B4B2503BBAE332  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single movingCube::speed
	float ___speed_4;
	// UnityEngine.Vector3 movingCube::start
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___start_5;
};

// swordCut
struct swordCut_t343FBCB45EAA8EBE99A89D3CAF80116E5E82303F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform swordCut::point1
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___point1_4;
	// UnityEngine.Transform swordCut::point2
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___point2_5;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> swordCut::cutObject
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___cutObject_6;
	// UnityEngine.Vector3 swordCut::start
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___start_7;
	// UnityEngine.Vector3 swordCut::start2
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___start2_8;
	// UnityEngine.Vector3 swordCut::end
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___end_9;
	// UnityEngine.Vector3 swordCut::end2
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___end2_10;
	// UnityEngine.Plane swordCut::slice
	Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C ___slice_11;
	// System.Single swordCut::sliceSpeed
	float ___sliceSpeed_12;
	// UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable swordCut::xrg
	XRGrabInteractable_t8F7EA04527E7074002690EA93ACEAEFEBD79A772* ___xrg_13;
	// System.Collections.Generic.List`1<UnityEngine.Collider> swordCut::swordColliders
	List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* ___swordColliders_14;
};

// twoHandedFake
struct twoHandedFake_tBA193E4DF5638905097FDA663F5A0DB0C8A1FAB1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject twoHandedFake::leftHand
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___leftHand_4;
	// UnityEngine.GameObject twoHandedFake::rightHand
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___rightHand_5;
	// UnityEngine.GameObject twoHandedFake::heldObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___heldObject_6;
	// System.Single twoHandedFake::followSpeed
	float ___followSpeed_7;
	// System.Single twoHandedFake::rotateSpeed
	float ___rotateSpeed_8;
	// UnityEngine.Vector3 twoHandedFake::positionWithOffset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positionWithOffset_9;
	// System.Single twoHandedFake::distance
	float ___distance_10;
	// UnityEngine.Vector3 twoHandedFake::finalV
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___finalV_11;
};

// UnityEngine.XR.Interaction.Toolkit.ActionBasedController
struct ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68  : public XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C
{
	// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.ActionBasedController::m_PositionAction
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_PositionAction_24;
	// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.ActionBasedController::m_RotationAction
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_RotationAction_25;
	// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.ActionBasedController::m_TrackingStateAction
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_TrackingStateAction_26;
	// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.ActionBasedController::m_SelectAction
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_SelectAction_27;
	// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.ActionBasedController::m_SelectActionValue
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_SelectActionValue_28;
	// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.ActionBasedController::m_ActivateAction
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_ActivateAction_29;
	// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.ActionBasedController::m_ActivateActionValue
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_ActivateActionValue_30;
	// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.ActionBasedController::m_UIPressAction
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_UIPressAction_31;
	// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.ActionBasedController::m_UIPressActionValue
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_UIPressActionValue_32;
	// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.ActionBasedController::m_HapticDeviceAction
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_HapticDeviceAction_33;
	// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.ActionBasedController::m_RotateAnchorAction
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_RotateAnchorAction_34;
	// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.ActionBasedController::m_TranslateAnchorAction
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_TranslateAnchorAction_35;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.ActionBasedController::m_HasCheckedDisabledTrackingInputReferenceActions
	bool ___m_HasCheckedDisabledTrackingInputReferenceActions_36;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.ActionBasedController::m_HasCheckedDisabledInputReferenceActions
	bool ___m_HasCheckedDisabledInputReferenceActions_37;
	// System.Single UnityEngine.XR.Interaction.Toolkit.ActionBasedController::m_ButtonPressPoint
	float ___m_ButtonPressPoint_38;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable
struct XRGrabInteractable_t8F7EA04527E7074002690EA93ACEAEFEBD79A772  : public XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6
{
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_AttachTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_AttachTransform_51;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_AttachEaseInTime
	float ___m_AttachEaseInTime_52;
	// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable/MovementType UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_MovementType
	int32_t ___m_MovementType_53;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_VelocityDamping
	float ___m_VelocityDamping_54;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_VelocityScale
	float ___m_VelocityScale_55;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_AngularVelocityDamping
	float ___m_AngularVelocityDamping_56;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_AngularVelocityScale
	float ___m_AngularVelocityScale_57;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_TrackPosition
	bool ___m_TrackPosition_58;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_SmoothPosition
	bool ___m_SmoothPosition_59;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_SmoothPositionAmount
	float ___m_SmoothPositionAmount_60;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_TightenPosition
	float ___m_TightenPosition_61;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_TrackRotation
	bool ___m_TrackRotation_62;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_SmoothRotation
	bool ___m_SmoothRotation_63;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_SmoothRotationAmount
	float ___m_SmoothRotationAmount_64;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_TightenRotation
	float ___m_TightenRotation_65;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_ThrowOnDetach
	bool ___m_ThrowOnDetach_66;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_ThrowSmoothingDuration
	float ___m_ThrowSmoothingDuration_67;
	// UnityEngine.AnimationCurve UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_ThrowSmoothingCurve
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___m_ThrowSmoothingCurve_68;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_ThrowVelocityScale
	float ___m_ThrowVelocityScale_69;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_ThrowAngularVelocityScale
	float ___m_ThrowAngularVelocityScale_70;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_ForceGravityOnDetach
	bool ___m_ForceGravityOnDetach_71;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_RetainTransformParent
	bool ___m_RetainTransformParent_72;
	// UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable/AttachPointCompatibilityMode UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_AttachPointCompatibilityMode
	int32_t ___m_AttachPointCompatibilityMode_73;
	// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_InteractorLocalPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_InteractorLocalPosition_74;
	// UnityEngine.Quaternion UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_InteractorLocalRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_InteractorLocalRotation_75;
	// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_TargetWorldPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_TargetWorldPosition_76;
	// UnityEngine.Quaternion UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_TargetWorldRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_TargetWorldRotation_77;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_CurrentAttachEaseTime
	float ___m_CurrentAttachEaseTime_78;
	// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable/MovementType UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_CurrentMovementType
	int32_t ___m_CurrentMovementType_79;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_DetachInLateUpdate
	bool ___m_DetachInLateUpdate_80;
	// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_DetachVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_DetachVelocity_81;
	// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_DetachAngularVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_DetachAngularVelocity_82;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_ThrowSmoothingCurrentFrame
	int32_t ___m_ThrowSmoothingCurrentFrame_83;
	// System.Single[] UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_ThrowSmoothingFrameTimes
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_ThrowSmoothingFrameTimes_84;
	// UnityEngine.Vector3[] UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_ThrowSmoothingVelocityFrames
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_ThrowSmoothingVelocityFrames_85;
	// UnityEngine.Vector3[] UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_ThrowSmoothingAngularVelocityFrames
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_ThrowSmoothingAngularVelocityFrames_86;
	// UnityEngine.Rigidbody UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_Rigidbody
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___m_Rigidbody_87;
	// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_LastPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_LastPosition_88;
	// UnityEngine.Quaternion UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_LastRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_LastRotation_89;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_WasKinematic
	bool ___m_WasKinematic_90;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_UsedGravity
	bool ___m_UsedGravity_91;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_OldDrag
	float ___m_OldDrag_92;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_OldAngularDrag
	float ___m_OldAngularDrag_93;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_OriginalSceneParent
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_OriginalSceneParent_94;
	// UnityEngine.XR.Interaction.Toolkit.TeleportationProvider UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_TeleportationProvider
	TeleportationProvider_t97A0AC16C69ACC50C842581737181148614AF972* ___m_TeleportationProvider_95;
	// UnityEngine.Pose UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_PoseBeforeTeleport
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_PoseBeforeTeleport_96;
};

// UnityEngine.XR.Interaction.Toolkit.XRSimpleInteractable
struct XRSimpleInteractable_t3A9B4306E28507FF98E52F5203CE896262679E79  : public XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6
{
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleRect_21;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_22;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_23;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_24;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_25;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_26;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;
};

// TwoHandGrabInteractable
struct TwoHandGrabInteractable_tB257131B5385A5451C6347829D0F1FC0B8B550F7  : public XRGrabInteractable_t8F7EA04527E7074002690EA93ACEAEFEBD79A772
{
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRSimpleInteractable> TwoHandGrabInteractable::secondHandGrabpoints
	List_1_tEB4CD4A0B4ED2014FB371ED7CE298DE95E157E5D* ___secondHandGrabpoints_97;
	// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor TwoHandGrabInteractable::secondInteractor
	XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* ___secondInteractor_98;
	// UnityEngine.Quaternion TwoHandGrabInteractable::attachIntialRoation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___attachIntialRoation_99;
	// TwoHandGrabInteractable/TwoHandRotationType TwoHandGrabInteractable::twoHandRotationType
	int32_t ___twoHandRotationType_100;
	// System.Boolean TwoHandGrabInteractable::SnapToSecondHand
	bool ___SnapToSecondHand_101;
	// UnityEngine.Quaternion TwoHandGrabInteractable::intialRotationOffset
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___intialRotationOffset_102;
};

// TwoHandGrabInteractable2
struct TwoHandGrabInteractable2_t672C12A139F4D3E821B04134EA423288F1E01253  : public XRGrabInteractable_t8F7EA04527E7074002690EA93ACEAEFEBD79A772
{
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRSimpleInteractable> TwoHandGrabInteractable2::secondHandGrabPoints
	List_1_tEB4CD4A0B4ED2014FB371ED7CE298DE95E157E5D* ___secondHandGrabPoints_97;
	// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor TwoHandGrabInteractable2::secondInteractor
	XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* ___secondInteractor_98;
	// UnityEngine.Quaternion TwoHandGrabInteractable2::attatchInitialRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___attatchInitialRotation_99;
	// TwoHandGrabInteractable2/TwoHandRotationType TwoHandGrabInteractable2::twoHandRotationType
	int32_t ___twoHandRotationType_100;
	// System.Boolean TwoHandGrabInteractable2::snapToHand
	bool ___snapToHand_101;
	// UnityEngine.Quaternion TwoHandGrabInteractable2::initialRotationOffset
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___initialRotationOffset_102;
};

// newFakeTwoHand
struct newFakeTwoHand_t9A1DA409DAB5671919A919C9DA0E9FABA2EAAF69  : public XRGrabInteractable_t8F7EA04527E7074002690EA93ACEAEFEBD79A772
{
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRSimpleInteractable> newFakeTwoHand::secondHandGrabpoints
	List_1_tEB4CD4A0B4ED2014FB371ED7CE298DE95E157E5D* ___secondHandGrabpoints_97;
	// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor newFakeTwoHand::secondInteractor
	XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* ___secondInteractor_98;
	// UnityEngine.Quaternion newFakeTwoHand::attachIntialRoation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___attachIntialRoation_99;
	// newFakeTwoHand/TwoHandRotationType newFakeTwoHand::twoHandRotationType
	int32_t ___twoHandRotationType_100;
	// System.Boolean newFakeTwoHand::SnapToSecondHand
	bool ___SnapToSecondHand_101;
	// UnityEngine.Quaternion newFakeTwoHand::intialRotationOffset
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___intialRotationOffset_102;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_36;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_37;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_38;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_39;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_41;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_42;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_43;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_44;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_48;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_49;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_50;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_51;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_52;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_53;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_54;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_56;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_57;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_58;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_59;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_60;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_61;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_62;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_63;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_64;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_65;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_66;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_67;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_68;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_69;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_71;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_72;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_73;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_74;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_75;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_76;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_78;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_79;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_80;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_81;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_82;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_84;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_85;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_87;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_89;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_90;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_91;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_92;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_93;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_94;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_95;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_96;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_97;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_98;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_99;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_100;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_101;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_103;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_104;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_105;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_106;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_107;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_108;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_109;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_110;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_111;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_112;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_113;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_114;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_115;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_116;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_117;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_118;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_119;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_120;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_121;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_122;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_123;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_124;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_125;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_126;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_127;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_128;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_129;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_130;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_131;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_133;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_134;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_135;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_136;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_137;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_138;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_139;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_142;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_143;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_144;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_145;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_146;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_147;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_148;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_149;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_150;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_151;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_152;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_153;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_154;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_155;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_156;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_158;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_159;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_160;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_161;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_162;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_165;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_166;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_167;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_168;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_169;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_170;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_171;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_172;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_173;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_174;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_175;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_176;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_177;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_178;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_179;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_180;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_181;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_182;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_183;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_184;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_185;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_186;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_190;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_191;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_192;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_193;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_194;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_195;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_196;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_197;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_198;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_199;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_200;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_207;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_208;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_212;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_213;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_214;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_215;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_216;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_217;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_218;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_219;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_220;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_221;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_223;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_224;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_225;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_226;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_230;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_231;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_232;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_233;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_234;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_235;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_236;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_237;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_238;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_239;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_240;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_241;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_242;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_243;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_244;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_245;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_246;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_248;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_250;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_251;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_252;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_253;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_256;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_257;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_258;
};

struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_45;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_47;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_55;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_163;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_164;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_187;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_188;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_189;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_201;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_205;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_206;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_254;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_255;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_259;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_260;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_261;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_262;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_263;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_264;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957  : public TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9
{
	// System.Boolean TMPro.TextMeshProUGUI::m_isRebuildingLayout
	bool ___m_isRebuildingLayout_265;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedGraphicRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedGraphicRebuild_266;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedMaterialRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedMaterialRebuild_267;
	// UnityEngine.Rect TMPro.TextMeshProUGUI::m_ClipRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_ClipRect_268;
	// System.Boolean TMPro.TextMeshProUGUI::m_ValidRect
	bool ___m_ValidRect_269;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshProUGUI::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_270;
	// System.Boolean TMPro.TextMeshProUGUI::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_271;
	// TMPro.TMP_SubMeshUI[] TMPro.TextMeshProUGUI::m_subTextObjects
	TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29* ___m_subTextObjects_272;
	// System.Single TMPro.TextMeshProUGUI::m_previousLossyScaleY
	float ___m_previousLossyScaleY_273;
	// UnityEngine.Vector3[] TMPro.TextMeshProUGUI::m_RectTransformCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RectTransformCorners_274;
	// UnityEngine.CanvasRenderer TMPro.TextMeshProUGUI::m_canvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_canvasRenderer_275;
	// UnityEngine.Canvas TMPro.TextMeshProUGUI::m_canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_canvas_276;
	// System.Single TMPro.TextMeshProUGUI::m_CanvasScaleFactor
	float ___m_CanvasScaleFactor_277;
	// System.Boolean TMPro.TextMeshProUGUI::m_isFirstAllocation
	bool ___m_isFirstAllocation_278;
	// System.Int32 TMPro.TextMeshProUGUI::m_max_characters
	int32_t ___m_max_characters_279;
	// UnityEngine.Material TMPro.TextMeshProUGUI::m_baseMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_baseMaterial_280;
	// System.Boolean TMPro.TextMeshProUGUI::m_isScrollRegionSet
	bool ___m_isScrollRegionSet_281;
	// UnityEngine.Vector4 TMPro.TextMeshProUGUI::m_maskOffset
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_maskOffset_282;
	// UnityEngine.Matrix4x4 TMPro.TextMeshProUGUI::m_EnvMapMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_EnvMapMatrix_283;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_284;
};

struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextMarker_285;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SetArraySizesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SetArraySizesMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ParseMarkupTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseMarkupTextMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CharacterLookupMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CharacterLookupMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleGPOSFeaturesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleGPOSFeaturesMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CalculateVerticesPositionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CalculateVerticesPositionMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeTextMetricsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeTextMetricsMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVisibleCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVisibleCharacterMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleWhiteSpacesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleWhiteSpacesMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleHorizontalLineBreakingMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVerticalLineBreakingMarker_296;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveGlyphVertexDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveGlyphVertexDataMarker_297;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeCharacterAdvanceMarker_298;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleCarriageReturnMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleCarriageReturnMarker_299;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleLineTerminationMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleLineTerminationMarker_300;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SavePageInfoMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SavePageInfoMarker_301;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveProcessingStatesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveProcessingStatesMarker_302;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIMarker_303;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIIMarker_304;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D  : public RuntimeArray
{
	ALIGN_FIELD (8) Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* m_Items[1];

	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Collider[]
struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787  : public RuntimeArray
{
	ALIGN_FIELD (8) Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* m_Items[1];

	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared (UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* ___call0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57_gshared (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponentInParent_TisRuntimeObject_mDD9FD68B12361AC472D4A83310CAD793C02C6654_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;

// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// UnityEngine.Material[] UnityEngine.Renderer::get_materials()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* Renderer_get_materials_m43D33328432700524EAEAB093C67AE5689976118 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, float ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRSimpleInteractable>::GetEnumerator()
inline Enumerator_tF071AAB5FF1123FC757BF8F9D75AC106DA940690 List_1_GetEnumerator_m5BFEB7CA7D4644B762C9DECE0006F2AA0C107662 (List_1_tEB4CD4A0B4ED2014FB371ED7CE298DE95E157E5D* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tF071AAB5FF1123FC757BF8F9D75AC106DA940690 (*) (List_1_tEB4CD4A0B4ED2014FB371ED7CE298DE95E157E5D*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.Interaction.Toolkit.XRSimpleInteractable>::Dispose()
inline void Enumerator_Dispose_mB3EEC14FD31AB50D776081451214E953D79816B2 (Enumerator_tF071AAB5FF1123FC757BF8F9D75AC106DA940690* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tF071AAB5FF1123FC757BF8F9D75AC106DA940690*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.Interaction.Toolkit.XRSimpleInteractable>::get_Current()
inline XRSimpleInteractable_t3A9B4306E28507FF98E52F5203CE896262679E79* Enumerator_get_Current_m32B311E84551374FA832EC51E87B12F059954EE9_inline (Enumerator_tF071AAB5FF1123FC757BF8F9D75AC106DA940690* __this, const RuntimeMethod* method)
{
	return ((  XRSimpleInteractable_t3A9B4306E28507FF98E52F5203CE896262679E79* (*) (Enumerator_tF071AAB5FF1123FC757BF8F9D75AC106DA940690*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::get_selectEntered()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* XRBaseInteractable_get_selectEntered_m1E5439CAE1D95FDB7D60F14D919E739435F2C341_inline (XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_mEE39E1A87376378311B4931978E8E07E589E9A24 (UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_mAE71681FB0832FD7DBA813E5ADDBA574EA32EED2 (UnityEvent_1_t8C99CC340A51BB1718EAC4102D4F90EE78F667F8* __this, UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t8C99CC340A51BB1718EAC4102D4F90EE78F667F8*, UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B*, const RuntimeMethod*))UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared)(__this, ___call0, method);
}
// UnityEngine.XR.Interaction.Toolkit.SelectExitEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::get_selectExited()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* XRBaseInteractable_get_selectExited_m35974CB2AD2FB38B4B093DC75D2917A1D321AFA6_inline (XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_mD74501F5FCCC37863163D5E7155B6C8B9B366C40 (UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_mB662756036996A6B6F83F6492CE9E26797AF9602 (UnityEvent_1_t6653C165067CA012C0771D17D5AF3506C58F446B* __this, UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t6653C165067CA012C0771D17D5AF3506C58F446B*, UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E*, const RuntimeMethod*))UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared)(__this, ___call0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.Interaction.Toolkit.XRSimpleInteractable>::MoveNext()
inline bool Enumerator_MoveNext_m40B43470B62F9642C8458E2649415E3B81E9985A (Enumerator_tF071AAB5FF1123FC757BF8F9D75AC106DA940690* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tF071AAB5FF1123FC757BF8F9D75AC106DA940690*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::get_selectingInteractor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* XRBaseInteractable_get_selectingInteractor_mDA5536E167016B048166B2DC5061AE3F752B115A (XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::get_attachTransform()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* XRBaseInteractor_get_attachTransform_m704C74165ED1463CF8B79670066472AE4BD33482_inline (XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion newFakeTwoHand::GetTwoHandRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 newFakeTwoHand_GetTwoHandRotation_m4FA75F3C4F3495A93BA1CE9880D5390E41F02A1C (newFakeTwoHand_t9A1DA409DAB5671919A919C9DA0E9FABA2EAAF69* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::ProcessInteractable(UnityEngine.XR.Interaction.Toolkit.XRInteractionUpdateOrder/UpdatePhase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRGrabInteractable_ProcessInteractable_m65B864C1FB5251D0A7AD42154BEF07ED41CB5A2E (XRGrabInteractable_t8F7EA04527E7074002690EA93ACEAEFEBD79A772* __this, int32_t ___updatePhase0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_LookRotation_m8C0F294E5143F93D378E020EAD9DA2288A5907A3 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forward0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_LookRotation_mE6859FEBE85BC0AE72A14159988151FF69BF4401 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forward0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upwards1, const RuntimeMethod* method) ;
// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor UnityEngine.XR.Interaction.Toolkit.BaseInteractionEventArgs::get_interactor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* BaseInteractionEventArgs_get_interactor_mE0AC419B526DA1A39B56DA244258474047DD0176 (BaseInteractionEventArgs_t8B38B6C63C6C9EA4BD179EF5FD40106872B82D7E* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Inverse(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Inverse_m7597DECDAD37194FAC86D1A11DCE3F0C7747F817 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::OnSelectEntered(UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRBaseInteractable_OnSelectEntered_m548EC86DEEF771E952DFC75BAE8EA5C27E441C5C (XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* __this, SelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938* ___args0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::OnSelectExited(UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRBaseInteractable_OnSelectExited_m0D5AEB82DE37B8584A97A262468AF59B70A5568C (XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* __this, SelectExitEventArgs_t56125CE0360D37AC0B50EB6066B5AB5957EF559A* ___args0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::IsSelectableBy(UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRBaseInteractable_IsSelectableBy_mB86D990CC7B0D23A8FADA53DF1DF05A2A0905B56 (XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* __this, XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* ___interactor0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRSimpleInteractable>::.ctor()
inline void List_1__ctor_m26C4D679120B4C84D188324789777E5A5580CE84 (List_1_tEB4CD4A0B4ED2014FB371ED7CE298DE95E157E5D* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tEB4CD4A0B4ED2014FB371ED7CE298DE95E157E5D*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRGrabInteractable__ctor_mF1FA77294880EFA9C7C840025B207B80327B5E2E (XRGrabInteractable_t8F7EA04527E7074002690EA93ACEAEFEBD79A772* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Collider::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70 (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Collision::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E (Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<Slice>()
inline Slice_t2AC8BEA47D927D39DB8D1C967C7789F7E06D57D7* GameObject_GetComponent_TisSlice_t2AC8BEA47D927D39DB8D1C967C7789F7E06D57D7_m7208B4E1299AEDC51A77819601999BCE66049916 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Slice_t2AC8BEA47D927D39DB8D1C967C7789F7E06D57D7* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Plane::Set3Points(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plane_Set3Points_m33CBC0B01C73FE233AB4192ABBDC66BA84D8C1C4 (Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___c2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Plane::get_normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Plane_get_normal_mA161D94E6F7327BC111007C880B76E1731729EFB (Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* __this, const RuntimeMethod* method) ;
// System.Void Slice::ComputeSlice(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slice_ComputeSlice_mAC286F1977B71290A38C456400F0C7146754A896 (Slice_t2AC8BEA47D927D39DB8D1C967C7789F7E06D57D7* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___sliceNormalWorld0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___sliceOriginWorld1, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Rigidbody::set_collisionDetectionMode(UnityEngine.CollisionDetectionMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_collisionDetectionMode_m70A22E9878027BF6D3D7E851A43A8E32B8E02343 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_interpolation(UnityEngine.RigidbodyInterpolation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_interpolation_mC7D39114A7AC6ED0AB2B40FECA4E2ED3C1D7603C (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_mass(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_mass_mC7F886DEDB57C742A16F8B6B779F69AFE164CA4B (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_position_mA15BE12B8D82220E8CA90A0F0CBFB206FE81B41C (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_rotation_mF2FC85A4A26AD9FED7DE0061889DF5A408461A5D (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Void Hand::PhysicsMove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hand_PhysicsMove_mE15CA8677C49F24127AC2A091A2DC42733B5058E (Hand_t68D826D6A2994AEFBCC1627833F8CA60C8A4A7B1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m66E346161C9778DF8486DB4FE823D8F81A54AF1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Rigidbody::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Rigidbody_get_rotation_m07882A7024FB3F96BA13EC577A96163BBB621AA1 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::ToAngleAxis(System.Single&,UnityEngine.Vector3&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion_ToAngleAxis_mA2A5A81DAE94A9C1AFC34112BE8E5C5C3E9297AF_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float* ___angle0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___axis1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline (float ___d0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_angularVelocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_angularVelocity_m23266B4E52BF0D2E65CC984AC73CC40B8D4A27E0 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.ActionBasedController::get_selectAction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ActionBasedController_get_selectAction_mB7F0F7A3FDA18D5753FFC539AB4D9A9451C78C3C_inline (ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionProperty::get_action()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* InputActionProperty_get_action_mABF2197D9CC6586E5DFB0481CF9C1B2586F41A47 (InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57 (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.InputSystem.InputAction::add_started(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_add_started_m850C46EBBEEFB3F9760AA83BFD6ECA00850657E5 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputAction::add_canceled(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_add_canceled_m69EC253E21CC314BFB350A86E294D0651F5ECA77 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___value0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_m5D697E103A7CB05CADCED9F90FD4F6BAE955E763 (LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___mask0, const RuntimeMethod* method) ;
// UnityEngine.Collider[] UnityEngine.Physics::OverlapSphere(UnityEngine.Vector3,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* Physics_OverlapSphere_mC2AD00AA16FF7136EFA63E0670C8A24D4BBE0A36 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, float ___radius1, int32_t ___layerMask2, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInParent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* GameObject_GetComponentInParent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m66D52D503CE2159E5EDCB09F789D3AA7FE787C35 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentInParent_TisRuntimeObject_mDD9FD68B12361AC472D4A83310CAD793C02C6654_gshared)(__this, method);
}
// System.Collections.IEnumerator Hand2Grip::GrabObject(UnityEngine.Collider,UnityEngine.Rigidbody)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Hand2Grip_GrabObject_mAD04BF2AA7202703E10E4570B38BDF0CC462DDEC (Hand2Grip_tA60221CD2ACC5BB10EA2928B86A49D333508D335* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___collider0, Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___targetBody1, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void Hand2Grip/<GrabObject>d__19::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGrabObjectU3Ed__19__ctor_m0D44921012F889C696A787A7B62BB72D050942CA (U3CGrabObjectU3Ed__19_tBFDE29A4FAB001C3A70BC091DAC9C946DCC3FCA0* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void Hand2Grip::PhysicsMove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hand2Grip_PhysicsMove_m040BEC7F31DC2192315330B89D4CDA0BA5F7C609 (Hand2Grip_tA60221CD2ACC5BB10EA2928B86A49D333508D335* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m7D0340DE160786E6EFA8DABD39EC3B694DA30AAD (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Collider::ClosestPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Collider_ClosestPoint_mFFF9B6F6CF9F18B22B325835A3E2E78A1C03BFCB (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForEndOfFrame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.FixedJoint>()
inline FixedJoint_tA10A077292A86BA2A2AB3542E3441610055F806E* GameObject_AddComponent_TisFixedJoint_tA10A077292A86BA2A2AB3542E3441610055F806E_m55087CF9E0B9B9026B0844811592B36880109159 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  FixedJoint_tA10A077292A86BA2A2AB3542E3441610055F806E* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityEngine.Joint::set_connectedBody(UnityEngine.Rigidbody)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joint_set_connectedBody_mE9E631476E9D4264E8DC0D6307146F5EB64D3ED4 (Joint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682* __this, Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Joint::set_breakForce(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joint_set_breakForce_m42F130D31EFC282FE0887A4E6A399F53EB3FB40F (Joint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Joint::set_breakTorque(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joint_set_breakTorque_mD76D069CDFCE726493BA790F19496FD8D08EFB04 (Joint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Joint::set_connectedMassScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joint_set_connectedMassScale_m6F7D8FEFAD6BFDC7177D9D06DBCCDCC288C4475D (Joint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Joint::set_massScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joint_set_massScale_m23111BDA5A8825E83069372785DBF56FCDAA4BC1 (Joint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Joint::set_enableCollision(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joint_set_enableCollision_m73C4FF0B64FDBDEFEEDCD9F98D491906F7715080 (Joint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Joint::set_enablePreprocessing(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joint_set_enablePreprocessing_m0970649287DC20C289E3AB775CBD1D65883B6F27 (Joint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.XR.Interaction.Toolkit.ActionBasedController>()
inline ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68* Component_GetComponent_TisActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68_mEDBB78EACD2B75F6F4F8F67DDB48C086DE383FF2 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Single UnityEngine.Time::get_fixedDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_fixedDeltaTime_mD7107AF06157FC18A50E14E0755CEE137E9A4088 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable>()
inline XRGrabInteractable_t8F7EA04527E7074002690EA93ACEAEFEBD79A772* Component_GetComponent_TisXRGrabInteractable_t8F7EA04527E7074002690EA93ACEAEFEBD79A772_m45D42D0442D2EA51C90CBC916300D8E554443089 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  XRGrabInteractable_t8F7EA04527E7074002690EA93ACEAEFEBD79A772* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m6A7FB1C9E9DE194708997BFA24C6E238D92D908E_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
inline int32_t List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Debug::DrawRay(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_DrawRay_mF20EB04CB62AA06AE8450793E8F6F952578E5F1A (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___start0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___dir1, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___methodName0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Clear()
inline void List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(T)
inline void List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GameObject>::Contains(T)
inline bool List_1_Contains_m8D2C9B0C7844486763AE6C2CA3C04FA4BBA9B384 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared)(__this, ___item0, method);
}
// System.Void swordCut/<cut>d__15::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CcutU3Ed__15__ctor_mCD060A9512186C6281AB1EE2AEB1BE6140B2672F (U3CcutU3Ed__15_t1949A920ADEF65495A6ABFF41F9E7E47BF2E9DF6* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Collider>::.ctor()
inline void List_1__ctor_m0CDD6F02F45026B4267E7117C5DDC188F87EE7BE (List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.GameObject>::GetEnumerator()
inline Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::Dispose()
inline void Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::get_Current()
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::MoveNext()
inline bool Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27 (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// UnityEngine.Quaternion TwoHandGrabInteractable::GetTwoHandRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 TwoHandGrabInteractable_GetTwoHandRotation_mB4FC4DBE3C6C13D8CB74E72FE9BA0AE14D895C11 (TwoHandGrabInteractable_tB257131B5385A5451C6347829D0F1FC0B8B550F7* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::FromToRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_FromToRotation_m041093DBB23CB3641118310881D6B7746E3B8418 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___fromDirection0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___toDirection1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::MovePosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_MovePosition_mB2CD29ABC8F59AC338C0A3A5A6B75C38FDA92CA9 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::get_onSelectEntered()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093* XRBaseInteractable_get_onSelectEntered_m3AF1E23061186454C8CD5233921F4FC6C3780A37_inline (XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_mB15EA8AFEE82F4A8965C10992F8235500F8836D6 (UnityAction_1_tDAC4559DCCBC652E7AF517C7243B19899DE2AAD9* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_tDAC4559DCCBC652E7AF517C7243B19899DE2AAD9*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_m6D1A1588C83361B2FB48DBE10DC960718D33666F (UnityEvent_1_tA1FEDF2DDBADC48134C49F2E20E0FC2BA29AA88D* __this, UnityAction_1_tDAC4559DCCBC652E7AF517C7243B19899DE2AAD9* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tA1FEDF2DDBADC48134C49F2E20E0FC2BA29AA88D*, UnityAction_1_tDAC4559DCCBC652E7AF517C7243B19899DE2AAD9*, const RuntimeMethod*))UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared)(__this, ___call0, method);
}
// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::get_onSelectExited()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093* XRBaseInteractable_get_onSelectExited_m8024BC6BA704E0465A0DA3BAE263C18CEB74F142_inline (XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion TwoHandGrabInteractable2::GetTwoHandRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 TwoHandGrabInteractable2_GetTwoHandRotation_mAF2C5F6BA88F418D6E51876F39F02B4B8C6387A1 (TwoHandGrabInteractable2_t672C12A139F4D3E821B04134EA423288F1E01253* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::OnSelectEntered(UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRBaseInteractable_OnSelectEntered_mFBD06824A89594F0777D691A5A62775C1F908F2D (XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* __this, XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* ___interactor0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::OnSelectExited(UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRBaseInteractable_OnSelectExited_mE701B8C24D777780E087CBC1BA70DEA5E0C9811C (XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* __this, XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* ___interactor0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::IsSelectableBy(UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRBaseInteractable_IsSelectableBy_mB736F5FFEBCD5B29610E94980C7E8D2B4058A9CB (XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* __this, RuntimeObject* ___interactor0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_realtimeSinceStartup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_realtimeSinceStartup_mB49A5622E38FFE9589EB9B3E75573E443B8D63EC (const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Void OmniSARTechnologies.LiteFPSCounter.LiteFPSCounter::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LiteFPSCounter_Reset_m045059B9F471A607878CC02ECAD7A16D91BEA866 (LiteFPSCounter_t6420951027E81BF859AC1A3DEF1F5A932DE9641E* __this, const RuntimeMethod* method) ;
// System.Void OmniSARTechnologies.LiteFPSCounter.LiteFPSCounter::UpdateInternals()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LiteFPSCounter_UpdateInternals_m6EBC435F0700DF5C53CBD92116EBFB7A18C9D1E2 (LiteFPSCounter_t6420951027E81BF859AC1A3DEF1F5A932DE9641E* __this, const RuntimeMethod* method) ;
// System.Void OmniSARTechnologies.LiteFPSCounter.LiteFPSCounter::ResetProbingData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LiteFPSCounter_ResetProbingData_m0585B822718B3CBF4CF22C9B3276CF36FCBD1497 (LiteFPSCounter_t6420951027E81BF859AC1A3DEF1F5A932DE9641E* __this, const RuntimeMethod* method) ;
// System.Void OmniSARTechnologies.LiteFPSCounter.LiteFPSCounter::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LiteFPSCounter_Initialize_m7F9C82D4ED8E590A7325ABEAFACFC93EDFAFB335 (LiteFPSCounter_t6420951027E81BF859AC1A3DEF1F5A932DE9641E* __this, const RuntimeMethod* method) ;
// System.Void OmniSARTechnologies.LiteFPSCounter.LiteFPSCounter::UpdateStaticContentAndData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LiteFPSCounter_UpdateStaticContentAndData_m8A57F9C736C844DA57D10ACE3AC915906EE77C27 (LiteFPSCounter_t6420951027E81BF859AC1A3DEF1F5A932DE9641E* __this, const RuntimeMethod* method) ;
// System.String System.Environment::get_NewLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Environment_get_NewLine_m86172FA1FF2F93F740EFB5760938B35750DD35C0 (const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.String OmniSARTechnologies.Helper.ColorHelper::ColorText(System.String,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ColorHelper_ColorText_mEFE2B99E89F6245B0D997D7AF7068022B25951E2 (String_t* ___text0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color1, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m74FC0A1259DFA02F3DF6538FC7F3ACF3E1AF0C55 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.String UnityEngine.SystemInfo::get_graphicsDeviceName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SystemInfo_get_graphicsDeviceName_m29D97187ADB983D77438384BBD77F0BC48731122 (const RuntimeMethod* method) ;
// UnityEngine.Rendering.GraphicsDeviceType UnityEngine.SystemInfo::get_graphicsDeviceType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SystemInfo_get_graphicsDeviceType_m539E2B66EB19CD100050109D879AF1F55EB212E1 (const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SystemInfo::get_graphicsMemorySize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SystemInfo_get_graphicsMemorySize_m53DF8C3C07E8A470CB0308C234B032F5CAA893DE (const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.SystemInfo::get_processorType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SystemInfo_get_processorType_mFF77AA1DFEF20F32947689FC751856CD7FB0D211 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SystemInfo::get_systemMemorySize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SystemInfo_get_systemMemorySize_mB292B50D7F2F0AF1A450A87F3A883E4ABEC00D89 (const RuntimeMethod* method) ;
// System.String UnityEngine.SystemInfo::get_operatingSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SystemInfo_get_operatingSystem_m441DFAEFA81C9B5AF19D5C486469EDBD674490A8 (const RuntimeMethod* method) ;
// System.String System.Single::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D (float* __this, String_t* ___format0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_unscaledDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_unscaledDeltaTime_m89252D23CC5AA295CFA4EB2BCB417A831AC51652 (const RuntimeMethod* method) ;
// System.Void OmniSARTechnologies.LiteFPSCounter.LiteFPSCounter::UpdateDynamicContent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LiteFPSCounter_UpdateDynamicContent_m500B997B706B2DA7D5E8398F34656F57252D3303 (LiteFPSCounter_t6420951027E81BF859AC1A3DEF1F5A932DE9641E* __this, const RuntimeMethod* method) ;
// System.Void OmniSARTechnologies.LiteFPSCounter.LiteFPSCounter::UpdateFPS()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LiteFPSCounter_UpdateFPS_mF2B9AFC747F0631F776058E7C9512E656E418373 (LiteFPSCounter_t6420951027E81BF859AC1A3DEF1F5A932DE9641E* __this, const RuntimeMethod* method) ;
// UnityEngine.Color OmniSARTechnologies.Helper.ColorHelper::HexStrToColor(System.String,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ColorHelper_HexStrToColor_mAD696A59E13C3E44F570E1255F6F439FA12D9CF7 (String_t* ___hexStrColor0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___fallbackColor1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Material::GetFloat(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Material_GetFloat_m2A77F10E6AA13EA3FA56166EFEA897115A14FA5A (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Gradient::Evaluate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Gradient_Evaluate_m332A32F48EA3F884CB55D74131DF8064F29F9C32 (Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* __this, float ___time0, const RuntimeMethod* method) ;
// System.Void OmniSARTechnologies.LiteFPSCounter.Examples.HeavyRenderingController::SetComplexity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeavyRenderingController_SetComplexity_m00861B58699FAAD4877D37D123C21987BAD4E128 (HeavyRenderingController_t759B9EDA9999712110938F1E8EB376F3E6816836* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void OmniSARTechnologies.LiteFPSCounter.Examples.HeavyRenderingController::UpdateComplexity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeavyRenderingController_UpdateComplexity_m77971C9F3CDA37D1A557F91E61EF8D2D4A292F8F (HeavyRenderingController_t759B9EDA9999712110938F1E8EB376F3E6816836* __this, const RuntimeMethod* method) ;
// System.Void OmniSARTechnologies.LiteFPSCounter.Examples.SimpleSceneSwitcher::UpdateSceneNameText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleSceneSwitcher_UpdateSceneNameText_mBE9AEB71F99593A802EE11C303F69261DB94C7AF (SimpleSceneSwitcher_tD3AA6A533EBB5552FECD46E054DF980D3FBA9801* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SceneManagement.SceneManager::get_sceneCountInBuildSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SceneManager_get_sceneCountInBuildSettings_m7C49222A2A771B11C1CAD7D743BDDF8F8F39E685 (const RuntimeMethod* method) ;
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SceneManagement.Scene::get_buildIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_mA48718D9A20D8972EDD41714CEF6BBF864F442EA_inline (int32_t ___value0, int32_t ___min1, int32_t ___max2, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_mE00D17D79AD74B307F913BBF296A36115548DB6D (int32_t ___sceneBuildIndex0, const RuntimeMethod* method) ;
// System.String UnityEngine.SceneManagement.Scene::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166 (String_t* __this, String_t* ___oldValue0, String_t* ___newValue1, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Byte System.Byte::Parse(System.String,System.Globalization.NumberStyles)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Byte_Parse_m1D565A1D1F7DF553B5F6CF87AC883B9BE0A6A2D3 (String_t* ___s0, int32_t ___style1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color32::.ctor(System.Byte,System.Byte,System.Byte,System.Byte)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* __this, uint8_t ___r0, uint8_t ___g1, uint8_t ___b2, uint8_t ___a3, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color32::op_Implicit(UnityEngine.Color32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color32_op_Implicit_m203A634DBB77053C9400C68065CA29529103D172_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___c0, const RuntimeMethod* method) ;
// System.String UnityEngine.ColorUtility::ToHtmlStringRGB(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ColorUtility_ToHtmlStringRGB_m0BF395744067B28A8C48609D4BA97F8920CBB346 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color0, const RuntimeMethod* method) ;
// System.Void UnityEngine.PropertyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAttribute__ctor_m19247686E165101F140615C7306DC2DA3953D97D (PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_m13B7C3EAA64DC921EC23346C56A5A597B5481FF5_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::RotateAround(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_RotateAround_m489C5BE8B8B15D0A5F4863DE6D23FF2CC8FA76C6 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___axis1, float ___angle2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::Internal_ToAxisAngleRad(UnityEngine.Quaternion,UnityEngine.Vector3&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quaternion_Internal_ToAxisAngleRad_m15D0A132154BC073228AE48956EE43AD45ADF5F1 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___q0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___axis1, float* ___angle2, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
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
// System.Void ghostHand::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ghostHand_Start_m3CA75B94AD3D435AF0C09B1451D919B9A66BCEB2 (ghostHand_tB76C2FCBF103603D3365141EE104F51CCD677BB9* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ghostHand::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ghostHand_Update_mAAEE58772494DB584D99E77DD80584A07DAF5657 (ghostHand_tB76C2FCBF103603D3365141EE104F51CCD677BB9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F27F2E70D75C32B101C2B5B83AF222261FD3DAF);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// float dist = Mathf.Clamp(Vector3.Distance(transform.position,followObj.transform.position)-0.1f,0,1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___followObj_4;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		float L_5;
		L_5 = Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline(L_1, L_4, NULL);
		float L_6;
		L_6 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(((float)il2cpp_codegen_subtract(L_5, (0.100000001f))), (0.0f), (1.0f), NULL);
		V_0 = L_6;
		// meshRenderer.materials[0].SetFloat("_Distance", dist);
		SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_7 = __this->___meshRenderer_5;
		NullCheck(L_7);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_8;
		L_8 = Renderer_get_materials_m43D33328432700524EAEAB093C67AE5689976118(L_7, NULL);
		NullCheck(L_8);
		int32_t L_9 = 0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		float L_11 = V_0;
		NullCheck(L_10);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_10, _stringLiteral2F27F2E70D75C32B101C2B5B83AF222261FD3DAF, L_11, NULL);
		// }
		return;
	}
}
// System.Void ghostHand::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ghostHand__ctor_m940FE7690A22E70962CE13F6939F7CB9B4375011 (ghostHand_tB76C2FCBF103603D3365141EE104F51CCD677BB9* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void newFakeTwoHand::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void newFakeTwoHand_Start_mD8F5EAF82A7B1EB3F163D834D4659FDF62E34A97 (newFakeTwoHand_t9A1DA409DAB5671919A919C9DA0E9FABA2EAAF69* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mB3EEC14FD31AB50D776081451214E953D79816B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m40B43470B62F9642C8458E2649415E3B81E9985A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m32B311E84551374FA832EC51E87B12F059954EE9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m5BFEB7CA7D4644B762C9DECE0006F2AA0C107662_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mAE71681FB0832FD7DBA813E5ADDBA574EA32EED2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mB662756036996A6B6F83F6492CE9E26797AF9602_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&newFakeTwoHand_OnSecondHandGrab_m0DE55844212C94F41E592B4EE738BBD510D7046A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&newFakeTwoHand_OnSecondHandRelease_mA657C0E83EAC3DD19D5FE5EEF3902A75B439E06C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tF071AAB5FF1123FC757BF8F9D75AC106DA940690 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// foreach (var item in secondHandGrabpoints)
		List_1_tEB4CD4A0B4ED2014FB371ED7CE298DE95E157E5D* L_0 = __this->___secondHandGrabpoints_97;
		NullCheck(L_0);
		Enumerator_tF071AAB5FF1123FC757BF8F9D75AC106DA940690 L_1;
		L_1 = List_1_GetEnumerator_m5BFEB7CA7D4644B762C9DECE0006F2AA0C107662(L_0, List_1_GetEnumerator_m5BFEB7CA7D4644B762C9DECE0006F2AA0C107662_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004d:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mB3EEC14FD31AB50D776081451214E953D79816B2((&V_0), Enumerator_Dispose_mB3EEC14FD31AB50D776081451214E953D79816B2_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0042_1;
			}

IL_000e_1:
			{
				// foreach (var item in secondHandGrabpoints)
				XRSimpleInteractable_t3A9B4306E28507FF98E52F5203CE896262679E79* L_2;
				L_2 = Enumerator_get_Current_m32B311E84551374FA832EC51E87B12F059954EE9_inline((&V_0), Enumerator_get_Current_m32B311E84551374FA832EC51E87B12F059954EE9_RuntimeMethod_var);
				// item.selectEntered.AddListener(OnSecondHandGrab);
				XRSimpleInteractable_t3A9B4306E28507FF98E52F5203CE896262679E79* L_3 = L_2;
				NullCheck(L_3);
				SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* L_4;
				L_4 = XRBaseInteractable_get_selectEntered_m1E5439CAE1D95FDB7D60F14D919E739435F2C341_inline(L_3, NULL);
				UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B* L_5 = (UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B*)il2cpp_codegen_object_new(UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var);
				NullCheck(L_5);
				UnityAction_1__ctor_mEE39E1A87376378311B4931978E8E07E589E9A24(L_5, __this, (intptr_t)((void*)newFakeTwoHand_OnSecondHandGrab_m0DE55844212C94F41E592B4EE738BBD510D7046A_RuntimeMethod_var), NULL);
				NullCheck(L_4);
				UnityEvent_1_AddListener_mAE71681FB0832FD7DBA813E5ADDBA574EA32EED2(L_4, L_5, UnityEvent_1_AddListener_mAE71681FB0832FD7DBA813E5ADDBA574EA32EED2_RuntimeMethod_var);
				// item.selectExited.AddListener(OnSecondHandRelease);
				NullCheck(L_3);
				SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* L_6;
				L_6 = XRBaseInteractable_get_selectExited_m35974CB2AD2FB38B4B093DC75D2917A1D321AFA6_inline(L_3, NULL);
				UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E* L_7 = (UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E*)il2cpp_codegen_object_new(UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var);
				NullCheck(L_7);
				UnityAction_1__ctor_mD74501F5FCCC37863163D5E7155B6C8B9B366C40(L_7, __this, (intptr_t)((void*)newFakeTwoHand_OnSecondHandRelease_mA657C0E83EAC3DD19D5FE5EEF3902A75B439E06C_RuntimeMethod_var), NULL);
				NullCheck(L_6);
				UnityEvent_1_AddListener_mB662756036996A6B6F83F6492CE9E26797AF9602(L_6, L_7, UnityEvent_1_AddListener_mB662756036996A6B6F83F6492CE9E26797AF9602_RuntimeMethod_var);
			}

IL_0042_1:
			{
				// foreach (var item in secondHandGrabpoints)
				bool L_8;
				L_8 = Enumerator_MoveNext_m40B43470B62F9642C8458E2649415E3B81E9985A((&V_0), Enumerator_MoveNext_m40B43470B62F9642C8458E2649415E3B81E9985A_RuntimeMethod_var);
				if (L_8)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_005b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005b:
	{
		// }
		return;
	}
}
// System.Void newFakeTwoHand::ProcessInteractable(UnityEngine.XR.Interaction.Toolkit.XRInteractionUpdateOrder/UpdatePhase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void newFakeTwoHand_ProcessInteractable_mD897DECE918333163EC32F646A193D4D808E3E32 (newFakeTwoHand_t9A1DA409DAB5671919A919C9DA0E9FABA2EAAF69* __this, int32_t ___updatePhase0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (secondInteractor && selectingInteractor)
		XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* L_0 = __this->___secondInteractor_98;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (!L_1)
		{
			goto IL_005b;
		}
	}
	{
		XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* L_2;
		L_2 = XRBaseInteractable_get_selectingInteractor_mDA5536E167016B048166B2DC5061AE3F752B115A(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_2, NULL);
		if (!L_3)
		{
			goto IL_005b;
		}
	}
	{
		// if (SnapToSecondHand)
		bool L_4 = __this->___SnapToSecondHand_101;
		if (!L_4)
		{
			goto IL_003a;
		}
	}
	{
		// selectingInteractor.attachTransform.rotation = GetTwoHandRotation();
		XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* L_5;
		L_5 = XRBaseInteractable_get_selectingInteractor_mDA5536E167016B048166B2DC5061AE3F752B115A(__this, NULL);
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = XRBaseInteractor_get_attachTransform_m704C74165ED1463CF8B79670066472AE4BD33482_inline(L_5, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = newFakeTwoHand_GetTwoHandRotation_m4FA75F3C4F3495A93BA1CE9880D5390E41F02A1C(__this, NULL);
		NullCheck(L_6);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_6, L_7, NULL);
		goto IL_005b;
	}

IL_003a:
	{
		// secondInteractor.attachTransform.rotation = GetTwoHandRotation() * intialRotationOffset;
		XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* L_8 = __this->___secondInteractor_98;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = XRBaseInteractor_get_attachTransform_m704C74165ED1463CF8B79670066472AE4BD33482_inline(L_8, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10;
		L_10 = newFakeTwoHand_GetTwoHandRotation_m4FA75F3C4F3495A93BA1CE9880D5390E41F02A1C(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11 = __this->___intialRotationOffset_102;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
		L_12 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_10, L_11, NULL);
		NullCheck(L_9);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_9, L_12, NULL);
	}

IL_005b:
	{
		// base.ProcessInteractable(updatePhase);
		int32_t L_13 = ___updatePhase0;
		XRGrabInteractable_ProcessInteractable_m65B864C1FB5251D0A7AD42154BEF07ED41CB5A2E(__this, L_13, NULL);
		// }
		return;
	}
}
// UnityEngine.Quaternion newFakeTwoHand::GetTwoHandRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 newFakeTwoHand_GetTwoHandRotation_m4FA75F3C4F3495A93BA1CE9880D5390E41F02A1C (newFakeTwoHand_t9A1DA409DAB5671919A919C9DA0E9FABA2EAAF69* __this, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (twoHandRotationType == TwoHandRotationType.None)
		int32_t L_0 = __this->___twoHandRotationType_100;
		if (L_0)
		{
			goto IL_0038;
		}
	}
	{
		// targetRotation = Quaternion.LookRotation(secondInteractor.attachTransform.position - selectingInteractor.attachTransform.position);
		XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* L_1 = __this->___secondInteractor_98;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = XRBaseInteractor_get_attachTransform_m704C74165ED1463CF8B79670066472AE4BD33482_inline(L_1, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* L_4;
		L_4 = XRBaseInteractable_get_selectingInteractor_mDA5536E167016B048166B2DC5061AE3F752B115A(__this, NULL);
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = XRBaseInteractor_get_attachTransform_m704C74165ED1463CF8B79670066472AE4BD33482_inline(L_4, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_3, L_6, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8;
		L_8 = Quaternion_LookRotation_m8C0F294E5143F93D378E020EAD9DA2288A5907A3(L_7, NULL);
		V_0 = L_8;
		goto IL_00b9;
	}

IL_0038:
	{
		// else if (twoHandRotationType == TwoHandRotationType.First)
		int32_t L_9 = __this->___twoHandRotationType_100;
		if ((!(((uint32_t)L_9) == ((uint32_t)1))))
		{
			goto IL_007e;
		}
	}
	{
		// targetRotation = Quaternion.LookRotation(secondInteractor.attachTransform.position - selectingInteractor.attachTransform.position, selectingInteractor.transform.up);
		XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* L_10 = __this->___secondInteractor_98;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = XRBaseInteractor_get_attachTransform_m704C74165ED1463CF8B79670066472AE4BD33482_inline(L_10, NULL);
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* L_13;
		L_13 = XRBaseInteractable_get_selectingInteractor_mDA5536E167016B048166B2DC5061AE3F752B115A(__this, NULL);
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = XRBaseInteractor_get_attachTransform_m704C74165ED1463CF8B79670066472AE4BD33482_inline(L_13, NULL);
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_14, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_12, L_15, NULL);
		XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* L_17;
		L_17 = XRBaseInteractable_get_selectingInteractor_mDA5536E167016B048166B2DC5061AE3F752B115A(__this, NULL);
		NullCheck(L_17);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_17, NULL);
		NullCheck(L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_18, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20;
		L_20 = Quaternion_LookRotation_mE6859FEBE85BC0AE72A14159988151FF69BF4401(L_16, L_19, NULL);
		V_0 = L_20;
		goto IL_00b9;
	}

IL_007e:
	{
		// targetRotation = Quaternion.LookRotation(secondInteractor.attachTransform.position - selectingInteractor.attachTransform.position, secondInteractor.transform.up);
		XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* L_21 = __this->___secondInteractor_98;
		NullCheck(L_21);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = XRBaseInteractor_get_attachTransform_m704C74165ED1463CF8B79670066472AE4BD33482_inline(L_21, NULL);
		NullCheck(L_22);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_22, NULL);
		XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* L_24;
		L_24 = XRBaseInteractable_get_selectingInteractor_mDA5536E167016B048166B2DC5061AE3F752B115A(__this, NULL);
		NullCheck(L_24);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = XRBaseInteractor_get_attachTransform_m704C74165ED1463CF8B79670066472AE4BD33482_inline(L_24, NULL);
		NullCheck(L_25);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_25, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_23, L_26, NULL);
		XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* L_28 = __this->___secondInteractor_98;
		NullCheck(L_28);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29;
		L_29 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_28, NULL);
		NullCheck(L_29);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_29, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_31;
		L_31 = Quaternion_LookRotation_mE6859FEBE85BC0AE72A14159988151FF69BF4401(L_27, L_30, NULL);
		V_0 = L_31;
	}

IL_00b9:
	{
		// return targetRotation;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32 = V_0;
		return L_32;
	}
}
// System.Void newFakeTwoHand::OnSecondHandGrab(UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void newFakeTwoHand_OnSecondHandGrab_m0DE55844212C94F41E592B4EE738BBD510D7046A (newFakeTwoHand_t9A1DA409DAB5671919A919C9DA0E9FABA2EAAF69* __this, SelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938* ___args0, const RuntimeMethod* method) 
{
	{
		// secondInteractor = args.interactor;
		SelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938* L_0 = ___args0;
		NullCheck(L_0);
		XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* L_1;
		L_1 = BaseInteractionEventArgs_get_interactor_mE0AC419B526DA1A39B56DA244258474047DD0176(L_0, NULL);
		__this->___secondInteractor_98 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___secondInteractor_98), (void*)L_1);
		// intialRotationOffset = Quaternion.Inverse(GetTwoHandRotation()) * secondInteractor.attachTransform.rotation;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = newFakeTwoHand_GetTwoHandRotation_m4FA75F3C4F3495A93BA1CE9880D5390E41F02A1C(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Quaternion_Inverse_m7597DECDAD37194FAC86D1A11DCE3F0C7747F817(L_2, NULL);
		XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* L_4 = __this->___secondInteractor_98;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = XRBaseInteractor_get_attachTransform_m704C74165ED1463CF8B79670066472AE4BD33482_inline(L_4, NULL);
		NullCheck(L_5);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_5, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_3, L_6, NULL);
		__this->___intialRotationOffset_102 = L_7;
		// }
		return;
	}
}
// System.Void newFakeTwoHand::OnSecondHandRelease(UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void newFakeTwoHand_OnSecondHandRelease_mA657C0E83EAC3DD19D5FE5EEF3902A75B439E06C (newFakeTwoHand_t9A1DA409DAB5671919A919C9DA0E9FABA2EAAF69* __this, SelectExitEventArgs_t56125CE0360D37AC0B50EB6066B5AB5957EF559A* ___args0, const RuntimeMethod* method) 
{
	{
		// secondInteractor = null;
		__this->___secondInteractor_98 = (XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___secondInteractor_98), (void*)(XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158*)NULL);
		// }
		return;
	}
}
// System.Void newFakeTwoHand::OnSelectEntered(UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void newFakeTwoHand_OnSelectEntered_mB800FED9D3AAFCB4388892C18316C8F7E4F4A40A (newFakeTwoHand_t9A1DA409DAB5671919A919C9DA0E9FABA2EAAF69* __this, SelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938* ___args0, const RuntimeMethod* method) 
{
	{
		// attachIntialRoation = args.interactor.attachTransform.localRotation;
		SelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938* L_0 = ___args0;
		NullCheck(L_0);
		XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* L_1;
		L_1 = BaseInteractionEventArgs_get_interactor_mE0AC419B526DA1A39B56DA244258474047DD0176(L_0, NULL);
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = XRBaseInteractor_get_attachTransform_m704C74165ED1463CF8B79670066472AE4BD33482_inline(L_1, NULL);
		NullCheck(L_2);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_2, NULL);
		__this->___attachIntialRoation_99 = L_3;
		// base.OnSelectEntered(args);
		SelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938* L_4 = ___args0;
		XRBaseInteractable_OnSelectEntered_m548EC86DEEF771E952DFC75BAE8EA5C27E441C5C(__this, L_4, NULL);
		// }
		return;
	}
}
// System.Void newFakeTwoHand::OnSelectExited(UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void newFakeTwoHand_OnSelectExited_m44B438483443DA892323F2307989E9EA32F760B2 (newFakeTwoHand_t9A1DA409DAB5671919A919C9DA0E9FABA2EAAF69* __this, SelectExitEventArgs_t56125CE0360D37AC0B50EB6066B5AB5957EF559A* ___args0, const RuntimeMethod* method) 
{
	{
		// secondInteractor = null;
		__this->___secondInteractor_98 = (XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___secondInteractor_98), (void*)(XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158*)NULL);
		// args.interactor.attachTransform.localRotation = attachIntialRoation;
		SelectExitEventArgs_t56125CE0360D37AC0B50EB6066B5AB5957EF559A* L_0 = ___args0;
		NullCheck(L_0);
		XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* L_1;
		L_1 = BaseInteractionEventArgs_get_interactor_mE0AC419B526DA1A39B56DA244258474047DD0176(L_0, NULL);
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = XRBaseInteractor_get_attachTransform_m704C74165ED1463CF8B79670066472AE4BD33482_inline(L_1, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = __this->___attachIntialRoation_99;
		NullCheck(L_2);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_2, L_3, NULL);
		// base.OnSelectExited(args);
		SelectExitEventArgs_t56125CE0360D37AC0B50EB6066B5AB5957EF559A* L_4 = ___args0;
		XRBaseInteractable_OnSelectExited_m0D5AEB82DE37B8584A97A262468AF59B70A5568C(__this, L_4, NULL);
		// }
		return;
	}
}
// System.Boolean newFakeTwoHand::IsSelectableBy(UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool newFakeTwoHand_IsSelectableBy_m700941834D5EC04174EFA5D24F2EE2E28F67C92C (newFakeTwoHand_t9A1DA409DAB5671919A919C9DA0E9FABA2EAAF69* __this, XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* ___interactor0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// bool isalreadygrabbed = selectingInteractor && !interactor.Equals(selectingInteractor);
		XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* L_0;
		L_0 = XRBaseInteractable_get_selectingInteractor_mDA5536E167016B048166B2DC5061AE3F752B115A(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* L_2 = ___interactor0;
		XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* L_3;
		L_3 = XRBaseInteractable_get_selectingInteractor_mDA5536E167016B048166B2DC5061AE3F752B115A(__this, NULL);
		NullCheck(L_2);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_2, L_3);
		G_B3_0 = ((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		goto IL_001f;
	}

IL_001e:
	{
		G_B3_0 = 0;
	}

IL_001f:
	{
		V_0 = (bool)G_B3_0;
		// return base.IsSelectableBy(interactor) && !isalreadygrabbed;
		XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* L_5 = ___interactor0;
		bool L_6;
		L_6 = XRBaseInteractable_IsSelectableBy_mB86D990CC7B0D23A8FADA53DF1DF05A2A0905B56(__this, L_5, NULL);
		if (!L_6)
		{
			goto IL_002e;
		}
	}
	{
		bool L_7 = V_0;
		return (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
	}

IL_002e:
	{
		return (bool)0;
	}
}
// System.Void newFakeTwoHand::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void newFakeTwoHand__ctor_m7B806AB3968766F38F45E37CBFD99FDEAFAF40F7 (newFakeTwoHand_t9A1DA409DAB5671919A919C9DA0E9FABA2EAAF69* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m26C4D679120B4C84D188324789777E5A5580CE84_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tEB4CD4A0B4ED2014FB371ED7CE298DE95E157E5D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<XRSimpleInteractable> secondHandGrabpoints = new List<XRSimpleInteractable>();
		List_1_tEB4CD4A0B4ED2014FB371ED7CE298DE95E157E5D* L_0 = (List_1_tEB4CD4A0B4ED2014FB371ED7CE298DE95E157E5D*)il2cpp_codegen_object_new(List_1_tEB4CD4A0B4ED2014FB371ED7CE298DE95E157E5D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m26C4D679120B4C84D188324789777E5A5580CE84(L_0, List_1__ctor_m26C4D679120B4C84D188324789777E5A5580CE84_RuntimeMethod_var);
		__this->___secondHandGrabpoints_97 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___secondHandGrabpoints_97), (void*)L_0);
		// public bool SnapToSecondHand = true;
		__this->___SnapToSecondHand_101 = (bool)1;
		XRGrabInteractable__ctor_mF1FA77294880EFA9C7C840025B207B80327B5E2E(__this, NULL);
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
// System.Void axeCut::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void axeCut_Start_m1876619FC05FCCFD1FE93DC25F6B6D9DB2E75FD3 (axeCut_t39EC9EFEF85C26D5FC9A8E2A1D63498F8B6F65EF* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void axeCut::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void axeCut_Update_mCB7675341D58C520B2B23B94617C79DA4941BCD9 (axeCut_t39EC9EFEF85C26D5FC9A8E2A1D63498F8B6F65EF* __this, const RuntimeMethod* method) 
{
	{
		// velocity = (transform.position - previous) / Time.deltaTime;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->___previous_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_1, L_2, NULL);
		float L_4;
		L_4 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline(L_3, L_4, NULL);
		__this->___velocity_8 = L_5;
		// previous = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		__this->___previous_7 = L_7;
		// if (timer < cooldown)
		float L_8 = __this->___timer_11;
		float L_9 = __this->___cooldown_10;
		if ((!(((float)L_8) < ((float)L_9))))
		{
			goto IL_0060;
		}
	}
	{
		// timer += Time.deltaTime;
		float L_10 = __this->___timer_11;
		float L_11;
		L_11 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___timer_11 = ((float)il2cpp_codegen_add(L_10, L_11));
		// canCut = false;
		__this->___canCut_12 = (bool)0;
		goto IL_0067;
	}

IL_0060:
	{
		// canCut = true;
		__this->___canCut_12 = (bool)1;
	}

IL_0067:
	{
		// if (canCut)
		bool L_12 = __this->___canCut_12;
		if (!L_12)
		{
			goto IL_008c;
		}
	}
	{
		// cols[0].enabled = true;
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_13 = __this->___cols_13;
		NullCheck(L_13);
		int32_t L_14 = 0;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_15);
		Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70(L_15, (bool)1, NULL);
		// cols[1].enabled = true;
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_16 = __this->___cols_13;
		NullCheck(L_16);
		int32_t L_17 = 1;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_18 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_18);
		Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70(L_18, (bool)1, NULL);
		return;
	}

IL_008c:
	{
		// cols[0].enabled = false;
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_19 = __this->___cols_13;
		NullCheck(L_19);
		int32_t L_20 = 0;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_21 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_21);
		Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70(L_21, (bool)0, NULL);
		// cols[1].enabled = false;
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_22 = __this->___cols_13;
		NullCheck(L_22);
		int32_t L_23 = 1;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_24 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		NullCheck(L_24);
		Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70(L_24, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void axeCut::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void axeCut_OnCollisionEnter_m21CD2E2D93F24FE91D2CFC213DA87F3BB44FEBFA (axeCut_t39EC9EFEF85C26D5FC9A8E2A1D63498F8B6F65EF* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSlice_t2AC8BEA47D927D39DB8D1C967C7789F7E06D57D7_m7208B4E1299AEDC51A77819601999BCE66049916_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (canCut == false)
		bool L_0 = __this->___canCut_12;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if (!collision.gameObject.GetComponent<Slice>())
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_1 = ___collision0;
		NullCheck(L_1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_1, NULL);
		NullCheck(L_2);
		Slice_t2AC8BEA47D927D39DB8D1C967C7789F7E06D57D7* L_3;
		L_3 = GameObject_GetComponent_TisSlice_t2AC8BEA47D927D39DB8D1C967C7789F7E06D57D7_m7208B4E1299AEDC51A77819601999BCE66049916(L_2, GameObject_GetComponent_TisSlice_t2AC8BEA47D927D39DB8D1C967C7789F7E06D57D7_m7208B4E1299AEDC51A77819601999BCE66049916_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_3, NULL);
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		// return;
		return;
	}

IL_001c:
	{
		// if (velocity.magnitude < minSpeed)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_5 = (&__this->___velocity_8);
		float L_6;
		L_6 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline(L_5, NULL);
		float L_7 = __this->___minSpeed_9;
		if ((!(((float)L_6) < ((float)L_7))))
		{
			goto IL_0030;
		}
	}
	{
		// return;
		return;
	}

IL_0030:
	{
		// timer = 0;
		__this->___timer_11 = (0.0f);
		// cutPlane.Set3Points(point1.transform.position, point2.transform.position, point1.transform.position + point1.transform.forward);
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* L_8 = (&__this->___cutPlane_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___point1_4;
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_9, NULL);
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___point2_5;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_12, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = __this->___point1_4;
		NullCheck(L_15);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_15, NULL);
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_16, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = __this->___point1_4;
		NullCheck(L_18);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_18, NULL);
		NullCheck(L_19);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_19, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_17, L_20, NULL);
		Plane_Set3Points_m33CBC0B01C73FE233AB4192ABBDC66BA84D8C1C4(L_8, L_11, L_14, L_21, NULL);
		// collision.gameObject.GetComponent<Slice>().ComputeSlice(cutPlane.normal, (point1.transform.position + point2.transform.position + (point1.transform.position + point1.transform.forward) + (point2.transform.position + point2.transform.forward)) / 4);
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_22 = ___collision0;
		NullCheck(L_22);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23;
		L_23 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_22, NULL);
		NullCheck(L_23);
		Slice_t2AC8BEA47D927D39DB8D1C967C7789F7E06D57D7* L_24;
		L_24 = GameObject_GetComponent_TisSlice_t2AC8BEA47D927D39DB8D1C967C7789F7E06D57D7_m7208B4E1299AEDC51A77819601999BCE66049916(L_23, GameObject_GetComponent_TisSlice_t2AC8BEA47D927D39DB8D1C967C7789F7E06D57D7_m7208B4E1299AEDC51A77819601999BCE66049916_RuntimeMethod_var);
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* L_25 = (&__this->___cutPlane_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Plane_get_normal_mA161D94E6F7327BC111007C880B76E1731729EFB(L_25, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27 = __this->___point1_4;
		NullCheck(L_27);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28;
		L_28 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_27, NULL);
		NullCheck(L_28);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_28, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30 = __this->___point2_5;
		NullCheck(L_30);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
		L_31 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_30, NULL);
		NullCheck(L_31);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_31, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_29, L_32, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_34 = __this->___point1_4;
		NullCheck(L_34);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_35;
		L_35 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_34, NULL);
		NullCheck(L_35);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_35, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37 = __this->___point1_4;
		NullCheck(L_37);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_38;
		L_38 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_37, NULL);
		NullCheck(L_38);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_38, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_36, L_39, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_33, L_40, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_42 = __this->___point2_5;
		NullCheck(L_42);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_43;
		L_43 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_42, NULL);
		NullCheck(L_43);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44;
		L_44 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_43, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_45 = __this->___point2_5;
		NullCheck(L_45);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_46;
		L_46 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_45, NULL);
		NullCheck(L_46);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_46, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48;
		L_48 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_44, L_47, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49;
		L_49 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_41, L_48, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50;
		L_50 = Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline(L_49, (4.0f), NULL);
		NullCheck(L_24);
		Slice_ComputeSlice_mAC286F1977B71290A38C456400F0C7146754A896(L_24, L_26, L_50, NULL);
		// }
		return;
	}
}
// System.Void axeCut::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void axeCut__ctor_m770AB7A619E958F364705BAC43459CBB2A997B2F (axeCut_t39EC9EFEF85C26D5FC9A8E2A1D63498F8B6F65EF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float minSpeed = 2f;
		__this->___minSpeed_9 = (2.0f);
		// public float cooldown = 0.25f;
		__this->___cooldown_10 = (0.25f);
		// public bool canCut = true;
		__this->___canCut_12 = (bool)1;
		// public Collider[] cols = new Collider[2];
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_0 = (ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787*)(ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787*)SZArrayNew(ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->___cols_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cols_13), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Hand::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hand_Start_mF97170CC92093DE16E9DD633908D8FF76D6386DB (Hand_t68D826D6A2994AEFBCC1627833F8CA60C8A4A7B1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// followTarget = controller.gameObject.transform;
		ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68* L_0 = __this->___controller_4;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		__this->___followTarget_9 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___followTarget_9), (void*)L_2);
		// body = GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_3;
		L_3 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___body_11 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___body_11), (void*)L_3);
		// body.collisionDetectionMode = CollisionDetectionMode.Continuous;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_4 = __this->___body_11;
		NullCheck(L_4);
		Rigidbody_set_collisionDetectionMode_m70A22E9878027BF6D3D7E851A43A8E32B8E02343(L_4, 1, NULL);
		// body.interpolation = RigidbodyInterpolation.Interpolate;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_5 = __this->___body_11;
		NullCheck(L_5);
		Rigidbody_set_interpolation_mC7D39114A7AC6ED0AB2B40FECA4E2ED3C1D7603C(L_5, 1, NULL);
		// body.mass = 20;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_6 = __this->___body_11;
		NullCheck(L_6);
		Rigidbody_set_mass_mC7F886DEDB57C742A16F8B6B779F69AFE164CA4B(L_6, (20.0f), NULL);
		// body.position = followTarget.position;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_7 = __this->___body_11;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = __this->___followTarget_9;
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		NullCheck(L_7);
		Rigidbody_set_position_mA15BE12B8D82220E8CA90A0F0CBFB206FE81B41C(L_7, L_9, NULL);
		// body.rotation = followTarget.rotation;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_10 = __this->___body_11;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = __this->___followTarget_9;
		NullCheck(L_11);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
		L_12 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_11, NULL);
		NullCheck(L_10);
		Rigidbody_set_rotation_mF2FC85A4A26AD9FED7DE0061889DF5A408461A5D(L_10, L_12, NULL);
		// }
		return;
	}
}
// System.Void Hand::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hand_Update_mE9D471ECB2864A5ADFBB6C01668A39778E8BFE1F (Hand_t68D826D6A2994AEFBCC1627833F8CA60C8A4A7B1* __this, const RuntimeMethod* method) 
{
	{
		// this.PhysicsMove();
		Hand_PhysicsMove_mE15CA8677C49F24127AC2A091A2DC42733B5058E(__this, NULL);
		// }
		return;
	}
}
// System.Void Hand::PhysicsMove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hand_PhysicsMove_mE15CA8677C49F24127AC2A091A2DC42733B5058E (Hand_t68D826D6A2994AEFBCC1627833F8CA60C8A4A7B1* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// var positionWithOffset = followTarget.TransformPoint(positionOffset);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___followTarget_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___positionOffset_7;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_0, L_1, NULL);
		V_0 = L_2;
		// var distance = Vector3.Distance(positionWithOffset, transform.position);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		float L_6;
		L_6 = Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline(L_3, L_5, NULL);
		V_1 = L_6;
		// body.velocity = (positionWithOffset - transform.position).normalized * followSpeed * distance * Time.deltaTime;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_7 = __this->___body_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_8, L_10, NULL);
		V_5 = L_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_5), NULL);
		float L_13 = __this->___followSpeed_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_12, L_13, NULL);
		float L_15 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_14, L_15, NULL);
		float L_17;
		L_17 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_16, L_17, NULL);
		NullCheck(L_7);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_7, L_18, NULL);
		// var rotationWithOffset = followTarget.rotation * Quaternion.Euler(rotationOffset);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19 = __this->___followTarget_9;
		NullCheck(L_19);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20;
		L_20 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_19, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = __this->___rotationOffset_8;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22;
		L_22 = Quaternion_Euler_m66E346161C9778DF8486DB4FE823D8F81A54AF1D_inline(L_21, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_23;
		L_23 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_20, L_22, NULL);
		// var q = rotationWithOffset * Quaternion.Inverse(body.rotation);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_24 = __this->___body_11;
		NullCheck(L_24);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_25;
		L_25 = Rigidbody_get_rotation_m07882A7024FB3F96BA13EC577A96163BBB621AA1(L_24, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26;
		L_26 = Quaternion_Inverse_m7597DECDAD37194FAC86D1A11DCE3F0C7747F817(L_25, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_27;
		L_27 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_23, L_26, NULL);
		V_2 = L_27;
		// q.ToAngleAxis(out float angle, out Vector3 axis);
		Quaternion_ToAngleAxis_mA2A5A81DAE94A9C1AFC34112BE8E5C5C3E9297AF_inline((&V_2), (&V_3), (&V_4), NULL);
		// body.angularVelocity = angle * axis * Mathf.Deg2Rad * rotateSpeed * Time.deltaTime;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_28 = __this->___body_11;
		float L_29 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline(L_29, L_30, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_31, (0.0174532924f), NULL);
		float L_33 = __this->___rotateSpeed_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_32, L_33, NULL);
		float L_35;
		L_35 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_34, L_35, NULL);
		NullCheck(L_28);
		Rigidbody_set_angularVelocity_m23266B4E52BF0D2E65CC984AC73CC40B8D4A27E0(L_28, L_36, NULL);
		// if (Vector3.Distance(transform.position, followTarget.position) > maxDist)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37;
		L_37 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_37);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_37, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_39 = __this->___followTarget_9;
		NullCheck(L_39);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_39, NULL);
		float L_41;
		L_41 = Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline(L_38, L_40, NULL);
		float L_42 = __this->___maxDist_10;
		if ((!(((float)L_41) > ((float)L_42))))
		{
			goto IL_012b;
		}
	}
	{
		// transform.position = followTarget.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_43;
		L_43 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_44 = __this->___followTarget_9;
		NullCheck(L_44);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_44, NULL);
		NullCheck(L_43);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_43, L_45, NULL);
		// body.velocity = Vector3.zero;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_46 = __this->___body_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		NullCheck(L_46);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_46, L_47, NULL);
		// body.angularVelocity = Vector3.zero;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_48 = __this->___body_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49;
		L_49 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		NullCheck(L_48);
		Rigidbody_set_angularVelocity_m23266B4E52BF0D2E65CC984AC73CC40B8D4A27E0(L_48, L_49, NULL);
	}

IL_012b:
	{
		// }
		return;
	}
}
// System.Void Hand::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hand__ctor_m98922058C1A056306D560A36EAEDCE0247110FA8 (Hand_t68D826D6A2994AEFBCC1627833F8CA60C8A4A7B1* __this, const RuntimeMethod* method) 
{
	{
		// public float followSpeed = 30f;
		__this->___followSpeed_5 = (30.0f);
		// public float rotateSpeed = 100f;
		__this->___rotateSpeed_6 = (100.0f);
		// public float maxDist = 1f;
		__this->___maxDist_10 = (1.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Hand2Grip::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hand2Grip_Start_m282992A4EA80247BB5DE8E89347A7E15C692E4DF (Hand2Grip_tA60221CD2ACC5BB10EA2928B86A49D333508D335* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hand2Grip_Grab_m7A0A6B9F5CC42EE4FB8532561B5F27B72BE708AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hand2Grip_Released_m499A2C7E7F66B1B16C9ECD313B56A2382342F0B4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// followTarget = controller.gameObject.transform;
		ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68* L_0 = __this->___controller_4;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		__this->___followTarget_13 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___followTarget_13), (void*)L_2);
		// body = GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_3;
		L_3 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___body_14 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___body_14), (void*)L_3);
		// body.collisionDetectionMode = CollisionDetectionMode.Continuous;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_4 = __this->___body_14;
		NullCheck(L_4);
		Rigidbody_set_collisionDetectionMode_m70A22E9878027BF6D3D7E851A43A8E32B8E02343(L_4, 1, NULL);
		// body.interpolation = RigidbodyInterpolation.Interpolate;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_5 = __this->___body_14;
		NullCheck(L_5);
		Rigidbody_set_interpolation_mC7D39114A7AC6ED0AB2B40FECA4E2ED3C1D7603C(L_5, 1, NULL);
		// body.mass = 20;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_6 = __this->___body_14;
		NullCheck(L_6);
		Rigidbody_set_mass_mC7F886DEDB57C742A16F8B6B779F69AFE164CA4B(L_6, (20.0f), NULL);
		// controller.selectAction.action.started += Grab;
		ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68* L_7 = __this->___controller_4;
		NullCheck(L_7);
		InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD L_8;
		L_8 = ActionBasedController_get_selectAction_mB7F0F7A3FDA18D5753FFC539AB4D9A9451C78C3C_inline(L_7, NULL);
		V_0 = L_8;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_9;
		L_9 = InputActionProperty_get_action_mABF2197D9CC6586E5DFB0481CF9C1B2586F41A47((&V_0), NULL);
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_10 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_10, __this, (intptr_t)((void*)Hand2Grip_Grab_m7A0A6B9F5CC42EE4FB8532561B5F27B72BE708AB_RuntimeMethod_var), NULL);
		NullCheck(L_9);
		InputAction_add_started_m850C46EBBEEFB3F9760AA83BFD6ECA00850657E5(L_9, L_10, NULL);
		// controller.selectAction.action.canceled += Released;
		ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68* L_11 = __this->___controller_4;
		NullCheck(L_11);
		InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD L_12;
		L_12 = ActionBasedController_get_selectAction_mB7F0F7A3FDA18D5753FFC539AB4D9A9451C78C3C_inline(L_11, NULL);
		V_0 = L_12;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_13;
		L_13 = InputActionProperty_get_action_mABF2197D9CC6586E5DFB0481CF9C1B2586F41A47((&V_0), NULL);
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_14 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_14, __this, (intptr_t)((void*)Hand2Grip_Released_m499A2C7E7F66B1B16C9ECD313B56A2382342F0B4_RuntimeMethod_var), NULL);
		NullCheck(L_13);
		InputAction_add_canceled_m69EC253E21CC314BFB350A86E294D0651F5ECA77(L_13, L_14, NULL);
		// body.position = followTarget.position;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_15 = __this->___body_14;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = __this->___followTarget_13;
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_16, NULL);
		NullCheck(L_15);
		Rigidbody_set_position_mA15BE12B8D82220E8CA90A0F0CBFB206FE81B41C(L_15, L_17, NULL);
		// body.rotation = followTarget.rotation;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_18 = __this->___body_14;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19 = __this->___followTarget_13;
		NullCheck(L_19);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20;
		L_20 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_19, NULL);
		NullCheck(L_18);
		Rigidbody_set_rotation_mF2FC85A4A26AD9FED7DE0061889DF5A408461A5D(L_18, L_20, NULL);
		// }
		return;
	}
}
// System.Void Hand2Grip::Grab(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hand2Grip_Grab_m7A0A6B9F5CC42EE4FB8532561B5F27B72BE708AB (Hand2Grip_tA60221CD2ACC5BB10EA2928B86A49D333508D335* __this, CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 ___context0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInParent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m66D52D503CE2159E5EDCB09F789D3AA7FE787C35_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* V_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* V_2 = NULL;
	{
		// if (isGrabbing || heldObject) return;
		bool L_0 = __this->___isGrabbing_15;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___heldObject_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_1, NULL);
		if (!L_2)
		{
			goto IL_0016;
		}
	}

IL_0015:
	{
		// if (isGrabbing || heldObject) return;
		return;
	}

IL_0016:
	{
		// Collider[] colliders = Physics.OverlapSphere(palm.position, reachDistance, grabbableLayer);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___palm_9;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		float L_5 = __this->___reachDistance_10;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_6 = __this->___grabbableLayer_12;
		int32_t L_7;
		L_7 = LayerMask_op_Implicit_m5D697E103A7CB05CADCED9F90FD4F6BAE955E763(L_6, NULL);
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_8;
		L_8 = Physics_OverlapSphere_mC2AD00AA16FF7136EFA63E0670C8A24D4BBE0A36(L_4, L_5, L_7, NULL);
		V_0 = L_8;
		// if (colliders.Length < 1) return;
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_9 = V_0;
		NullCheck(L_9);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))) >= ((int32_t)1)))
		{
			goto IL_003f;
		}
	}
	{
		// if (colliders.Length < 1) return;
		return;
	}

IL_003f:
	{
		// var objectToGrab = colliders[0].transform.gameObject;
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11 = 0;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_12, NULL);
		NullCheck(L_13);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_13, NULL);
		V_1 = L_14;
		// var objectBody = objectToGrab.GetComponent<Rigidbody>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = V_1;
		NullCheck(L_15);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_16;
		L_16 = GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90(L_15, GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		V_2 = L_16;
		// if (objectBody != null)
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_17 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_17, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_18)
		{
			goto IL_006b;
		}
	}
	{
		// heldObject = objectBody.gameObject;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_19 = V_2;
		NullCheck(L_19);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20;
		L_20 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_19, NULL);
		__this->___heldObject_16 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___heldObject_16), (void*)L_20);
		goto IL_008a;
	}

IL_006b:
	{
		// objectBody = objectToGrab.GetComponentInParent<Rigidbody>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = V_1;
		NullCheck(L_21);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_22;
		L_22 = GameObject_GetComponentInParent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m66D52D503CE2159E5EDCB09F789D3AA7FE787C35(L_21, GameObject_GetComponentInParent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m66D52D503CE2159E5EDCB09F789D3AA7FE787C35_RuntimeMethod_var);
		V_2 = L_22;
		// if(objectBody != null)
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_23 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_23, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_24)
		{
			goto IL_0089;
		}
	}
	{
		// heldObject = objectBody.gameObject;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_25 = V_2;
		NullCheck(L_25);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26;
		L_26 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_25, NULL);
		__this->___heldObject_16 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___heldObject_16), (void*)L_26);
		goto IL_008a;
	}

IL_0089:
	{
		// return;
		return;
	}

IL_008a:
	{
		// StartCoroutine(GrabObject(colliders[0],objectBody));
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_27 = V_0;
		NullCheck(L_27);
		int32_t L_28 = 0;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_29 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_30 = V_2;
		RuntimeObject* L_31;
		L_31 = Hand2Grip_GrabObject_mAD04BF2AA7202703E10E4570B38BDF0CC462DDEC(__this, L_29, L_30, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_32;
		L_32 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_31, NULL);
		// }
		return;
	}
}
// System.Void Hand2Grip::Released(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hand2Grip_Released_m499A2C7E7F66B1B16C9ECD313B56A2382342F0B4 (Hand2Grip_tA60221CD2ACC5BB10EA2928B86A49D333508D335* __this, CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 ___context0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(joint1 != null)
		FixedJoint_tA10A077292A86BA2A2AB3542E3441610055F806E* L_0 = __this->___joint1_18;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// Destroy(joint1);
		FixedJoint_tA10A077292A86BA2A2AB3542E3441610055F806E* L_2 = __this->___joint1_18;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_2, NULL);
	}

IL_0019:
	{
		// if (joint2 != null)
		FixedJoint_tA10A077292A86BA2A2AB3542E3441610055F806E* L_3 = __this->___joint2_19;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		// Destroy(joint2);
		FixedJoint_tA10A077292A86BA2A2AB3542E3441610055F806E* L_5 = __this->___joint2_19;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_5, NULL);
	}

IL_0032:
	{
		// if (grabPoint != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->___grabPoint_17;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_0050;
		}
	}
	{
		// Destroy(grabPoint.gameObject);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = __this->___grabPoint_17;
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_9, NULL);
	}

IL_0050:
	{
		// if (heldObject)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___heldObject_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_10, NULL);
		if (!L_11)
		{
			goto IL_007c;
		}
	}
	{
		// var targetBody = heldObject.GetComponent<Rigidbody>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___heldObject_16;
		NullCheck(L_12);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_13;
		L_13 = GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90(L_12, GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		// targetBody.collisionDetectionMode = CollisionDetectionMode.Discrete;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_14 = L_13;
		NullCheck(L_14);
		Rigidbody_set_collisionDetectionMode_m70A22E9878027BF6D3D7E851A43A8E32B8E02343(L_14, 0, NULL);
		// targetBody.interpolation = RigidbodyInterpolation.None;
		NullCheck(L_14);
		Rigidbody_set_interpolation_mC7D39114A7AC6ED0AB2B40FECA4E2ED3C1D7603C(L_14, 0, NULL);
		// heldObject = null;
		__this->___heldObject_16 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___heldObject_16), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
	}

IL_007c:
	{
		// isGrabbing = false;
		__this->___isGrabbing_15 = (bool)0;
		// followTarget = controller.gameObject.transform;
		ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68* L_15 = __this->___controller_4;
		NullCheck(L_15);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16;
		L_16 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_15, NULL);
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_16, NULL);
		__this->___followTarget_13 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___followTarget_13), (void*)L_17);
		// }
		return;
	}
}
// System.Collections.IEnumerator Hand2Grip::GrabObject(UnityEngine.Collider,UnityEngine.Rigidbody)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Hand2Grip_GrabObject_mAD04BF2AA7202703E10E4570B38BDF0CC462DDEC (Hand2Grip_tA60221CD2ACC5BB10EA2928B86A49D333508D335* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___collider0, Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___targetBody1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGrabObjectU3Ed__19_tBFDE29A4FAB001C3A70BC091DAC9C946DCC3FCA0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGrabObjectU3Ed__19_tBFDE29A4FAB001C3A70BC091DAC9C946DCC3FCA0* L_0 = (U3CGrabObjectU3Ed__19_tBFDE29A4FAB001C3A70BC091DAC9C946DCC3FCA0*)il2cpp_codegen_object_new(U3CGrabObjectU3Ed__19_tBFDE29A4FAB001C3A70BC091DAC9C946DCC3FCA0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CGrabObjectU3Ed__19__ctor_m0D44921012F889C696A787A7B62BB72D050942CA(L_0, 0, NULL);
		U3CGrabObjectU3Ed__19_tBFDE29A4FAB001C3A70BC091DAC9C946DCC3FCA0* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		U3CGrabObjectU3Ed__19_tBFDE29A4FAB001C3A70BC091DAC9C946DCC3FCA0* L_2 = L_1;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_3 = ___collider0;
		NullCheck(L_2);
		L_2->___collider_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___collider_3), (void*)L_3);
		U3CGrabObjectU3Ed__19_tBFDE29A4FAB001C3A70BC091DAC9C946DCC3FCA0* L_4 = L_2;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_5 = ___targetBody1;
		NullCheck(L_4);
		L_4->___targetBody_4 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___targetBody_4), (void*)L_5);
		return L_4;
	}
}
// System.Void Hand2Grip::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hand2Grip_Update_mE5B482A67412FF5182C9545D1499E2ED8C07BB4D (Hand2Grip_tA60221CD2ACC5BB10EA2928B86A49D333508D335* __this, const RuntimeMethod* method) 
{
	{
		// PhysicsMove();
		Hand2Grip_PhysicsMove_m040BEC7F31DC2192315330B89D4CDA0BA5F7C609(__this, NULL);
		// }
		return;
	}
}
// System.Void Hand2Grip::PhysicsMove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hand2Grip_PhysicsMove_m040BEC7F31DC2192315330B89D4CDA0BA5F7C609 (Hand2Grip_tA60221CD2ACC5BB10EA2928B86A49D333508D335* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// var positionWithOffset = followTarget.TransformPoint(positionOffset);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___followTarget_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___positionOffset_7;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_0, L_1, NULL);
		V_0 = L_2;
		// var distance = Vector3.Distance(positionWithOffset, transform.position);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		float L_6;
		L_6 = Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline(L_3, L_5, NULL);
		V_1 = L_6;
		// body.velocity = (positionWithOffset - transform.position).normalized * followSpeed * distance * Time.deltaTime;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_7 = __this->___body_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_8, L_10, NULL);
		V_5 = L_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_5), NULL);
		float L_13 = __this->___followSpeed_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_12, L_13, NULL);
		float L_15 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_14, L_15, NULL);
		float L_17;
		L_17 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_16, L_17, NULL);
		NullCheck(L_7);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_7, L_18, NULL);
		// var rotationWithOffset = followTarget.rotation * Quaternion.Euler(rotationOffset);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19 = __this->___followTarget_13;
		NullCheck(L_19);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20;
		L_20 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_19, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = __this->___rotationOffset_8;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22;
		L_22 = Quaternion_Euler_m66E346161C9778DF8486DB4FE823D8F81A54AF1D_inline(L_21, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_23;
		L_23 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_20, L_22, NULL);
		// var q = rotationWithOffset * Quaternion.Inverse(body.rotation);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_24 = __this->___body_14;
		NullCheck(L_24);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_25;
		L_25 = Rigidbody_get_rotation_m07882A7024FB3F96BA13EC577A96163BBB621AA1(L_24, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26;
		L_26 = Quaternion_Inverse_m7597DECDAD37194FAC86D1A11DCE3F0C7747F817(L_25, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_27;
		L_27 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_23, L_26, NULL);
		V_2 = L_27;
		// q.ToAngleAxis(out float angle, out Vector3 axis);
		Quaternion_ToAngleAxis_mA2A5A81DAE94A9C1AFC34112BE8E5C5C3E9297AF_inline((&V_2), (&V_3), (&V_4), NULL);
		// if (angle > 180.0f) { angle -= 360.0f; }
		float L_28 = V_3;
		if ((!(((float)L_28) > ((float)(180.0f)))))
		{
			goto IL_00b0;
		}
	}
	{
		// if (angle > 180.0f) { angle -= 360.0f; }
		float L_29 = V_3;
		V_3 = ((float)il2cpp_codegen_subtract(L_29, (360.0f)));
	}

IL_00b0:
	{
		// body.angularVelocity = angle * axis * Mathf.Deg2Rad * rotateSpeed * Time.deltaTime;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_30 = __this->___body_14;
		float L_31 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline(L_31, L_32, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_33, (0.0174532924f), NULL);
		float L_35 = __this->___rotateSpeed_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_34, L_35, NULL);
		float L_37;
		L_37 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_36, L_37, NULL);
		NullCheck(L_30);
		Rigidbody_set_angularVelocity_m23266B4E52BF0D2E65CC984AC73CC40B8D4A27E0(L_30, L_38, NULL);
		// }
		return;
	}
}
// System.Void Hand2Grip::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hand2Grip__ctor_m9D39273EA214C3FC14DA0EBF74048A498B763AF5 (Hand2Grip_tA60221CD2ACC5BB10EA2928B86A49D333508D335* __this, const RuntimeMethod* method) 
{
	{
		// public float followSpeed = 30f;
		__this->___followSpeed_5 = (30.0f);
		// public float rotateSpeed = 100f;
		__this->___rotateSpeed_6 = (100.0f);
		// public float reachDistance = 0.1f, joinDistance = 0.05f;
		__this->___reachDistance_10 = (0.100000001f);
		// public float reachDistance = 0.1f, joinDistance = 0.05f;
		__this->___joinDistance_11 = (0.0500000007f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Hand2Grip/<GrabObject>d__19::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGrabObjectU3Ed__19__ctor_m0D44921012F889C696A787A7B62BB72D050942CA (U3CGrabObjectU3Ed__19_tBFDE29A4FAB001C3A70BC091DAC9C946DCC3FCA0* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Hand2Grip/<GrabObject>d__19::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGrabObjectU3Ed__19_System_IDisposable_Dispose_m011262EDD6AD999EB9545EEF711E615CADBB1B41 (U3CGrabObjectU3Ed__19_tBFDE29A4FAB001C3A70BC091DAC9C946DCC3FCA0* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Hand2Grip/<GrabObject>d__19::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGrabObjectU3Ed__19_MoveNext_m7A5210FAAC2BCB1C1CF353D13DD82FFF307A856F (U3CGrabObjectU3Ed__19_tBFDE29A4FAB001C3A70BC091DAC9C946DCC3FCA0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisFixedJoint_tA10A077292A86BA2A2AB3542E3441610055F806E_m55087CF9E0B9B9026B0844811592B36880109159_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Hand2Grip_tA60221CD2ACC5BB10EA2928B86A49D333508D335* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		Hand2Grip_tA60221CD2ACC5BB10EA2928B86A49D333508D335* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_008e;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// isGrabbing = true;
		Hand2Grip_tA60221CD2ACC5BB10EA2928B86A49D333508D335* L_4 = V_1;
		NullCheck(L_4);
		L_4->___isGrabbing_15 = (bool)1;
		// grabPoint = new GameObject().transform;
		Hand2Grip_tA60221CD2ACC5BB10EA2928B86A49D333508D335* L_5 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		GameObject__ctor_m7D0340DE160786E6EFA8DABD39EC3B694DA30AAD(L_6, NULL);
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		NullCheck(L_5);
		L_5->___grabPoint_17 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___grabPoint_17), (void*)L_7);
		// grabPoint.position = collider.ClosestPoint(palm.position);
		Hand2Grip_tA60221CD2ACC5BB10EA2928B86A49D333508D335* L_8 = V_1;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = L_8->___grabPoint_17;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_10 = __this->___collider_3;
		Hand2Grip_tA60221CD2ACC5BB10EA2928B86A49D333508D335* L_11 = V_1;
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = L_11->___palm_9;
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Collider_ClosestPoint_mFFF9B6F6CF9F18B22B325835A3E2E78A1C03BFCB(L_10, L_13, NULL);
		NullCheck(L_9);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_9, L_14, NULL);
		// grabPoint.parent = heldObject.transform;
		Hand2Grip_tA60221CD2ACC5BB10EA2928B86A49D333508D335* L_15 = V_1;
		NullCheck(L_15);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = L_15->___grabPoint_17;
		Hand2Grip_tA60221CD2ACC5BB10EA2928B86A49D333508D335* L_17 = V_1;
		NullCheck(L_17);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = L_17->___heldObject_16;
		NullCheck(L_18);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_18, NULL);
		NullCheck(L_16);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_16, L_19, NULL);
		// followTarget = grabPoint;
		Hand2Grip_tA60221CD2ACC5BB10EA2928B86A49D333508D335* L_20 = V_1;
		Hand2Grip_tA60221CD2ACC5BB10EA2928B86A49D333508D335* L_21 = V_1;
		NullCheck(L_21);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22 = L_21->___grabPoint_17;
		NullCheck(L_20);
		L_20->___followTarget_13 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&L_20->___followTarget_13), (void*)L_22);
		goto IL_0095;
	}

IL_007a:
	{
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_23 = (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663*)il2cpp_codegen_object_new(WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB(L_23, NULL);
		__this->___U3CU3E2__current_1 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_23);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_008e:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0095:
	{
		// while (grabPoint != null && Vector3.Distance(grabPoint.position, palm.position) > joinDistance)
		Hand2Grip_tA60221CD2ACC5BB10EA2928B86A49D333508D335* L_24 = V_1;
		NullCheck(L_24);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25 = L_24->___grabPoint_17;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_26;
		L_26 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_25, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_26)
		{
			goto IL_00c6;
		}
	}
	{
		Hand2Grip_tA60221CD2ACC5BB10EA2928B86A49D333508D335* L_27 = V_1;
		NullCheck(L_27);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28 = L_27->___grabPoint_17;
		NullCheck(L_28);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_28, NULL);
		Hand2Grip_tA60221CD2ACC5BB10EA2928B86A49D333508D335* L_30 = V_1;
		NullCheck(L_30);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31 = L_30->___palm_9;
		NullCheck(L_31);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_31, NULL);
		float L_33;
		L_33 = Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline(L_29, L_32, NULL);
		Hand2Grip_tA60221CD2ACC5BB10EA2928B86A49D333508D335* L_34 = V_1;
		NullCheck(L_34);
		float L_35 = L_34->___joinDistance_11;
		if ((((float)L_33) > ((float)L_35)))
		{
			goto IL_007a;
		}
	}

IL_00c6:
	{
		// body.velocity = Vector3.zero;
		Hand2Grip_tA60221CD2ACC5BB10EA2928B86A49D333508D335* L_36 = V_1;
		NullCheck(L_36);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_37 = L_36->___body_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		NullCheck(L_37);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_37, L_38, NULL);
		// body.angularVelocity = Vector3.zero;
		Hand2Grip_tA60221CD2ACC5BB10EA2928B86A49D333508D335* L_39 = V_1;
		NullCheck(L_39);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_40 = L_39->___body_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		NullCheck(L_40);
		Rigidbody_set_angularVelocity_m23266B4E52BF0D2E65CC984AC73CC40B8D4A27E0(L_40, L_41, NULL);
		// targetBody.velocity = Vector3.zero;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_42 = __this->___targetBody_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		NullCheck(L_42);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_42, L_43, NULL);
		// targetBody.angularVelocity = Vector3.zero;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_44 = __this->___targetBody_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		NullCheck(L_44);
		Rigidbody_set_angularVelocity_m23266B4E52BF0D2E65CC984AC73CC40B8D4A27E0(L_44, L_45, NULL);
		// targetBody.collisionDetectionMode = CollisionDetectionMode.Continuous;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_46 = __this->___targetBody_4;
		NullCheck(L_46);
		Rigidbody_set_collisionDetectionMode_m70A22E9878027BF6D3D7E851A43A8E32B8E02343(L_46, 1, NULL);
		// targetBody.interpolation = RigidbodyInterpolation.Interpolate;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_47 = __this->___targetBody_4;
		NullCheck(L_47);
		Rigidbody_set_interpolation_mC7D39114A7AC6ED0AB2B40FECA4E2ED3C1D7603C(L_47, 1, NULL);
		// joint1 = gameObject.AddComponent<FixedJoint>();
		Hand2Grip_tA60221CD2ACC5BB10EA2928B86A49D333508D335* L_48 = V_1;
		Hand2Grip_tA60221CD2ACC5BB10EA2928B86A49D333508D335* L_49 = V_1;
		NullCheck(L_49);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_50;
		L_50 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_49, NULL);
		NullCheck(L_50);
		FixedJoint_tA10A077292A86BA2A2AB3542E3441610055F806E* L_51;
		L_51 = GameObject_AddComponent_TisFixedJoint_tA10A077292A86BA2A2AB3542E3441610055F806E_m55087CF9E0B9B9026B0844811592B36880109159(L_50, GameObject_AddComponent_TisFixedJoint_tA10A077292A86BA2A2AB3542E3441610055F806E_m55087CF9E0B9B9026B0844811592B36880109159_RuntimeMethod_var);
		NullCheck(L_48);
		L_48->___joint1_18 = L_51;
		Il2CppCodeGenWriteBarrier((void**)(&L_48->___joint1_18), (void*)L_51);
		// joint1.connectedBody = targetBody;
		Hand2Grip_tA60221CD2ACC5BB10EA2928B86A49D333508D335* L_52 = V_1;
		NullCheck(L_52);
		FixedJoint_tA10A077292A86BA2A2AB3542E3441610055F806E* L_53 = L_52->___joint1_18;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_54 = __this->___targetBody_4;
		NullCheck(L_53);
		Joint_set_connectedBody_mE9E631476E9D4264E8DC0D6307146F5EB64D3ED4(L_53, L_54, NULL);
		// joint1.breakForce = float.PositiveInfinity;
		Hand2Grip_tA60221CD2ACC5BB10EA2928B86A49D333508D335* L_55 = V_1;
		NullCheck(L_55);
		FixedJoint_tA10A077292A86BA2A2AB3542E3441610055F806E* L_56 = L_55->___joint1_18;
		NullCheck(L_56);
		Joint_set_breakForce_m42F130D31EFC282FE0887A4E6A399F53EB3FB40F(L_56, (std::numeric_limits<float>::infinity()), NULL);
		// joint1.breakTorque = float.PositiveInfinity;
		Hand2Grip_tA60221CD2ACC5BB10EA2928B86A49D333508D335* L_57 = V_1;
		NullCheck(L_57);
		FixedJoint_tA10A077292A86BA2A2AB3542E3441610055F806E* L_58 = L_57->___joint1_18;
		NullCheck(L_58);
		Joint_set_breakTorque_mD76D069CDFCE726493BA790F19496FD8D08EFB04(L_58, (std::numeric_limits<float>::infinity()), NULL);
		// joint1.connectedMassScale = 1;
		Hand2Grip_tA60221CD2ACC5BB10EA2928B86A49D333508D335* L_59 = V_1;
		NullCheck(L_59);
		FixedJoint_tA10A077292A86BA2A2AB3542E3441610055F806E* L_60 = L_59->___joint1_18;
		NullCheck(L_60);
		Joint_set_connectedMassScale_m6F7D8FEFAD6BFDC7177D9D06DBCCDCC288C4475D(L_60, (1.0f), NULL);
		// joint1.massScale = 1;
		Hand2Grip_tA60221CD2ACC5BB10EA2928B86A49D333508D335* L_61 = V_1;
		NullCheck(L_61);
		FixedJoint_tA10A077292A86BA2A2AB3542E3441610055F806E* L_62 = L_61->___joint1_18;
		NullCheck(L_62);
		Joint_set_massScale_m23111BDA5A8825E83069372785DBF56FCDAA4BC1(L_62, (1.0f), NULL);
		// joint1.enableCollision = false;
		Hand2Grip_tA60221CD2ACC5BB10EA2928B86A49D333508D335* L_63 = V_1;
		NullCheck(L_63);
		FixedJoint_tA10A077292A86BA2A2AB3542E3441610055F806E* L_64 = L_63->___joint1_18;
		NullCheck(L_64);
		Joint_set_enableCollision_m73C4FF0B64FDBDEFEEDCD9F98D491906F7715080(L_64, (bool)0, NULL);
		// joint1.enablePreprocessing = false;
		Hand2Grip_tA60221CD2ACC5BB10EA2928B86A49D333508D335* L_65 = V_1;
		NullCheck(L_65);
		FixedJoint_tA10A077292A86BA2A2AB3542E3441610055F806E* L_66 = L_65->___joint1_18;
		NullCheck(L_66);
		Joint_set_enablePreprocessing_m0970649287DC20C289E3AB775CBD1D65883B6F27(L_66, (bool)0, NULL);
		// joint2 = heldObject.AddComponent<FixedJoint>();
		Hand2Grip_tA60221CD2ACC5BB10EA2928B86A49D333508D335* L_67 = V_1;
		Hand2Grip_tA60221CD2ACC5BB10EA2928B86A49D333508D335* L_68 = V_1;
		NullCheck(L_68);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_69 = L_68->___heldObject_16;
		NullCheck(L_69);
		FixedJoint_tA10A077292A86BA2A2AB3542E3441610055F806E* L_70;
		L_70 = GameObject_AddComponent_TisFixedJoint_tA10A077292A86BA2A2AB3542E3441610055F806E_m55087CF9E0B9B9026B0844811592B36880109159(L_69, GameObject_AddComponent_TisFixedJoint_tA10A077292A86BA2A2AB3542E3441610055F806E_m55087CF9E0B9B9026B0844811592B36880109159_RuntimeMethod_var);
		NullCheck(L_67);
		L_67->___joint2_19 = L_70;
		Il2CppCodeGenWriteBarrier((void**)(&L_67->___joint2_19), (void*)L_70);
		// joint2.connectedBody = body;
		Hand2Grip_tA60221CD2ACC5BB10EA2928B86A49D333508D335* L_71 = V_1;
		NullCheck(L_71);
		FixedJoint_tA10A077292A86BA2A2AB3542E3441610055F806E* L_72 = L_71->___joint2_19;
		Hand2Grip_tA60221CD2ACC5BB10EA2928B86A49D333508D335* L_73 = V_1;
		NullCheck(L_73);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_74 = L_73->___body_14;
		NullCheck(L_72);
		Joint_set_connectedBody_mE9E631476E9D4264E8DC0D6307146F5EB64D3ED4(L_72, L_74, NULL);
		// joint2.breakForce = float.PositiveInfinity;
		Hand2Grip_tA60221CD2ACC5BB10EA2928B86A49D333508D335* L_75 = V_1;
		NullCheck(L_75);
		FixedJoint_tA10A077292A86BA2A2AB3542E3441610055F806E* L_76 = L_75->___joint2_19;
		NullCheck(L_76);
		Joint_set_breakForce_m42F130D31EFC282FE0887A4E6A399F53EB3FB40F(L_76, (std::numeric_limits<float>::infinity()), NULL);
		// joint2.breakTorque = float.PositiveInfinity;
		Hand2Grip_tA60221CD2ACC5BB10EA2928B86A49D333508D335* L_77 = V_1;
		NullCheck(L_77);
		FixedJoint_tA10A077292A86BA2A2AB3542E3441610055F806E* L_78 = L_77->___joint2_19;
		NullCheck(L_78);
		Joint_set_breakTorque_mD76D069CDFCE726493BA790F19496FD8D08EFB04(L_78, (std::numeric_limits<float>::infinity()), NULL);
		// joint2.connectedMassScale = 1;
		Hand2Grip_tA60221CD2ACC5BB10EA2928B86A49D333508D335* L_79 = V_1;
		NullCheck(L_79);
		FixedJoint_tA10A077292A86BA2A2AB3542E3441610055F806E* L_80 = L_79->___joint2_19;
		NullCheck(L_80);
		Joint_set_connectedMassScale_m6F7D8FEFAD6BFDC7177D9D06DBCCDCC288C4475D(L_80, (1.0f), NULL);
		// joint2.massScale = 1;
		Hand2Grip_tA60221CD2ACC5BB10EA2928B86A49D333508D335* L_81 = V_1;
		NullCheck(L_81);
		FixedJoint_tA10A077292A86BA2A2AB3542E3441610055F806E* L_82 = L_81->___joint2_19;
		NullCheck(L_82);
		Joint_set_massScale_m23111BDA5A8825E83069372785DBF56FCDAA4BC1(L_82, (1.0f), NULL);
		// joint2.enableCollision = false;
		Hand2Grip_tA60221CD2ACC5BB10EA2928B86A49D333508D335* L_83 = V_1;
		NullCheck(L_83);
		FixedJoint_tA10A077292A86BA2A2AB3542E3441610055F806E* L_84 = L_83->___joint2_19;
		NullCheck(L_84);
		Joint_set_enableCollision_m73C4FF0B64FDBDEFEEDCD9F98D491906F7715080(L_84, (bool)0, NULL);
		// joint2.enablePreprocessing = false;
		Hand2Grip_tA60221CD2ACC5BB10EA2928B86A49D333508D335* L_85 = V_1;
		NullCheck(L_85);
		FixedJoint_tA10A077292A86BA2A2AB3542E3441610055F806E* L_86 = L_85->___joint2_19;
		NullCheck(L_86);
		Joint_set_enablePreprocessing_m0970649287DC20C289E3AB775CBD1D65883B6F27(L_86, (bool)0, NULL);
		// followTarget = controller.gameObject.transform;
		Hand2Grip_tA60221CD2ACC5BB10EA2928B86A49D333508D335* L_87 = V_1;
		Hand2Grip_tA60221CD2ACC5BB10EA2928B86A49D333508D335* L_88 = V_1;
		NullCheck(L_88);
		ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68* L_89 = L_88->___controller_4;
		NullCheck(L_89);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_90;
		L_90 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_89, NULL);
		NullCheck(L_90);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_91;
		L_91 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_90, NULL);
		NullCheck(L_87);
		L_87->___followTarget_13 = L_91;
		Il2CppCodeGenWriteBarrier((void**)(&L_87->___followTarget_13), (void*)L_91);
		// }
		return (bool)0;
	}
}
// System.Object Hand2Grip/<GrabObject>d__19::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGrabObjectU3Ed__19_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m3CB9FAB05842DB0CCF445240F6D9681CF3400DFE (U3CGrabObjectU3Ed__19_tBFDE29A4FAB001C3A70BC091DAC9C946DCC3FCA0* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Hand2Grip/<GrabObject>d__19::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGrabObjectU3Ed__19_System_Collections_IEnumerator_Reset_m4D04E6670F051DB4AED8943F9061F463D6D08E2F (U3CGrabObjectU3Ed__19_tBFDE29A4FAB001C3A70BC091DAC9C946DCC3FCA0* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGrabObjectU3Ed__19_System_Collections_IEnumerator_Reset_m4D04E6670F051DB4AED8943F9061F463D6D08E2F_RuntimeMethod_var)));
	}
}
// System.Object Hand2Grip/<GrabObject>d__19::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGrabObjectU3Ed__19_System_Collections_IEnumerator_get_Current_mB5EFD71C18EC6ED3F9539B70EC6A2FE2AF91379B (U3CGrabObjectU3Ed__19_tBFDE29A4FAB001C3A70BC091DAC9C946DCC3FCA0* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void HandController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandController_Start_m83BA4ED4B162A79177B32DCFCAC05906D4AD8A94 (HandController_tD866B993094B1833037D30396BB39F6C15DDC10C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68_mEDBB78EACD2B75F6F4F8F67DDB48C086DE383FF2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// controller = GetComponent < ActionBasedController>();
		ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68* L_0;
		L_0 = Component_GetComponent_TisActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68_mEDBB78EACD2B75F6F4F8F67DDB48C086DE383FF2(__this, Component_GetComponent_TisActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68_mEDBB78EACD2B75F6F4F8F67DDB48C086DE383FF2_RuntimeMethod_var);
		__this->___controller_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___controller_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void HandController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandController_Update_mD7420626ECC5A2E7D45A63CAC4A2971400371418 (HandController_tD866B993094B1833037D30396BB39F6C15DDC10C* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void HandController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandController__ctor_mC7FBA1DBB0123D91F5AA40872B63ABCFD650884F (HandController_tD866B993094B1833037D30396BB39F6C15DDC10C* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void HPPhysics::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HPPhysics_Start_m0131717D50EC116C5865D740FD11C00E63AA7F0A (HPPhysics_tFE650867FB6DB420D23C6AC43C7DD33836B5AEE9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rb = GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0;
		L_0 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___rb_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rb_5), (void*)L_0);
		// }
		return;
	}
}
// System.Void HPPhysics::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HPPhysics_FixedUpdate_m799FB0F1FDD995190544616B9A1000270BDAC33F (HPPhysics_tFE650867FB6DB420D23C6AC43C7DD33836B5AEE9* __this, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// rb.velocity = (target.position - transform.position)/Time.fixedDeltaTime;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0 = __this->___rb_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___target_4;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_2, L_4, NULL);
		float L_6;
		L_6 = Time_get_fixedDeltaTime_mD7107AF06157FC18A50E14E0755CEE137E9A4088(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline(L_5, L_6, NULL);
		NullCheck(L_0);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_0, L_7, NULL);
		// Quaternion rotDif = target.rotation * Quaternion.Inverse(transform.rotation);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = __this->___target_4;
		NullCheck(L_8);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
		L_9 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_8, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_10);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11;
		L_11 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_10, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
		L_12 = Quaternion_Inverse_m7597DECDAD37194FAC86D1A11DCE3F0C7747F817(L_11, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13;
		L_13 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_9, L_12, NULL);
		V_0 = L_13;
		// rotDif.ToAngleAxis(out float angleInDeg, out Vector3 rotAxis);
		Quaternion_ToAngleAxis_mA2A5A81DAE94A9C1AFC34112BE8E5C5C3E9297AF_inline((&V_0), (&V_1), (&V_2), NULL);
		// Vector3 rotDifInDeg = angleInDeg * rotAxis;
		float L_14 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline(L_14, L_15, NULL);
		V_3 = L_16;
		// rb.angularVelocity = rotDifInDeg * Mathf.Deg2Rad / Time.fixedDeltaTime;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_17 = __this->___rb_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_18, (0.0174532924f), NULL);
		float L_20;
		L_20 = Time_get_fixedDeltaTime_mD7107AF06157FC18A50E14E0755CEE137E9A4088(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline(L_19, L_20, NULL);
		NullCheck(L_17);
		Rigidbody_set_angularVelocity_m23266B4E52BF0D2E65CC984AC73CC40B8D4A27E0(L_17, L_21, NULL);
		// }
		return;
	}
}
// System.Void HPPhysics::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HPPhysics__ctor_m68157EBBBE209168387D1D2A8E6B826EC0206800 (HPPhysics_tFE650867FB6DB420D23C6AC43C7DD33836B5AEE9* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void movingCube::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void movingCube_Start_mB516FCFEFBF720853C5BD16DA40CA735819A977E (movingCube_tEEF083DD8B4B6F91F84E28E3D6B4B2503BBAE332* __this, const RuntimeMethod* method) 
{
	{
		// start = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		__this->___start_5 = L_1;
		// }
		return;
	}
}
// System.Void movingCube::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void movingCube_Update_mF83329E16533F1F81F4507544BD9FBD791A9472B (movingCube_tEEF083DD8B4B6F91F84E28E3D6B4B2503BBAE332* __this, const RuntimeMethod* method) 
{
	{
		// transform.position = start + new Vector3(Mathf.Sin(Time.time),0,0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___start_5;
		float L_2;
		L_2 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		float L_3;
		L_3 = sinf(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_3, (0.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_1, L_4, NULL);
		NullCheck(L_0);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_0, L_5, NULL);
		// }
		return;
	}
}
// System.Void movingCube::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void movingCube__ctor_mD77D9B42568F8A50352BBFCC465582D446CCFC89 (movingCube_tEEF083DD8B4B6F91F84E28E3D6B4B2503BBAE332* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void swordCut::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void swordCut_Start_m31489FDC95D2C5395B9B61B6B857D1FD1E3F701E (swordCut_t343FBCB45EAA8EBE99A89D3CAF80116E5E82303F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisXRGrabInteractable_t8F7EA04527E7074002690EA93ACEAEFEBD79A772_m45D42D0442D2EA51C90CBC916300D8E554443089_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// xrg = GetComponent<XRGrabInteractable>();
		XRGrabInteractable_t8F7EA04527E7074002690EA93ACEAEFEBD79A772* L_0;
		L_0 = Component_GetComponent_TisXRGrabInteractable_t8F7EA04527E7074002690EA93ACEAEFEBD79A772_m45D42D0442D2EA51C90CBC916300D8E554443089(__this, Component_GetComponent_TisXRGrabInteractable_t8F7EA04527E7074002690EA93ACEAEFEBD79A772_m45D42D0442D2EA51C90CBC916300D8E554443089_RuntimeMethod_var);
		__this->___xrg_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___xrg_13), (void*)L_0);
		// }
		return;
	}
}
// System.Void swordCut::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void swordCut_Update_mA4847638A7ABEA03A901CA3A243A0FBB930322FA (swordCut_t343FBCB45EAA8EBE99A89D3CAF80116E5E82303F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5E951E8F4D17A84BD237E21C35AF91A13D78A415);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(start != Vector3.zero && start2 != Vector3.zero && end != Vector3.zero && end2 != Vector3.zero && cutObject.Count != 0)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___start_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		bool L_2;
		L_2 = Vector3_op_Inequality_m6A7FB1C9E9DE194708997BFA24C6E238D92D908E_inline(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_00d6;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = __this->___start2_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		bool L_5;
		L_5 = Vector3_op_Inequality_m6A7FB1C9E9DE194708997BFA24C6E238D92D908E_inline(L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_00d6;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = __this->___end_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		bool L_8;
		L_8 = Vector3_op_Inequality_m6A7FB1C9E9DE194708997BFA24C6E238D92D908E_inline(L_6, L_7, NULL);
		if (!L_8)
		{
			goto IL_00d6;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = __this->___end2_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		bool L_11;
		L_11 = Vector3_op_Inequality_m6A7FB1C9E9DE194708997BFA24C6E238D92D908E_inline(L_9, L_10, NULL);
		if (!L_11)
		{
			goto IL_00d6;
		}
	}
	{
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_12 = __this->___cutObject_6;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_12, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		if (!L_13)
		{
			goto IL_00d6;
		}
	}
	{
		// slice.Set3Points(start, start2, end);
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* L_14 = (&__this->___slice_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = __this->___start_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = __this->___start2_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = __this->___end_9;
		Plane_Set3Points_m33CBC0B01C73FE233AB4192ABBDC66BA84D8C1C4(L_14, L_15, L_16, L_17, NULL);
		// Debug.DrawRay(start, slice.normal * 5f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = __this->___start_7;
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* L_19 = (&__this->___slice_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Plane_get_normal_mA161D94E6F7327BC111007C880B76E1731729EFB(L_19, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_20, (5.0f), NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_DrawRay_mF20EB04CB62AA06AE8450793E8F6F952578E5F1A(L_18, L_21, NULL);
		// StartCoroutine("cut");
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_22;
		L_22 = MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4(__this, _stringLiteral5E951E8F4D17A84BD237E21C35AF91A13D78A415, NULL);
		// start = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		__this->___start_7 = L_23;
		// start2 = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		__this->___start2_8 = L_24;
		// end = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		__this->___end_9 = L_25;
		// cutObject.Clear();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_26 = __this->___cutObject_6;
		NullCheck(L_26);
		List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_inline(L_26, List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_RuntimeMethod_var);
	}

IL_00d6:
	{
		// }
		return;
	}
}
// System.Void swordCut::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void swordCut_OnTriggerEnter_m0044F5A627C05432C65C9CD07C233B40DD7A9A75 (swordCut_t343FBCB45EAA8EBE99A89D3CAF80116E5E82303F* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSlice_t2AC8BEA47D927D39DB8D1C967C7789F7E06D57D7_m7208B4E1299AEDC51A77819601999BCE66049916_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.GetComponent<Slice>())
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		Slice_t2AC8BEA47D927D39DB8D1C967C7789F7E06D57D7* L_2;
		L_2 = GameObject_GetComponent_TisSlice_t2AC8BEA47D927D39DB8D1C967C7789F7E06D57D7_m7208B4E1299AEDC51A77819601999BCE66049916(L_1, GameObject_GetComponent_TisSlice_t2AC8BEA47D927D39DB8D1C967C7789F7E06D57D7_m7208B4E1299AEDC51A77819601999BCE66049916_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_2, NULL);
		if (!L_3)
		{
			goto IL_0045;
		}
	}
	{
		// cutObject.Add(other.gameObject);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_4 = __this->___cutObject_6;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_5 = ___other0;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		NullCheck(L_4);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_4, L_6, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		// start = point1.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = __this->___point1_4;
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		__this->___start_7 = L_8;
		// start2 = point2.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = __this->___point2_5;
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		__this->___start2_8 = L_10;
	}

IL_0045:
	{
		// }
		return;
	}
}
// System.Void swordCut::OnTriggerExit(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void swordCut_OnTriggerExit_m055161BB9E60C912CCDB41FC7AC5E2FD9912A210 (swordCut_t343FBCB45EAA8EBE99A89D3CAF80116E5E82303F* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m8D2C9B0C7844486763AE6C2CA3C04FA4BBA9B384_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(cutObject.Contains(other.gameObject))
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->___cutObject_6;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_1 = ___other0;
		NullCheck(L_1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_1, NULL);
		NullCheck(L_0);
		bool L_3;
		L_3 = List_1_Contains_m8D2C9B0C7844486763AE6C2CA3C04FA4BBA9B384(L_0, L_2, List_1_Contains_m8D2C9B0C7844486763AE6C2CA3C04FA4BBA9B384_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		// end = point1.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___point1_4;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		__this->___end_9 = L_5;
		// end2 = point2.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->___point2_5;
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		__this->___end2_10 = L_7;
	}

IL_0035:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator swordCut::cut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* swordCut_cut_mF0E5F849E3545B034684B04C4158FDE959DD6CDC (swordCut_t343FBCB45EAA8EBE99A89D3CAF80116E5E82303F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CcutU3Ed__15_t1949A920ADEF65495A6ABFF41F9E7E47BF2E9DF6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CcutU3Ed__15_t1949A920ADEF65495A6ABFF41F9E7E47BF2E9DF6* L_0 = (U3CcutU3Ed__15_t1949A920ADEF65495A6ABFF41F9E7E47BF2E9DF6*)il2cpp_codegen_object_new(U3CcutU3Ed__15_t1949A920ADEF65495A6ABFF41F9E7E47BF2E9DF6_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CcutU3Ed__15__ctor_mCD060A9512186C6281AB1EE2AEB1BE6140B2672F(L_0, 0, NULL);
		U3CcutU3Ed__15_t1949A920ADEF65495A6ABFF41F9E7E47BF2E9DF6* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void swordCut::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void swordCut__ctor_mAEB97029771C0211DC285C888BB61AD86249E865 (swordCut_t343FBCB45EAA8EBE99A89D3CAF80116E5E82303F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0CDD6F02F45026B4267E7117C5DDC188F87EE7BE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<GameObject> cutObject = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_0, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->___cutObject_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cutObject_6), (void*)L_0);
		// public List<Collider> swordColliders = new List<Collider>();
		List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* L_1 = (List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252*)il2cpp_codegen_object_new(List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m0CDD6F02F45026B4267E7117C5DDC188F87EE7BE(L_1, List_1__ctor_m0CDD6F02F45026B4267E7117C5DDC188F87EE7BE_RuntimeMethod_var);
		__this->___swordColliders_14 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___swordColliders_14), (void*)L_1);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void swordCut/<cut>d__15::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CcutU3Ed__15__ctor_mCD060A9512186C6281AB1EE2AEB1BE6140B2672F (U3CcutU3Ed__15_t1949A920ADEF65495A6ABFF41F9E7E47BF2E9DF6* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void swordCut/<cut>d__15::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CcutU3Ed__15_System_IDisposable_Dispose_m68D840873134F21BAB4A93B49489A218001701CB (U3CcutU3Ed__15_t1949A920ADEF65495A6ABFF41F9E7E47BF2E9DF6* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean swordCut/<cut>d__15::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CcutU3Ed__15_MoveNext_m138F948365A93199B9964134504FFF24761EFB71 (U3CcutU3Ed__15_t1949A920ADEF65495A6ABFF41F9E7E47BF2E9DF6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSlice_t2AC8BEA47D927D39DB8D1C967C7789F7E06D57D7_m7208B4E1299AEDC51A77819601999BCE66049916_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	swordCut_t343FBCB45EAA8EBE99A89D3CAF80116E5E82303F* V_1 = NULL;
	Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		swordCut_t343FBCB45EAA8EBE99A89D3CAF80116E5E82303F* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_00a5;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// foreach(var obj in cutObject)
		swordCut_t343FBCB45EAA8EBE99A89D3CAF80116E5E82303F* L_4 = V_1;
		NullCheck(L_4);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_5 = L_4->___cutObject_6;
		NullCheck(L_5);
		Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 L_6;
		L_6 = List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8(L_5, List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		V_2 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0087:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D((&V_2), Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_007c_1;
			}

IL_002f_1:
			{
				// foreach(var obj in cutObject)
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
				L_7 = Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline((&V_2), Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
				// obj.GetComponent<Slice>().ComputeSlice(slice.normal, (start + start2 + end + end2) / 4);
				NullCheck(L_7);
				Slice_t2AC8BEA47D927D39DB8D1C967C7789F7E06D57D7* L_8;
				L_8 = GameObject_GetComponent_TisSlice_t2AC8BEA47D927D39DB8D1C967C7789F7E06D57D7_m7208B4E1299AEDC51A77819601999BCE66049916(L_7, GameObject_GetComponent_TisSlice_t2AC8BEA47D927D39DB8D1C967C7789F7E06D57D7_m7208B4E1299AEDC51A77819601999BCE66049916_RuntimeMethod_var);
				swordCut_t343FBCB45EAA8EBE99A89D3CAF80116E5E82303F* L_9 = V_1;
				NullCheck(L_9);
				Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* L_10 = (&L_9->___slice_11);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
				L_11 = Plane_get_normal_mA161D94E6F7327BC111007C880B76E1731729EFB(L_10, NULL);
				swordCut_t343FBCB45EAA8EBE99A89D3CAF80116E5E82303F* L_12 = V_1;
				NullCheck(L_12);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = L_12->___start_7;
				swordCut_t343FBCB45EAA8EBE99A89D3CAF80116E5E82303F* L_14 = V_1;
				NullCheck(L_14);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = L_14->___start2_8;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
				L_16 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_13, L_15, NULL);
				swordCut_t343FBCB45EAA8EBE99A89D3CAF80116E5E82303F* L_17 = V_1;
				NullCheck(L_17);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = L_17->___end_9;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
				L_19 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_16, L_18, NULL);
				swordCut_t343FBCB45EAA8EBE99A89D3CAF80116E5E82303F* L_20 = V_1;
				NullCheck(L_20);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = L_20->___end2_10;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
				L_22 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_19, L_21, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
				L_23 = Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline(L_22, (4.0f), NULL);
				NullCheck(L_8);
				Slice_ComputeSlice_mAC286F1977B71290A38C456400F0C7146754A896(L_8, L_11, L_23, NULL);
			}

IL_007c_1:
			{
				// foreach(var obj in cutObject)
				bool L_24;
				L_24 = Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27((&V_2), Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
				if (L_24)
				{
					goto IL_002f_1;
				}
			}
			{
				goto IL_0095;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0095:
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00a5:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// }
		return (bool)0;
	}
}
// System.Object swordCut/<cut>d__15::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CcutU3Ed__15_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mAC02A3BBF1B3B82980AC1E2DBC21E21F79F40B74 (U3CcutU3Ed__15_t1949A920ADEF65495A6ABFF41F9E7E47BF2E9DF6* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void swordCut/<cut>d__15::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CcutU3Ed__15_System_Collections_IEnumerator_Reset_m7F3BCCC335227826F07EC124162B3243FCC57252 (U3CcutU3Ed__15_t1949A920ADEF65495A6ABFF41F9E7E47BF2E9DF6* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CcutU3Ed__15_System_Collections_IEnumerator_Reset_m7F3BCCC335227826F07EC124162B3243FCC57252_RuntimeMethod_var)));
	}
}
// System.Object swordCut/<cut>d__15::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CcutU3Ed__15_System_Collections_IEnumerator_get_Current_mA0C569151EFC3AE3B48D6D4FE00239B2356F92F3 (U3CcutU3Ed__15_t1949A920ADEF65495A6ABFF41F9E7E47BF2E9DF6* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void TwoHandGrabInteractable::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwoHandGrabInteractable_Start_mA239B0025CA46F5CB73A58968A3A83931DE3E4BE (TwoHandGrabInteractable_tB257131B5385A5451C6347829D0F1FC0B8B550F7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mB3EEC14FD31AB50D776081451214E953D79816B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m40B43470B62F9642C8458E2649415E3B81E9985A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m32B311E84551374FA832EC51E87B12F059954EE9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m5BFEB7CA7D4644B762C9DECE0006F2AA0C107662_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TwoHandGrabInteractable_OnSecondHandGrab_m1DB8CC8E65C4EA17061C4156664811172A10DEC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TwoHandGrabInteractable_OnSecondHandRelease_mC2B41610D7DD04085D019603A63F744974C5C417_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mAE71681FB0832FD7DBA813E5ADDBA574EA32EED2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mB662756036996A6B6F83F6492CE9E26797AF9602_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tF071AAB5FF1123FC757BF8F9D75AC106DA940690 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// foreach (var item in secondHandGrabpoints)
		List_1_tEB4CD4A0B4ED2014FB371ED7CE298DE95E157E5D* L_0 = __this->___secondHandGrabpoints_97;
		NullCheck(L_0);
		Enumerator_tF071AAB5FF1123FC757BF8F9D75AC106DA940690 L_1;
		L_1 = List_1_GetEnumerator_m5BFEB7CA7D4644B762C9DECE0006F2AA0C107662(L_0, List_1_GetEnumerator_m5BFEB7CA7D4644B762C9DECE0006F2AA0C107662_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004d:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mB3EEC14FD31AB50D776081451214E953D79816B2((&V_0), Enumerator_Dispose_mB3EEC14FD31AB50D776081451214E953D79816B2_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0042_1;
			}

IL_000e_1:
			{
				// foreach (var item in secondHandGrabpoints)
				XRSimpleInteractable_t3A9B4306E28507FF98E52F5203CE896262679E79* L_2;
				L_2 = Enumerator_get_Current_m32B311E84551374FA832EC51E87B12F059954EE9_inline((&V_0), Enumerator_get_Current_m32B311E84551374FA832EC51E87B12F059954EE9_RuntimeMethod_var);
				// item.selectEntered.AddListener(OnSecondHandGrab);
				XRSimpleInteractable_t3A9B4306E28507FF98E52F5203CE896262679E79* L_3 = L_2;
				NullCheck(L_3);
				SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* L_4;
				L_4 = XRBaseInteractable_get_selectEntered_m1E5439CAE1D95FDB7D60F14D919E739435F2C341_inline(L_3, NULL);
				UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B* L_5 = (UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B*)il2cpp_codegen_object_new(UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var);
				NullCheck(L_5);
				UnityAction_1__ctor_mEE39E1A87376378311B4931978E8E07E589E9A24(L_5, __this, (intptr_t)((void*)TwoHandGrabInteractable_OnSecondHandGrab_m1DB8CC8E65C4EA17061C4156664811172A10DEC9_RuntimeMethod_var), NULL);
				NullCheck(L_4);
				UnityEvent_1_AddListener_mAE71681FB0832FD7DBA813E5ADDBA574EA32EED2(L_4, L_5, UnityEvent_1_AddListener_mAE71681FB0832FD7DBA813E5ADDBA574EA32EED2_RuntimeMethod_var);
				// item.selectExited.AddListener(OnSecondHandRelease);
				NullCheck(L_3);
				SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* L_6;
				L_6 = XRBaseInteractable_get_selectExited_m35974CB2AD2FB38B4B093DC75D2917A1D321AFA6_inline(L_3, NULL);
				UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E* L_7 = (UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E*)il2cpp_codegen_object_new(UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var);
				NullCheck(L_7);
				UnityAction_1__ctor_mD74501F5FCCC37863163D5E7155B6C8B9B366C40(L_7, __this, (intptr_t)((void*)TwoHandGrabInteractable_OnSecondHandRelease_mC2B41610D7DD04085D019603A63F744974C5C417_RuntimeMethod_var), NULL);
				NullCheck(L_6);
				UnityEvent_1_AddListener_mB662756036996A6B6F83F6492CE9E26797AF9602(L_6, L_7, UnityEvent_1_AddListener_mB662756036996A6B6F83F6492CE9E26797AF9602_RuntimeMethod_var);
			}

IL_0042_1:
			{
				// foreach (var item in secondHandGrabpoints)
				bool L_8;
				L_8 = Enumerator_MoveNext_m40B43470B62F9642C8458E2649415E3B81E9985A((&V_0), Enumerator_MoveNext_m40B43470B62F9642C8458E2649415E3B81E9985A_RuntimeMethod_var);
				if (L_8)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_005b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005b:
	{
		// }
		return;
	}
}
// System.Void TwoHandGrabInteractable::ProcessInteractable(UnityEngine.XR.Interaction.Toolkit.XRInteractionUpdateOrder/UpdatePhase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwoHandGrabInteractable_ProcessInteractable_m1E78EF5948457EB4EB755B1397901AC529188816 (TwoHandGrabInteractable_tB257131B5385A5451C6347829D0F1FC0B8B550F7* __this, int32_t ___updatePhase0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (secondInteractor && selectingInteractor)
		XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* L_0 = __this->___secondInteractor_98;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (!L_1)
		{
			goto IL_005b;
		}
	}
	{
		XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* L_2;
		L_2 = XRBaseInteractable_get_selectingInteractor_mDA5536E167016B048166B2DC5061AE3F752B115A(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_2, NULL);
		if (!L_3)
		{
			goto IL_005b;
		}
	}
	{
		// if (SnapToSecondHand)
		bool L_4 = __this->___SnapToSecondHand_101;
		if (!L_4)
		{
			goto IL_003a;
		}
	}
	{
		// selectingInteractor.attachTransform.rotation = GetTwoHandRotation();
		XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* L_5;
		L_5 = XRBaseInteractable_get_selectingInteractor_mDA5536E167016B048166B2DC5061AE3F752B115A(__this, NULL);
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = XRBaseInteractor_get_attachTransform_m704C74165ED1463CF8B79670066472AE4BD33482_inline(L_5, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = TwoHandGrabInteractable_GetTwoHandRotation_mB4FC4DBE3C6C13D8CB74E72FE9BA0AE14D895C11(__this, NULL);
		NullCheck(L_6);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_6, L_7, NULL);
		goto IL_005b;
	}

IL_003a:
	{
		// secondInteractor.attachTransform.rotation = GetTwoHandRotation() * intialRotationOffset;
		XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* L_8 = __this->___secondInteractor_98;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = XRBaseInteractor_get_attachTransform_m704C74165ED1463CF8B79670066472AE4BD33482_inline(L_8, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10;
		L_10 = TwoHandGrabInteractable_GetTwoHandRotation_mB4FC4DBE3C6C13D8CB74E72FE9BA0AE14D895C11(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11 = __this->___intialRotationOffset_102;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
		L_12 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_10, L_11, NULL);
		NullCheck(L_9);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_9, L_12, NULL);
	}

IL_005b:
	{
		// base.ProcessInteractable(updatePhase);
		int32_t L_13 = ___updatePhase0;
		XRGrabInteractable_ProcessInteractable_m65B864C1FB5251D0A7AD42154BEF07ED41CB5A2E(__this, L_13, NULL);
		// }
		return;
	}
}
// UnityEngine.Quaternion TwoHandGrabInteractable::GetTwoHandRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 TwoHandGrabInteractable_GetTwoHandRotation_mB4FC4DBE3C6C13D8CB74E72FE9BA0AE14D895C11 (TwoHandGrabInteractable_tB257131B5385A5451C6347829D0F1FC0B8B550F7* __this, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (twoHandRotationType == TwoHandRotationType.None)
		int32_t L_0 = __this->___twoHandRotationType_100;
		if (L_0)
		{
			goto IL_0038;
		}
	}
	{
		// targetRotation = Quaternion.LookRotation(secondInteractor.attachTransform.position - selectingInteractor.attachTransform.position);
		XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* L_1 = __this->___secondInteractor_98;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = XRBaseInteractor_get_attachTransform_m704C74165ED1463CF8B79670066472AE4BD33482_inline(L_1, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* L_4;
		L_4 = XRBaseInteractable_get_selectingInteractor_mDA5536E167016B048166B2DC5061AE3F752B115A(__this, NULL);
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = XRBaseInteractor_get_attachTransform_m704C74165ED1463CF8B79670066472AE4BD33482_inline(L_4, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_3, L_6, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8;
		L_8 = Quaternion_LookRotation_m8C0F294E5143F93D378E020EAD9DA2288A5907A3(L_7, NULL);
		V_0 = L_8;
		goto IL_00b9;
	}

IL_0038:
	{
		// else if (twoHandRotationType == TwoHandRotationType.First)
		int32_t L_9 = __this->___twoHandRotationType_100;
		if ((!(((uint32_t)L_9) == ((uint32_t)1))))
		{
			goto IL_007e;
		}
	}
	{
		// targetRotation = Quaternion.LookRotation(secondInteractor.attachTransform.position - selectingInteractor.attachTransform.position, selectingInteractor.transform.up);
		XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* L_10 = __this->___secondInteractor_98;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = XRBaseInteractor_get_attachTransform_m704C74165ED1463CF8B79670066472AE4BD33482_inline(L_10, NULL);
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* L_13;
		L_13 = XRBaseInteractable_get_selectingInteractor_mDA5536E167016B048166B2DC5061AE3F752B115A(__this, NULL);
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = XRBaseInteractor_get_attachTransform_m704C74165ED1463CF8B79670066472AE4BD33482_inline(L_13, NULL);
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_14, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_12, L_15, NULL);
		XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* L_17;
		L_17 = XRBaseInteractable_get_selectingInteractor_mDA5536E167016B048166B2DC5061AE3F752B115A(__this, NULL);
		NullCheck(L_17);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_17, NULL);
		NullCheck(L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_18, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20;
		L_20 = Quaternion_LookRotation_mE6859FEBE85BC0AE72A14159988151FF69BF4401(L_16, L_19, NULL);
		V_0 = L_20;
		goto IL_00b9;
	}

IL_007e:
	{
		// targetRotation = Quaternion.LookRotation(secondInteractor.attachTransform.position - selectingInteractor.attachTransform.position, secondInteractor.transform.up);
		XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* L_21 = __this->___secondInteractor_98;
		NullCheck(L_21);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = XRBaseInteractor_get_attachTransform_m704C74165ED1463CF8B79670066472AE4BD33482_inline(L_21, NULL);
		NullCheck(L_22);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_22, NULL);
		XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* L_24;
		L_24 = XRBaseInteractable_get_selectingInteractor_mDA5536E167016B048166B2DC5061AE3F752B115A(__this, NULL);
		NullCheck(L_24);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = XRBaseInteractor_get_attachTransform_m704C74165ED1463CF8B79670066472AE4BD33482_inline(L_24, NULL);
		NullCheck(L_25);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_25, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_23, L_26, NULL);
		XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* L_28 = __this->___secondInteractor_98;
		NullCheck(L_28);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29;
		L_29 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_28, NULL);
		NullCheck(L_29);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_29, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_31;
		L_31 = Quaternion_LookRotation_mE6859FEBE85BC0AE72A14159988151FF69BF4401(L_27, L_30, NULL);
		V_0 = L_31;
	}

IL_00b9:
	{
		// return targetRotation;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32 = V_0;
		return L_32;
	}
}
// System.Void TwoHandGrabInteractable::OnSecondHandGrab(UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwoHandGrabInteractable_OnSecondHandGrab_m1DB8CC8E65C4EA17061C4156664811172A10DEC9 (TwoHandGrabInteractable_tB257131B5385A5451C6347829D0F1FC0B8B550F7* __this, SelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938* ___args0, const RuntimeMethod* method) 
{
	{
		// secondInteractor = args.interactor;
		SelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938* L_0 = ___args0;
		NullCheck(L_0);
		XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* L_1;
		L_1 = BaseInteractionEventArgs_get_interactor_mE0AC419B526DA1A39B56DA244258474047DD0176(L_0, NULL);
		__this->___secondInteractor_98 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___secondInteractor_98), (void*)L_1);
		// intialRotationOffset = Quaternion.Inverse(GetTwoHandRotation()) * secondInteractor.attachTransform.rotation;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = TwoHandGrabInteractable_GetTwoHandRotation_mB4FC4DBE3C6C13D8CB74E72FE9BA0AE14D895C11(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Quaternion_Inverse_m7597DECDAD37194FAC86D1A11DCE3F0C7747F817(L_2, NULL);
		XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* L_4 = __this->___secondInteractor_98;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = XRBaseInteractor_get_attachTransform_m704C74165ED1463CF8B79670066472AE4BD33482_inline(L_4, NULL);
		NullCheck(L_5);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_5, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_3, L_6, NULL);
		__this->___intialRotationOffset_102 = L_7;
		// }
		return;
	}
}
// System.Void TwoHandGrabInteractable::OnSecondHandRelease(UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwoHandGrabInteractable_OnSecondHandRelease_mC2B41610D7DD04085D019603A63F744974C5C417 (TwoHandGrabInteractable_tB257131B5385A5451C6347829D0F1FC0B8B550F7* __this, SelectExitEventArgs_t56125CE0360D37AC0B50EB6066B5AB5957EF559A* ___args0, const RuntimeMethod* method) 
{
	{
		// secondInteractor = null;
		__this->___secondInteractor_98 = (XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___secondInteractor_98), (void*)(XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158*)NULL);
		// }
		return;
	}
}
// System.Void TwoHandGrabInteractable::OnSelectEntered(UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwoHandGrabInteractable_OnSelectEntered_m23F77E61A5E729DE9DFC926831CA9741C6BA0396 (TwoHandGrabInteractable_tB257131B5385A5451C6347829D0F1FC0B8B550F7* __this, SelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938* ___args0, const RuntimeMethod* method) 
{
	{
		// attachIntialRoation = args.interactor.attachTransform.localRotation;
		SelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938* L_0 = ___args0;
		NullCheck(L_0);
		XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* L_1;
		L_1 = BaseInteractionEventArgs_get_interactor_mE0AC419B526DA1A39B56DA244258474047DD0176(L_0, NULL);
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = XRBaseInteractor_get_attachTransform_m704C74165ED1463CF8B79670066472AE4BD33482_inline(L_1, NULL);
		NullCheck(L_2);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_2, NULL);
		__this->___attachIntialRoation_99 = L_3;
		// base.OnSelectEntered(args);
		SelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938* L_4 = ___args0;
		XRBaseInteractable_OnSelectEntered_m548EC86DEEF771E952DFC75BAE8EA5C27E441C5C(__this, L_4, NULL);
		// }
		return;
	}
}
// System.Void TwoHandGrabInteractable::OnSelectExited(UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwoHandGrabInteractable_OnSelectExited_mE80699DABDB648775CE3C8F9748AEA6D41F6CA7C (TwoHandGrabInteractable_tB257131B5385A5451C6347829D0F1FC0B8B550F7* __this, SelectExitEventArgs_t56125CE0360D37AC0B50EB6066B5AB5957EF559A* ___args0, const RuntimeMethod* method) 
{
	{
		// secondInteractor = null;
		__this->___secondInteractor_98 = (XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___secondInteractor_98), (void*)(XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158*)NULL);
		// args.interactor.attachTransform.localRotation = attachIntialRoation;
		SelectExitEventArgs_t56125CE0360D37AC0B50EB6066B5AB5957EF559A* L_0 = ___args0;
		NullCheck(L_0);
		XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* L_1;
		L_1 = BaseInteractionEventArgs_get_interactor_mE0AC419B526DA1A39B56DA244258474047DD0176(L_0, NULL);
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = XRBaseInteractor_get_attachTransform_m704C74165ED1463CF8B79670066472AE4BD33482_inline(L_1, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = __this->___attachIntialRoation_99;
		NullCheck(L_2);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_2, L_3, NULL);
		// base.OnSelectExited(args);
		SelectExitEventArgs_t56125CE0360D37AC0B50EB6066B5AB5957EF559A* L_4 = ___args0;
		XRBaseInteractable_OnSelectExited_m0D5AEB82DE37B8584A97A262468AF59B70A5568C(__this, L_4, NULL);
		// }
		return;
	}
}
// System.Boolean TwoHandGrabInteractable::IsSelectableBy(UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TwoHandGrabInteractable_IsSelectableBy_m3DA51DA846E3166D475B274E4291327F74B15928 (TwoHandGrabInteractable_tB257131B5385A5451C6347829D0F1FC0B8B550F7* __this, XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* ___interactor0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// bool isalreadygrabbed = selectingInteractor && !interactor.Equals(selectingInteractor);
		XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* L_0;
		L_0 = XRBaseInteractable_get_selectingInteractor_mDA5536E167016B048166B2DC5061AE3F752B115A(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* L_2 = ___interactor0;
		XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* L_3;
		L_3 = XRBaseInteractable_get_selectingInteractor_mDA5536E167016B048166B2DC5061AE3F752B115A(__this, NULL);
		NullCheck(L_2);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_2, L_3);
		G_B3_0 = ((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		goto IL_001f;
	}

IL_001e:
	{
		G_B3_0 = 0;
	}

IL_001f:
	{
		V_0 = (bool)G_B3_0;
		// return base.IsSelectableBy(interactor) && !isalreadygrabbed;
		XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* L_5 = ___interactor0;
		bool L_6;
		L_6 = XRBaseInteractable_IsSelectableBy_mB86D990CC7B0D23A8FADA53DF1DF05A2A0905B56(__this, L_5, NULL);
		if (!L_6)
		{
			goto IL_002e;
		}
	}
	{
		bool L_7 = V_0;
		return (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
	}

IL_002e:
	{
		return (bool)0;
	}
}
// System.Void TwoHandGrabInteractable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwoHandGrabInteractable__ctor_mF9AEB07151326702323A8B316872BE7ADF8FCDCA (TwoHandGrabInteractable_tB257131B5385A5451C6347829D0F1FC0B8B550F7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m26C4D679120B4C84D188324789777E5A5580CE84_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tEB4CD4A0B4ED2014FB371ED7CE298DE95E157E5D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<XRSimpleInteractable> secondHandGrabpoints = new List<XRSimpleInteractable>();
		List_1_tEB4CD4A0B4ED2014FB371ED7CE298DE95E157E5D* L_0 = (List_1_tEB4CD4A0B4ED2014FB371ED7CE298DE95E157E5D*)il2cpp_codegen_object_new(List_1_tEB4CD4A0B4ED2014FB371ED7CE298DE95E157E5D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m26C4D679120B4C84D188324789777E5A5580CE84(L_0, List_1__ctor_m26C4D679120B4C84D188324789777E5A5580CE84_RuntimeMethod_var);
		__this->___secondHandGrabpoints_97 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___secondHandGrabpoints_97), (void*)L_0);
		// public bool SnapToSecondHand = true;
		__this->___SnapToSecondHand_101 = (bool)1;
		XRGrabInteractable__ctor_mF1FA77294880EFA9C7C840025B207B80327B5E2E(__this, NULL);
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
// System.Void Readme::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Readme__ctor_m69C325C4C171DCB0312B646A9034AA91EA8C39C6 (Readme_tE17B99201D0F52BD5727638AD3F41072A65B3BBB* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// System.Void Readme/Section::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Section__ctor_m5F732533E4DFC0167D965E5F5DB332E46055399B (Section_t50C894D0A717C2368EBAAE5477D4E8626D0B5401* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void twoHandedFake::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void twoHandedFake_Start_mC95597C1670EA8530D07DBCD2F34E4614DD2E8B1 (twoHandedFake_tBA193E4DF5638905097FDA663F5A0DB0C8A1FAB1* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void twoHandedFake::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void twoHandedFake_Update_mBEF2A2BFD78151ACA0D38775AB023B81D53466DB (twoHandedFake_tBA193E4DF5638905097FDA663F5A0DB0C8A1FAB1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* V_0 = NULL;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// var rot = Quaternion.FromToRotation(Vector3.up, leftHand.transform.position - rightHand.transform.position);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___leftHand_4;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___rightHand_5;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_3, L_6, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8;
		L_8 = Quaternion_FromToRotation_m041093DBB23CB3641118310881D6B7746E3B8418(L_0, L_7, NULL);
		// var body = heldObject.GetComponent<Rigidbody>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___heldObject_6;
		NullCheck(L_9);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_10;
		L_10 = GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90(L_9, GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		V_0 = L_10;
		// positionWithOffset = (rightHand.transform.position + leftHand.transform.position) / 2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___rightHand_5;
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_11, NULL);
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___leftHand_4;
		NullCheck(L_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_14, NULL);
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_15, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_13, L_16, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline(L_17, (2.0f), NULL);
		__this->___positionWithOffset_9 = L_18;
		// distance = Vector3.Distance(positionWithOffset, heldObject.transform.position);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = __this->___positionWithOffset_9;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = __this->___heldObject_6;
		NullCheck(L_20);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_20, NULL);
		NullCheck(L_21);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_21, NULL);
		float L_23;
		L_23 = Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline(L_19, L_22, NULL);
		__this->___distance_10 = L_23;
		// finalV = (positionWithOffset - heldObject.transform.position).normalized * followSpeed * distance * Time.deltaTime;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = __this->___positionWithOffset_9;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = __this->___heldObject_6;
		NullCheck(L_25);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26;
		L_26 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_25, NULL);
		NullCheck(L_26);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_26, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_24, L_27, NULL);
		V_4 = L_28;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_4), NULL);
		float L_30 = __this->___followSpeed_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_29, L_30, NULL);
		float L_32 = __this->___distance_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_31, L_32, NULL);
		float L_34;
		L_34 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_33, L_34, NULL);
		__this->___finalV_11 = L_35;
		// body.MovePosition(positionWithOffset);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_36 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = __this->___positionWithOffset_9;
		NullCheck(L_36);
		Rigidbody_MovePosition_mB2CD29ABC8F59AC338C0A3A5A6B75C38FDA92CA9(L_36, L_37, NULL);
		// var q = rotationWithOffset * Quaternion.Inverse(body.rotation);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_38 = V_0;
		NullCheck(L_38);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_39;
		L_39 = Rigidbody_get_rotation_m07882A7024FB3F96BA13EC577A96163BBB621AA1(L_38, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40;
		L_40 = Quaternion_Inverse_m7597DECDAD37194FAC86D1A11DCE3F0C7747F817(L_39, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_41;
		L_41 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_8, L_40, NULL);
		V_1 = L_41;
		// q.ToAngleAxis(out float angle, out Vector3 axis);
		Quaternion_ToAngleAxis_mA2A5A81DAE94A9C1AFC34112BE8E5C5C3E9297AF_inline((&V_1), (&V_2), (&V_3), NULL);
		// body.angularVelocity = angle * axis * Mathf.Deg2Rad * rotateSpeed * Time.deltaTime;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_42 = V_0;
		float L_43 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline(L_43, L_44, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_45, (0.0174532924f), NULL);
		float L_47 = __this->___rotateSpeed_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48;
		L_48 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_46, L_47, NULL);
		float L_49;
		L_49 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50;
		L_50 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_48, L_49, NULL);
		NullCheck(L_42);
		Rigidbody_set_angularVelocity_m23266B4E52BF0D2E65CC984AC73CC40B8D4A27E0(L_42, L_50, NULL);
		// }
		return;
	}
}
// System.Void twoHandedFake::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void twoHandedFake__ctor_m1E349F6A6E11C60CC8901BB8CA97DD97230412F8 (twoHandedFake_tBA193E4DF5638905097FDA663F5A0DB0C8A1FAB1* __this, const RuntimeMethod* method) 
{
	{
		// public float followSpeed = 10f;
		__this->___followSpeed_7 = (10.0f);
		// public float rotateSpeed = 10f;
		__this->___rotateSpeed_8 = (10.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void TwoHandGrabInteractable2::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwoHandGrabInteractable2_Start_mC5D76FF7C70D8DF93B69E7AD63BC15EBA746A1E7 (TwoHandGrabInteractable2_t672C12A139F4D3E821B04134EA423288F1E01253* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mB3EEC14FD31AB50D776081451214E953D79816B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m40B43470B62F9642C8458E2649415E3B81E9985A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m32B311E84551374FA832EC51E87B12F059954EE9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m5BFEB7CA7D4644B762C9DECE0006F2AA0C107662_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TwoHandGrabInteractable2_OnSecondHandGrab_m5F712468AE96C1D1D68191272A6F81C491E0FA0F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TwoHandGrabInteractable2_OnSecondHandRelease_m5039039BD619E049D8289E0D754E9265F4E830D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tDAC4559DCCBC652E7AF517C7243B19899DE2AAD9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_m6D1A1588C83361B2FB48DBE10DC960718D33666F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tF071AAB5FF1123FC757BF8F9D75AC106DA940690 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// foreach (var item in secondHandGrabPoints)
		List_1_tEB4CD4A0B4ED2014FB371ED7CE298DE95E157E5D* L_0 = __this->___secondHandGrabPoints_97;
		NullCheck(L_0);
		Enumerator_tF071AAB5FF1123FC757BF8F9D75AC106DA940690 L_1;
		L_1 = List_1_GetEnumerator_m5BFEB7CA7D4644B762C9DECE0006F2AA0C107662(L_0, List_1_GetEnumerator_m5BFEB7CA7D4644B762C9DECE0006F2AA0C107662_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004d:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mB3EEC14FD31AB50D776081451214E953D79816B2((&V_0), Enumerator_Dispose_mB3EEC14FD31AB50D776081451214E953D79816B2_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0042_1;
			}

IL_000e_1:
			{
				// foreach (var item in secondHandGrabPoints)
				XRSimpleInteractable_t3A9B4306E28507FF98E52F5203CE896262679E79* L_2;
				L_2 = Enumerator_get_Current_m32B311E84551374FA832EC51E87B12F059954EE9_inline((&V_0), Enumerator_get_Current_m32B311E84551374FA832EC51E87B12F059954EE9_RuntimeMethod_var);
				// item.onSelectEntered.AddListener(OnSecondHandGrab);
				XRSimpleInteractable_t3A9B4306E28507FF98E52F5203CE896262679E79* L_3 = L_2;
				NullCheck(L_3);
				XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093* L_4;
				L_4 = XRBaseInteractable_get_onSelectEntered_m3AF1E23061186454C8CD5233921F4FC6C3780A37_inline(L_3, NULL);
				UnityAction_1_tDAC4559DCCBC652E7AF517C7243B19899DE2AAD9* L_5 = (UnityAction_1_tDAC4559DCCBC652E7AF517C7243B19899DE2AAD9*)il2cpp_codegen_object_new(UnityAction_1_tDAC4559DCCBC652E7AF517C7243B19899DE2AAD9_il2cpp_TypeInfo_var);
				NullCheck(L_5);
				UnityAction_1__ctor_mB15EA8AFEE82F4A8965C10992F8235500F8836D6(L_5, __this, (intptr_t)((void*)TwoHandGrabInteractable2_OnSecondHandGrab_m5F712468AE96C1D1D68191272A6F81C491E0FA0F_RuntimeMethod_var), NULL);
				NullCheck(L_4);
				UnityEvent_1_AddListener_m6D1A1588C83361B2FB48DBE10DC960718D33666F(L_4, L_5, UnityEvent_1_AddListener_m6D1A1588C83361B2FB48DBE10DC960718D33666F_RuntimeMethod_var);
				// item.onSelectExited.AddListener(OnSecondHandRelease);
				NullCheck(L_3);
				XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093* L_6;
				L_6 = XRBaseInteractable_get_onSelectExited_m8024BC6BA704E0465A0DA3BAE263C18CEB74F142_inline(L_3, NULL);
				UnityAction_1_tDAC4559DCCBC652E7AF517C7243B19899DE2AAD9* L_7 = (UnityAction_1_tDAC4559DCCBC652E7AF517C7243B19899DE2AAD9*)il2cpp_codegen_object_new(UnityAction_1_tDAC4559DCCBC652E7AF517C7243B19899DE2AAD9_il2cpp_TypeInfo_var);
				NullCheck(L_7);
				UnityAction_1__ctor_mB15EA8AFEE82F4A8965C10992F8235500F8836D6(L_7, __this, (intptr_t)((void*)TwoHandGrabInteractable2_OnSecondHandRelease_m5039039BD619E049D8289E0D754E9265F4E830D6_RuntimeMethod_var), NULL);
				NullCheck(L_6);
				UnityEvent_1_AddListener_m6D1A1588C83361B2FB48DBE10DC960718D33666F(L_6, L_7, UnityEvent_1_AddListener_m6D1A1588C83361B2FB48DBE10DC960718D33666F_RuntimeMethod_var);
			}

IL_0042_1:
			{
				// foreach (var item in secondHandGrabPoints)
				bool L_8;
				L_8 = Enumerator_MoveNext_m40B43470B62F9642C8458E2649415E3B81E9985A((&V_0), Enumerator_MoveNext_m40B43470B62F9642C8458E2649415E3B81E9985A_RuntimeMethod_var);
				if (L_8)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_005b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005b:
	{
		// }
		return;
	}
}
// System.Void TwoHandGrabInteractable2::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwoHandGrabInteractable2_Update_mCEF2DBF7629E35362F189474A43EA455AA747E84 (TwoHandGrabInteractable2_t672C12A139F4D3E821B04134EA423288F1E01253* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void TwoHandGrabInteractable2::ProcessInteractable(UnityEngine.XR.Interaction.Toolkit.XRInteractionUpdateOrder/UpdatePhase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwoHandGrabInteractable2_ProcessInteractable_m04894CF4F7979459AE24D3F00AA0A4A38620F4EC (TwoHandGrabInteractable2_t672C12A139F4D3E821B04134EA423288F1E01253* __this, int32_t ___updatePhase0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(secondInteractor && selectingInteractor)
		XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* L_0 = __this->___secondInteractor_98;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (!L_1)
		{
			goto IL_005b;
		}
	}
	{
		XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* L_2;
		L_2 = XRBaseInteractable_get_selectingInteractor_mDA5536E167016B048166B2DC5061AE3F752B115A(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_2, NULL);
		if (!L_3)
		{
			goto IL_005b;
		}
	}
	{
		// if (snapToHand)
		bool L_4 = __this->___snapToHand_101;
		if (!L_4)
		{
			goto IL_003a;
		}
	}
	{
		// selectingInteractor.attachTransform.rotation = GetTwoHandRotation();
		XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* L_5;
		L_5 = XRBaseInteractable_get_selectingInteractor_mDA5536E167016B048166B2DC5061AE3F752B115A(__this, NULL);
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = XRBaseInteractor_get_attachTransform_m704C74165ED1463CF8B79670066472AE4BD33482_inline(L_5, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = TwoHandGrabInteractable2_GetTwoHandRotation_mAF2C5F6BA88F418D6E51876F39F02B4B8C6387A1(__this, NULL);
		NullCheck(L_6);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_6, L_7, NULL);
		goto IL_005b;
	}

IL_003a:
	{
		// selectingInteractor.attachTransform.rotation = GetTwoHandRotation() * initialRotationOffset;
		XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* L_8;
		L_8 = XRBaseInteractable_get_selectingInteractor_mDA5536E167016B048166B2DC5061AE3F752B115A(__this, NULL);
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = XRBaseInteractor_get_attachTransform_m704C74165ED1463CF8B79670066472AE4BD33482_inline(L_8, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10;
		L_10 = TwoHandGrabInteractable2_GetTwoHandRotation_mAF2C5F6BA88F418D6E51876F39F02B4B8C6387A1(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11 = __this->___initialRotationOffset_102;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
		L_12 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_10, L_11, NULL);
		NullCheck(L_9);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_9, L_12, NULL);
	}

IL_005b:
	{
		// base.ProcessInteractable(updatePhase);
		int32_t L_13 = ___updatePhase0;
		XRGrabInteractable_ProcessInteractable_m65B864C1FB5251D0A7AD42154BEF07ED41CB5A2E(__this, L_13, NULL);
		// }
		return;
	}
}
// UnityEngine.Quaternion TwoHandGrabInteractable2::GetTwoHandRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 TwoHandGrabInteractable2_GetTwoHandRotation_mAF2C5F6BA88F418D6E51876F39F02B4B8C6387A1 (TwoHandGrabInteractable2_t672C12A139F4D3E821B04134EA423288F1E01253* __this, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (twoHandRotationType == TwoHandRotationType.None)
		int32_t L_0 = __this->___twoHandRotationType_100;
		if (L_0)
		{
			goto IL_0038;
		}
	}
	{
		// targetRotation = Quaternion.LookRotation(secondInteractor.attachTransform.position - selectingInteractor.attachTransform.position);
		XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* L_1 = __this->___secondInteractor_98;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = XRBaseInteractor_get_attachTransform_m704C74165ED1463CF8B79670066472AE4BD33482_inline(L_1, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* L_4;
		L_4 = XRBaseInteractable_get_selectingInteractor_mDA5536E167016B048166B2DC5061AE3F752B115A(__this, NULL);
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = XRBaseInteractor_get_attachTransform_m704C74165ED1463CF8B79670066472AE4BD33482_inline(L_4, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_3, L_6, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8;
		L_8 = Quaternion_LookRotation_m8C0F294E5143F93D378E020EAD9DA2288A5907A3(L_7, NULL);
		V_0 = L_8;
		goto IL_00b9;
	}

IL_0038:
	{
		// else if (twoHandRotationType == TwoHandRotationType.First)
		int32_t L_9 = __this->___twoHandRotationType_100;
		if ((!(((uint32_t)L_9) == ((uint32_t)1))))
		{
			goto IL_007e;
		}
	}
	{
		// targetRotation = Quaternion.LookRotation(secondInteractor.attachTransform.position - selectingInteractor.attachTransform.position, selectingInteractor.transform.up);
		XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* L_10 = __this->___secondInteractor_98;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = XRBaseInteractor_get_attachTransform_m704C74165ED1463CF8B79670066472AE4BD33482_inline(L_10, NULL);
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* L_13;
		L_13 = XRBaseInteractable_get_selectingInteractor_mDA5536E167016B048166B2DC5061AE3F752B115A(__this, NULL);
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = XRBaseInteractor_get_attachTransform_m704C74165ED1463CF8B79670066472AE4BD33482_inline(L_13, NULL);
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_14, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_12, L_15, NULL);
		XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* L_17;
		L_17 = XRBaseInteractable_get_selectingInteractor_mDA5536E167016B048166B2DC5061AE3F752B115A(__this, NULL);
		NullCheck(L_17);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_17, NULL);
		NullCheck(L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_18, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20;
		L_20 = Quaternion_LookRotation_mE6859FEBE85BC0AE72A14159988151FF69BF4401(L_16, L_19, NULL);
		V_0 = L_20;
		goto IL_00b9;
	}

IL_007e:
	{
		// targetRotation = Quaternion.LookRotation(secondInteractor.attachTransform.position - selectingInteractor.attachTransform.position, secondInteractor.transform.up);
		XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* L_21 = __this->___secondInteractor_98;
		NullCheck(L_21);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = XRBaseInteractor_get_attachTransform_m704C74165ED1463CF8B79670066472AE4BD33482_inline(L_21, NULL);
		NullCheck(L_22);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_22, NULL);
		XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* L_24;
		L_24 = XRBaseInteractable_get_selectingInteractor_mDA5536E167016B048166B2DC5061AE3F752B115A(__this, NULL);
		NullCheck(L_24);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = XRBaseInteractor_get_attachTransform_m704C74165ED1463CF8B79670066472AE4BD33482_inline(L_24, NULL);
		NullCheck(L_25);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_25, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_23, L_26, NULL);
		XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* L_28 = __this->___secondInteractor_98;
		NullCheck(L_28);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29;
		L_29 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_28, NULL);
		NullCheck(L_29);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_29, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_31;
		L_31 = Quaternion_LookRotation_mE6859FEBE85BC0AE72A14159988151FF69BF4401(L_27, L_30, NULL);
		V_0 = L_31;
	}

IL_00b9:
	{
		// return targetRotation;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32 = V_0;
		return L_32;
	}
}
// System.Void TwoHandGrabInteractable2::OnSecondHandGrab(UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwoHandGrabInteractable2_OnSecondHandGrab_m5F712468AE96C1D1D68191272A6F81C491E0FA0F (TwoHandGrabInteractable2_t672C12A139F4D3E821B04134EA423288F1E01253* __this, XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* ___interactor0, const RuntimeMethod* method) 
{
	{
		// secondInteractor = interactor;
		XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* L_0 = ___interactor0;
		__this->___secondInteractor_98 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___secondInteractor_98), (void*)L_0);
		// initialRotationOffset = Quaternion.Inverse(GetTwoHandRotation()) * selectingInteractor.attachTransform.rotation;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = TwoHandGrabInteractable2_GetTwoHandRotation_mAF2C5F6BA88F418D6E51876F39F02B4B8C6387A1(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_Inverse_m7597DECDAD37194FAC86D1A11DCE3F0C7747F817(L_1, NULL);
		XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* L_3;
		L_3 = XRBaseInteractable_get_selectingInteractor_mDA5536E167016B048166B2DC5061AE3F752B115A(__this, NULL);
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = XRBaseInteractor_get_attachTransform_m704C74165ED1463CF8B79670066472AE4BD33482_inline(L_3, NULL);
		NullCheck(L_4);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_4, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_2, L_5, NULL);
		__this->___initialRotationOffset_102 = L_6;
		// }
		return;
	}
}
// System.Void TwoHandGrabInteractable2::OnSecondHandRelease(UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwoHandGrabInteractable2_OnSecondHandRelease_m5039039BD619E049D8289E0D754E9265F4E830D6 (TwoHandGrabInteractable2_t672C12A139F4D3E821B04134EA423288F1E01253* __this, XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* ___interactor0, const RuntimeMethod* method) 
{
	{
		// secondInteractor = null;
		__this->___secondInteractor_98 = (XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___secondInteractor_98), (void*)(XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158*)NULL);
		// }
		return;
	}
}
// System.Void TwoHandGrabInteractable2::OnSelectEntered(UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwoHandGrabInteractable2_OnSelectEntered_m3DB539BD0A7A5C81A1367D1EB3693390C2AFF274 (TwoHandGrabInteractable2_t672C12A139F4D3E821B04134EA423288F1E01253* __this, XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* ___interactor0, const RuntimeMethod* method) 
{
	{
		// base.OnSelectEntered(interactor);
		XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* L_0 = ___interactor0;
		XRBaseInteractable_OnSelectEntered_mFBD06824A89594F0777D691A5A62775C1F908F2D(__this, L_0, NULL);
		// attatchInitialRotation = interactor.attachTransform.localRotation;
		XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* L_1 = ___interactor0;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = XRBaseInteractor_get_attachTransform_m704C74165ED1463CF8B79670066472AE4BD33482_inline(L_1, NULL);
		NullCheck(L_2);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_2, NULL);
		__this->___attatchInitialRotation_99 = L_3;
		// }
		return;
	}
}
// System.Void TwoHandGrabInteractable2::OnSelectExited(UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwoHandGrabInteractable2_OnSelectExited_mF90502D0C29B443826CB12ABED54129185987AAE (TwoHandGrabInteractable2_t672C12A139F4D3E821B04134EA423288F1E01253* __this, XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* ___interactor0, const RuntimeMethod* method) 
{
	{
		// base.OnSelectExited(interactor);
		XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* L_0 = ___interactor0;
		XRBaseInteractable_OnSelectExited_mE701B8C24D777780E087CBC1BA70DEA5E0C9811C(__this, L_0, NULL);
		// secondInteractor = null;
		__this->___secondInteractor_98 = (XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___secondInteractor_98), (void*)(XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158*)NULL);
		// interactor.attachTransform.localRotation = attatchInitialRotation;
		XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* L_1 = ___interactor0;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = XRBaseInteractor_get_attachTransform_m704C74165ED1463CF8B79670066472AE4BD33482_inline(L_1, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = __this->___attatchInitialRotation_99;
		NullCheck(L_2);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Boolean TwoHandGrabInteractable2::IsSelectableBy(UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TwoHandGrabInteractable2_IsSelectableBy_m3A7F87F36E45C17AAC3F548C14A80F16F741D6F7 (TwoHandGrabInteractable2_t672C12A139F4D3E821B04134EA423288F1E01253* __this, RuntimeObject* ___interactor0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// bool alreadyGrabbed = selectingInteractor && !interactor.Equals(selectingInteractor);
		XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* L_0;
		L_0 = XRBaseInteractable_get_selectingInteractor_mDA5536E167016B048166B2DC5061AE3F752B115A(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		RuntimeObject* L_2 = ___interactor0;
		XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* L_3;
		L_3 = XRBaseInteractable_get_selectingInteractor_mDA5536E167016B048166B2DC5061AE3F752B115A(__this, NULL);
		NullCheck(L_2);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_2, L_3);
		G_B3_0 = ((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		goto IL_001f;
	}

IL_001e:
	{
		G_B3_0 = 0;
	}

IL_001f:
	{
		V_0 = (bool)G_B3_0;
		// return base.IsSelectableBy(interactor) && !alreadyGrabbed;
		RuntimeObject* L_5 = ___interactor0;
		bool L_6;
		L_6 = XRBaseInteractable_IsSelectableBy_mB736F5FFEBCD5B29610E94980C7E8D2B4058A9CB(__this, L_5, NULL);
		if (!L_6)
		{
			goto IL_002e;
		}
	}
	{
		bool L_7 = V_0;
		return (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
	}

IL_002e:
	{
		return (bool)0;
	}
}
// System.Void TwoHandGrabInteractable2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwoHandGrabInteractable2__ctor_m1B71A17F5A293AA4BC8F0AD32393A455CD5AE494 (TwoHandGrabInteractable2_t672C12A139F4D3E821B04134EA423288F1E01253* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m26C4D679120B4C84D188324789777E5A5580CE84_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tEB4CD4A0B4ED2014FB371ED7CE298DE95E157E5D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<XRSimpleInteractable> secondHandGrabPoints = new List<XRSimpleInteractable>();
		List_1_tEB4CD4A0B4ED2014FB371ED7CE298DE95E157E5D* L_0 = (List_1_tEB4CD4A0B4ED2014FB371ED7CE298DE95E157E5D*)il2cpp_codegen_object_new(List_1_tEB4CD4A0B4ED2014FB371ED7CE298DE95E157E5D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m26C4D679120B4C84D188324789777E5A5580CE84(L_0, List_1__ctor_m26C4D679120B4C84D188324789777E5A5580CE84_RuntimeMethod_var);
		__this->___secondHandGrabPoints_97 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___secondHandGrabPoints_97), (void*)L_0);
		// public bool snapToHand = true;
		__this->___snapToHand_101 = (bool)1;
		XRGrabInteractable__ctor_mF1FA77294880EFA9C7C840025B207B80327B5E2E(__this, NULL);
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
// System.Void UnityStandardAssets.Utility.FPSCounter::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FPSCounter_Start_m1F0622ED0C65AD3475D4AA30E106CE58E8380C3A (FPSCounter_t579A2057A5922B07D6809F0F66C7933E6B5805AA* __this, const RuntimeMethod* method) 
{
	{
		// m_FpsNextPeriod = Time.realtimeSinceStartup + fpsMeasurePeriod;
		float L_0;
		L_0 = Time_get_realtimeSinceStartup_mB49A5622E38FFE9589EB9B3E75573E443B8D63EC(NULL);
		__this->___m_FpsNextPeriod_6 = ((float)il2cpp_codegen_add(L_0, (0.5f)));
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Utility.FPSCounter::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FPSCounter_Update_m259CA998DA802A465281B31BC7D82D635BB9D924 (FPSCounter_t579A2057A5922B07D6809F0F66C7933E6B5805AA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB062586C8903B7ACECD5511FF254C2FC443B4352);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_FpsAccumulator++;
		int32_t L_0 = __this->___m_FpsAccumulator_5;
		__this->___m_FpsAccumulator_5 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// if (Time.realtimeSinceStartup > m_FpsNextPeriod)
		float L_1;
		L_1 = Time_get_realtimeSinceStartup_mB49A5622E38FFE9589EB9B3E75573E443B8D63EC(NULL);
		float L_2 = __this->___m_FpsNextPeriod_6;
		if ((!(((float)L_1) > ((float)L_2))))
		{
			goto IL_0068;
		}
	}
	{
		// m_CurrentFps = (int)(m_FpsAccumulator / fpsMeasurePeriod);
		int32_t L_3 = __this->___m_FpsAccumulator_5;
		__this->___m_CurrentFps_7 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)(((float)L_3)/(0.5f))));
		// m_FpsAccumulator = 0;
		__this->___m_FpsAccumulator_5 = 0;
		// m_FpsNextPeriod += fpsMeasurePeriod;
		float L_4 = __this->___m_FpsNextPeriod_6;
		__this->___m_FpsNextPeriod_6 = ((float)il2cpp_codegen_add(L_4, (0.5f)));
		// m_Text.text = string.Format(display, m_CurrentFps);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_5 = __this->___m_Text_9;
		int32_t L_6 = __this->___m_CurrentFps_7;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_7);
		String_t* L_9;
		L_9 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteralB062586C8903B7ACECD5511FF254C2FC443B4352, L_8, NULL);
		NullCheck(L_5);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_5, L_9);
	}

IL_0068:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Utility.FPSCounter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FPSCounter__ctor_m93765C8F41F47E26B6A8A55A0A0C6415B3A4E605 (FPSCounter_t579A2057A5922B07D6809F0F66C7933E6B5805AA* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Single OmniSARTechnologies.LiteFPSCounter.LiteFPSCounter::get_frameTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LiteFPSCounter_get_frameTime_mE2E0155F5F2D1D0F86234A66243D3F5F40AFF374 (LiteFPSCounter_t6420951027E81BF859AC1A3DEF1F5A932DE9641E* __this, const RuntimeMethod* method) 
{
	{
		// return m_FrameTime;
		float L_0 = __this->___m_FrameTime_6;
		return L_0;
	}
}
// System.Single OmniSARTechnologies.LiteFPSCounter.LiteFPSCounter::get_minFrameTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LiteFPSCounter_get_minFrameTime_m74B32D4049AC109F9C7F2EC9248F0408E40E8892 (LiteFPSCounter_t6420951027E81BF859AC1A3DEF1F5A932DE9641E* __this, const RuntimeMethod* method) 
{
	{
		// return m_MinFrameTime;
		float L_0 = __this->___m_MinFrameTime_7;
		return L_0;
	}
}
// System.Single OmniSARTechnologies.LiteFPSCounter.LiteFPSCounter::get_maxFrameTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LiteFPSCounter_get_maxFrameTime_mFDEB251E89A31903688815AB257AF11663A56C5B (LiteFPSCounter_t6420951027E81BF859AC1A3DEF1F5A932DE9641E* __this, const RuntimeMethod* method) 
{
	{
		// return m_MaxFrameTime;
		float L_0 = __this->___m_MaxFrameTime_8;
		return L_0;
	}
}
// System.Single OmniSARTechnologies.LiteFPSCounter.LiteFPSCounter::get_frameTimeFlutuation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LiteFPSCounter_get_frameTimeFlutuation_m95293A7DFC97657FBE910B7E2D0EEE57D797E063 (LiteFPSCounter_t6420951027E81BF859AC1A3DEF1F5A932DE9641E* __this, const RuntimeMethod* method) 
{
	{
		// return m_FrameTimeFlutuation;
		float L_0 = __this->___m_FrameTimeFlutuation_9;
		return L_0;
	}
}
// System.Single OmniSARTechnologies.LiteFPSCounter.LiteFPSCounter::get_frameRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LiteFPSCounter_get_frameRate_m54ECF2D3E59689FBC1E2256F22EEC75C940C3D6A (LiteFPSCounter_t6420951027E81BF859AC1A3DEF1F5A932DE9641E* __this, const RuntimeMethod* method) 
{
	{
		// return m_FrameRate;
		float L_0 = __this->___m_FrameRate_10;
		return L_0;
	}
}
// System.Single OmniSARTechnologies.LiteFPSCounter.LiteFPSCounter::get_minFrameRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LiteFPSCounter_get_minFrameRate_m41880577BA87BBFCAEC15478D262951BAB851F37 (LiteFPSCounter_t6420951027E81BF859AC1A3DEF1F5A932DE9641E* __this, const RuntimeMethod* method) 
{
	{
		// return m_MinFrameRate;
		float L_0 = __this->___m_MinFrameRate_11;
		return L_0;
	}
}
// System.Single OmniSARTechnologies.LiteFPSCounter.LiteFPSCounter::get_maxFrameRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LiteFPSCounter_get_maxFrameRate_m3C05BFCF3D878953D1BFF4DEA9A62FADCABD9D25 (LiteFPSCounter_t6420951027E81BF859AC1A3DEF1F5A932DE9641E* __this, const RuntimeMethod* method) 
{
	{
		// return m_MaxFrameRate;
		float L_0 = __this->___m_MaxFrameRate_12;
		return L_0;
	}
}
// System.Single OmniSARTechnologies.LiteFPSCounter.LiteFPSCounter::get_frameRateFlutuation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LiteFPSCounter_get_frameRateFlutuation_mC28228B2EC1D920742DFB5F457C9C1945B7EF361 (LiteFPSCounter_t6420951027E81BF859AC1A3DEF1F5A932DE9641E* __this, const RuntimeMethod* method) 
{
	{
		// return m_FrameRateFlutuation;
		float L_0 = __this->___m_FrameRateFlutuation_13;
		return L_0;
	}
}
// System.Void OmniSARTechnologies.LiteFPSCounter.LiteFPSCounter::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LiteFPSCounter_Initialize_m7F9C82D4ED8E590A7325ABEAFACFC93EDFAFB335 (LiteFPSCounter_t6420951027E81BF859AC1A3DEF1F5A932DE9641E* __this, const RuntimeMethod* method) 
{
	{
		// Reset();
		LiteFPSCounter_Reset_m045059B9F471A607878CC02ECAD7A16D91BEA866(__this, NULL);
		// UpdateInternals();
		LiteFPSCounter_UpdateInternals_m6EBC435F0700DF5C53CBD92116EBFB7A18C9D1E2(__this, NULL);
		// }
		return;
	}
}
// System.Void OmniSARTechnologies.LiteFPSCounter.LiteFPSCounter::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LiteFPSCounter_Reset_m045059B9F471A607878CC02ECAD7A16D91BEA866 (LiteFPSCounter_t6420951027E81BF859AC1A3DEF1F5A932DE9641E* __this, const RuntimeMethod* method) 
{
	{
		// ResetProbingData();
		LiteFPSCounter_ResetProbingData_m0585B822718B3CBF4CF22C9B3276CF36FCBD1497(__this, NULL);
		// m_LastUpdateTime = Time.realtimeSinceStartup;
		float L_0;
		L_0 = Time_get_realtimeSinceStartup_mB49A5622E38FFE9589EB9B3E75573E443B8D63EC(NULL);
		__this->___m_LastUpdateTime_24 = L_0;
		// }
		return;
	}
}
// System.Void OmniSARTechnologies.LiteFPSCounter.LiteFPSCounter::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LiteFPSCounter_Start_m742B284F29355157082588423A5238D76802302C (LiteFPSCounter_t6420951027E81BF859AC1A3DEF1F5A932DE9641E* __this, const RuntimeMethod* method) 
{
	{
		// Initialize();
		LiteFPSCounter_Initialize_m7F9C82D4ED8E590A7325ABEAFACFC93EDFAFB335(__this, NULL);
		// }
		return;
	}
}
// System.Void OmniSARTechnologies.LiteFPSCounter.LiteFPSCounter::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LiteFPSCounter_OnEnable_m28ADB9CF008BCB2F34D0599F51BA4C72FE5F6511 (LiteFPSCounter_t6420951027E81BF859AC1A3DEF1F5A932DE9641E* __this, const RuntimeMethod* method) 
{
	{
		// Initialize();
		LiteFPSCounter_Initialize_m7F9C82D4ED8E590A7325ABEAFACFC93EDFAFB335(__this, NULL);
		// }
		return;
	}
}
// System.Void OmniSARTechnologies.LiteFPSCounter.LiteFPSCounter::UpdateInternals()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LiteFPSCounter_UpdateInternals_m6EBC435F0700DF5C53CBD92116EBFB7A18C9D1E2 (LiteFPSCounter_t6420951027E81BF859AC1A3DEF1F5A932DE9641E* __this, const RuntimeMethod* method) 
{
	{
		// UpdateStaticContentAndData();
		LiteFPSCounter_UpdateStaticContentAndData_m8A57F9C736C844DA57D10ACE3AC915906EE77C27(__this, NULL);
		// }
		return;
	}
}
// System.Void OmniSARTechnologies.LiteFPSCounter.LiteFPSCounter::UpdateStaticContentAndData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LiteFPSCounter_UpdateStaticContentAndData_m8A57F9C736C844DA57D10ACE3AC915906EE77C27 (LiteFPSCounter_t6420951027E81BF859AC1A3DEF1F5A932DE9641E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GraphicsDeviceType_t65150C9055D1BC1E377E894972629BF22BA2CBF5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E674B4241396171BD95F77FB6CDDEAA63AEAE5A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral115CB6EBDC537323F2B3DEDE4DB394FD063F9B92);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23114468D04FA2B7A2DA455B545DB914D0A3ED94);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2A01F063E3BB9F5256438F6450C2AF645EA23D2C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2BF04C30F2E8919D22E97329123DDD48BF44873F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2FB16ADC66DC3256DFAE2E8B676A3977A1DA71B5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral51A7015B3E634B5A44BCE24D0DE3A94B3D7E3A0F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52FDF7CF1B1E8668E67E21F7B44F8A511926D359);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5837BDA26AD3EE1413093A16D86981B8DE8E9B28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral69CB7A9CE60B3C7A43D9DD5963D72ABE15FA2807);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral76C19B4D5FC4950234157CB099AE324698EA624D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8AF8E1B2C01884986FB59DE13E7870F59BA4D664);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E752B76D455A50FE476984D4B09A7CDBF2A753E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F8D61A714E28EAFC17AF72E13E7741ACB196BF6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC30A1963B6F2470B452FB7E6EE1904F81F1D16DC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD77E60CAF7EAB2E17AAD1FAC2212E74EE65C2A2C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD98F332A820D5A00ED719752CD9425AB178C1BB6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE04E4FA5B755F063C0491FB6C1599F389CCF0AB5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF336926F41B46C0C26BCA588FDCDF1676B0DD713);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// m_DynamicConfigurationFormat = string.Format(
		//     "{0} FPS {1} ms {2}"   + Environment.NewLine +
		//     "{3} FPS {4} ms {5}"   + Environment.NewLine +
		//     "{6} FPS {7} ms {8}"   + Environment.NewLine +
		//     "{9} FPS {10} ms {11}",
		// 
		//     ColorHelper.ColorText("{0}", m_FPSFieldsColor),
		//     ColorHelper.ColorText("{1}", m_FPSFieldsColor),
		//     ColorHelper.ColorText("?", m_FPSFieldsColor),
		// 
		//     ColorHelper.ColorText("{2}", m_FPSMinFieldsColor),
		//     ColorHelper.ColorText("{3}", m_FPSMinFieldsColor),
		//     ColorHelper.ColorText("?", m_FPSMinFieldsColor),
		// 
		//     ColorHelper.ColorText("{4}", m_FPSMaxFieldsColor),
		//     ColorHelper.ColorText("{5}", m_FPSMaxFieldsColor),
		//     ColorHelper.ColorText("?", m_FPSMaxFieldsColor),
		// 
		//     ColorHelper.ColorText("{6}", m_FPSFluctuationFieldsColor),
		//     ColorHelper.ColorText("{7}", m_FPSFluctuationFieldsColor),
		//     ColorHelper.ColorText("?", m_FPSFluctuationFieldsColor)
		// );
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteralE04E4FA5B755F063C0491FB6C1599F389CCF0AB5);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralE04E4FA5B755F063C0491FB6C1599F389CCF0AB5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		String_t* L_3;
		L_3 = Environment_get_NewLine_m86172FA1FF2F93F740EFB5760938B35750DD35C0(NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_3);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_2;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral2BF04C30F2E8919D22E97329123DDD48BF44873F);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral2BF04C30F2E8919D22E97329123DDD48BF44873F);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		String_t* L_6;
		L_6 = Environment_get_NewLine_m86172FA1FF2F93F740EFB5760938B35750DD35C0(NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_5;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral69CB7A9CE60B3C7A43D9DD5963D72ABE15FA2807);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral69CB7A9CE60B3C7A43D9DD5963D72ABE15FA2807);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_7;
		String_t* L_9;
		L_9 = Environment_get_NewLine_m86172FA1FF2F93F740EFB5760938B35750DD35C0(NULL);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_9);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_8;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteral0E674B4241396171BD95F77FB6CDDEAA63AEAE5A);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral0E674B4241396171BD95F77FB6CDDEAA63AEAE5A);
		String_t* L_11;
		L_11 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_10, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)((int32_t)12));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_12;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_14 = __this->___m_FPSFieldsColor_14;
		String_t* L_15;
		L_15 = ColorHelper_ColorText_mEFE2B99E89F6245B0D997D7AF7068022B25951E2(_stringLiteral23114468D04FA2B7A2DA455B545DB914D0A3ED94, L_14, NULL);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_15);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_15);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = L_13;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_17 = __this->___m_FPSFieldsColor_14;
		String_t* L_18;
		L_18 = ColorHelper_ColorText_mEFE2B99E89F6245B0D997D7AF7068022B25951E2(_stringLiteral51A7015B3E634B5A44BCE24D0DE3A94B3D7E3A0F, L_17, NULL);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_18);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_18);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_19 = L_16;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20 = __this->___m_FPSFieldsColor_14;
		String_t* L_21;
		L_21 = ColorHelper_ColorText_mEFE2B99E89F6245B0D997D7AF7068022B25951E2(_stringLiteral2A01F063E3BB9F5256438F6450C2AF645EA23D2C, L_20, NULL);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_21);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_21);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_22 = L_19;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_23 = __this->___m_FPSMinFieldsColor_15;
		String_t* L_24;
		L_24 = ColorHelper_ColorText_mEFE2B99E89F6245B0D997D7AF7068022B25951E2(_stringLiteralF336926F41B46C0C26BCA588FDCDF1676B0DD713, L_23, NULL);
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_24);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_24);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_25 = L_22;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_26 = __this->___m_FPSMinFieldsColor_15;
		String_t* L_27;
		L_27 = ColorHelper_ColorText_mEFE2B99E89F6245B0D997D7AF7068022B25951E2(_stringLiteral52FDF7CF1B1E8668E67E21F7B44F8A511926D359, L_26, NULL);
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_27);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_27);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_28 = L_25;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_29 = __this->___m_FPSMinFieldsColor_15;
		String_t* L_30;
		L_30 = ColorHelper_ColorText_mEFE2B99E89F6245B0D997D7AF7068022B25951E2(_stringLiteral8F8D61A714E28EAFC17AF72E13E7741ACB196BF6, L_29, NULL);
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, L_30);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_30);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_31 = L_28;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_32 = __this->___m_FPSMaxFieldsColor_16;
		String_t* L_33;
		L_33 = ColorHelper_ColorText_mEFE2B99E89F6245B0D997D7AF7068022B25951E2(_stringLiteral2FB16ADC66DC3256DFAE2E8B676A3977A1DA71B5, L_32, NULL);
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_33);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_33);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_34 = L_31;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_35 = __this->___m_FPSMaxFieldsColor_16;
		String_t* L_36;
		L_36 = ColorHelper_ColorText_mEFE2B99E89F6245B0D997D7AF7068022B25951E2(_stringLiteralD77E60CAF7EAB2E17AAD1FAC2212E74EE65C2A2C, L_35, NULL);
		NullCheck(L_34);
		ArrayElementTypeCheck (L_34, L_36);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject*)L_36);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_37 = L_34;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_38 = __this->___m_FPSMaxFieldsColor_16;
		String_t* L_39;
		L_39 = ColorHelper_ColorText_mEFE2B99E89F6245B0D997D7AF7068022B25951E2(_stringLiteral5837BDA26AD3EE1413093A16D86981B8DE8E9B28, L_38, NULL);
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, L_39);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(8), (RuntimeObject*)L_39);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40 = L_37;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_41 = __this->___m_FPSFluctuationFieldsColor_17;
		String_t* L_42;
		L_42 = ColorHelper_ColorText_mEFE2B99E89F6245B0D997D7AF7068022B25951E2(_stringLiteral76C19B4D5FC4950234157CB099AE324698EA624D, L_41, NULL);
		NullCheck(L_40);
		ArrayElementTypeCheck (L_40, L_42);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (RuntimeObject*)L_42);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_43 = L_40;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_44 = __this->___m_FPSFluctuationFieldsColor_17;
		String_t* L_45;
		L_45 = ColorHelper_ColorText_mEFE2B99E89F6245B0D997D7AF7068022B25951E2(_stringLiteralC30A1963B6F2470B452FB7E6EE1904F81F1D16DC, L_44, NULL);
		NullCheck(L_43);
		ArrayElementTypeCheck (L_43, L_45);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (RuntimeObject*)L_45);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_46 = L_43;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_47 = __this->___m_FPSFluctuationFieldsColor_17;
		String_t* L_48;
		L_48 = ColorHelper_ColorText_mEFE2B99E89F6245B0D997D7AF7068022B25951E2(_stringLiteral115CB6EBDC537323F2B3DEDE4DB394FD063F9B92, L_47, NULL);
		NullCheck(L_46);
		ArrayElementTypeCheck (L_46, L_48);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (RuntimeObject*)L_48);
		String_t* L_49;
		L_49 = String_Format_m74FC0A1259DFA02F3DF6538FC7F3ACF3E1AF0C55(L_11, L_46, NULL);
		__this->___m_DynamicConfigurationFormat_26 = L_49;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_DynamicConfigurationFormat_26), (void*)L_49);
		// if (!staticInfoText) {
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_50 = __this->___staticInfoText_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_51;
		L_51 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_50, NULL);
		if (L_51)
		{
			goto IL_014a;
		}
	}
	{
		// return;
		return;
	}

IL_014a:
	{
		// staticInfoText.text = string.Format(
		//     "{0} {1}" + Environment.NewLine +
		//     "{2} MB VRAM" + Environment.NewLine +
		//     "{3}" + Environment.NewLine +
		//     "{4} MB RAM" + Environment.NewLine +
		//     "{5}",
		//     ColorHelper.ColorText(SystemInfo.graphicsDeviceName, m_GPUFieldsColor),
		//     ColorHelper.ColorText("[" + SystemInfo.graphicsDeviceType.ToString() + "]", m_GPUDetailFieldsColor),
		//     ColorHelper.ColorText(SystemInfo.graphicsMemorySize.ToString(), m_GPUFieldsColor),
		//     ColorHelper.ColorText(SystemInfo.processorType, m_CPUFieldsColor),
		//     ColorHelper.ColorText(SystemInfo.systemMemorySize.ToString(), m_CPUFieldsColor),
		//     ColorHelper.ColorText(SystemInfo.operatingSystem, m_SysFieldsColor)
		// );
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_52 = __this->___staticInfoText_5;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_53 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_54 = L_53;
		NullCheck(L_54);
		ArrayElementTypeCheck (L_54, _stringLiteral8E752B76D455A50FE476984D4B09A7CDBF2A753E);
		(L_54)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral8E752B76D455A50FE476984D4B09A7CDBF2A753E);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_55 = L_54;
		String_t* L_56;
		L_56 = Environment_get_NewLine_m86172FA1FF2F93F740EFB5760938B35750DD35C0(NULL);
		NullCheck(L_55);
		ArrayElementTypeCheck (L_55, L_56);
		(L_55)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_56);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_57 = L_55;
		NullCheck(L_57);
		ArrayElementTypeCheck (L_57, _stringLiteral8AF8E1B2C01884986FB59DE13E7870F59BA4D664);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral8AF8E1B2C01884986FB59DE13E7870F59BA4D664);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_58 = L_57;
		String_t* L_59;
		L_59 = Environment_get_NewLine_m86172FA1FF2F93F740EFB5760938B35750DD35C0(NULL);
		NullCheck(L_58);
		ArrayElementTypeCheck (L_58, L_59);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_59);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_60 = L_58;
		NullCheck(L_60);
		ArrayElementTypeCheck (L_60, _stringLiteral52FDF7CF1B1E8668E67E21F7B44F8A511926D359);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral52FDF7CF1B1E8668E67E21F7B44F8A511926D359);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_61 = L_60;
		String_t* L_62;
		L_62 = Environment_get_NewLine_m86172FA1FF2F93F740EFB5760938B35750DD35C0(NULL);
		NullCheck(L_61);
		ArrayElementTypeCheck (L_61, L_62);
		(L_61)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_62);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_63 = L_61;
		NullCheck(L_63);
		ArrayElementTypeCheck (L_63, _stringLiteralD98F332A820D5A00ED719752CD9425AB178C1BB6);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteralD98F332A820D5A00ED719752CD9425AB178C1BB6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_64 = L_63;
		String_t* L_65;
		L_65 = Environment_get_NewLine_m86172FA1FF2F93F740EFB5760938B35750DD35C0(NULL);
		NullCheck(L_64);
		ArrayElementTypeCheck (L_64, L_65);
		(L_64)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)L_65);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_66 = L_64;
		NullCheck(L_66);
		ArrayElementTypeCheck (L_66, _stringLiteralD77E60CAF7EAB2E17AAD1FAC2212E74EE65C2A2C);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteralD77E60CAF7EAB2E17AAD1FAC2212E74EE65C2A2C);
		String_t* L_67;
		L_67 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_66, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_68 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_69 = L_68;
		String_t* L_70;
		L_70 = SystemInfo_get_graphicsDeviceName_m29D97187ADB983D77438384BBD77F0BC48731122(NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_71 = __this->___m_GPUFieldsColor_18;
		String_t* L_72;
		L_72 = ColorHelper_ColorText_mEFE2B99E89F6245B0D997D7AF7068022B25951E2(L_70, L_71, NULL);
		NullCheck(L_69);
		ArrayElementTypeCheck (L_69, L_72);
		(L_69)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_72);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_73 = L_69;
		int32_t L_74;
		L_74 = SystemInfo_get_graphicsDeviceType_m539E2B66EB19CD100050109D879AF1F55EB212E1(NULL);
		V_0 = L_74;
		Il2CppFakeBox<int32_t> L_75(GraphicsDeviceType_t65150C9055D1BC1E377E894972629BF22BA2CBF5_il2cpp_TypeInfo_var, (&V_0));
		String_t* L_76;
		L_76 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_75), NULL);
		String_t* L_77;
		L_77 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1, L_76, _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_78 = __this->___m_GPUDetailFieldsColor_19;
		String_t* L_79;
		L_79 = ColorHelper_ColorText_mEFE2B99E89F6245B0D997D7AF7068022B25951E2(L_77, L_78, NULL);
		NullCheck(L_73);
		ArrayElementTypeCheck (L_73, L_79);
		(L_73)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_79);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_80 = L_73;
		int32_t L_81;
		L_81 = SystemInfo_get_graphicsMemorySize_m53DF8C3C07E8A470CB0308C234B032F5CAA893DE(NULL);
		V_1 = L_81;
		String_t* L_82;
		L_82 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_83 = __this->___m_GPUFieldsColor_18;
		String_t* L_84;
		L_84 = ColorHelper_ColorText_mEFE2B99E89F6245B0D997D7AF7068022B25951E2(L_82, L_83, NULL);
		NullCheck(L_80);
		ArrayElementTypeCheck (L_80, L_84);
		(L_80)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_84);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_85 = L_80;
		String_t* L_86;
		L_86 = SystemInfo_get_processorType_mFF77AA1DFEF20F32947689FC751856CD7FB0D211(NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_87 = __this->___m_CPUFieldsColor_20;
		String_t* L_88;
		L_88 = ColorHelper_ColorText_mEFE2B99E89F6245B0D997D7AF7068022B25951E2(L_86, L_87, NULL);
		NullCheck(L_85);
		ArrayElementTypeCheck (L_85, L_88);
		(L_85)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_88);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_89 = L_85;
		int32_t L_90;
		L_90 = SystemInfo_get_systemMemorySize_mB292B50D7F2F0AF1A450A87F3A883E4ABEC00D89(NULL);
		V_1 = L_90;
		String_t* L_91;
		L_91 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_92 = __this->___m_CPUFieldsColor_20;
		String_t* L_93;
		L_93 = ColorHelper_ColorText_mEFE2B99E89F6245B0D997D7AF7068022B25951E2(L_91, L_92, NULL);
		NullCheck(L_89);
		ArrayElementTypeCheck (L_89, L_93);
		(L_89)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_93);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_94 = L_89;
		String_t* L_95;
		L_95 = SystemInfo_get_operatingSystem_m441DFAEFA81C9B5AF19D5C486469EDBD674490A8(NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_96 = __this->___m_SysFieldsColor_21;
		String_t* L_97;
		L_97 = ColorHelper_ColorText_mEFE2B99E89F6245B0D997D7AF7068022B25951E2(L_95, L_96, NULL);
		NullCheck(L_94);
		ArrayElementTypeCheck (L_94, L_97);
		(L_94)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_97);
		String_t* L_98;
		L_98 = String_Format_m74FC0A1259DFA02F3DF6538FC7F3ACF3E1AF0C55(L_67, L_94, NULL);
		NullCheck(L_52);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_52, L_98);
		// }
		return;
	}
}
// System.Void OmniSARTechnologies.LiteFPSCounter.LiteFPSCounter::UpdateDynamicContent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LiteFPSCounter_UpdateDynamicContent_m500B997B706B2DA7D5E8398F34656F57252D3303 (LiteFPSCounter_t6420951027E81BF859AC1A3DEF1F5A932DE9641E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC613D4D2FE3F5D74727D376F793286A2BCBB1391);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// if (!dynamicInfoText) {
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___dynamicInfoText_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// dynamicInfoText.text = string.Format(
		//     m_DynamicConfigurationFormat,
		//     m_FrameRate.ToString("F1"),           (m_FrameTime * 1000.0f).ToString("F1"),
		//     m_MinFrameRate.ToString("F1"),        (m_MaxFrameTime * 1000.0f).ToString("F1"),
		//     m_MaxFrameRate.ToString("F1"),        (m_MinFrameTime * 1000.0f).ToString("F1"),
		//     m_FrameRateFlutuation.ToString("F1"), (m_FrameTimeFlutuation * 1000.0f).ToString("F1")
		// );
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = __this->___dynamicInfoText_4;
		String_t* L_3 = __this->___m_DynamicConfigurationFormat_26;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		float* L_6 = (&__this->___m_FrameRate_10);
		String_t* L_7;
		L_7 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D(L_6, _stringLiteralC613D4D2FE3F5D74727D376F793286A2BCBB1391, NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_7);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_5;
		float L_9 = __this->___m_FrameTime_6;
		V_0 = ((float)il2cpp_codegen_multiply(L_9, (1000.0f)));
		String_t* L_10;
		L_10 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D((&V_0), _stringLiteralC613D4D2FE3F5D74727D376F793286A2BCBB1391, NULL);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_10);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_8;
		float* L_12 = (&__this->___m_MinFrameRate_11);
		String_t* L_13;
		L_13 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D(L_12, _stringLiteralC613D4D2FE3F5D74727D376F793286A2BCBB1391, NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_13);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_13);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = L_11;
		float L_15 = __this->___m_MaxFrameTime_8;
		V_0 = ((float)il2cpp_codegen_multiply(L_15, (1000.0f)));
		String_t* L_16;
		L_16 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D((&V_0), _stringLiteralC613D4D2FE3F5D74727D376F793286A2BCBB1391, NULL);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_16);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_16);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_14;
		float* L_18 = (&__this->___m_MaxFrameRate_12);
		String_t* L_19;
		L_19 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D(L_18, _stringLiteralC613D4D2FE3F5D74727D376F793286A2BCBB1391, NULL);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_19);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_19);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = L_17;
		float L_21 = __this->___m_MinFrameTime_7;
		V_0 = ((float)il2cpp_codegen_multiply(L_21, (1000.0f)));
		String_t* L_22;
		L_22 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D((&V_0), _stringLiteralC613D4D2FE3F5D74727D376F793286A2BCBB1391, NULL);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_22);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_22);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_23 = L_20;
		float* L_24 = (&__this->___m_FrameRateFlutuation_13);
		String_t* L_25;
		L_25 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D(L_24, _stringLiteralC613D4D2FE3F5D74727D376F793286A2BCBB1391, NULL);
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_25);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_25);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_26 = L_23;
		float L_27 = __this->___m_FrameTimeFlutuation_9;
		V_0 = ((float)il2cpp_codegen_multiply(L_27, (1000.0f)));
		String_t* L_28;
		L_28 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D((&V_0), _stringLiteralC613D4D2FE3F5D74727D376F793286A2BCBB1391, NULL);
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, L_28);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject*)L_28);
		String_t* L_29;
		L_29 = String_Format_m74FC0A1259DFA02F3DF6538FC7F3ACF3E1AF0C55(L_3, L_26, NULL);
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_29);
		// }
		return;
	}
}
// System.Void OmniSARTechnologies.LiteFPSCounter.LiteFPSCounter::ResetProbingData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LiteFPSCounter_ResetProbingData_m0585B822718B3CBF4CF22C9B3276CF36FCBD1497 (LiteFPSCounter_t6420951027E81BF859AC1A3DEF1F5A932DE9641E* __this, const RuntimeMethod* method) 
{
	{
		// m_MinFrameTime = float.MaxValue;
		__this->___m_MinFrameTime_7 = ((std::numeric_limits<float>::max)());
		// m_MaxFrameTime = float.MinValue;
		__this->___m_MaxFrameTime_8 = (-(std::numeric_limits<float>::max)());
		// m_AccumulatedTime = 0.0f;
		__this->___m_AccumulatedTime_22 = (0.0f);
		// m_AccumulatedFrames = 0;
		__this->___m_AccumulatedFrames_23 = 0;
		// }
		return;
	}
}
// System.Void OmniSARTechnologies.LiteFPSCounter.LiteFPSCounter::UpdateFPS()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LiteFPSCounter_UpdateFPS_mF2B9AFC747F0631F776058E7C9512E656E418373 (LiteFPSCounter_t6420951027E81BF859AC1A3DEF1F5A932DE9641E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LiteFPSCounter_t6420951027E81BF859AC1A3DEF1F5A932DE9641E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// if (!dynamicInfoText) {
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___dynamicInfoText_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// float deltaTime = Time.unscaledDeltaTime;
		float L_2;
		L_2 = Time_get_unscaledDeltaTime_m89252D23CC5AA295CFA4EB2BCB417A831AC51652(NULL);
		V_0 = L_2;
		// m_AccumulatedTime += deltaTime;
		float L_3 = __this->___m_AccumulatedTime_22;
		float L_4 = V_0;
		__this->___m_AccumulatedTime_22 = ((float)il2cpp_codegen_add(L_3, L_4));
		// m_AccumulatedFrames++;
		int32_t L_5 = __this->___m_AccumulatedFrames_23;
		__this->___m_AccumulatedFrames_23 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		// if (deltaTime < MinTime) {
		float L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(LiteFPSCounter_t6420951027E81BF859AC1A3DEF1F5A932DE9641E_il2cpp_TypeInfo_var);
		float L_7 = ((LiteFPSCounter_t6420951027E81BF859AC1A3DEF1F5A932DE9641E_StaticFields*)il2cpp_codegen_static_fields_for(LiteFPSCounter_t6420951027E81BF859AC1A3DEF1F5A932DE9641E_il2cpp_TypeInfo_var))->___MinTime_28;
		if ((!(((float)L_6) < ((float)L_7))))
		{
			goto IL_003e;
		}
	}
	{
		// deltaTime = MinTime;
		il2cpp_codegen_runtime_class_init_inline(LiteFPSCounter_t6420951027E81BF859AC1A3DEF1F5A932DE9641E_il2cpp_TypeInfo_var);
		float L_8 = ((LiteFPSCounter_t6420951027E81BF859AC1A3DEF1F5A932DE9641E_StaticFields*)il2cpp_codegen_static_fields_for(LiteFPSCounter_t6420951027E81BF859AC1A3DEF1F5A932DE9641E_il2cpp_TypeInfo_var))->___MinTime_28;
		V_0 = L_8;
	}

IL_003e:
	{
		// if (deltaTime < m_MinFrameTime) {
		float L_9 = V_0;
		float L_10 = __this->___m_MinFrameTime_7;
		if ((!(((float)L_9) < ((float)L_10))))
		{
			goto IL_004e;
		}
	}
	{
		// m_MinFrameTime = deltaTime;
		float L_11 = V_0;
		__this->___m_MinFrameTime_7 = L_11;
	}

IL_004e:
	{
		// if (deltaTime > m_MaxFrameTime) {
		float L_12 = V_0;
		float L_13 = __this->___m_MaxFrameTime_8;
		if ((!(((float)L_12) > ((float)L_13))))
		{
			goto IL_005e;
		}
	}
	{
		// m_MaxFrameTime = deltaTime;
		float L_14 = V_0;
		__this->___m_MaxFrameTime_8 = L_14;
	}

IL_005e:
	{
		// float nowTime = Time.realtimeSinceStartup;
		float L_15;
		L_15 = Time_get_realtimeSinceStartup_mB49A5622E38FFE9589EB9B3E75573E443B8D63EC(NULL);
		V_1 = L_15;
		// if (nowTime - m_LastUpdateTime < UpdateInterval) {
		float L_16 = V_1;
		float L_17 = __this->___m_LastUpdateTime_24;
		il2cpp_codegen_runtime_class_init_inline(LiteFPSCounter_t6420951027E81BF859AC1A3DEF1F5A932DE9641E_il2cpp_TypeInfo_var);
		float L_18 = ((LiteFPSCounter_t6420951027E81BF859AC1A3DEF1F5A932DE9641E_StaticFields*)il2cpp_codegen_static_fields_for(LiteFPSCounter_t6420951027E81BF859AC1A3DEF1F5A932DE9641E_il2cpp_TypeInfo_var))->___UpdateInterval_27;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_16, L_17))) < ((float)L_18))))
		{
			goto IL_0074;
		}
	}
	{
		// return;
		return;
	}

IL_0074:
	{
		// if (m_AccumulatedTime < MinTime) {
		float L_19 = __this->___m_AccumulatedTime_22;
		il2cpp_codegen_runtime_class_init_inline(LiteFPSCounter_t6420951027E81BF859AC1A3DEF1F5A932DE9641E_il2cpp_TypeInfo_var);
		float L_20 = ((LiteFPSCounter_t6420951027E81BF859AC1A3DEF1F5A932DE9641E_StaticFields*)il2cpp_codegen_static_fields_for(LiteFPSCounter_t6420951027E81BF859AC1A3DEF1F5A932DE9641E_il2cpp_TypeInfo_var))->___MinTime_28;
		if ((!(((float)L_19) < ((float)L_20))))
		{
			goto IL_008c;
		}
	}
	{
		// m_AccumulatedTime = MinTime;
		il2cpp_codegen_runtime_class_init_inline(LiteFPSCounter_t6420951027E81BF859AC1A3DEF1F5A932DE9641E_il2cpp_TypeInfo_var);
		float L_21 = ((LiteFPSCounter_t6420951027E81BF859AC1A3DEF1F5A932DE9641E_StaticFields*)il2cpp_codegen_static_fields_for(LiteFPSCounter_t6420951027E81BF859AC1A3DEF1F5A932DE9641E_il2cpp_TypeInfo_var))->___MinTime_28;
		__this->___m_AccumulatedTime_22 = L_21;
	}

IL_008c:
	{
		// if (m_AccumulatedFrames < 1) {
		int32_t L_22 = __this->___m_AccumulatedFrames_23;
		if ((((int32_t)L_22) >= ((int32_t)1)))
		{
			goto IL_009c;
		}
	}
	{
		// m_AccumulatedFrames = 1;
		__this->___m_AccumulatedFrames_23 = 1;
	}

IL_009c:
	{
		// m_FrameTime = m_AccumulatedTime / m_AccumulatedFrames;
		float L_23 = __this->___m_AccumulatedTime_22;
		int32_t L_24 = __this->___m_AccumulatedFrames_23;
		__this->___m_FrameTime_6 = ((float)(L_23/((float)L_24)));
		// m_FrameRate = 1.0f / m_FrameTime;
		float L_25 = __this->___m_FrameTime_6;
		__this->___m_FrameRate_10 = ((float)((1.0f)/L_25));
		// m_MinFrameRate = 1.0f / m_MaxFrameTime;
		float L_26 = __this->___m_MaxFrameTime_8;
		__this->___m_MinFrameRate_11 = ((float)((1.0f)/L_26));
		// m_MaxFrameRate = 1.0f / m_MinFrameTime;
		float L_27 = __this->___m_MinFrameTime_7;
		__this->___m_MaxFrameRate_12 = ((float)((1.0f)/L_27));
		// m_FrameTimeFlutuation = Mathf.Abs(m_MaxFrameTime - m_MinFrameTime) / 2.0f;
		float L_28 = __this->___m_MaxFrameTime_8;
		float L_29 = __this->___m_MinFrameTime_7;
		float L_30;
		L_30 = fabsf(((float)il2cpp_codegen_subtract(L_28, L_29)));
		__this->___m_FrameTimeFlutuation_9 = ((float)(L_30/(2.0f)));
		// m_FrameRateFlutuation = Mathf.Abs(m_MaxFrameRate - m_MinFrameRate) / 2.0f;
		float L_31 = __this->___m_MaxFrameRate_12;
		float L_32 = __this->___m_MinFrameRate_11;
		float L_33;
		L_33 = fabsf(((float)il2cpp_codegen_subtract(L_31, L_32)));
		__this->___m_FrameRateFlutuation_13 = ((float)(L_33/(2.0f)));
		// UpdateDynamicContent();
		LiteFPSCounter_UpdateDynamicContent_m500B997B706B2DA7D5E8398F34656F57252D3303(__this, NULL);
		// ResetProbingData();
		LiteFPSCounter_ResetProbingData_m0585B822718B3CBF4CF22C9B3276CF36FCBD1497(__this, NULL);
		// m_LastUpdateTime = nowTime;
		float L_34 = V_1;
		__this->___m_LastUpdateTime_24 = L_34;
		// }
		return;
	}
}
// System.Void OmniSARTechnologies.LiteFPSCounter.LiteFPSCounter::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LiteFPSCounter_Update_m9F384121E2938EBB122B0C045A66DAC09CB68216 (LiteFPSCounter_t6420951027E81BF859AC1A3DEF1F5A932DE9641E* __this, const RuntimeMethod* method) 
{
	{
		// UpdateFPS();
		LiteFPSCounter_UpdateFPS_mF2B9AFC747F0631F776058E7C9512E656E418373(__this, NULL);
		// }
		return;
	}
}
// System.Void OmniSARTechnologies.LiteFPSCounter.LiteFPSCounter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LiteFPSCounter__ctor_m350D2E3EBEB15512293292494E86AE96E6817B20 (LiteFPSCounter_t6420951027E81BF859AC1A3DEF1F5A932DE9641E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A193B0D3A98F2E1455B8353A078E77A8E66250D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E3A03BC1BD2EADCE4C285DC75A3CD13BC69A94F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral83020F5B9FF8736D04935697B2BFFAD6F95A3AEC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87303BB82CC0CA384F7E11B35E0877623A8D4B00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87743FCDE4168E8D60D6FA285DD63DCD0619CA6D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9A06480B863F17591B1E98A1FFA071A33835A8F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEE23A92CA310FD038105405925DC1E20D4B77D5E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF5B0C9DE0365CB9E066942A7B52AE715D4A9CA81);
		s_Il2CppMethodInitialized = true;
	}
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// private Color m_FPSFieldsColor = ColorHelper.HexStrToColor("#80FF00FF");
		il2cpp_codegen_initobj((&V_0), sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = V_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = ColorHelper_HexStrToColor_mAD696A59E13C3E44F570E1255F6F439FA12D9CF7(_stringLiteral87743FCDE4168E8D60D6FA285DD63DCD0619CA6D, L_0, NULL);
		__this->___m_FPSFieldsColor_14 = L_1;
		// private Color m_FPSMinFieldsColor = ColorHelper.HexStrToColor("#FF8400FF");
		il2cpp_codegen_initobj((&V_0), sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = V_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		L_3 = ColorHelper_HexStrToColor_mAD696A59E13C3E44F570E1255F6F439FA12D9CF7(_stringLiteralEE23A92CA310FD038105405925DC1E20D4B77D5E, L_2, NULL);
		__this->___m_FPSMinFieldsColor_15 = L_3;
		// private Color m_FPSMaxFieldsColor = ColorHelper.HexStrToColor("#00A0FFFF");
		il2cpp_codegen_initobj((&V_0), sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = V_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5;
		L_5 = ColorHelper_HexStrToColor_mAD696A59E13C3E44F570E1255F6F439FA12D9CF7(_stringLiteralD9A06480B863F17591B1E98A1FFA071A33835A8F, L_4, NULL);
		__this->___m_FPSMaxFieldsColor_16 = L_5;
		// private Color m_FPSFluctuationFieldsColor = ColorHelper.HexStrToColor("#DCEC00FF");
		il2cpp_codegen_initobj((&V_0), sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = V_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7;
		L_7 = ColorHelper_HexStrToColor_mAD696A59E13C3E44F570E1255F6F439FA12D9CF7(_stringLiteral87303BB82CC0CA384F7E11B35E0877623A8D4B00, L_6, NULL);
		__this->___m_FPSFluctuationFieldsColor_17 = L_7;
		// private Color m_GPUFieldsColor = ColorHelper.HexStrToColor("#FF5020FF");
		il2cpp_codegen_initobj((&V_0), sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = V_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9;
		L_9 = ColorHelper_HexStrToColor_mAD696A59E13C3E44F570E1255F6F439FA12D9CF7(_stringLiteral0E3A03BC1BD2EADCE4C285DC75A3CD13BC69A94F, L_8, NULL);
		__this->___m_GPUFieldsColor_18 = L_9;
		// private Color m_GPUDetailFieldsColor = ColorHelper.HexStrToColor("#FF3379FF");
		il2cpp_codegen_initobj((&V_0), sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10 = V_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11;
		L_11 = ColorHelper_HexStrToColor_mAD696A59E13C3E44F570E1255F6F439FA12D9CF7(_stringLiteralF5B0C9DE0365CB9E066942A7B52AE715D4A9CA81, L_10, NULL);
		__this->___m_GPUDetailFieldsColor_19 = L_11;
		// private Color m_CPUFieldsColor = ColorHelper.HexStrToColor("#0090CBFF");
		il2cpp_codegen_initobj((&V_0), sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12 = V_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13;
		L_13 = ColorHelper_HexStrToColor_mAD696A59E13C3E44F570E1255F6F439FA12D9CF7(_stringLiteral0A193B0D3A98F2E1455B8353A078E77A8E66250D, L_12, NULL);
		__this->___m_CPUFieldsColor_20 = L_13;
		// private Color m_SysFieldsColor = ColorHelper.HexStrToColor("#C9D700FF");
		il2cpp_codegen_initobj((&V_0), sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_14 = V_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_15;
		L_15 = ColorHelper_HexStrToColor_mAD696A59E13C3E44F570E1255F6F439FA12D9CF7(_stringLiteral83020F5B9FF8736D04935697B2BFFAD6F95A3AEC, L_14, NULL);
		__this->___m_SysFieldsColor_21 = L_15;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void OmniSARTechnologies.LiteFPSCounter.LiteFPSCounter::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LiteFPSCounter__cctor_mA310871FCB83A360BA96CB7B4EAC038C3F2E9586 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LiteFPSCounter_t6420951027E81BF859AC1A3DEF1F5A932DE9641E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static float UpdateInterval = 0.5f;
		((LiteFPSCounter_t6420951027E81BF859AC1A3DEF1F5A932DE9641E_StaticFields*)il2cpp_codegen_static_fields_for(LiteFPSCounter_t6420951027E81BF859AC1A3DEF1F5A932DE9641E_il2cpp_TypeInfo_var))->___UpdateInterval_27 = (0.5f);
		// public static float MinTime = 0.000000001f; // equivalent to 1B fps
		((LiteFPSCounter_t6420951027E81BF859AC1A3DEF1F5A932DE9641E_StaticFields*)il2cpp_codegen_static_fields_for(LiteFPSCounter_t6420951027E81BF859AC1A3DEF1F5A932DE9641E_il2cpp_TypeInfo_var))->___MinTime_28 = (9.99999972E-10f);
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
// System.Single OmniSARTechnologies.LiteFPSCounter.Examples.HeavyRenderingController::GetComplexity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HeavyRenderingController_GetComplexity_mF181B3B0D1DE49ECB06D0347AEAD8127AAFCD2A7 (HeavyRenderingController_t759B9EDA9999712110938F1E8EB376F3E6816836* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3ADD8118F3673221E22D64C97568B4FEA83DCDDA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!heavyRenderingMaterial) {
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___heavyRenderingMaterial_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		// return 0.0f;
		return (0.0f);
	}

IL_0013:
	{
		// return Mathf.Clamp01(heavyRenderingMaterial.GetFloat("_Complexity"));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___heavyRenderingMaterial_4;
		NullCheck(L_2);
		float L_3;
		L_3 = Material_GetFloat_m2A77F10E6AA13EA3FA56166EFEA897115A14FA5A(L_2, _stringLiteral3ADD8118F3673221E22D64C97568B4FEA83DCDDA, NULL);
		float L_4;
		L_4 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_3, NULL);
		return L_4;
	}
}
// System.Void OmniSARTechnologies.LiteFPSCounter.Examples.HeavyRenderingController::SetComplexity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeavyRenderingController_SetComplexity_m00861B58699FAAD4877D37D123C21987BAD4E128 (HeavyRenderingController_t759B9EDA9999712110938F1E8EB376F3E6816836* __this, float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2409165FB90CD4A8B916FCA75790766B82C91748);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3ADD8118F3673221E22D64C97568B4FEA83DCDDA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C066B34F4DB79023C0642AFBC43B25A5327F710);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral961D6B16BF0F373B2C5F9E7FACC273326DC3B72E);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// complexity = value;
		float L_0 = ___value0;
		__this->___complexity_5 = L_0;
		// if (heavyRenderingMaterial) {
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1 = __this->___heavyRenderingMaterial_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_1, NULL);
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		// heavyRenderingMaterial.SetFloat("_Complexity", Mathf.Clamp01(complexity));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = __this->___heavyRenderingMaterial_4;
		float L_4 = __this->___complexity_5;
		float L_5;
		L_5 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_4, NULL);
		NullCheck(L_3);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_3, _stringLiteral3ADD8118F3673221E22D64C97568B4FEA83DCDDA, L_5, NULL);
	}

IL_002f:
	{
		// if (complexityText) {
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = __this->___complexityText_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_6, NULL);
		if (!L_7)
		{
			goto IL_008a;
		}
	}
	{
		// complexityText.text = string.Format(
		//     "Material Complexity: {0}",
		//     ColorHelper.ColorText(
		//         (complexity * 100.0f).ToString("F2") + "%",
		//         complexityHeatMap.Evaluate(complexity)
		//     )
		// );
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_8 = __this->___complexityText_6;
		float L_9 = __this->___complexity_5;
		V_0 = ((float)il2cpp_codegen_multiply(L_9, (100.0f)));
		String_t* L_10;
		L_10 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D((&V_0), _stringLiteral2409165FB90CD4A8B916FCA75790766B82C91748, NULL);
		String_t* L_11;
		L_11 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_10, _stringLiteral6C066B34F4DB79023C0642AFBC43B25A5327F710, NULL);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_12 = __this->___complexityHeatMap_8;
		float L_13 = __this->___complexity_5;
		NullCheck(L_12);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_14;
		L_14 = Gradient_Evaluate_m332A32F48EA3F884CB55D74131DF8064F29F9C32(L_12, L_13, NULL);
		String_t* L_15;
		L_15 = ColorHelper_ColorText_mEFE2B99E89F6245B0D997D7AF7068022B25951E2(L_11, L_14, NULL);
		String_t* L_16;
		L_16 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral961D6B16BF0F373B2C5F9E7FACC273326DC3B72E, L_15, NULL);
		NullCheck(L_8);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_8, L_16);
	}

IL_008a:
	{
		// }
		return;
	}
}
// System.Void OmniSARTechnologies.LiteFPSCounter.Examples.HeavyRenderingController::UpdateComplexity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeavyRenderingController_UpdateComplexity_m77971C9F3CDA37D1A557F91E61EF8D2D4A292F8F (HeavyRenderingController_t759B9EDA9999712110938F1E8EB376F3E6816836* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HeavyRenderingController_t759B9EDA9999712110938F1E8EB376F3E6816836* G_B2_0 = NULL;
	HeavyRenderingController_t759B9EDA9999712110938F1E8EB376F3E6816836* G_B1_0 = NULL;
	float G_B3_0 = 0.0f;
	HeavyRenderingController_t759B9EDA9999712110938F1E8EB376F3E6816836* G_B3_1 = NULL;
	{
		// SetComplexity(complexitySlider ? complexitySlider.value : complexity);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0 = __this->___complexitySlider_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		G_B1_0 = __this;
		if (L_1)
		{
			G_B2_0 = __this;
			goto IL_0016;
		}
	}
	{
		float L_2 = __this->___complexity_5;
		G_B3_0 = L_2;
		G_B3_1 = G_B1_0;
		goto IL_0021;
	}

IL_0016:
	{
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_3 = __this->___complexitySlider_7;
		NullCheck(L_3);
		float L_4;
		L_4 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_3);
		G_B3_0 = L_4;
		G_B3_1 = G_B2_0;
	}

IL_0021:
	{
		NullCheck(G_B3_1);
		HeavyRenderingController_SetComplexity_m00861B58699FAAD4877D37D123C21987BAD4E128(G_B3_1, G_B3_0, NULL);
		// }
		return;
	}
}
// System.Void OmniSARTechnologies.LiteFPSCounter.Examples.HeavyRenderingController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeavyRenderingController_Start_m59661A729DCA80F6EC1F8B70EDEA26EB512A6D98 (HeavyRenderingController_t759B9EDA9999712110938F1E8EB376F3E6816836* __this, const RuntimeMethod* method) 
{
	{
		// UpdateComplexity();
		HeavyRenderingController_UpdateComplexity_m77971C9F3CDA37D1A557F91E61EF8D2D4A292F8F(__this, NULL);
		// }
		return;
	}
}
// System.Void OmniSARTechnologies.LiteFPSCounter.Examples.HeavyRenderingController::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeavyRenderingController_OnValidate_mEED4569FF720DE8B69CAA1A3DCFB31A348DAD98F (HeavyRenderingController_t759B9EDA9999712110938F1E8EB376F3E6816836* __this, const RuntimeMethod* method) 
{
	{
		// UpdateComplexity();
		HeavyRenderingController_UpdateComplexity_m77971C9F3CDA37D1A557F91E61EF8D2D4A292F8F(__this, NULL);
		// }
		return;
	}
}
// System.Void OmniSARTechnologies.LiteFPSCounter.Examples.HeavyRenderingController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeavyRenderingController__ctor_m79E12F78F859B720B8BEE54D3498B2C1BCBF3C21 (HeavyRenderingController_t759B9EDA9999712110938F1E8EB376F3E6816836* __this, const RuntimeMethod* method) 
{
	{
		// public float complexity = 0.05f;
		__this->___complexity_5 = (0.0500000007f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void OmniSARTechnologies.LiteFPSCounter.Examples.SimpleSceneSwitcher::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleSceneSwitcher_Start_mE4C8E652209515F474F5E6CAB2BFBCFD23E0AC74 (SimpleSceneSwitcher_tD3AA6A533EBB5552FECD46E054DF980D3FBA9801* __this, const RuntimeMethod* method) 
{
	{
		// UpdateSceneNameText();
		SimpleSceneSwitcher_UpdateSceneNameText_mBE9AEB71F99593A802EE11C303F69261DB94C7AF(__this, NULL);
		// }
		return;
	}
}
// System.Void OmniSARTechnologies.LiteFPSCounter.Examples.SimpleSceneSwitcher::ChangeActiveScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleSceneSwitcher_ChangeActiveScene_m9F07AF8EF2976273227F161BC4897E4A26DAE765 (SimpleSceneSwitcher_tD3AA6A533EBB5552FECD46E054DF980D3FBA9801* __this, int32_t ___buildIndexOffset0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (SceneManager.sceneCountInBuildSettings < 1) {
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = SceneManager_get_sceneCountInBuildSettings_m7C49222A2A771B11C1CAD7D743BDDF8F8F39E685(NULL);
		if ((((int32_t)L_0) >= ((int32_t)1)))
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// int newSceneBuildIndex = SceneManager.GetActiveScene().buildIndex;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_1;
		L_1 = SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE(NULL);
		V_0 = L_1;
		int32_t L_2;
		L_2 = Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E((&V_0), NULL);
		// newSceneBuildIndex += buildIndexOffset;
		int32_t L_3 = ___buildIndexOffset0;
		// newSceneBuildIndex += SceneManager.sceneCountInBuildSettings << 10;
		int32_t L_4;
		L_4 = SceneManager_get_sceneCountInBuildSettings_m7C49222A2A771B11C1CAD7D743BDDF8F8F39E685(NULL);
		// newSceneBuildIndex %= SceneManager.sceneCountInBuildSettings;
		int32_t L_5;
		L_5 = SceneManager_get_sceneCountInBuildSettings_m7C49222A2A771B11C1CAD7D743BDDF8F8F39E685(NULL);
		// newSceneBuildIndex = Mathf.Clamp(newSceneBuildIndex, 0, SceneManager.sceneCountInBuildSettings - 1);
		int32_t L_6;
		L_6 = SceneManager_get_sceneCountInBuildSettings_m7C49222A2A771B11C1CAD7D743BDDF8F8F39E685(NULL);
		int32_t L_7;
		L_7 = Mathf_Clamp_mA48718D9A20D8972EDD41714CEF6BBF864F442EA_inline(((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_2, L_3)), ((int32_t)(L_4<<((int32_t)10)))))%L_5)), 0, ((int32_t)il2cpp_codegen_subtract(L_6, 1)), NULL);
		// SceneManager.LoadScene(newSceneBuildIndex);
		SceneManager_LoadScene_mE00D17D79AD74B307F913BBF296A36115548DB6D(L_7, NULL);
		// UpdateSceneNameText();
		SimpleSceneSwitcher_UpdateSceneNameText_mBE9AEB71F99593A802EE11C303F69261DB94C7AF(__this, NULL);
		// }
		return;
	}
}
// System.Void OmniSARTechnologies.LiteFPSCounter.Examples.SimpleSceneSwitcher::UpdateSceneNameText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleSceneSwitcher_UpdateSceneNameText_mBE9AEB71F99593A802EE11C303F69261DB94C7AF (SimpleSceneSwitcher_tD3AA6A533EBB5552FECD46E054DF980D3FBA9801* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (!sceneNameText) {
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___sceneNameText_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// sceneNameText.text = SceneManager.GetActiveScene().name;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = __this->___sceneNameText_4;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_3;
		L_3 = SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE(NULL);
		V_0 = L_3;
		String_t* L_4;
		L_4 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_0), NULL);
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_4);
		// }
		return;
	}
}
// System.Void OmniSARTechnologies.LiteFPSCounter.Examples.SimpleSceneSwitcher::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleSceneSwitcher__ctor_mB93695CC8123836BFAFF0DE1C466BCC364D49685 (SimpleSceneSwitcher_tD3AA6A533EBB5552FECD46E054DF980D3FBA9801* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// UnityEngine.Color OmniSARTechnologies.Helper.ColorHelper::HexStrToColor(System.String,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ColorHelper_HexStrToColor_mAD696A59E13C3E44F570E1255F6F439FA12D9CF7 (String_t* ___hexStrColor0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___fallbackColor1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B0FEB3147CE20EB2C90076367F895C59BCD14B3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A65C5353FCF9B2392130B62992E8D50E5552C89);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E6DEA6E609FD74FD29A7E5BB6D900CCBA5F3FBF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B7_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B10_1 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B12_1 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B11_1 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B13_1 = 0;
	int32_t G_B13_2 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B15_1 = 0;
	int32_t G_B15_2 = 0;
	int32_t G_B14_0 = 0;
	int32_t G_B14_1 = 0;
	int32_t G_B14_2 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B16_1 = 0;
	int32_t G_B16_2 = 0;
	int32_t G_B16_3 = 0;
	{
		// if (hexStrColor.Length < 1) {
		String_t* L_0 = ___hexStrColor0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_0, NULL);
		if ((((int32_t)L_1) >= ((int32_t)1)))
		{
			goto IL_000b;
		}
	}
	{
		// return fallbackColor;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___fallbackColor1;
		return L_2;
	}

IL_000b:
	{
		// hexStrColor = hexStrColor.
		//     Replace("#", "").
		//     Replace("0x", "").
		//     Replace("$", "");
		String_t* L_3 = ___hexStrColor0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_3, _stringLiteral0B0FEB3147CE20EB2C90076367F895C59BCD14B3, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		NullCheck(L_4);
		String_t* L_5;
		L_5 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_4, _stringLiteral5A65C5353FCF9B2392130B62992E8D50E5552C89, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		NullCheck(L_5);
		String_t* L_6;
		L_6 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_5, _stringLiteral9E6DEA6E609FD74FD29A7E5BB6D900CCBA5F3FBF, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		___hexStrColor0 = L_6;
		// if (hexStrColor.Length < 0) {
		String_t* L_7 = ___hexStrColor0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		if ((((int32_t)L_8) >= ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		// return fallbackColor;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = ___fallbackColor1;
		return L_9;
	}

IL_0046:
	{
		// return new Color32(
		//     (hexStrColor.Length > 1) ? byte.Parse(hexStrColor.Substring(0, 2), System.Globalization.NumberStyles.HexNumber) : (byte)0x00,
		//     (hexStrColor.Length > 3) ? byte.Parse(hexStrColor.Substring(2, 2), System.Globalization.NumberStyles.HexNumber) : (byte)0x00,
		//     (hexStrColor.Length > 5) ? byte.Parse(hexStrColor.Substring(4, 2), System.Globalization.NumberStyles.HexNumber) : (byte)0x00,
		//     (hexStrColor.Length > 7) ? byte.Parse(hexStrColor.Substring(6, 2), System.Globalization.NumberStyles.HexNumber) : (byte)0xFF
		// );
		String_t* L_10 = ___hexStrColor0;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_10, NULL);
		if ((((int32_t)L_11) > ((int32_t)1)))
		{
			goto IL_0052;
		}
	}
	{
		G_B7_0 = 0;
		goto IL_0064;
	}

IL_0052:
	{
		String_t* L_12 = ___hexStrColor0;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_12, 0, 2, NULL);
		uint8_t L_14;
		L_14 = Byte_Parse_m1D565A1D1F7DF553B5F6CF87AC883B9BE0A6A2D3(L_13, ((int32_t)515), NULL);
		G_B7_0 = ((int32_t)(L_14));
	}

IL_0064:
	{
		String_t* L_15 = ___hexStrColor0;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_15, NULL);
		G_B8_0 = G_B7_0;
		if ((((int32_t)L_16) > ((int32_t)3)))
		{
			G_B9_0 = G_B7_0;
			goto IL_0070;
		}
	}
	{
		G_B10_0 = 0;
		G_B10_1 = G_B8_0;
		goto IL_0082;
	}

IL_0070:
	{
		String_t* L_17 = ___hexStrColor0;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_17, 2, 2, NULL);
		uint8_t L_19;
		L_19 = Byte_Parse_m1D565A1D1F7DF553B5F6CF87AC883B9BE0A6A2D3(L_18, ((int32_t)515), NULL);
		G_B10_0 = ((int32_t)(L_19));
		G_B10_1 = G_B9_0;
	}

IL_0082:
	{
		String_t* L_20 = ___hexStrColor0;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_20, NULL);
		G_B11_0 = G_B10_0;
		G_B11_1 = G_B10_1;
		if ((((int32_t)L_21) > ((int32_t)5)))
		{
			G_B12_0 = G_B10_0;
			G_B12_1 = G_B10_1;
			goto IL_008e;
		}
	}
	{
		G_B13_0 = 0;
		G_B13_1 = G_B11_0;
		G_B13_2 = G_B11_1;
		goto IL_00a0;
	}

IL_008e:
	{
		String_t* L_22 = ___hexStrColor0;
		NullCheck(L_22);
		String_t* L_23;
		L_23 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_22, 4, 2, NULL);
		uint8_t L_24;
		L_24 = Byte_Parse_m1D565A1D1F7DF553B5F6CF87AC883B9BE0A6A2D3(L_23, ((int32_t)515), NULL);
		G_B13_0 = ((int32_t)(L_24));
		G_B13_1 = G_B12_0;
		G_B13_2 = G_B12_1;
	}

IL_00a0:
	{
		String_t* L_25 = ___hexStrColor0;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_25, NULL);
		G_B14_0 = G_B13_0;
		G_B14_1 = G_B13_1;
		G_B14_2 = G_B13_2;
		if ((((int32_t)L_26) > ((int32_t)7)))
		{
			G_B15_0 = G_B13_0;
			G_B15_1 = G_B13_1;
			G_B15_2 = G_B13_2;
			goto IL_00b0;
		}
	}
	{
		G_B16_0 = ((int32_t)255);
		G_B16_1 = G_B14_0;
		G_B16_2 = G_B14_1;
		G_B16_3 = G_B14_2;
		goto IL_00c2;
	}

IL_00b0:
	{
		String_t* L_27 = ___hexStrColor0;
		NullCheck(L_27);
		String_t* L_28;
		L_28 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_27, 6, 2, NULL);
		uint8_t L_29;
		L_29 = Byte_Parse_m1D565A1D1F7DF553B5F6CF87AC883B9BE0A6A2D3(L_28, ((int32_t)515), NULL);
		G_B16_0 = ((int32_t)(L_29));
		G_B16_1 = G_B15_0;
		G_B16_2 = G_B15_1;
		G_B16_3 = G_B15_2;
	}

IL_00c2:
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_30;
		memset((&L_30), 0, sizeof(L_30));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_30), (uint8_t)G_B16_3, (uint8_t)G_B16_2, (uint8_t)G_B16_1, (uint8_t)G_B16_0, /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_31;
		L_31 = Color32_op_Implicit_m203A634DBB77053C9400C68065CA29529103D172_inline(L_30, NULL);
		return L_31;
	}
}
// System.String OmniSARTechnologies.Helper.ColorHelper::ColorText(System.String,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ColorHelper_ColorText_mEFE2B99E89F6245B0D997D7AF7068022B25951E2 (String_t* ___text0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E27E42993FA8B5B3DE893DAD1F70F3DFC0BCA2B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCBE844AF922BC0AC1AB4CA94466DC7FD7038D0E2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return "<color=#" + ColorUtility.ToHtmlStringRGB(color) + ">" + text + "</color>";
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral9E27E42993FA8B5B3DE893DAD1F70F3DFC0BCA2B);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral9E27E42993FA8B5B3DE893DAD1F70F3DFC0BCA2B);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = ___color1;
		String_t* L_4;
		L_4 = ColorUtility_ToHtmlStringRGB_m0BF395744067B28A8C48609D4BA97F8920CBB346(L_3, NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_4);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_2;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		String_t* L_7 = ___text0;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_6;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteralCBE844AF922BC0AC1AB4CA94466DC7FD7038D0E2);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralCBE844AF922BC0AC1AB4CA94466DC7FD7038D0E2);
		String_t* L_9;
		L_9 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_8, NULL);
		return L_9;
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
// System.Void OmniSARTechnologies.Helper.DisplayNameAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisplayNameAttribute__ctor_m3854EDD6A2D3EAB47D831ADEB52F1D190059BAC1 (DisplayNameAttribute_t883731B156E25A7E377EA4EA9FA529A06482B4B9* __this, String_t* ___displayName0, const RuntimeMethod* method) 
{
	{
		// public DisplayNameAttribute(string displayName) {
		PropertyAttribute__ctor_m19247686E165101F140615C7306DC2DA3953D97D(__this, NULL);
		// this.displayName = displayName;
		String_t* L_0 = ___displayName0;
		__this->___displayName_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___displayName_0), (void*)L_0);
		// }
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
// System.Void OmniSARTechnologies.Helper.WhatsThisAttribute::.ctor(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhatsThisAttribute__ctor_m886E916A6EAA6D878031DE28ED129D868FFF18CD (WhatsThisAttribute_tD9C1FBDC446A37988EC07D87BD79CE99FD3500F1* __this, String_t* ___message0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___unused1, const RuntimeMethod* method) 
{
	{
		// public WhatsThisAttribute(string message, params object[] unused) {
		PropertyAttribute__ctor_m19247686E165101F140615C7306DC2DA3953D97D(__this, NULL);
		// this.message = message;
		String_t* L_0 = ___message0;
		__this->___message_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___message_0), (void*)L_0);
		// }
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
// System.Void OmniSARTechnologies.Helper.DocsAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DocsAttribute__ctor_m0DF789085675EA4BF4E5F4DD6DD27AF0020E233D (DocsAttribute_t74EDF00BFDF7AA7044A6F3A5920EF844EB48BB0E* __this, String_t* ___text0, const RuntimeMethod* method) 
{
	{
		// public DocsAttribute(string text = default(string)) {
		PropertyAttribute__ctor_m19247686E165101F140615C7306DC2DA3953D97D(__this, NULL);
		// this.text = text;
		String_t* L_0 = ___text0;
		__this->___text_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___text_0), (void*)L_0);
		// }
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
// System.Void OmniSARTechnologies.Helper.TransformRotate::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformRotate_Update_m441742F7C8A025A86A82B5C02327AEB9E49A3E98 (TransformRotate_t6CCB381D315072B495139E015F8A31085207F5A8* __this, const RuntimeMethod* method) 
{
	{
		// transform.RotateAround(transform.position, Vector3.right,   eulerAnglesSpeed.x * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_right_m13B7C3EAA64DC921EC23346C56A5A597B5481FF5_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_4 = (&__this->___eulerAnglesSpeed_4);
		float L_5 = L_4->___x_2;
		float L_6;
		L_6 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		NullCheck(L_0);
		Transform_RotateAround_m489C5BE8B8B15D0A5F4863DE6D23FF2CC8FA76C6(L_0, L_2, L_3, ((float)il2cpp_codegen_multiply(L_5, L_6)), NULL);
		// transform.RotateAround(transform.position, Vector3.up,      eulerAnglesSpeed.y * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_11 = (&__this->___eulerAnglesSpeed_4);
		float L_12 = L_11->___y_3;
		float L_13;
		L_13 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		NullCheck(L_7);
		Transform_RotateAround_m489C5BE8B8B15D0A5F4863DE6D23FF2CC8FA76C6(L_7, L_9, L_10, ((float)il2cpp_codegen_multiply(L_12, L_13)), NULL);
		// transform.RotateAround(transform.position, Vector3.forward, eulerAnglesSpeed.z * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_15, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_18 = (&__this->___eulerAnglesSpeed_4);
		float L_19 = L_18->___z_4;
		float L_20;
		L_20 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		NullCheck(L_14);
		Transform_RotateAround_m489C5BE8B8B15D0A5F4863DE6D23FF2CC8FA76C6(L_14, L_16, L_17, ((float)il2cpp_codegen_multiply(L_19, L_20)), NULL);
		// }
		return;
	}
}
// System.Void OmniSARTechnologies.Helper.TransformRotate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformRotate__ctor_m80D77A48C95EA036070C4C8F4B2EFDF4871B82B2 (TransformRotate_t6CCB381D315072B495139E015F8A31085207F5A8* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))))));
		V_3 = ((float)L_18);
		goto IL_0040;
	}

IL_0040:
	{
		float L_19 = V_3;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___value0;
		float L_1 = ___min1;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___value0;
		float L_5 = ___max2;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		float L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* XRBaseInteractable_get_selectEntered_m1E5439CAE1D95FDB7D60F14D919E739435F2C341_inline (XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* __this, const RuntimeMethod* method) 
{
	{
		// get => m_SelectEntered;
		SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* L_0 = __this->___m_SelectEntered_18;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* XRBaseInteractable_get_selectExited_m35974CB2AD2FB38B4B093DC75D2917A1D321AFA6_inline (XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* __this, const RuntimeMethod* method) 
{
	{
		// get => m_SelectExited;
		SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* L_0 = __this->___m_SelectExited_19;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* XRBaseInteractor_get_attachTransform_m704C74165ED1463CF8B79670066472AE4BD33482_inline (XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* __this, const RuntimeMethod* method) 
{
	{
		// get => m_AttachTransform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___m_AttachTransform_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___lhs0;
		float L_1 = L_0.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___lhs0;
		float L_5 = L_4.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___rhs1;
		float L_7 = L_6.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___lhs0;
		float L_9 = L_8.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___rhs1;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___lhs0;
		float L_13 = L_12.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___rhs1;
		float L_15 = L_14.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = ___lhs0;
		float L_17 = L_16.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = ___rhs1;
		float L_19 = L_18.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20 = ___lhs0;
		float L_21 = L_20.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = ___rhs1;
		float L_23 = L_22.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = ___lhs0;
		float L_25 = L_24.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = ___rhs1;
		float L_27 = L_26.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28 = ___lhs0;
		float L_29 = L_28.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = ___rhs1;
		float L_31 = L_30.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32 = ___lhs0;
		float L_33 = L_32.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34 = ___rhs1;
		float L_35 = L_34.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36 = ___lhs0;
		float L_37 = L_36.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38 = ___rhs1;
		float L_39 = L_38.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40 = ___lhs0;
		float L_41 = L_40.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42 = ___rhs1;
		float L_43 = L_42.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_44 = ___lhs0;
		float L_45 = L_44.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_46 = ___rhs1;
		float L_47 = L_46.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48 = ___lhs0;
		float L_49 = L_48.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_50 = ___rhs1;
		float L_51 = L_50.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_52 = ___lhs0;
		float L_53 = L_52.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_54 = ___rhs1;
		float L_55 = L_54.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_56 = ___lhs0;
		float L_57 = L_56.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_58 = ___rhs1;
		float L_59 = L_58.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_60 = ___lhs0;
		float L_61 = L_60.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_62 = ___rhs1;
		float L_63 = L_62.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_64;
		memset((&L_64), 0, sizeof(L_64));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_64), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), ((float)il2cpp_codegen_multiply(L_25, L_27)))), ((float)il2cpp_codegen_multiply(L_29, L_31)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_33, L_35)), ((float)il2cpp_codegen_multiply(L_37, L_39)))), ((float)il2cpp_codegen_multiply(L_41, L_43)))), ((float)il2cpp_codegen_multiply(L_45, L_47)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_49, L_51)), ((float)il2cpp_codegen_multiply(L_53, L_55)))), ((float)il2cpp_codegen_multiply(L_57, L_59)))), ((float)il2cpp_codegen_multiply(L_61, L_63)))), /*hidden argument*/NULL);
		V_0 = L_64;
		goto IL_00e5;
	}

IL_00e5:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_65 = V_0;
		return L_65;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))))));
		V_0 = ((float)L_6);
		goto IL_0034;
	}

IL_0034:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m66E346161C9778DF8486DB4FE823D8F81A54AF1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___euler0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_0, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion_ToAngleAxis_mA2A5A81DAE94A9C1AFC34112BE8E5C5C3E9297AF_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float* ___angle0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___axis1, const RuntimeMethod* method) 
{
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = (*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_1 = ___axis1;
		float* L_2 = ___angle0;
		Quaternion_Internal_ToAxisAngleRad_m15D0A132154BC073228AE48956EE43AD45ADF5F1(L_0, L_1, L_2, NULL);
		float* L_3 = ___angle0;
		float* L_4 = ___angle0;
		float L_5 = *((float*)L_4);
		*((float*)L_3) = (float)((float)il2cpp_codegen_multiply(L_5, (57.2957802f)));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline (float ___d0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a1;
		float L_1 = L_0.___x_2;
		float L_2 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a1;
		float L_4 = L_3.___y_3;
		float L_5 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a1;
		float L_7 = L_6.___z_4;
		float L_8 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ActionBasedController_get_selectAction_mB7F0F7A3FDA18D5753FFC539AB4D9A9451C78C3C_inline (ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68* __this, const RuntimeMethod* method) 
{
	{
		// get => m_SelectAction;
		InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD L_0 = __this->___m_SelectAction_27;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m6A7FB1C9E9DE194708997BFA24C6E238D92D908E_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___rhs1;
		bool L_2;
		L_2 = Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093* XRBaseInteractable_get_onSelectEntered_m3AF1E23061186454C8CD5233921F4FC6C3780A37_inline (XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* __this, const RuntimeMethod* method) 
{
	{
		// get => m_OnSelectEntered;
		XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093* L_0 = __this->___m_OnSelectEntered_34;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093* XRBaseInteractable_get_onSelectExited_m8024BC6BA704E0465A0DA3BAE263C18CEB74F142_inline (XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* __this, const RuntimeMethod* method) 
{
	{
		// get => m_OnSelectExited;
		XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093* L_0 = __this->___m_OnSelectExited_35;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_mA48718D9A20D8972EDD41714CEF6BBF864F442EA_inline (int32_t ___value0, int32_t ___min1, int32_t ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___value0;
		int32_t L_1 = ___min1;
		V_0 = (bool)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		int32_t L_4 = ___value0;
		int32_t L_5 = ___max2;
		V_1 = (bool)((((int32_t)L_4) > ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		int32_t L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		int32_t L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* __this, uint8_t ___r0, uint8_t ___g1, uint8_t ___b2, uint8_t ___a3, const RuntimeMethod* method) 
{
	{
		__this->___rgba_0 = 0;
		uint8_t L_0 = ___r0;
		__this->___r_1 = L_0;
		uint8_t L_1 = ___g1;
		__this->___g_2 = L_1;
		uint8_t L_2 = ___b2;
		__this->___b_3 = L_2;
		uint8_t L_3 = ___a3;
		__this->___a_4 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color32_op_Implicit_m203A634DBB77053C9400C68065CA29529103D172_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___c0, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_0 = ___c0;
		uint8_t L_1 = L_0.___r_1;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_2 = ___c0;
		uint8_t L_3 = L_2.___g_2;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_4 = ___c0;
		uint8_t L_5 = L_4.___b_3;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_6 = ___c0;
		uint8_t L_7 = L_6.___a_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8;
		memset((&L_8), 0, sizeof(L_8));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_8), ((float)(((float)L_1)/(255.0f))), ((float)(((float)L_3)/(255.0f))), ((float)(((float)L_5)/(255.0f))), ((float)(((float)L_7)/(255.0f))), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_003d;
	}

IL_003d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_m13B7C3EAA64DC921EC23346C56A5A597B5481FF5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___rightVector_10;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___forwardVector_11;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		float L_2 = ___z2;
		__this->___z_2 = L_2;
		float L_3 = ___w3;
		__this->___w_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		float L_1;
		L_1 = Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___value0;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		V_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))));
		float L_18 = V_3;
		V_4 = (bool)((((float)L_18) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_0043;
	}

IL_0043:
	{
		bool L_19 = V_4;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___vector0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___vector0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___vector0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___vector0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
