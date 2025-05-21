void __fastcall WrapBattleBaseAnimation___ctor(WrapBattleBaseAnimation_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


WrapBattleBaseAnimation_SimpleData_o *__fastcall WrapBattleBaseAnimation__GetPlayingSimpleAnimData(
        WrapBattleBaseAnimation_o *this,
        const MethodInfo *method)
{
  return 0LL;
}


WrapBattleBaseAnimation_o *__fastcall WrapBattleBaseAnimation__MakeWrapAnimation(
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  _BOOL8 v8; // x0
  __int64 v9; // x1
  Il2CppObject *v10; // x20
  _QWORD *v11; // x8
  __int64 v12; // x19
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  Il2CppObject *v16; // [xsp+0h] [xbp-30h] BYREF
  Il2CppObject *component; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B48032 & 1) == 0 )
  {
    sub_1BDB878(&Method_UnityEngine_GameObject_TryGetComponent_Animation___, method);
    sub_1BDB878(&Method_UnityEngine_GameObject_TryGetComponent_SimpleAnimation___, v3);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v4);
    sub_1BDB878(&WrapBattleAnimation_TypeInfo, v5);
    sub_1BDB878(&WrapBattleBaseAnimation_TypeInfo, v6);
    sub_1BDB878(&WrapBattleSimpleAnimation_TypeInfo, v7);
    byte_4B48032 = 1;
  }
  v16 = 0LL;
  component = 0LL;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)obj, 0LL, 0LL);
  if ( !v8 )
    goto LABEL_12;
  if ( !obj )
    sub_1BDBAD4(v8, v9);
  if ( !UnityEngine_GameObject__TryGetComponent_object_(
          obj,
          &component,
          (const MethodInfo_30897B0 *)Method_UnityEngine_GameObject_TryGetComponent_SimpleAnimation___) )
  {
    if ( UnityEngine_GameObject__TryGetComponent_object_(
           obj,
           &v16,
           (const MethodInfo_30897B0 *)Method_UnityEngine_GameObject_TryGetComponent_Animation___) )
    {
      v10 = v16;
      v11 = &WrapBattleAnimation_TypeInfo;
      goto LABEL_11;
    }
LABEL_12:
    v12 = sub_1BDBAC4(WrapBattleBaseAnimation_TypeInfo);
    System_Object___ctor((Il2CppObject *)v12, 0LL);
    return (WrapBattleBaseAnimation_o *)v12;
  }
  v10 = component;
  v11 = &WrapBattleSimpleAnimation_TypeInfo;
LABEL_11:
  v12 = sub_1BDBAC4(*v11);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  *(_QWORD *)(v12 + 16) = v10;
  sub_1BDB81C((CGThumbnailListItem_o *)(v12 + 16), (int32_t)v10, v13, v14);
  return (WrapBattleBaseAnimation_o *)v12;
}


void __fastcall WrapBattleBaseAnimation__PlayAnimation(
        WrapBattleBaseAnimation_o *this,
        System_String_o *animName,
        float timeline,
        const MethodInfo *method)
{
  ;
}


void __fastcall WrapBattleBaseAnimation_SimpleData___ctor(
        WrapBattleBaseAnimation_SimpleData_o *this,
        System_String_o *name,
        float time,
        const MethodInfo *method)
{
  WrapBattleBaseAnimation_SimpleData_o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  v6 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v6->fields.animName = name;
  v6 = (WrapBattleBaseAnimation_SimpleData_o *)((char *)v6 + 16);
  sub_1BDB81C((CGThumbnailListItem_o *)v6, (int32_t)name, v7, v8);
  *(float *)&v6->monitor = time;
}