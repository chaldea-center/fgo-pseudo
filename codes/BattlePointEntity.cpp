void BattlePointEntity___ctor(BattlePointEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59382C0 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_int___ctor__);
    byte_59382C0 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3EDAD70 *)Method_DataEntityBase_int___ctor__);
}


int32_t BattlePointEntity__CreatePrimaryKey(BattlePointEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


bool BattlePointEntity__HasFlag(BattlePointEntity_o *this, int32_t flagType, const MethodInfo *method)
{
  return (flagType & ~this->fields.flag) == 0;
}


bool BattlePointEntity__IsEnableToAddBattlePoint(
        BattlePointEntity_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  if ( (this->fields.flag & 1) == 0 )
    return 1;
  if ( !svtData )
    sub_21FFECC(this, 0);
  return !BattleServantData__IsFollwerSupport(svtData, 0);
}


bool BattlePointEntity__IsHideBattlePointGauge(
        BattlePointEntity_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  BattlePointData_o *BattlePointData; // x0
  int v6; // w20
  int32_t flag; // w8

  if ( (this->fields.flag & 2) != 0 )
  {
    LOBYTE(v6) = 1;
  }
  else
  {
    if ( !svtData )
      sub_21FFECC(this, 0);
    BattlePointData = BattleServantData__GetBattlePointData(svtData, this->fields.id, 0);
    if ( BattlePointData )
      v6 = !BattlePointData->fields._IsEnableToAddValue_k__BackingField;
    else
      v6 = 1;
    flag = this->fields.flag;
    if ( (flag & 4) == 0 )
    {
      if ( (flag & 8) != 0 )
        return v6 & BattleServantData__IsFollwerSupport(svtData, 0);
      else
        LOBYTE(v6) = 0;
    }
  }
  return v6;
}


bool BattlePointEntity__IsHideGaugeAllTime(BattlePointEntity_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.flag) >> 1) & 1;
}