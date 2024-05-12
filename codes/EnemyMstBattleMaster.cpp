void __fastcall EnemyMstBattleMaster___ctor(EnemyMstBattleMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438FAA1 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_EnemyMstBattleMaster__EnemyMstBattleEntity__int___ctor__);
    byte_438FAA1 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    244,
    (const MethodInfo_21FB7F8 *)Method_DataMasterBase_EnemyMstBattleMaster__EnemyMstBattleEntity__int___ctor__);
}