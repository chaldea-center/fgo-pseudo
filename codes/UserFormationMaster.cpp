void __fastcall UserFormationMaster___ctor(UserFormationMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42136ED & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_UserFormationMaster__UserFormationEntity__long___ctor__, method);
    byte_42136ED = 1;
  }
  DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long____ctor(
    (DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long__o *)this,
    49,
    (const MethodInfo_2669D60 *)Method_DataMasterBase_UserFormationMaster__UserFormationEntity__long___ctor__);
}