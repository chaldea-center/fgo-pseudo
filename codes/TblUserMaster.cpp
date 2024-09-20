void __fastcall TblUserMaster___ctor(TblUserMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5BC7B & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_TblUserMaster__TblUserEntity__long___ctor__);
    byte_4A5BC7B = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    42,
    (const MethodInfo_311DAA0 *)Method_DataMasterBase_TblUserMaster__TblUserEntity__long___ctor__);
}


TblUserEntity_o *__fastcall TblUserMaster__getUserData(TblUserMaster_o *this, int64_t userId, const MethodInfo *method)
{
  if ( (byte_4A5BC7C & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_TblUserMaster__TblUserEntity__long__GetEntity__);
    byte_4A5BC7C = 1;
  }
  return (TblUserEntity_o *)DataMasterBase_object__object__long___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                              userId,
                              (const MethodInfo_311DAE0 *)Method_DataMasterBase_TblUserMaster__TblUserEntity__long__GetEntity__);
}