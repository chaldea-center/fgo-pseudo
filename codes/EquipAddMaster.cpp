void __fastcall EquipAddMaster___ctor(EquipAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BC792A & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_EquipAddMaster__EquipAddEntity__string___ctor__, method);
    byte_4BC792A = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    409,
    (const MethodInfo_324AE0C *)Method_DataMasterBase_EquipAddMaster__EquipAddEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EquipAddEntity_o *__fastcall EquipAddMaster__GetEntity(
        EquipAddMaster_o *this,
        int32_t id,
        int32_t equipId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4BC792B & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_EquipAddMaster__EquipAddEntity__string__GetEntity__, *(_QWORD *)&id);
    byte_4BC792B = 1;
  }
  PK = (Il2CppObject *)EquipAddEntity__CreatePK(id, equipId, *(const MethodInfo **)&equipId);
  return (EquipAddEntity_o *)DataMasterBase_object__object__object___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                               PK,
                               (const MethodInfo_324D130 *)Method_DataMasterBase_EquipAddMaster__EquipAddEntity__string__GetEntity__);
}