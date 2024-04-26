void __fastcall BattleButtonComponent___ctor(BattleButtonComponent_o *this, const MethodInfo *method)
{
  UIButton___ctor((UIButton_o *)this, 0LL);
}


bool __fastcall BattleButtonComponent__get_isHide(BattleButtonComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *Component_WebViewObject; // x19
  _BOOL8 v4; // x0
  __int64 v5; // x1

  if ( (byte_43554B5 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_43554B5 = 1;
  }
  if ( !UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0LL) )
    return 0;
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = UnityEngine_Object__op_Implicit(Component_WebViewObject, 0LL);
  if ( !v4 )
    return 0;
  if ( !Component_WebViewObject )
    sub_B7076C(v4, v5);
  return UnityEngine_Collider__get_enabled((UnityEngine_Collider_o *)Component_WebViewObject, 0LL);
}


void __fastcall BattleButtonComponent__set_isHide(BattleButtonComponent_o *this, bool value, const MethodInfo *method)
{
  UnityEngine_Object_o *Component_WebViewObject; // x21
  _BOOL8 v6; // x0
  __int64 v7; // x1

  if ( (byte_43554B6 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_43554B6 = 1;
  }
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL);
  if ( v6 )
  {
    if ( !Component_WebViewObject )
      sub_B7076C(v6, v7);
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_WebViewObject, value, 0LL);
  }
  else
  {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, value, 0LL);
  }
}