void __fastcall TblUserMaster___ctor(TblUserMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4AB687D & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataMasterBase_TblUserMaster__TblUserEntity__long___ctor__, method);
    byte_4AB687D = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    42,
    (const MethodInfo_3163EFC *)Method_DataMasterBase_TblUserMaster__TblUserEntity__long___ctor__);
}


TblUserEntity_o *__fastcall TblUserMaster__getUserData(TblUserMaster_o *this, int64_t userId, const MethodInfo *method)
{
  if ( (byte_4AB687E & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataMasterBase_TblUserMaster__TblUserEntity__long__GetEntity__, userId);
    byte_4AB687E = 1;
  }
  return (TblUserEntity_o *)DataMasterBase_object__object__long___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                              userId,
                              (const MethodInfo_3163F3C *)Method_DataMasterBase_TblUserMaster__TblUserEntity__long__GetEntity__);
}