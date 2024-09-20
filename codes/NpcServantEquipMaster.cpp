void __fastcall NpcServantEquipMaster___ctor(NpcServantEquipMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B53B & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_NpcServantEquipMaster__NpcServantEquipEntity__long___ctor__);
    byte_4A5B53B = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    264,
    (const MethodInfo_311DAA0 *)Method_DataMasterBase_NpcServantEquipMaster__NpcServantEquipEntity__long___ctor__);
}