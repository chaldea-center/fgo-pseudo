void __fastcall UserFormationMaster___ctor(UserFormationMaster_o *this, const MethodInfo *method)
{
  if ( (byte_43506C7 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_UserFormationMaster__UserFormationEntity__long___ctor__);
    byte_43506C7 = 1;
  }
  DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long____ctor(
    (DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long__o *)this,
    50,
    (const MethodInfo_21C05CC *)Method_DataMasterBase_UserFormationMaster__UserFormationEntity__long___ctor__);
}