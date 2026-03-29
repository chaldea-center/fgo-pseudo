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
  Il2CppObject *v5; // x20
  _QWORD *v6; // x8
  __int64 v7; // x19
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  Il2CppObject *v15; // [xsp+0h] [xbp-30h] BYREF
  Il2CppObject *component; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D342BC & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_TryGetComponent_Animation___);
    sub_1C93AD4(&Method_UnityEngine_GameObject_TryGetComponent_SimpleAnimation___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&WrapBattleAnimation_TypeInfo);
    sub_1C93AD4(&WrapBattleBaseAnimation_TypeInfo);
    sub_1C93AD4(&WrapBattleSimpleAnimation_TypeInfo);
    byte_4D342BC = 1;
  }
  v15 = 0;
  component = 0;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v3 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)obj, 0, 0);
  if ( !v3 )
    goto LABEL_12;
  if ( !obj )
    sub_1C93D2C(v3, v4);
  if ( !UnityEngine_GameObject__TryGetComponent_object_(
          obj,
          &component,
          (const MethodInfo_31FD314 *)Method_UnityEngine_GameObject_TryGetComponent_SimpleAnimation___) )
  {
    if ( UnityEngine_GameObject__TryGetComponent_object_(
           obj,
           &v15,
           (const MethodInfo_31FD314 *)Method_UnityEngine_GameObject_TryGetComponent_Animation___) )
    {
      v5 = v15;
      v6 = &WrapBattleAnimation_TypeInfo;
      goto LABEL_11;
    }
LABEL_12:
    v7 = sub_1C93D20(WrapBattleBaseAnimation_TypeInfo);
    System_Object___ctor((Il2CppObject *)v7, 0);
    return (WrapBattleBaseAnimation_o *)v7;
  }
  v5 = component;
  v6 = &WrapBattleSimpleAnimation_TypeInfo;
LABEL_11:
  v7 = sub_1C93D20(*v6);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *(_QWORD *)(v7 + 16) = v5;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)v5, v8, v9, v10, v11, v12, v13);
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
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  v6 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v6->fields.animName = name;
  v6 = (WrapBattleBaseAnimation_SimpleData_o *)((char *)v6 + 16);
  sub_1C93A78((GrandQuestFolderBoardItem_o *)v6, (int32_t)name, v7, v8, v9, v10, v11, v12);
  *(float *)&v6->monitor = time;
}