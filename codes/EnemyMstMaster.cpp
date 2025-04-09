void __fastcall EnemyMstMaster___ctor(EnemyMstMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49BACE7 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_EnemyMstMaster__EnemyMstEntity__int___ctor__, method);
    byte_49BACE7 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    250,
    (const MethodInfo_319B678 *)Method_DataMasterBase_EnemyMstMaster__EnemyMstEntity__int___ctor__);
}