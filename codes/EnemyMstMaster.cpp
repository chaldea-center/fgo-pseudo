void __fastcall EnemyMstMaster___ctor(EnemyMstMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A1F962 & 1) == 0 )
  {
    sub_1B715CC(&Method_DataMasterBase_EnemyMstMaster__EnemyMstEntity__int___ctor__, method);
    byte_4A1F962 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    244,
    (const MethodInfo_30F8720 *)Method_DataMasterBase_EnemyMstMaster__EnemyMstEntity__int___ctor__);
}