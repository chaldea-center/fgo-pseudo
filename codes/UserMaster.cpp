void __fastcall UserMaster___ctor(UserMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4389D89 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_UserMaster__UserEntity__long___ctor__);
    byte_4389D89 = 1;
  }
  DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long____ctor(
    (DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long__o *)this,
    27,
    (const MethodInfo_21FBA20 *)Method_DataMasterBase_UserMaster__UserEntity__long___ctor__);
}