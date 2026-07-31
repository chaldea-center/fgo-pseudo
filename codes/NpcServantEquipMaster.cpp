void NpcServantEquipMaster___ctor(NpcServantEquipMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5938C64 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_NpcServantEquipMaster__NpcServantEquipEntity__long___ctor__);
    byte_5938C64 = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    272,
    (const MethodInfo_3EDD598 *)Method_DataMasterBase_NpcServantEquipMaster__NpcServantEquipEntity__long___ctor__);
}