void __fastcall BattleButtonComponent___ctor(BattleButtonComponent_o *this, const MethodInfo *method)
{
  UIButton___ctor((UIButton_o *)this, 0LL);
}


bool __fastcall BattleButtonComponent__get_isHide(BattleButtonComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  Il2CppObject *Component_object; // x19
  _BOOL8 v8; // x0
  __int64 v9; // x1

  if ( (byte_4B1906E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_Collider___, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B1906E = 1;
  }
  if ( !UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0LL) )
    return 0;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  v8 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)Component_object, 0LL);
  if ( !v8 )
    return 0;
  if ( !Component_object )
    sub_1BCAA3C(v8, v9);
  return UnityEngine_Collider__get_enabled((UnityEngine_Collider_o *)Component_object, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleButtonComponent__set_isHide(BattleButtonComponent_o *this, bool value, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  Il2CppObject *Component_object; // x21
  _BOOL8 v9; // x0
  __int64 v10; // x1

  if ( (byte_4B1906F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_Collider___, value, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    byte_4B1906F = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( v9 )
  {
    if ( !Component_object )
      sub_1BCAA3C(v9, v10);
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, value, 0LL);
  }
  else
  {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, value, 0LL);
  }
}