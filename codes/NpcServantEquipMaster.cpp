void NpcServantEquipMaster___ctor(NpcServantEquipMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CC7971 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_NpcServantEquipMaster__NpcServantEquipEntity__long___ctor__);
    byte_4CC7971 = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    270,
    (const MethodInfo_34090B8 *)Method_DataMasterBase_NpcServantEquipMaster__NpcServantEquipEntity__long___ctor__);
}