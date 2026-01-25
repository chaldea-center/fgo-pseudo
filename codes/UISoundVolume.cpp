void UISoundVolume___ctor(UISoundVolume_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UISoundVolume__Awake(UISoundVolume_o *this, const MethodInfo *method)
{
  UIProgressBar_o *Component_object; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  float soundVolume; // s0
  System_Collections_Generic_List_EventDelegate__o *onChange; // x20
  EventDelegate_Callback_o *v8; // x21
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x2

  if ( (byte_4CF2D54 & 1) == 0 )
  {
    sub_1C7BAE8(&EventDelegate_Callback_TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponent_UISlider___);
    sub_1C7BAE8(&EventDelegate_TypeInfo);
    sub_1C7BAE8(&NGUITools_TypeInfo);
    sub_1C7BAE8(&Method_UISoundVolume_OnChange__);
    byte_4CF2D54 = 1;
  }
  Component_object = (UIProgressBar_o *)UnityEngine_Component__GetComponent_object_(
                                          (UnityEngine_Component_o *)this,
                                          (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_UISlider___);
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  soundVolume = NGUITools__get_soundVolume(0);
  if ( !Component_object )
    sub_1C7BD40(v4, v5);
  UIProgressBar__set_value(Component_object, soundVolume, 0);
  onChange = Component_object->fields.onChange;
  v8 = (EventDelegate_Callback_o *)sub_1C7BD34(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v8, (Il2CppObject *)this, Method_UISoundVolume_OnChange__, v9);
  if ( !EventDelegate_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  EventDelegate__Add(onChange, v8, v10);
}


void UISoundVolume__OnChange(UISoundVolume_o *this, const MethodInfo *method)
{
  UIProgressBar_o *current; // x0
  float value; // s8

  if ( (byte_4CF2D55 & 1) == 0 )
  {
    sub_1C7BAE8(&NGUITools_TypeInfo);
    sub_1C7BAE8(&UIProgressBar_TypeInfo);
    byte_4CF2D55 = 1;
  }
  current = UIProgressBar_TypeInfo->static_fields->current;
  if ( !current )
    sub_1C7BD40(0, method);
  value = UIProgressBar__get_value(current, 0);
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__set_soundVolume(value, 0);
}