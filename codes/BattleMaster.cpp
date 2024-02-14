void __fastcall BattleMaster___ctor(BattleMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4211167 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_BattleMaster__BattleEntity__long___ctor__, method);
    byte_4211167 = 1;
  }
  DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long____ctor(
    (DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long__o *)this,
    5,
    (const MethodInfo_2669D60 *)Method_DataMasterBase_BattleMaster__BattleEntity__long___ctor__);
}