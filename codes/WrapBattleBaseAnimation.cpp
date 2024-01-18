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
  UISprite_o *v10; // x20
  _QWORD *v11; // x8
  __int64 v12; // x19
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  UISprite_o *v20; // [xsp+0h] [xbp-20h] BYREF
  UISprite_o *component; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4187432 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_TryGetComponent_Animation___, method);
    sub_B2C35C(&Method_UnityEngine_GameObject_TryGetComponent_SimpleAnimation___, v3);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    sub_B2C35C(&WrapBattleAnimation_TypeInfo, v5);
    sub_B2C35C(&WrapBattleBaseAnimation_TypeInfo, v6);
    sub_B2C35C(&WrapBattleSimpleAnimation_TypeInfo, v7);
    byte_4187432 = 1;
  }
  v20 = 0LL;
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
    sub_B2C434(v8, v9);
  if ( !UnityEngine_GameObject__TryGetComponent_UISprite_(
          obj,
          &component,
          (const MethodInfo_1AA807C *)Method_UnityEngine_GameObject_TryGetComponent_SimpleAnimation___) )
  {
    if ( UnityEngine_GameObject__TryGetComponent_UISprite_(
           obj,
           &v20,
           (const MethodInfo_1AA807C *)Method_UnityEngine_GameObject_TryGetComponent_Animation___) )
    {
      v10 = v20;
      v11 = &WrapBattleAnimation_TypeInfo;
      goto LABEL_12;
    }
LABEL_13:
    v12 = sub_B2C42C(WrapBattleBaseAnimation_TypeInfo);
    System_Object___ctor((Il2CppObject *)v12, 0LL);
    return (WrapBattleBaseAnimation_o *)v12;
  }
  v10 = component;
  v11 = &WrapBattleSimpleAnimation_TypeInfo;
LABEL_12:
  v12 = sub_B2C42C(*v11);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  *(_QWORD *)(v12 + 16) = v10;
  sub_B2C2F8((BattleServantConfConponent_o *)(v12 + 16), (System_Int32_array **)v10, v13, v14, v15, v16, v17, v18);
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

  v6 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v6->fields.animName = name;
  v6 = (WrapBattleBaseAnimation_SimpleData_o *)((char *)v6 + 16);
  sub_B2C2F8(v6, name);
  *(float *)&v6->monitor = time;
}