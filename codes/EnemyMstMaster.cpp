void __fastcall EnemyMstMaster___ctor(EnemyMstMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FE397 & 1) == 0 )
  {
    sub_1B64870(&Method_DataMasterBase_EnemyMstMaster__EnemyMstEntity__int___ctor__, method);
    byte_49FE397 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    244,
    (const MethodInfo_30D6140 *)Method_DataMasterBase_EnemyMstMaster__EnemyMstEntity__int___ctor__);
}