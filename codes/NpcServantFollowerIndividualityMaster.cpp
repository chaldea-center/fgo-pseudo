void __fastcall NpcServantFollowerIndividualityMaster___ctor(
        NpcServantFollowerIndividualityMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B67CFC & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long___ctor__,
      method);
    byte_4B67CFC = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    461,
    (const MethodInfo_31FD930 *)Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long___ctor__);
}