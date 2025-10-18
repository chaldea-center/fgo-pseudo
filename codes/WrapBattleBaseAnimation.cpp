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
  Il2CppObject *v4; // x20
  _QWORD *v5; // x8
  __int64 v6; // x19
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  Il2CppObject *v10; // [xsp+0h] [xbp-30h] BYREF
  Il2CppObject *component; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C46765 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_TryGetComponent_Animation___);
    sub_1C37058(&Method_UnityEngine_GameObject_TryGetComponent_SimpleAnimation___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&WrapBattleAnimation_TypeInfo);
    sub_1C37058(&WrapBattleBaseAnimation_TypeInfo);
    sub_1C37058(&WrapBattleSimpleAnimation_TypeInfo);
    byte_4C46765 = 1;
  }
  v10 = 0;
  component = 0;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v3 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)obj, 0, 0);
  if ( !v3 )
    goto LABEL_12;
  if ( !obj )
    sub_1C372B4(v3);
  if ( !UnityEngine_GameObject__TryGetComponent_object_(
          obj,
          &component,
          (const MethodInfo_3140468 *)Method_UnityEngine_GameObject_TryGetComponent_SimpleAnimation___) )
  {
    if ( UnityEngine_GameObject__TryGetComponent_object_(
           obj,
           &v10,
           (const MethodInfo_3140468 *)Method_UnityEngine_GameObject_TryGetComponent_Animation___) )
    {
      v4 = v10;
      v5 = &WrapBattleAnimation_TypeInfo;
      goto LABEL_11;
    }
LABEL_12:
    v6 = sub_1C372A4(WrapBattleBaseAnimation_TypeInfo);
    System_Object___ctor((Il2CppObject *)v6, 0);
    return (WrapBattleBaseAnimation_o *)v6;
  }
  v4 = component;
  v5 = &WrapBattleSimpleAnimation_TypeInfo;
LABEL_11:
  v6 = sub_1C372A4(*v5);
  System_Object___ctor((Il2CppObject *)v6, 0);
  *(_QWORD *)(v6 + 16) = v4;
  sub_1C36FFC((CGThumbnailListItem_o *)(v6 + 16), (int32_t)v4, v7, v8);
  return (WrapBattleBaseAnimation_o *)v6;
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
  sub_1C36FFC((CGThumbnailListItem_o *)v6, (int32_t)name, v7, v8);
  *(float *)&v6->monitor = time;
}