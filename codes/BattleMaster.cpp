void __fastcall BattleMaster___ctor(BattleMaster_o *this, const MethodInfo *method)
{
  if ( (byte_434E113 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_BattleMaster__BattleEntity__long___ctor__);
    byte_434E113 = 1;
  }
  DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long____ctor(
    (DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long__o *)this,
    5,
    (const MethodInfo_21C05CC *)Method_DataMasterBase_BattleMaster__BattleEntity__long___ctor__);
}