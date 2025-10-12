void EnemyMstMaster___ctor(EnemyMstMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C37830 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_EnemyMstMaster__EnemyMstEntity__int___ctor__);
    byte_4C37830 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    250,
    (const MethodInfo_3394514 *)Method_DataMasterBase_EnemyMstMaster__EnemyMstEntity__int___ctor__);
}