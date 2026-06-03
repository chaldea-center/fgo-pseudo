void EnemyMstMaster___ctor(EnemyMstMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4E7751F & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataMasterBase_EnemyMstMaster__EnemyMstEntity__int___ctor__);
    byte_4E7751F = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    250,
    (const MethodInfo_3533604 *)Method_DataMasterBase_EnemyMstMaster__EnemyMstEntity__int___ctor__);
}