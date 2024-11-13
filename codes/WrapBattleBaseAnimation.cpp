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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  _BOOL8 v14; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  Il2CppObject *v18; // x20
  _QWORD *v19; // x8
  __int64 v20; // x19
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  Il2CppObject *v28; // [xsp+0h] [xbp-30h] BYREF
  Il2CppObject *component; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B19474 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_TryGetComponent_Animation___, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_TryGetComponent_SimpleAnimation___, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    sub_1BCA7E0(&WrapBattleAnimation_TypeInfo, v8, v9);
    sub_1BCA7E0(&WrapBattleBaseAnimation_TypeInfo, v10, v11);
    sub_1BCA7E0(&WrapBattleSimpleAnimation_TypeInfo, v12, v13);
    byte_4B19474 = 1;
  }
  v28 = 0LL;
  component = 0LL;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v14 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)obj, 0LL, 0LL);
  if ( !v14 )
    goto LABEL_12;
  if ( !obj )
    sub_1BCAA3C(v14, v15);
  if ( !UnityEngine_GameObject__TryGetComponent_object_(
          obj,
          &component,
          (const MethodInfo_2F63960 *)Method_UnityEngine_GameObject_TryGetComponent_SimpleAnimation___) )
  {
    if ( UnityEngine_GameObject__TryGetComponent_object_(
           obj,
           &v28,
           (const MethodInfo_2F63960 *)Method_UnityEngine_GameObject_TryGetComponent_Animation___) )
    {
      v18 = v28;
      v19 = &WrapBattleAnimation_TypeInfo;
      goto LABEL_11;
    }
LABEL_12:
    v20 = sub_1BCAA2C(WrapBattleBaseAnimation_TypeInfo, v15, v16, v17);
    System_Object___ctor((Il2CppObject *)v20, 0LL);
    return (WrapBattleBaseAnimation_o *)v20;
  }
  v18 = component;
  v19 = &WrapBattleSimpleAnimation_TypeInfo;
LABEL_11:
  v20 = sub_1BCAA2C(*v19, v15, v16, v17);
  System_Object___ctor((Il2CppObject *)v20, 0LL);
  *(_QWORD *)(v20 + 16) = v18;
  sub_1BCA784((PartyOrganizationUtility_o *)(v20 + 16), (int64_t)v18, v21, v22, v23, v24, v25, v26);
  return (WrapBattleBaseAnimation_o *)v20;
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
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  v6 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v6->fields.animName = name;
  v6 = (WrapBattleBaseAnimation_SimpleData_o *)((char *)v6 + 16);
  sub_1BCA784((PartyOrganizationUtility_o *)v6, (int64_t)name, v7, v8, v9, v10, v11, v12);
  *(float *)&v6->monitor = time;
}