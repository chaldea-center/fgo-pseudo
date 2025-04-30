void __fastcall TblUserMaster___ctor(TblUserMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A4F0C3 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataMasterBase_TblUserMaster__TblUserEntity__long___ctor__, method);
    byte_4A4F0C3 = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    46,
    (const MethodInfo_32144B8 *)Method_DataMasterBase_TblUserMaster__TblUserEntity__long___ctor__);
}


TblUserEntity_o *__fastcall TblUserMaster__getUserData(TblUserMaster_o *this, int64_t userId, const MethodInfo *method)
{
  if ( (byte_4A4F0C4 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataMasterBase_TblUserMaster__TblUserEntity__long__GetEntity__, userId);
    byte_4A4F0C4 = 1;
  }
  return (TblUserEntity_o *)DataMasterBase_object__object__long___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                              userId,
                              (const MethodInfo_32167DC *)Method_DataMasterBase_TblUserMaster__TblUserEntity__long__GetEntity__);
}