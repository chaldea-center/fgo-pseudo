void __fastcall UserFormationMaster___ctor(UserFormationMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42AEF09 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_UserFormationMaster__UserFormationEntity__long___ctor__);
    byte_42AEF09 = 1;
  }
  DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long____ctor(
    (DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long__o *)this,
    50,
    (const MethodInfo_23E2464 *)Method_DataMasterBase_UserFormationMaster__UserFormationEntity__long___ctor__);
}