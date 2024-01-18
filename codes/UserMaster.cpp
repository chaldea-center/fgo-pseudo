void __fastcall UserMaster___ctor(UserMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4187037 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_UserMaster__UserEntity__long___ctor__, method);
    byte_4187037 = 1;
  }
  DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long____ctor(
    (DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long__o *)this,
    26,
    (const MethodInfo_24E425C *)Method_DataMasterBase_UserMaster__UserEntity__long___ctor__);
}