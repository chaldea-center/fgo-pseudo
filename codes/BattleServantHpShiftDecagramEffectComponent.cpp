void __fastcall BattleServantHpShiftDecagramEffectComponent___ctor(
        BattleServantHpShiftDecagramEffectComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A72EB2 & 1) == 0 )
  {
    sub_1B90010(&CommonEffectComponent_TypeInfo, method);
    byte_4A72EB2 = 1;
  }
  if ( !CommonEffectComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectComponent_TypeInfo);
  CommonEffectComponent___ctor((CommonEffectComponent_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantHpShiftDecagramEffectComponent__UpdateIcon(
        BattleServantHpShiftDecagramEffectComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  UnityEngine_Object_o *Parent_k__BackingField; // x21
  __int64 v6; // x1
  const MethodInfo *v7; // x3
  BattleServantHpShiftComponent_o *v8; // x0

  if ( (byte_4A72EB0 & 1) == 0 )
  {
    sub_1B90010(&UnityEngine_Object_TypeInfo, *(_QWORD *)&index);
    byte_4A72EB0 = 1;
  }
  Parent_k__BackingField = (UnityEngine_Object_o *)this->fields._Parent_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(Parent_k__BackingField, 0LL, 0LL) )
  {
    v8 = this->fields._Parent_k__BackingField;
    if ( !v8 )
      sub_1B9026C(0LL, v6);
    BattleServantHpShiftComponent__UpdateIconActive(v8, index, 1, v7);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantHpShiftDecagramEffectComponent__UpdateIconInactive(
        BattleServantHpShiftDecagramEffectComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  UnityEngine_Object_o *Parent_k__BackingField; // x21
  __int64 v6; // x1
  const MethodInfo *v7; // x3
  BattleServantHpShiftComponent_o *v8; // x0

  if ( (byte_4A72EB1 & 1) == 0 )
  {
    sub_1B90010(&UnityEngine_Object_TypeInfo, *(_QWORD *)&index);
    byte_4A72EB1 = 1;
  }
  Parent_k__BackingField = (UnityEngine_Object_o *)this->fields._Parent_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(Parent_k__BackingField, 0LL, 0LL) )
  {
    v8 = this->fields._Parent_k__BackingField;
    if ( !v8 )
      sub_1B9026C(0LL, v6);
    BattleServantHpShiftComponent__UpdateIconActive(v8, index, 0, v7);
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
  int32_t v3; // w3

  this->fields._Parent_k__BackingField = value;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)&this->fields._Parent_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}