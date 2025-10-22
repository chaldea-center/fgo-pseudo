void TblUserMaster___ctor(TblUserMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C57A1E & 1) == 0 )
  {
    sub_1C3E564(&Method_DataMasterBase_TblUserMaster__TblUserEntity__long___ctor__);
    byte_4C57A1E = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    46,
    (const MethodInfo_33B3190 *)Method_DataMasterBase_TblUserMaster__TblUserEntity__long___ctor__);
}


TblUserEntity_o *TblUserMaster__getUserData(TblUserMaster_o *this, int64_t userId, const MethodInfo *method)
{
  if ( (byte_4C57A1F & 1) == 0 )
  {
    sub_1C3E564(&Method_DataMasterBase_TblUserMaster__TblUserEntity__long__GetEntity__);
    byte_4C57A1F = 1;
  }
  return (TblUserEntity_o *)DataMasterBase_object__object__long___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                              userId,
                              (const MethodInfo_33B54B4 *)Method_DataMasterBase_TblUserMaster__TblUserEntity__long__GetEntity__);
}