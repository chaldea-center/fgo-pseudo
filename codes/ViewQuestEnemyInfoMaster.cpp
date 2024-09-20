void __fastcall ViewQuestEnemyInfoMaster___ctor(ViewQuestEnemyInfoMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5C059 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_ViewQuestEnemyInfoMaster__ViewQuestEnemyInfoEntity__int___ctor__);
    byte_4A5C059 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    79,
    (const MethodInfo_311D8F4 *)Method_DataMasterBase_ViewQuestEnemyInfoMaster__ViewQuestEnemyInfoEntity__int___ctor__);
}