void SwitchActiveByBattlePointConditionComponent___ctor(
        SwitchActiveByBattlePointConditionComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


bool SwitchActiveByBattlePointConditionComponent__IsSatisfyCond(
        SwitchActiveByBattlePointConditionComponent_o *this,
        BattleData_o *data,
        BattleActorControl_o *actor,
        const MethodInfo *method)
{
  SwitchActiveByBattlePointConditionComponent_o *v4; // x19
  BattlePointData_o *BattlePointData; // x0
  _BOOL8 v6; // x0

  if ( !actor || (v4 = this, (this = (SwitchActiveByBattlePointConditionComponent_o *)actor->fields.battleSvtData) == 0) )
    sub_1D0F30C(this, data);
  BattlePointData = BattleServantData__GetBattlePointData((BattleServantData_o *)this, v4->fields.BattlePointKeyId, 0);
  if ( BattlePointData )
    LOBYTE(v6) = BattleUtility__IsSatisfyValueCond(
                   v4->fields.CondType,
                   v4->fields.CondValArray,
                   BattlePointData->fields.value,
                   0);
  else
    return v4->fields.IsSuccessNotExistKey;
  return v6;
}