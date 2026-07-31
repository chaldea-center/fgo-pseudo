void BattleServantHpShiftDecagramEffectComponent___ctor(
        BattleServantHpShiftDecagramEffectComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_593BFB6 & 1) == 0 )
  {
    sub_21FFC50(&CommonEffectComponent_TypeInfo);
    byte_593BFB6 = 1;
  }
  if ( !*(&CommonEffectComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CommonEffectComponent_TypeInfo, method);
  CommonEffectComponent___ctor((CommonEffectComponent_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattleServantHpShiftDecagramEffectComponent__UpdateIcon(
        BattleServantHpShiftDecagramEffectComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  UnityEngine_Object_o *Parent_k__BackingField; // x21
  __int64 v6; // x1
  const MethodInfo *v7; // x3
  BattleServantHpShiftComponent_o *v8; // x0

  if ( (byte_593BFB4 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593BFB4 = 1;
  }
  Parent_k__BackingField = (UnityEngine_Object_o *)this->fields._Parent_k__BackingField;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&index);
  if ( UnityEngine_Object__op_Inequality(Parent_k__BackingField, 0, 0) )
  {
    v8 = this->fields._Parent_k__BackingField;
    if ( !v8 )
      sub_21FFECC(0, v6);
    BattleServantHpShiftComponent__UpdateIconActive(v8, index, 1, v7);
  }
}


// local variable allocation has failed, the output may be wrong!
void BattleServantHpShiftDecagramEffectComponent__UpdateIconInactive(
        BattleServantHpShiftDecagramEffectComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  UnityEngine_Object_o *Parent_k__BackingField; // x21
  __int64 v6; // x1
  const MethodInfo *v7; // x3
  BattleServantHpShiftComponent_o *v8; // x0

  if ( (byte_593BFB5 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593BFB5 = 1;
  }
  Parent_k__BackingField = (UnityEngine_Object_o *)this->fields._Parent_k__BackingField;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&index);
  if ( UnityEngine_Object__op_Inequality(Parent_k__BackingField, 0, 0) )
  {
    v8 = this->fields._Parent_k__BackingField;
    if ( !v8 )
      sub_21FFECC(0, v6);
    BattleServantHpShiftComponent__UpdateIconActive(v8, index, 0, v7);
  }
}


BattleServantHpShiftComponent_o *BattleServantHpShiftDecagramEffectComponent__get_Parent(
        BattleServantHpShiftDecagramEffectComponent_o *this,
        const MethodInfo *method)
{
  return this->fields._Parent_k__BackingField;
}


void BattleServantHpShiftDecagramEffectComponent__set_Parent(
        BattleServantHpShiftDecagramEffectComponent_o *this,
        BattleServantHpShiftComponent_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._Parent_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._Parent_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}