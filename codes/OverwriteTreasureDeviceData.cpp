void OverwriteTreasureDeviceData___ctor(
        OverwriteTreasureDeviceData_o *this,
        int32_t treasureDeviceId,
        int32_t treasureDeviceLv,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.id = treasureDeviceId;
  this->fields.lv = treasureDeviceLv;
}


void OverwriteTreasureDeviceData__Overwrite(
        OverwriteTreasureDeviceData_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  if ( !svtData )
    sub_1C942F0(this, 0);
  BattleServantData__OverwriteTreasureDevice(svtData, this->fields.id, this->fields.lv, 0);
}


void OverwriteTreasureDeviceData__Reset(
        OverwriteTreasureDeviceData_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  if ( !svtData )
    sub_1C942F0(this, 0);
  BattleServantData__ResetOverwriteTreasureDevice(svtData, 0);
}