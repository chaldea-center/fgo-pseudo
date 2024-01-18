void __fastcall EnemyMstBattleMaster___ctor(EnemyMstBattleMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418BD9C & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EnemyMstBattleMaster__EnemyMstBattleEntity__int___ctor__, method);
    byte_418BD9C = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    243,
    (const MethodInfo_24E4034 *)Method_DataMasterBase_EnemyMstBattleMaster__EnemyMstBattleEntity__int___ctor__);
}