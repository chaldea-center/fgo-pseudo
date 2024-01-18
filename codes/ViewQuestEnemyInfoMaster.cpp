void __fastcall ViewQuestEnemyInfoMaster___ctor(ViewQuestEnemyInfoMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418D2B4 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_ViewQuestEnemyInfoMaster__ViewQuestEnemyInfoEntity__int___ctor__, method);
    byte_418D2B4 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    77,
    (const MethodInfo_24E4034 *)Method_DataMasterBase_ViewQuestEnemyInfoMaster__ViewQuestEnemyInfoEntity__int___ctor__);
}