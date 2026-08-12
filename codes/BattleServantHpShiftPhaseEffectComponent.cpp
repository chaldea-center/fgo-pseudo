void BattleServantHpShiftPhaseEffectComponent___ctor(
        BattleServantHpShiftPhaseEffectComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_59741EF & 1) == 0 )
  {
    sub_2213A60(&CommonEffectComponent_TypeInfo);
    byte_59741EF = 1;
  }
  if ( !*(&CommonEffectComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CommonEffectComponent_TypeInfo, method);
  CommonEffectComponent___ctor((CommonEffectComponent_o *)this, 0);
}


void BattleServantHpShiftPhaseEffectComponent__FadeOutIcon(
        BattleServantHpShiftPhaseEffectComponent_o *this,
        float duration,
        const MethodInfo *method)
{
  UnityEngine_Object_o *HpShiftParent_k__BackingField; // x20
  const MethodInfo *v6; // x1
  BattleServantHpShiftComponent_o *v7; // x0
  System_Collections_IEnumerator_o *v8; // x1

  if ( (byte_59741EE & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59741EE = 1;
  }
  HpShiftParent_k__BackingField = (UnityEngine_Object_o *)this->fields._HpShiftParent_k__BackingField;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(HpShiftParent_k__BackingField, 0, 0) )
  {
    v7 = this->fields._HpShiftParent_k__BackingField;
    if ( !v7 )
      sub_2213CDC(0, v6);
    v8 = BattleServantHpShiftComponent__FadeOutShiftIcon(v7, duration, v6);
    UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)this, v8, 0);
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


// local variable allocation has failed, the output may be wrong!
void BattleServantHpShiftPhaseEffectComponent__UpdateShiftIcon(
        BattleServantHpShiftPhaseEffectComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  UnityEngine_Object_o *HpShiftParent_k__BackingField; // x21
  const MethodInfo *v6; // x1
  BattleServantHpShiftComponent_o *IsShiftPhaseIconActive; // x0
  const MethodInfo *v8; // x3
  BattleServantHpShiftComponent_o *v9; // x8

  if ( (byte_59741ED & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59741ED = 1;
  }
  HpShiftParent_k__BackingField = (UnityEngine_Object_o *)this->fields._HpShiftParent_k__BackingField;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&index);
  if ( UnityEngine_Object__op_Inequality(HpShiftParent_k__BackingField, 0, 0) )
  {
    IsShiftPhaseIconActive = this->fields._HpShiftParent_k__BackingField;
    if ( !IsShiftPhaseIconActive
      || (IsShiftPhaseIconActive = (BattleServantHpShiftComponent_o *)BattleServantHpShiftComponent__IsShiftPhaseIconActive(
                                                                        IsShiftPhaseIconActive,
                                                                        v6),
          (v9 = this->fields._HpShiftParent_k__BackingField) == 0) )
    {
      sub_2213CDC(IsShiftPhaseIconActive, v6);
    }
    BattleServantHpShiftComponent__UpdateIconEnabled(v9, ((unsigned __int8)IsShiftPhaseIconActive & 1) + index, 1, v8);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._HpShiftParent_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._HpShiftParent_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._UpdateHpBarFunc_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._UpdateHpBarFunc_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._UpdateHpLabelFunc_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._UpdateHpLabelFunc_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}