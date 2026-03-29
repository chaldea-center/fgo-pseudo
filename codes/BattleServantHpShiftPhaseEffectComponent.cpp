void BattleServantHpShiftPhaseEffectComponent___ctor(
        BattleServantHpShiftPhaseEffectComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D3419C & 1) == 0 )
  {
    sub_1C93AD4(&CommonEffectComponent_TypeInfo);
    byte_4D3419C = 1;
  }
  if ( !CommonEffectComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectComponent_TypeInfo);
  CommonEffectComponent___ctor((CommonEffectComponent_o *)this, 0);
}


void BattleServantHpShiftPhaseEffectComponent__FadeOutIcon(
        BattleServantHpShiftPhaseEffectComponent_o *this,
        float duration,
        const MethodInfo *method)
{
  UnityEngine_Object_o *HpShiftParent_k__BackingField; // x20
  __int64 v6; // x1
  BattleServantHpShiftComponent_o *v7; // x0
  System_Collections_IEnumerator_o *v8; // x1

  if ( (byte_4D3419B & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D3419B = 1;
  }
  HpShiftParent_k__BackingField = (UnityEngine_Object_o *)this->fields._HpShiftParent_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(HpShiftParent_k__BackingField, 0, 0) )
  {
    v7 = this->fields._HpShiftParent_k__BackingField;
    if ( !v7 )
      sub_1C93D2C(0, v6);
    v8 = BattleServantHpShiftComponent__FadeOutShiftIcon(v7, duration, 0);
    UnityEngine_MonoBehaviour__StartCoroutine_72105100((UnityEngine_MonoBehaviour_o *)this, v8, 0);
  }
}


float BattleServantHpShiftPhaseEffectComponent__GetNextAnimTime(
        BattleServantHpShiftPhaseEffectComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.nextAnimationTime;
}


void BattleServantHpShiftPhaseEffectComponent__UpdateHpBar(
        BattleServantHpShiftPhaseEffectComponent_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields._UpdateHpBarFunc_k__BackingField, 0);
}


void BattleServantHpShiftPhaseEffectComponent__UpdateHpLabel(
        BattleServantHpShiftPhaseEffectComponent_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields._UpdateHpLabelFunc_k__BackingField, 0);
}


void BattleServantHpShiftPhaseEffectComponent__UpdateShiftIcon(
        BattleServantHpShiftPhaseEffectComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  UnityEngine_Object_o *HpShiftParent_k__BackingField; // x21
  __int64 v6; // x1
  BattleServantHpShiftComponent_o *IsShiftPhaseIconActive; // x0
  BattleServantHpShiftComponent_o *v8; // x8

  if ( (byte_4D3419A & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D3419A = 1;
  }
  HpShiftParent_k__BackingField = (UnityEngine_Object_o *)this->fields._HpShiftParent_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(HpShiftParent_k__BackingField, 0, 0) )
  {
    IsShiftPhaseIconActive = this->fields._HpShiftParent_k__BackingField;
    if ( !IsShiftPhaseIconActive
      || (IsShiftPhaseIconActive = (BattleServantHpShiftComponent_o *)BattleServantHpShiftComponent__IsShiftPhaseIconActive(
                                                                        IsShiftPhaseIconActive,
                                                                        0),
          (v8 = this->fields._HpShiftParent_k__BackingField) == 0) )
    {
      sub_1C93D2C(IsShiftPhaseIconActive, v6);
    }
    BattleServantHpShiftComponent__UpdateIconEnabled(v8, ((unsigned __int8)IsShiftPhaseIconActive & 1) + index, 1, 0);
  }
}


BattleServantHpShiftComponent_o *BattleServantHpShiftPhaseEffectComponent__get_HpShiftParent(
        BattleServantHpShiftPhaseEffectComponent_o *this,
        const MethodInfo *method)
{
  return this->fields._HpShiftParent_k__BackingField;
}


System_Action_o *BattleServantHpShiftPhaseEffectComponent__get_UpdateHpBarFunc(
        BattleServantHpShiftPhaseEffectComponent_o *this,
        const MethodInfo *method)
{
  return this->fields._UpdateHpBarFunc_k__BackingField;
}


System_Action_o *BattleServantHpShiftPhaseEffectComponent__get_UpdateHpLabelFunc(
        BattleServantHpShiftPhaseEffectComponent_o *this,
        const MethodInfo *method)
{
  return this->fields._UpdateHpLabelFunc_k__BackingField;
}


void BattleServantHpShiftPhaseEffectComponent__set_HpShiftParent(
        BattleServantHpShiftPhaseEffectComponent_o *this,
        BattleServantHpShiftComponent_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._HpShiftParent_k__BackingField = value;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._HpShiftParent_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleServantHpShiftPhaseEffectComponent__set_UpdateHpBarFunc(
        BattleServantHpShiftPhaseEffectComponent_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._UpdateHpBarFunc_k__BackingField = value;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._UpdateHpBarFunc_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleServantHpShiftPhaseEffectComponent__set_UpdateHpLabelFunc(
        BattleServantHpShiftPhaseEffectComponent_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._UpdateHpLabelFunc_k__BackingField = value;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._UpdateHpLabelFunc_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}