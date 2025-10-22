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
  const MethodInfo *v9; // x3
  Il2CppObject *v11; // [xsp+0h] [xbp-30h] BYREF
  Il2CppObject *component; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C5A55C & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_GameObject_TryGetComponent_Animation___);
    sub_1C3E564(&Method_UnityEngine_GameObject_TryGetComponent_SimpleAnimation___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&WrapBattleAnimation_TypeInfo);
    sub_1C3E564(&WrapBattleBaseAnimation_TypeInfo);
    sub_1C3E564(&WrapBattleSimpleAnimation_TypeInfo);
    byte_4C5A55C = 1;
  }
  v11 = 0;
  component = 0;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v3 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)obj, 0, 0);
  if ( !v3 )
    goto LABEL_12;
  if ( !obj )
    sub_1C3E7C0(v3, v4);
  if ( !UnityEngine_GameObject__TryGetComponent_object_(
          obj,
          &component,
          (const MethodInfo_315235C *)Method_UnityEngine_GameObject_TryGetComponent_SimpleAnimation___) )
  {
    if ( UnityEngine_GameObject__TryGetComponent_object_(
           obj,
           &v11,
           (const MethodInfo_315235C *)Method_UnityEngine_GameObject_TryGetComponent_Animation___) )
    {
      v5 = v11;
      v6 = &WrapBattleAnimation_TypeInfo;
      goto LABEL_11;
    }
LABEL_12:
    v7 = sub_1C3E7B0(WrapBattleBaseAnimation_TypeInfo);
    System_Object___ctor((Il2CppObject *)v7, 0);
    return (WrapBattleBaseAnimation_o *)v7;
  }
  v5 = component;
  v6 = &WrapBattleSimpleAnimation_TypeInfo;
LABEL_11:
  v7 = sub_1C3E7B0(*v6);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *(_QWORD *)(v7 + 16) = v5;
  sub_1C3E508((CGThumbnailListItem_o *)(v7 + 16), (int32_t)v5, v8, v9);
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
  const MethodInfo *v8; // x3

  v6 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v6->fields.animName = name;
  v6 = (WrapBattleBaseAnimation_SimpleData_o *)((char *)v6 + 16);
  sub_1C3E508((CGThumbnailListItem_o *)v6, (int32_t)name, v7, v8);
  *(float *)&v6->monitor = time;
}