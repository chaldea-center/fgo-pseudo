void __fastcall UserSubEquipMaster___ctor(UserSubEquipMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418D283 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long___ctor__, method);
    byte_418D283 = 1;
  }
  DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long____ctor(
    (DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long__o *)this,
    39,
    (const MethodInfo_24E425C *)Method_DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long___ctor__);
}