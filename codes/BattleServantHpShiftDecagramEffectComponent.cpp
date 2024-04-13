void __fastcall BattleServantHpShiftDecagramEffectComponent___ctor(
        BattleServantHpShiftDecagramEffectComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EB24E & 1) == 0 )
  {
    sub_B5D5C4(&CommonEffectComponent_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB24E = 1;
  }
  if ( (BYTE3(CommonEffectComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectComponent_TypeInfo);
  }
  CommonEffectComponent___ctor((CommonEffectComponent_o *)this, 0LL);
}


void __fastcall BattleServantHpShiftDecagramEffectComponent__UpdateIcon(
        BattleServantHpShiftDecagramEffectComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Object_o *Parent_k__BackingField; // x21
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  BattleServantHpShiftComponent_o *v9; // x0

  if ( (byte_42EB24C & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, index, (_DWORD)method, v3);
    byte_42EB24C = 1;
  }
  Parent_k__BackingField = (UnityEngine_Object_o *)this->fields._Parent_k__BackingField;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(Parent_k__BackingField, 0LL, 0LL) )
  {
    v9 = this->fields._Parent_k__BackingField;
    if ( !v9 )
      sub_B5D69C(0LL, v7);
    BattleServantHpShiftComponent__UpdateIconActive(v9, index, 1, v8);
  }
}


void __fastcall BattleServantHpShiftDecagramEffectComponent__UpdateIconInactive(
        BattleServantHpShiftDecagramEffectComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Object_o *Parent_k__BackingField; // x21
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  BattleServantHpShiftComponent_o *v9; // x0

  if ( (byte_42EB24D & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, index, (_DWORD)method, v3);
    byte_42EB24D = 1;
  }
  Parent_k__BackingField = (UnityEngine_Object_o *)this->fields._Parent_k__BackingField;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(Parent_k__BackingField, 0LL, 0LL) )
  {
    v9 = this->fields._Parent_k__BackingField;
    if ( !v9 )
      sub_B5D69C(0LL, v7);
    BattleServantHpShiftComponent__UpdateIconActive(v9, index, 0, v8);
  }
}


BattleServantHpShiftComponent_o *__fastcall BattleServantHpShiftDecagramEffectComponent__get_Parent(
        BattleServantHpShiftDecagramEffectComponent_o *this,
        const MethodInfo *method)
{
  return this->fields._Parent_k__BackingField;
}


void __fastcall BattleServantHpShiftDecagramEffectComponent__set_Parent(
        BattleServantHpShiftDecagramEffectComponent_o *this,
        BattleServantHpShiftComponent_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._Parent_k__BackingField = value;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._Parent_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}