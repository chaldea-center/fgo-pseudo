void EnemyMstMaster___ctor(EnemyMstMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C56BD1 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataMasterBase_EnemyMstMaster__EnemyMstEntity__int___ctor__);
    byte_4C56BD1 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    250,
    (const MethodInfo_33B0C34 *)Method_DataMasterBase_EnemyMstMaster__EnemyMstEntity__int___ctor__);
}