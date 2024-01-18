void __fastcall BattleMaster___ctor(BattleMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4189B72 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_BattleMaster__BattleEntity__long___ctor__, method);
    byte_4189B72 = 1;
  }
  DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long____ctor(
    (DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long__o *)this,
    5,
    (const MethodInfo_24E425C *)Method_DataMasterBase_BattleMaster__BattleEntity__long___ctor__);
}