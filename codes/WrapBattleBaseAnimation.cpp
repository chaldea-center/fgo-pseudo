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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  _BOOL8 v20; // x0
  __int64 v21; // x1
  UISprite_o *v22; // x20
  _QWORD *v23; // x8
  __int64 v24; // x19
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  UISprite_o *v32; // [xsp+0h] [xbp-20h] BYREF
  UISprite_o *component; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E73B8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_TryGetComponent_Animation___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_TryGetComponent_SimpleAnimation___, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&WrapBattleAnimation_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&WrapBattleBaseAnimation_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&WrapBattleSimpleAnimation_TypeInfo, v17, v18, v19);
    byte_42E73B8 = 1;
  }
  v32 = 0LL;
  component = 0LL;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v20 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)obj, 0LL, 0LL);
  if ( !v20 )
    goto LABEL_13;
  if ( !obj )
    sub_B5D69C(v20, v21);
  if ( !UnityEngine_GameObject__TryGetComponent_UISprite_(
          obj,
          &component,
          (const MethodInfo_1CC4B3C *)Method_UnityEngine_GameObject_TryGetComponent_SimpleAnimation___) )
  {
    if ( UnityEngine_GameObject__TryGetComponent_UISprite_(
           obj,
           &v32,
           (const MethodInfo_1CC4B3C *)Method_UnityEngine_GameObject_TryGetComponent_Animation___) )
    {
      v22 = v32;
      v23 = &WrapBattleAnimation_TypeInfo;
      goto LABEL_12;
    }
LABEL_13:
    v24 = sub_B5D694(WrapBattleBaseAnimation_TypeInfo);
    System_Object___ctor((Il2CppObject *)v24, 0LL);
    return (WrapBattleBaseAnimation_o *)v24;
  }
  v22 = component;
  v23 = &WrapBattleSimpleAnimation_TypeInfo;
LABEL_12:
  v24 = sub_B5D694(*v23);
  System_Object___ctor((Il2CppObject *)v24, 0LL);
  *(_QWORD *)(v24 + 16) = v22;
  sub_B5D560((BattleServantConfConponent_o *)(v24 + 16), (System_Int32_array **)v22, v25, v26, v27, v28, v29, v30);
  return (WrapBattleBaseAnimation_o *)v24;
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
  sub_B5D560(v6);
  *(float *)&v6->monitor = time;
}