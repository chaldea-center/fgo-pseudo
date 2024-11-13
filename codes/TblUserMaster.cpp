void __fastcall TblUserMaster___ctor(TblUserMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16D30 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_TblUserMaster__TblUserEntity__long___ctor__, method, v2);
    byte_4B16D30 = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    42,
    (const MethodInfo_31B2FAC *)Method_DataMasterBase_TblUserMaster__TblUserEntity__long___ctor__);
}


TblUserEntity_o *__fastcall TblUserMaster__getUserData(TblUserMaster_o *this, int64_t userId, const MethodInfo *method)
{
  if ( (byte_4B16D31 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_TblUserMaster__TblUserEntity__long__GetEntity__, userId, method);
    byte_4B16D31 = 1;
  }
  return (TblUserEntity_o *)DataMasterBase_object__object__long___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                              userId,
                              (const MethodInfo_31B2FEC *)Method_DataMasterBase_TblUserMaster__TblUserEntity__long__GetEntity__);
}