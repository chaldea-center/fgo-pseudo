void __fastcall OverwriteTreasureDeviceData___ctor(
        OverwriteTreasureDeviceData_o *this,
        int32_t treasureDeviceId,
        int32_t treasureDeviceLv,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.id = treasureDeviceId;
  this->fields.lv = treasureDeviceLv;
}


void __fastcall OverwriteTreasureDeviceData__Overwrite(
        OverwriteTreasureDeviceData_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  if ( !svtData )
    sub_B0D97C(this);
  BattleServantData__OverwriteTreasureDevice(svtData, this->fields.id, this->fields.lv, 0LL);
}


void __fastcall OverwriteTreasureDeviceData__Reset(
        OverwriteTreasureDeviceData_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  if ( !svtData )
    sub_B0D97C(this);
  BattleServantData__ResetOverwriteTreasureDevice(svtData, 0LL);
}