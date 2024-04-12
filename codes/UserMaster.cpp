void __fastcall UserMaster___ctor(UserMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42AEF99 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_UserMaster__UserEntity__long___ctor__);
    byte_42AEF99 = 1;
  }
  DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long____ctor(
    (DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long__o *)this,
    27,
    (const MethodInfo_23E2464 *)Method_DataMasterBase_UserMaster__UserEntity__long___ctor__);
}