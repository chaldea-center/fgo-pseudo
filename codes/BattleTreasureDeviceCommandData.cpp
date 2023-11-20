void __fastcall BattleTreasureDeviceCommandData___ctor(
        BattleTreasureDeviceCommandData_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  if ( (byte_40FCD88 & 1) == 0 )
  {
    sub_B16FFC(&BattleCommandData_TypeInfo, svtData);
    byte_40FCD88 = 1;
  }
  if ( (BYTE3(BattleCommandData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleCommandData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleCommandData_TypeInfo);
  }
  BattleCommandData___ctor((BattleCommandData_o *)this, 0LL);
  if ( !svtData )
    sub_B170D4();
  this->fields._type = BattleServantData__getTreasureDvcCardId(svtData, 0LL);
  this->fields.svtlimit = BattleServantData__getDispLimitCount(svtData, 1, 0LL);
  this->fields.uniqueId = svtData->fields.uniqueId;
  this->fields.svtId = BattleServantData__getSvtId(svtData, 0LL);
  this->fields.treasureDvc = BattleServantData__getTreasureDvcId(svtData, 1, 0LL);
}