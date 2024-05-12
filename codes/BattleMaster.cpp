void __fastcall BattleMaster___ctor(BattleMaster_o *this, const MethodInfo *method)
{
  if ( (byte_43876E4 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_BattleMaster__BattleEntity__long___ctor__);
    byte_43876E4 = 1;
  }
  DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long____ctor(
    (DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long__o *)this,
    5,
    (const MethodInfo_21FBA20 *)Method_DataMasterBase_BattleMaster__BattleEntity__long___ctor__);
}