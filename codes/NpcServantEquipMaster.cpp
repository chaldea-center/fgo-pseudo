void __fastcall NpcServantEquipMaster___ctor(NpcServantEquipMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FEEF6 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataMasterBase_NpcServantEquipMaster__NpcServantEquipEntity__long___ctor__, method);
    byte_49FEEF6 = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    264,
    (const MethodInfo_30D6904 *)Method_DataMasterBase_NpcServantEquipMaster__NpcServantEquipEntity__long___ctor__);
}