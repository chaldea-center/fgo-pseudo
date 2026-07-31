void WrapBattleBaseAnimation___ctor(WrapBattleBaseAnimation_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


WrapBattleBaseAnimation_SimpleData_o *WrapBattleBaseAnimation__GetPlayingSimpleAnimData(
        WrapBattleBaseAnimation_o *this,
        const MethodInfo *method)
{
  return 0;
}


WrapBattleBaseAnimation_o *WrapBattleBaseAnimation__MakeWrapAnimation(
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  _BOOL8 v3; // x0
  __int64 v4; // x1
  _QWORD *v5; // x8
  Il2CppObject *v6; // x20
  __int64 v7; // x19
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  Il2CppObject *v15; // [xsp+0h] [xbp-30h] BYREF
  Il2CppObject *component; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_593C1B5 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_TryGetComponent_Animation___);
    sub_21FFC50(&Method_UnityEngine_GameObject_TryGetComponent_SimpleAnimation___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&WrapBattleAnimation_TypeInfo);
    sub_21FFC50(&WrapBattleBaseAnimation_TypeInfo);
    sub_21FFC50(&WrapBattleSimpleAnimation_TypeInfo);
    byte_593C1B5 = 1;
  }
  v15 = 0;
  component = 0;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v3 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)obj, 0, 0);
  if ( !v3 )
    goto LABEL_12;
  if ( !obj )
    sub_21FFECC(v3, v4);
  if ( !UnityEngine_GameObject__TryGetComponent_object_(
          obj,
          &component,
          (const MethodInfo_3884A68 *)Method_UnityEngine_GameObject_TryGetComponent_SimpleAnimation___) )
  {
    if ( UnityEngine_GameObject__TryGetComponent_object_(
           obj,
           &v15,
           (const MethodInfo_3884A68 *)Method_UnityEngine_GameObject_TryGetComponent_Animation___) )
    {
      v5 = &WrapBattleAnimation_TypeInfo;
      v6 = v15;
      goto LABEL_11;
    }
LABEL_12:
    v7 = sub_21FFEBC(WrapBattleBaseAnimation_TypeInfo);
    System_Object___ctor((Il2CppObject *)v7, 0);
    return (WrapBattleBaseAnimation_o *)v7;
  }
  v5 = &WrapBattleSimpleAnimation_TypeInfo;
  v6 = component;
LABEL_11:
  v7 = sub_21FFEBC(*v5);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *(_QWORD *)(v7 + 16) = v6;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)v6, v8, v9, v10, v11, v12, v13);
  return (WrapBattleBaseAnimation_o *)v7;
}


void WrapBattleBaseAnimation__PlayAnimation(
        WrapBattleBaseAnimation_o *this,
        System_String_o *animName,
        float timeline,
        const MethodInfo *method)
{
  ;
}


void WrapBattleBaseAnimation_SimpleData___ctor(
        WrapBattleBaseAnimation_SimpleData_o *this,
        System_String_o *name,
        float time,
        const MethodInfo *method)
{
  WrapBattleBaseAnimation_SimpleData_o *v6; // x20
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  v6 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v6->fields.animName = name;
  v6 = (WrapBattleBaseAnimation_SimpleData_o *)((char *)v6 + 16);
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v6, (int32_t)name, v7, v8, v9, v10, v11, v12);
  *(float *)&v6->monitor = time;
}