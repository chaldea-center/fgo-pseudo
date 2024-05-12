void __fastcall UserFormationMaster___ctor(UserFormationMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4389CF0 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_UserFormationMaster__UserFormationEntity__long___ctor__);
    byte_4389CF0 = 1;
  }
  DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long____ctor(
    (DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long__o *)this,
    50,
    (const MethodInfo_21FBA20 *)Method_DataMasterBase_UserFormationMaster__UserFormationEntity__long___ctor__);
}