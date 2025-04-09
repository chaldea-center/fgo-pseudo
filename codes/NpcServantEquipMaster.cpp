void __fastcall NpcServantEquipMaster___ctor(NpcServantEquipMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49BB2A7 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_NpcServantEquipMaster__NpcServantEquipEntity__long___ctor__, method);
    byte_49BB2A7 = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    270,
    (const MethodInfo_319DBD4 *)Method_DataMasterBase_NpcServantEquipMaster__NpcServantEquipEntity__long___ctor__);
}