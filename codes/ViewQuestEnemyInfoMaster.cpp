void __fastcall ViewQuestEnemyInfoMaster___ctor(ViewQuestEnemyInfoMaster_o *this, const MethodInfo *method)
{
  if ( (byte_439127F & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_ViewQuestEnemyInfoMaster__ViewQuestEnemyInfoEntity__int___ctor__);
    byte_439127F = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    78,
    (const MethodInfo_21FB7F8 *)Method_DataMasterBase_ViewQuestEnemyInfoMaster__ViewQuestEnemyInfoEntity__int___ctor__);
}