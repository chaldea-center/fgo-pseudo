void __fastcall TblUserMaster___ctor(TblUserMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E5B48 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_TblUserMaster__TblUserEntity__long___ctor__, (_DWORD)method, v2, v3);
    byte_42E5B48 = 1;
  }
  DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long____ctor(
    (DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long__o *)this,
    41,
    (const MethodInfo_23FAF9C *)Method_DataMasterBase_TblUserMaster__TblUserEntity__long___ctor__);
}


TblUserEntity_o *__fastcall TblUserMaster__getUserData(TblUserMaster_o *this, int64_t userId, const MethodInfo *method)
{
  __int64 v3; // x3

  if ( (byte_42E5B49 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_TblUserMaster__TblUserEntity__long__GetEntity__, userId, (_DWORD)method, v3);
    byte_42E5B49 = 1;
  }
  return (TblUserEntity_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                              (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this,
                              userId,
                              (const MethodInfo_23FB038 *)Method_DataMasterBase_TblUserMaster__TblUserEntity__long__GetEntity__);
}