void __fastcall BattlePointEntity___ctor(BattlePointEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BFD3CF & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataEntityBase_int___ctor__, method);
    byte_4BFD3CF = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3278C9C *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall BattlePointEntity__CreatePrimaryKey(BattlePointEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


bool __fastcall BattlePointEntity__HasFlag(BattlePointEntity_o *this, int32_t flagType, const MethodInfo *method)
{
  return (flagType & ~this->fields.flag) == 0;
}


bool __fastcall BattlePointEntity__IsEnableToAddBattlePoint(
        BattlePointEntity_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  if ( (this->fields.flag & 1) == 0 )
    return 1;
  if ( !svtData )
    sub_1C2E388(this, 0LL);
  return !BattleServantData__IsFollwerSupport(svtData, 0LL);
}


bool __fastcall BattlePointEntity__IsHideBattlePointGauge(
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
    sub_1C2E388(this, 0LL);
  BattlePointData = BattleServantData__GetBattlePointData(svtData, this->fields.id, 0LL);
  if ( BattlePointData )
    IsEnableToAddValue_k__BackingField = BattlePointData->fields._IsEnableToAddValue_k__BackingField;
  else
    IsEnableToAddValue_k__BackingField = 0;
  flag = this->fields.flag;
  if ( (flag & 4) != 0 )
    return !IsEnableToAddValue_k__BackingField;
  if ( (flag & 8) != 0 )
    return !IsEnableToAddValue_k__BackingField & BattleServantData__IsFollwerSupport(svtData, 0LL);
  return 0;
}