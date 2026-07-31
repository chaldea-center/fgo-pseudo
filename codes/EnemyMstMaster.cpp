void EnemyMstMaster___ctor(EnemyMstMaster_o *this, const MethodInfo *method)
{
  if ( (byte_59384F0 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_EnemyMstMaster__EnemyMstEntity__int___ctor__);
    byte_59384F0 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    252,
    (const MethodInfo_3EDAF38 *)Method_DataMasterBase_EnemyMstMaster__EnemyMstEntity__int___ctor__);
}