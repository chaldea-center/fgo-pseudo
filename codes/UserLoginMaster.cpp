void __fastcall UserLoginMaster___ctor(UserLoginMaster_o *this, const MethodInfo *method)
{
  if ( (byte_435075F & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_UserLoginMaster__UserLoginEntity__long___ctor__);
    byte_435075F = 1;
  }
  DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long____ctor(
    (DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long__o *)this,
    130,
    (const MethodInfo_21C05CC *)Method_DataMasterBase_UserLoginMaster__UserLoginEntity__long___ctor__);
}