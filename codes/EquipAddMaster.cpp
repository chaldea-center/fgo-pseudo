void __fastcall EquipAddMaster___ctor(EquipAddMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1607E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_EquipAddMaster__EquipAddEntity__string___ctor__, method, v2);
    byte_4B1607E = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    405,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_EquipAddMaster__EquipAddEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EquipAddEntity_o *__fastcall EquipAddMaster__GetEntity(
        EquipAddMaster_o *this,
        int32_t id,
        int32_t equipId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B1607F & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_EquipAddMaster__EquipAddEntity__string__GetEntity__,
      *(_QWORD *)&id,
      *(_QWORD *)&equipId);
    byte_4B1607F = 1;
  }
  PK = (Il2CppObject *)EquipAddEntity__CreatePK(id, equipId, *(const MethodInfo **)&equipId);
  return (EquipAddEntity_o *)DataMasterBase_object__object__object___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                               PK,
                               (const MethodInfo_31B3198 *)Method_DataMasterBase_EquipAddMaster__EquipAddEntity__string__GetEntity__);
}