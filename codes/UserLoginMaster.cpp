void __fastcall UserLoginMaster___ctor(UserLoginMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4187036 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_UserLoginMaster__UserLoginEntity__long___ctor__, method);
    byte_4187036 = 1;
  }
  DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long____ctor(
    (DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long__o *)this,
    129,
    (const MethodInfo_24E425C *)Method_DataMasterBase_UserLoginMaster__UserLoginEntity__long___ctor__);
}