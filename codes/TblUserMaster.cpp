void __fastcall TblUserMaster___ctor(TblUserMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C22B26 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_TblUserMaster__TblUserEntity__long___ctor__, method);
    byte_4C22B26 = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    46,
    (const MethodInfo_329B080 *)Method_DataMasterBase_TblUserMaster__TblUserEntity__long___ctor__);
}


TblUserEntity_o *__fastcall TblUserMaster__getUserData(TblUserMaster_o *this, int64_t userId, const MethodInfo *method)
{
  if ( (byte_4C22B27 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_TblUserMaster__TblUserEntity__long__GetEntity__, userId);
    byte_4C22B27 = 1;
  }
  return (TblUserEntity_o *)DataMasterBase_object__object__long___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                              userId,
                              (const MethodInfo_329D3A4 *)Method_DataMasterBase_TblUserMaster__TblUserEntity__long__GetEntity__);
}