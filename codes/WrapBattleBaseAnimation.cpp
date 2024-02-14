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
  __int64 v10; // x2
  UISprite_o *v11; // x20
  _QWORD *v12; // x8
  __int64 v13; // x19
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  UISprite_o *v21; // [xsp+0h] [xbp-20h] BYREF
  UISprite_o *component; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4213FB6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_TryGetComponent_Animation___, method);
    sub_B0D8A4(&Method_UnityEngine_GameObject_TryGetComponent_SimpleAnimation___, v3);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v4);
    sub_B0D8A4(&WrapBattleAnimation_TypeInfo, v5);
    sub_B0D8A4(&WrapBattleBaseAnimation_TypeInfo, v6);
    sub_B0D8A4(&WrapBattleSimpleAnimation_TypeInfo, v7);
    byte_4213FB6 = 1;
  }
  v21 = 0LL;
  component = 0LL;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v8 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)obj, 0LL, 0LL);
  if ( !v8 )
    goto LABEL_13;
  if ( !obj )
    sub_B0D97C(v8);
  if ( !UnityEngine_GameObject__TryGetComponent_UISprite_(
          obj,
          &component,
          (const MethodInfo_1B63348 *)Method_UnityEngine_GameObject_TryGetComponent_SimpleAnimation___) )
  {
    if ( UnityEngine_GameObject__TryGetComponent_UISprite_(
           obj,
           &v21,
           (const MethodInfo_1B63348 *)Method_UnityEngine_GameObject_TryGetComponent_Animation___) )
    {
      v11 = v21;
      v12 = &WrapBattleAnimation_TypeInfo;
      goto LABEL_12;
    }
LABEL_13:
    v13 = sub_B0D974(WrapBattleBaseAnimation_TypeInfo, v9, v10);
    System_Object___ctor((Il2CppObject *)v13, 0LL);
    return (WrapBattleBaseAnimation_o *)v13;
  }
  v11 = component;
  v12 = &WrapBattleSimpleAnimation_TypeInfo;
LABEL_12:
  v13 = sub_B0D974(*v12, v9, v10);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  *(_QWORD *)(v13 + 16) = v11;
  sub_B0D840((BattleServantConfConponent_o *)(v13 + 16), (System_Int32_array **)v11, v14, v15, v16, v17, v18, v19);
  return (WrapBattleBaseAnimation_o *)v13;
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

  v6 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v6->fields.animName = name;
  v6 = (WrapBattleBaseAnimation_SimpleData_o *)((char *)v6 + 16);
  sub_B0D840(v6, name);
  *(float *)&v6->monitor = time;
}