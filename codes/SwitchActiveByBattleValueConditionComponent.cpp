void SwitchActiveByBattleValueConditionComponent___ctor(
        SwitchActiveByBattleValueConditionComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


bool SwitchActiveByBattleValueConditionComponent__IsSatisfyCond(
        SwitchActiveByBattleValueConditionComponent_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  int32_t value; // [xsp+Ch] [xbp-14h] BYREF

  value = 0;
  if ( !data )
    sub_1C3E7C0(this, 0);
  if ( BattleData__TryGetBattleValue(data, this->fields.BattleValKeyId, &value, 0) )
    return BattleUtility__IsSatisfyValueCond(this->fields.CondType, this->fields.CondValArray, value, 0);
  else
    return this->fields.IsSuccessNotExistKey;
}