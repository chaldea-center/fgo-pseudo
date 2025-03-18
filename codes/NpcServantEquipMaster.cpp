void __fastcall NpcServantEquipMaster___ctor(NpcServantEquipMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C2237D & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_NpcServantEquipMaster__NpcServantEquipEntity__long___ctor__, method);
    byte_4C2237D = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    270,
    (const MethodInfo_329B080 *)Method_DataMasterBase_NpcServantEquipMaster__NpcServantEquipEntity__long___ctor__);
}