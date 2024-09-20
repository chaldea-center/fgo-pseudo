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
  Il2CppObject *v5; // x20
  _QWORD *v6; // x8
  __int64 v7; // x19
  int32_t v8; // w2
  int32_t v9; // w3
  Il2CppObject *v11; // [xsp+0h] [xbp-30h] BYREF
  Il2CppObject *component; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5E270 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_TryGetComponent_Animation___);
    sub_1B885B0(&Method_UnityEngine_GameObject_TryGetComponent_SimpleAnimation___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&WrapBattleAnimation_TypeInfo);
    sub_1B885B0(&WrapBattleBaseAnimation_TypeInfo);
    sub_1B885B0(&WrapBattleSimpleAnimation_TypeInfo);
    byte_4A5E270 = 1;
  }
  v11 = 0LL;
  component = 0LL;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v3 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)obj, 0LL, 0LL);
  if ( !v3 )
    goto LABEL_12;
  if ( !obj )
    sub_1B8880C(v3, v4);
  if ( !UnityEngine_GameObject__TryGetComponent_object_(
          obj,
          &component,
          (const MethodInfo_2ED0148 *)Method_UnityEngine_GameObject_TryGetComponent_SimpleAnimation___) )
  {
    if ( UnityEngine_GameObject__TryGetComponent_object_(
           obj,
           &v11,
           (const MethodInfo_2ED0148 *)Method_UnityEngine_GameObject_TryGetComponent_Animation___) )
    {
      v5 = v11;
      v6 = &WrapBattleAnimation_TypeInfo;
      goto LABEL_11;
    }
LABEL_12:
    v7 = sub_1B887FC(WrapBattleBaseAnimation_TypeInfo);
    System_Object___ctor((Il2CppObject *)v7, 0LL);
    return (WrapBattleBaseAnimation_o *)v7;
  }
  v5 = component;
  v6 = &WrapBattleSimpleAnimation_TypeInfo;
LABEL_11:
  v7 = sub_1B887FC(*v6);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_QWORD *)(v7 + 16) = v5;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)v5, v8, v9);
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
  int32_t v7; // w2
  int32_t v8; // w3

  v6 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v6->fields.animName = name;
  v6 = (WrapBattleBaseAnimation_SimpleData_o *)((char *)v6 + 16);
  sub_1B88554((ServantStatusBattleListViewItem_o *)v6, (int32_t)name, v7, v8);
  *(float *)&v6->monitor = time;
}