void __fastcall NpcServantFollowerIndividualityMaster___ctor(
        NpcServantFollowerIndividualityMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_49FFBC3 & 1) == 0 )
  {
    sub_1B64A00(
      &Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long___ctor__,
      method);
    byte_49FFBC3 = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    457,
    (const MethodInfo_30D6904 *)Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long___ctor__);
}