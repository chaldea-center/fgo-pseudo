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
  _BOOL8 v3; // x0
  __int64 v4; // x1
  UISprite_o *v5; // x20
  _QWORD *v6; // x8
  __int64 v7; // x19
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  UISprite_o *v15; // [xsp+0h] [xbp-20h] BYREF
  UISprite_o *component; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42AF99C & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_TryGetComponent_Animation___);
    sub_B52984(&Method_UnityEngine_GameObject_TryGetComponent_SimpleAnimation___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&WrapBattleAnimation_TypeInfo);
    sub_B52984(&WrapBattleBaseAnimation_TypeInfo);
    sub_B52984(&WrapBattleSimpleAnimation_TypeInfo);
    byte_42AF99C = 1;
  }
  v15 = 0LL;
  component = 0LL;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v3 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)obj, 0LL, 0LL);
  if ( !v3 )
    goto LABEL_13;
  if ( !obj )
    sub_B52A5C(v3, v4);
  if ( !UnityEngine_GameObject__TryGetComponent_UISprite_(
          obj,
          &component,
          (const MethodInfo_1B7B958 *)Method_UnityEngine_GameObject_TryGetComponent_SimpleAnimation___) )
  {
    if ( UnityEngine_GameObject__TryGetComponent_UISprite_(
           obj,
           &v15,
           (const MethodInfo_1B7B958 *)Method_UnityEngine_GameObject_TryGetComponent_Animation___) )
    {
      v5 = v15;
      v6 = &WrapBattleAnimation_TypeInfo;
      goto LABEL_12;
    }
LABEL_13:
    v7 = sub_B52A54(WrapBattleBaseAnimation_TypeInfo);
    System_Object___ctor((Il2CppObject *)v7, 0LL);
    return (WrapBattleBaseAnimation_o *)v7;
  }
  v5 = component;
  v6 = &WrapBattleSimpleAnimation_TypeInfo;
LABEL_12:
  v7 = sub_B52A54(*v6);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_QWORD *)(v7 + 16) = v5;
  sub_B52920((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)v5, v8, v9, v10, v11, v12, v13);
  return (WrapBattleBaseAnimation_o *)v7;
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
  sub_B52920(v6);
  *(float *)&v6->monitor = time;
}