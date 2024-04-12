void __fastcall NpcServantEquipMaster___ctor(NpcServantEquipMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42ADB01 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_NpcServantEquipMaster__NpcServantEquipEntity__long___ctor__);
    byte_42ADB01 = 1;
  }
  DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long____ctor(
    (DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long__o *)this,
    263,
    (const MethodInfo_23E2464 *)Method_DataMasterBase_NpcServantEquipMaster__NpcServantEquipEntity__long___ctor__);
}