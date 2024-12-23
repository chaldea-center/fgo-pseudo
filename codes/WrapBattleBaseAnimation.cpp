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
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  Il2CppObject *v20; // [xsp+0h] [xbp-30h] BYREF
  Il2CppObject *component; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B69EE6 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_UnityEngine_GameObject_TryGetComponent_Animation___, method);
    sub_1BE4ACC(&Method_UnityEngine_GameObject_TryGetComponent_SimpleAnimation___, v3);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v4);
    sub_1BE4ACC(&WrapBattleAnimation_TypeInfo, v5);
    sub_1BE4ACC(&WrapBattleBaseAnimation_TypeInfo, v6);
    sub_1BE4ACC(&WrapBattleSimpleAnimation_TypeInfo, v7);
    byte_4B69EE6 = 1;
  }
  v20 = 0LL;
  component = 0LL;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)obj, 0LL, 0LL);
  if ( !v8 )
    goto LABEL_12;
  if ( !obj )
    sub_1BE4D28(v8, v9);
  if ( !UnityEngine_GameObject__TryGetComponent_object_(
          obj,
          &component,
          (const MethodInfo_2FAAA2C *)Method_UnityEngine_GameObject_TryGetComponent_SimpleAnimation___) )
  {
    if ( UnityEngine_GameObject__TryGetComponent_object_(
           obj,
           &v20,
           (const MethodInfo_2FAAA2C *)Method_UnityEngine_GameObject_TryGetComponent_Animation___) )
    {
      v10 = v20;
      v11 = &WrapBattleAnimation_TypeInfo;
      goto LABEL_11;
    }
LABEL_12:
    v12 = sub_1BE4D18(WrapBattleBaseAnimation_TypeInfo);
    System_Object___ctor((Il2CppObject *)v12, 0LL);
    return (WrapBattleBaseAnimation_o *)v12;
  }
  v10 = component;
  v11 = &WrapBattleSimpleAnimation_TypeInfo;
LABEL_11:
  v12 = sub_1BE4D18(*v11);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  *(_QWORD *)(v12 + 16) = v10;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v12 + 16), (int64_t)v10, v13, v14, v15, v16, v17, v18);
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
  sub_1BE4A70((PartyOrganizationUtility_o *)v6, (int64_t)name, v7, v8, v9, v10, v11, v12);
  *(float *)&v6->monitor = time;
}