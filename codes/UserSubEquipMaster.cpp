void __fastcall UserSubEquipMaster___ctor(UserSubEquipMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4357BD0 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long___ctor__);
    byte_4357BD0 = 1;
  }
  DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long____ctor(
    (DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long__o *)this,
    40,
    (const MethodInfo_21C05CC *)Method_DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long___ctor__);
}