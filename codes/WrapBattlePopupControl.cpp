void WrapBattlePopupControl___ctor(
        WrapBattlePopupControl_o *this,
        BattlePerformance_o *inPerf,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( !inPerf )
    sub_1C32E7C(this);
  WrapBaseBattlePopupControl___ctor((WrapBaseBattlePopupControl_o *)this, inPerf->fields.popupTr, inPerf, v3);
}


UnityEngine_GameObject_o *WrapBattlePopupControl__GetAvoidResetDamageObject(
        WrapBattlePopupControl_o *this,
        System_String_o *text,
        const MethodInfo *method)
{
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x4
  struct BattlePerformance_o *perf; // x8
  struct BattleEffectControl_o *effectcontrol; // x8

  IsNullOrEmpty = System_String__IsNullOrEmpty(text, 0);
  perf = this->fields.perf;
  if ( !perf || (effectcontrol = perf->fields.effectcontrol) == 0 )
    sub_1C32E7C(IsNullOrEmpty);
  if ( IsNullOrEmpty )
    return WrapBaseBattlePopupControl__CreatePopupObject(
             (WrapBaseBattlePopupControl_o *)this,
             effectcontrol->fields._AvoidResetDamageObject_k__BackingField,
             1,
             v6);
  else
    return WrapBaseBattlePopupControl__CreatePopupTextObject(
             (WrapBaseBattlePopupControl_o *)this,
             effectcontrol->fields._AvoidResetDamageTextObject_k__BackingField,
             text,
             1,
             v7);
}


UnityEngine_GameObject_o *WrapBattlePopupControl__GetAvoidanceObject(
        WrapBattlePopupControl_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  struct BattlePerformance_o *perf; // x8
  struct BattleEffectControl_o *effectcontrol; // x8

  perf = this->fields.perf;
  if ( !perf || (effectcontrol = perf->fields.effectcontrol) == 0 )
    sub_1C32E7C(this);
  return WrapBaseBattlePopupControl__CreatePopupObject(
           (WrapBaseBattlePopupControl_o *)this,
           effectcontrol->fields.avoidanceObject,
           1,
           v2);
}


UnityEngine_GameObject_o *WrapBattlePopupControl__GetAvoidanceTextObject(
        WrapBattlePopupControl_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  struct BattlePerformance_o *perf; // x8
  struct BattleEffectControl_o *effectcontrol; // x8

  perf = this->fields.perf;
  if ( !perf || (effectcontrol = perf->fields.effectcontrol) == 0 )
    sub_1C32E7C(this);
  return WrapBaseBattlePopupControl__CreatePopupObject(
           (WrapBaseBattlePopupControl_o *)this,
           effectcontrol->fields.avoidanceTextObject,
           1,
           v2);
}


UnityEngine_GameObject_o *WrapBattlePopupControl__GetBuffTextClassIconObject(
        WrapBattlePopupControl_o *this,
        int32_t color,
        const MethodInfo *method)
{
  struct BattlePerformance_o *perf; // x8

  perf = this->fields.perf;
  if ( !perf || (this = (WrapBattlePopupControl_o *)perf->fields.effectcontrol) == 0 )
    sub_1C32E7C(this);
  return BattleEffectControl__getBuffTextClassIconObject((BattleEffectControl_o *)this, color, 0);
}


UnityEngine_GameObject_o *WrapBattlePopupControl__GetBuffTextObject(
        WrapBattlePopupControl_o *this,
        int32_t color,
        const MethodInfo *method)
{
  struct BattlePerformance_o *perf; // x8

  perf = this->fields.perf;
  if ( !perf || (this = (WrapBattlePopupControl_o *)perf->fields.effectcontrol) == 0 )
    sub_1C32E7C(this);
  return BattleEffectControl__getBuffTextObject((BattleEffectControl_o *)this, color, 0);
}


UnityEngine_GameObject_o *WrapBattlePopupControl__GetDamageObject(
        WrapBattlePopupControl_o *this,
        bool critical,
        bool week,
        bool resist,
        const MethodInfo *method)
{
  struct BattlePerformance_o *perf; // x8

  perf = this->fields.perf;
  if ( !perf || (this = (WrapBattlePopupControl_o *)perf->fields.effectcontrol) == 0 )
    sub_1C32E7C(this);
  return BattleEffectControl__getDamageObject((BattleEffectControl_o *)this, critical, week, resist, 0);
}


UnityEngine_GameObject_o *WrapBattlePopupControl__GetEffectInstantiateLocal(
        WrapBattlePopupControl_o *this,
        int32_t id,
        const MethodInfo *method)
{
  struct BattlePerformance_o *perf; // x8

  perf = this->fields.perf;
  if ( !perf || (this = (WrapBattlePopupControl_o *)perf->fields.effectcontrol) == 0 )
    sub_1C32E7C(this);
  return BattleEffectControl__getEffectInstantiate((BattleEffectControl_o *)this, id, 0);
}


UnityEngine_GameObject_o *WrapBattlePopupControl__GetInvincibleObject(
        WrapBattlePopupControl_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  struct BattlePerformance_o *perf; // x8
  struct BattleEffectControl_o *effectcontrol; // x8

  perf = this->fields.perf;
  if ( !perf || (effectcontrol = perf->fields.effectcontrol) == 0 )
    sub_1C32E7C(this);
  return WrapBaseBattlePopupControl__CreatePopupObject(
           (WrapBaseBattlePopupControl_o *)this,
           effectcontrol->fields.invincibleObject,
           1,
           v2);
}


UnityEngine_GameObject_o *WrapBattlePopupControl__GetSpecialInvincibleObject(
        WrapBattlePopupControl_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  struct BattlePerformance_o *perf; // x8
  struct BattleEffectControl_o *effectcontrol; // x8

  perf = this->fields.perf;
  if ( !perf || (effectcontrol = perf->fields.effectcontrol) == 0 )
    sub_1C32E7C(this);
  return WrapBaseBattlePopupControl__CreatePopupObject(
           (WrapBaseBattlePopupControl_o *)this,
           effectcontrol->fields._specialInvincibleObject_k__BackingField,
           1,
           v2);
}


UnityEngine_GameObject_o *WrapBattlePopupControl__SetBuffIconObject(
        WrapBattlePopupControl_o *this,
        BattleBuffData_ShowBuffData_array *buffList,
        const MethodInfo *method)
{
  struct BattlePerformance_o *perf; // x8

  perf = this->fields.perf;
  if ( !perf || (this = (WrapBattlePopupControl_o *)perf->fields.effectcontrol) == 0 )
    sub_1C32E7C(this);
  return BattleEffectControl__SetBuffIconObject((BattleEffectControl_o *)this, buffList, 0);
}