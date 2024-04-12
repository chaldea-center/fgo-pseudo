void __fastcall TblUserMaster___ctor(TblUserMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42AD00F & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_TblUserMaster__TblUserEntity__long___ctor__);
    byte_42AD00F = 1;
  }
  DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long____ctor(
    (DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long__o *)this,
    41,
    (const MethodInfo_23E2464 *)Method_DataMasterBase_TblUserMaster__TblUserEntity__long___ctor__);
}


TblUserEntity_o *__fastcall TblUserMaster__getUserData(TblUserMaster_o *this, int64_t userId, const MethodInfo *method)
{
  if ( (byte_42AD010 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_TblUserMaster__TblUserEntity__long__GetEntity__);
    byte_42AD010 = 1;
  }
  return (TblUserEntity_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                              (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this,
                              userId,
                              (const MethodInfo_23E2500 *)Method_DataMasterBase_TblUserMaster__TblUserEntity__long__GetEntity__);
}