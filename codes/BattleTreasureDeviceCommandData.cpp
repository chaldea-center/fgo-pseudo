void BattleTreasureDeviceCommandData___ctor(
        BattleTreasureDeviceCommandData_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t DispLimitCount; // w0
  int32_t uniqueId; // w8

  if ( (byte_593B66F & 1) == 0 )
  {
    sub_21FFC50(&BattleCommandData_TypeInfo);
    byte_593B66F = 1;
  }
  if ( !*(&BattleCommandData_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleCommandData_TypeInfo, svtData);
  BattleCommandData___ctor((BattleCommandData_o *)this, (const MethodInfo *)svtData);
  if ( !svtData )
    sub_21FFECC(v5, v6);
  this->fields._type = BattleServantData__getTreasureDvcCardId(svtData, 0);
  DispLimitCount = BattleServantData__getDispLimitCount(svtData, 1, 0);
  uniqueId = svtData->fields.uniqueId;
  this->fields.svtlimit = DispLimitCount;
  this->fields.uniqueId = uniqueId;
  this->fields.svtId = BattleServantData__getSvtId(svtData, 0);
  this->fields.treasureDvc = BattleServantData__getTreasureDvcId(svtData, 1, 0, 0);
}