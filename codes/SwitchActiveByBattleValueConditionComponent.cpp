void __fastcall SwitchActiveByBattleValueConditionComponent___ctor(
        SwitchActiveByBattleValueConditionComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


bool __fastcall SwitchActiveByBattleValueConditionComponent__IsSatisfyCond(
        SwitchActiveByBattleValueConditionComponent_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  int32_t value; // [xsp+Ch] [xbp-14h] BYREF

  value = 0;
  if ( !data )
    sub_1BDBAD4(this, 0LL);
  if ( BattleData__TryGetBattleValue(data, this->fields.BattleValKeyId, &value, 0LL) )
    return BattleUtility__IsSatisfyValueCond(this->fields.CondType, this->fields.CondValArray, value, 0LL);
  else
    return this->fields.IsSuccessNotExistKey;
}