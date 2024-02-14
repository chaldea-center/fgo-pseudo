void __fastcall UserMaster___ctor(UserMaster_o *this, const MethodInfo *method)
{
  if ( (byte_421377D & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_UserMaster__UserEntity__long___ctor__, method);
    byte_421377D = 1;
  }
  DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long____ctor(
    (DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long__o *)this,
    26,
    (const MethodInfo_2669D60 *)Method_DataMasterBase_UserMaster__UserEntity__long___ctor__);
}