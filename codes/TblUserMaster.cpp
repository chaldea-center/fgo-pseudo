void __fastcall TblUserMaster___ctor(TblUserMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418454F & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_TblUserMaster__TblUserEntity__long___ctor__, method);
    byte_418454F = 1;
  }
  DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long____ctor(
    (DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long__o *)this,
    40,
    (const MethodInfo_24E425C *)Method_DataMasterBase_TblUserMaster__TblUserEntity__long___ctor__);
}


TblUserEntity_o *__fastcall TblUserMaster__getUserData(TblUserMaster_o *this, int64_t userId, const MethodInfo *method)
{
  if ( (byte_4184550 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_TblUserMaster__TblUserEntity__long__GetEntity__, userId);
    byte_4184550 = 1;
  }
  return (TblUserEntity_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                              (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this,
                              userId,
                              (const MethodInfo_24E42F8 *)Method_DataMasterBase_TblUserMaster__TblUserEntity__long__GetEntity__);
}