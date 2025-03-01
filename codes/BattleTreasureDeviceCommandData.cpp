void __fastcall BattleTreasureDeviceCommandData___ctor(
        BattleTreasureDeviceCommandData_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4C0036D & 1) == 0 )
  {
    sub_1C2E12C(&BattleCommandData_TypeInfo, svtData);
    byte_4C0036D = 1;
  }
  if ( !BattleCommandData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCommandData_TypeInfo);
  BattleCommandData___ctor((BattleCommandData_o *)this, (const MethodInfo *)svtData);
  if ( !svtData )
    sub_1C2E388(v5, v6);
  this->fields._type = BattleServantData__getTreasureDvcCardId(svtData, 0LL);
  this->fields.svtlimit = BattleServantData__getDispLimitCount(svtData, 1, 0LL);
  this->fields.uniqueId = svtData->fields.uniqueId;
  this->fields.svtId = BattleServantData__getSvtId(svtData, 0LL);
  this->fields.treasureDvc = BattleServantData__getTreasureDvcId(svtData, 1, 0LL, 0LL);
}