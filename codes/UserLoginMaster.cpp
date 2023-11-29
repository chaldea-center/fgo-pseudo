void __fastcall UserLoginMaster___ctor(UserLoginMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40F9740 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_UserLoginMaster__UserLoginEntity__long___ctor__, method);
    byte_40F9740 = 1;
  }
  DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long____ctor(
    (DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long__o *)this,
    129,
    (const MethodInfo_266F514 *)Method_DataMasterBase_UserLoginMaster__UserLoginEntity__long___ctor__);
}