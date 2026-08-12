void UISoundVolume___ctor(UISoundVolume_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UISoundVolume__Awake(UISoundVolume_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UIProgressBar_o *Component_object; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  float soundVolume; // s0
  System_Collections_Generic_List_EventDelegate__o *onChange; // x20
  EventDelegate_Callback_o *v9; // x21
  const MethodInfo *v10; // x3
  __int64 v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_597507F & 1) == 0 )
  {
    sub_2213A60(&EventDelegate_Callback_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UISlider___);
    sub_2213A60(&EventDelegate_TypeInfo);
    sub_2213A60(&NGUITools_TypeInfo);
    sub_2213A60(&Method_UISoundVolume_OnChange__);
    byte_597507F = 1;
  }
  Component_object = (UIProgressBar_o *)UnityEngine_Component__GetComponent_object_(
                                          (UnityEngine_Component_o *)this,
                                          (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UISlider___);
  if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v3);
  soundVolume = NGUITools__get_soundVolume(0);
  if ( !Component_object )
    sub_2213CDC(v5, v6);
  UIProgressBar__set_value(Component_object, soundVolume, 0);
  onChange = Component_object->fields.onChange;
  v9 = (EventDelegate_Callback_o *)sub_2213CCC(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v9, (Il2CppObject *)this, Method_UISoundVolume_OnChange__, v10);
  if ( !*(&EventDelegate_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo, v11);
  EventDelegate__Add(onChange, v9, v12);
}


void UISoundVolume__OnChange(UISoundVolume_o *this, const MethodInfo *method)
{
  UIProgressBar_o *current; // x0
  __int64 v3; // x1
  float value; // s8

  if ( (byte_5975080 & 1) == 0 )
  {
    sub_2213A60(&NGUITools_TypeInfo);
    sub_2213A60(&UIProgressBar_TypeInfo);
    byte_5975080 = 1;
  }
  current = UIProgressBar_TypeInfo->static_fields->current;
  if ( !current )
    sub_2213CDC(0, method);
  value = UIProgressBar__get_value(current, 0);
  if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v3);
  NGUITools__set_soundVolume(value, 0);
}