void __fastcall BattleButtonComponent___ctor(BattleButtonComponent_o *this, const MethodInfo *method)
{
  UIButton___ctor((UIButton_o *)this, 0LL);
}


bool __fastcall BattleButtonComponent__get_isHide(BattleButtonComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *Component_WebViewObject; // x19

  if ( (byte_40FD45A & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_Collider___, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40FD45A = 1;
  }
  if ( !UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0LL) )
    return 0;
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Implicit(Component_WebViewObject, 0LL) )
    return 0;
  if ( !Component_WebViewObject )
    sub_B170D4();
  return UnityEngine_Collider__get_enabled((UnityEngine_Collider_o *)Component_WebViewObject, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleButtonComponent__set_isHide(BattleButtonComponent_o *this, bool value, const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Collider_o *Component_WebViewObject; // x21

  if ( (byte_40FD45B & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_Collider___, value);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40FD45B = 1;
  }
  Component_WebViewObject = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                        (UnityEngine_Component_o *)this,
                                                        (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_WebViewObject, 0LL, 0LL) )
  {
    if ( !Component_WebViewObject )
      sub_B170D4();
    UnityEngine_Collider__set_enabled(Component_WebViewObject, value, 0LL);
  }
  else
  {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, value, 0LL);
  }
}