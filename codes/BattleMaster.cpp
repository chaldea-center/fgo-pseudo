void __fastcall BattleMaster___ctor(BattleMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FC48A & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_BattleMaster__BattleEntity__long___ctor__, method);
    byte_40FC48A = 1;
  }
  DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long____ctor(
    (DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long__o *)this,
    5,
    (const MethodInfo_266F514 *)Method_DataMasterBase_BattleMaster__BattleEntity__long___ctor__);
}