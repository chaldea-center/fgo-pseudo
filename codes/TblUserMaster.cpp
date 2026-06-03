void TblUserMaster___ctor(TblUserMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4E78383 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataMasterBase_TblUserMaster__TblUserEntity__long___ctor__);
    byte_4E78383 = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    46,
    (const MethodInfo_3535DB4 *)Method_DataMasterBase_TblUserMaster__TblUserEntity__long___ctor__);
}


TblUserEntity_o *TblUserMaster__getUserData(TblUserMaster_o *this, int64_t userId, const MethodInfo *method)
{
  if ( (byte_4E78384 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataMasterBase_TblUserMaster__TblUserEntity__long__GetEntity__);
    byte_4E78384 = 1;
  }
  return (TblUserEntity_o *)DataMasterBase_object__object__long___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                              userId,
                              (const MethodInfo_353832C *)Method_DataMasterBase_TblUserMaster__TblUserEntity__long__GetEntity__);
}