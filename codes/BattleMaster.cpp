void __fastcall BattleMaster___ctor(BattleMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42AC954 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_BattleMaster__BattleEntity__long___ctor__);
    byte_42AC954 = 1;
  }
  DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long____ctor(
    (DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long__o *)this,
    5,
    (const MethodInfo_23E2464 *)Method_DataMasterBase_BattleMaster__BattleEntity__long___ctor__);
}