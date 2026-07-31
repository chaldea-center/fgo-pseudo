void BattleButtonComponent___ctor(BattleButtonComponent_o *this, const MethodInfo *method)
{
  UIButton___ctor((UIButton_o *)this, 0);
}


bool BattleButtonComponent__get_isHide(BattleButtonComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Component_object; // x19
  _BOOL8 v5; // x0
  __int64 v6; // x1

  if ( (byte_593BCD7 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593BCD7 = 1;
  }
  if ( !UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
    return 0;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
  v5 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)Component_object, 0);
  if ( !v5 )
    return 0;
  if ( !Component_object )
    sub_21FFECC(v5, v6);
  return UnityEngine_Collider__get_enabled((UnityEngine_Collider_o *)Component_object, 0);
}


void BattleButtonComponent__set_isHide(BattleButtonComponent_o *this, bool value, const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Component_object; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1

  if ( (byte_593BCD8 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593BCD8 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( v7 )
  {
    if ( !Component_object )
      sub_21FFECC(v7, v8);
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, value, 0);
  }
  else
  {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, value, 0);
  }
}