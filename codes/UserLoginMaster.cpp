void __fastcall UserLoginMaster___ctor(UserLoginMaster_o *this, const MethodInfo *method)
{
  if ( (byte_421377C & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_UserLoginMaster__UserLoginEntity__long___ctor__, method);
    byte_421377C = 1;
  }
  DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long____ctor(
    (DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long__o *)this,
    129,
    (const MethodInfo_2669D60 *)Method_DataMasterBase_UserLoginMaster__UserLoginEntity__long___ctor__);
}