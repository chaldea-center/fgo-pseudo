void BattleServantHpShiftDecagramEffectComponent___ctor(
        BattleServantHpShiftDecagramEffectComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C46649 & 1) == 0 )
  {
    sub_1C37058(&CommonEffectComponent_TypeInfo);
    byte_4C46649 = 1;
  }
  if ( !CommonEffectComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectComponent_TypeInfo);
  CommonEffectComponent___ctor((CommonEffectComponent_o *)this, 0);
}


void BattleServantHpShiftDecagramEffectComponent__UpdateIcon(
        BattleServantHpShiftDecagramEffectComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  UnityEngine_Object_o *Parent_k__BackingField; // x21
  const MethodInfo *v6; // x3
  BattleServantHpShiftComponent_o *v7; // x0

  if ( (byte_4C46647 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C46647 = 1;
  }
  Parent_k__BackingField = (UnityEngine_Object_o *)this->fields._Parent_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(Parent_k__BackingField, 0, 0) )
  {
    v7 = this->fields._Parent_k__BackingField;
    if ( !v7 )
      sub_1C372B4(0);
    BattleServantHpShiftComponent__UpdateIconActive(v7, index, 1, v6);
  }
}


void BattleServantHpShiftDecagramEffectComponent__UpdateIconInactive(
        BattleServantHpShiftDecagramEffectComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  UnityEngine_Object_o *Parent_k__BackingField; // x21
  const MethodInfo *v6; // x3
  BattleServantHpShiftComponent_o *v7; // x0

  if ( (byte_4C46648 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C46648 = 1;
  }
  Parent_k__BackingField = (UnityEngine_Object_o *)this->fields._Parent_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(Parent_k__BackingField, 0, 0) )
  {
    v7 = this->fields._Parent_k__BackingField;
    if ( !v7 )
      sub_1C372B4(0);
    BattleServantHpShiftComponent__UpdateIconActive(v7, index, 0, v6);
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
  const MethodInfo *v3; // x3

  this->fields._Parent_k__BackingField = value;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields._Parent_k__BackingField, (int32_t)value, (int32_t)method, v3);
}