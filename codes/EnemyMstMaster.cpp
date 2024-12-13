void __fastcall EnemyMstMaster___ctor(EnemyMstMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B37026 & 1) == 0 )
  {
    sub_1BD3458(&Method_DataMasterBase_EnemyMstMaster__EnemyMstEntity__int___ctor__, method);
    byte_4B37026 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    244,
    (const MethodInfo_31D1EB0 *)Method_DataMasterBase_EnemyMstMaster__EnemyMstEntity__int___ctor__);
}