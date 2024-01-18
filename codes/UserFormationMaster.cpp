void __fastcall UserFormationMaster___ctor(UserFormationMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4186FAC & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_UserFormationMaster__UserFormationEntity__long___ctor__, method);
    byte_4186FAC = 1;
  }
  DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long____ctor(
    (DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long__o *)this,
    49,
    (const MethodInfo_24E425C *)Method_DataMasterBase_UserFormationMaster__UserFormationEntity__long___ctor__);
}