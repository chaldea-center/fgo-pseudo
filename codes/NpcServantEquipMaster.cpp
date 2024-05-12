void __fastcall NpcServantEquipMaster___ctor(NpcServantEquipMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438A23C & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_NpcServantEquipMaster__NpcServantEquipEntity__long___ctor__);
    byte_438A23C = 1;
  }
  DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long____ctor(
    (DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long__o *)this,
    263,
    (const MethodInfo_21FBA20 *)Method_DataMasterBase_NpcServantEquipMaster__NpcServantEquipEntity__long___ctor__);
}