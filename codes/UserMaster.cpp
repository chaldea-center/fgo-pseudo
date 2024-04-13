void __fastcall UserMaster___ctor(UserMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E7199 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_UserMaster__UserEntity__long___ctor__, (_DWORD)method, v2, v3);
    byte_42E7199 = 1;
  }
  DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long____ctor(
    (DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long__o *)this,
    27,
    (const MethodInfo_23FAF9C *)Method_DataMasterBase_UserMaster__UserEntity__long___ctor__);
}