void __fastcall UserMaster___ctor(UserMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40F9741 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_UserMaster__UserEntity__long___ctor__, method);
    byte_40F9741 = 1;
  }
  DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long____ctor(
    (DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long__o *)this,
    26,
    (const MethodInfo_266F514 *)Method_DataMasterBase_UserMaster__UserEntity__long___ctor__);
}