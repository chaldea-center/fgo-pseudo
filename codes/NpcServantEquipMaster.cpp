void __fastcall NpcServantEquipMaster___ctor(NpcServantEquipMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4185111 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_NpcServantEquipMaster__NpcServantEquipEntity__long___ctor__, method);
    byte_4185111 = 1;
  }
  DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long____ctor(
    (DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long__o *)this,
    262,
    (const MethodInfo_24E425C *)Method_DataMasterBase_NpcServantEquipMaster__NpcServantEquipEntity__long___ctor__);
}