void BattlePointEntity___ctor(BattlePointEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D3063F & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataEntityBase_int___ctor__);
    byte_4D3063F = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3460B3C *)Method_DataEntityBase_int___ctor__);
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
    sub_1C93D2C(this, 0);
  return !BattleServantData__IsFollwerSupport(svtData, 0);
}


bool BattlePointEntity__IsHideBattlePointGauge(
        BattlePointEntity_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  BattlePointData_o *BattlePointData; // x0
  _BOOL4 IsEnableToAddValue_k__BackingField; // w21
  int32_t flag; // w8

  if ( (this->fields.flag & 2) != 0 )
    return 1;
  if ( !svtData )
    sub_1C93D2C(this, 0);
  BattlePointData = BattleServantData__GetBattlePointData(svtData, this->fields.id, 0);
  if ( BattlePointData )
    IsEnableToAddValue_k__BackingField = BattlePointData->fields._IsEnableToAddValue_k__BackingField;
  else
    IsEnableToAddValue_k__BackingField = 0;
  flag = this->fields.flag;
  if ( (flag & 4) != 0 )
    return !IsEnableToAddValue_k__BackingField;
  if ( (flag & 8) != 0 )
    return !IsEnableToAddValue_k__BackingField & BattleServantData__IsFollwerSupport(svtData, 0);
  return 0;
}


bool BattlePointEntity__IsHideGaugeAllTime(BattlePointEntity_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.flag) >> 1) & 1;
}