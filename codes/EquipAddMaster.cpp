void EquipAddMaster___ctor(EquipAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CC7263 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_EquipAddMaster__EquipAddEntity__string___ctor__);
    byte_4CC7263 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    411,
    (const MethodInfo_340B614 *)Method_DataMasterBase_EquipAddMaster__EquipAddEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EquipAddEntity_o *EquipAddMaster__GetEntity(
        EquipAddMaster_o *this,
        int32_t id,
        int32_t equipId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4CC7264 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_EquipAddMaster__EquipAddEntity__string__GetEntity__);
    byte_4CC7264 = 1;
  }
  PK = (Il2CppObject *)EquipAddEntity__CreatePK(id, equipId, *(const MethodInfo **)&equipId);
  return (EquipAddEntity_o *)DataMasterBase_object__object__object___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                               PK,
                               (const MethodInfo_340D938 *)Method_DataMasterBase_EquipAddMaster__EquipAddEntity__string__GetEntity__);
}