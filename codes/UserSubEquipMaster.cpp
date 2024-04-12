void __fastcall UserSubEquipMaster___ctor(UserSubEquipMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B5E55 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long___ctor__);
    byte_42B5E55 = 1;
  }
  DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long____ctor(
    (DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long__o *)this,
    40,
    (const MethodInfo_23E2464 *)Method_DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long___ctor__);
}