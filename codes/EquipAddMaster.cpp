void EquipAddMaster___ctor(EquipAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D2C6D8 & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_EquipAddMaster__EquipAddEntity__string___ctor__);
    byte_4D2C6D8 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    411,
    (const MethodInfo_345DC54 *)Method_DataMasterBase_EquipAddMaster__EquipAddEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EquipAddEntity_o *EquipAddMaster__GetEntity(
        EquipAddMaster_o *this,
        int32_t id,
        int32_t equipId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4D2C6D9 & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_EquipAddMaster__EquipAddEntity__string__GetEntity__);
    byte_4D2C6D9 = 1;
  }
  PK = (Il2CppObject *)EquipAddEntity__CreatePK(id, equipId, *(const MethodInfo **)&equipId);
  return (EquipAddEntity_o *)DataMasterBase_object__object__object___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                               PK,
                               (const MethodInfo_345FF78 *)Method_DataMasterBase_EquipAddMaster__EquipAddEntity__string__GetEntity__);
}