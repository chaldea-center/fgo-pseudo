void TblUserMaster___ctor(TblUserMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C3866D & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_TblUserMaster__TblUserEntity__long___ctor__);
    byte_4C3866D = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    46,
    (const MethodInfo_3396A70 *)Method_DataMasterBase_TblUserMaster__TblUserEntity__long___ctor__);
}


TblUserEntity_o *TblUserMaster__getUserData(TblUserMaster_o *this, int64_t userId, const MethodInfo *method)
{
  if ( (byte_4C3866E & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_TblUserMaster__TblUserEntity__long__GetEntity__);
    byte_4C3866E = 1;
  }
  return (TblUserEntity_o *)DataMasterBase_object__object__long___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                              userId,
                              (const MethodInfo_3398D94 *)Method_DataMasterBase_TblUserMaster__TblUserEntity__long__GetEntity__);
}