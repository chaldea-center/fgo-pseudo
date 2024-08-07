void __fastcall CombineMaterialMaster___ctor(CombineMaterialMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FE8FB & 1) == 0 )
  {
    sub_1B64A00(&Method_DataMasterBase_CombineMaterialMaster__CombineMaterialEntity__string___ctor__, method);
    byte_49FE8FB = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    85,
    (const MethodInfo_30D6AB0 *)Method_DataMasterBase_CombineMaterialMaster__CombineMaterialEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
CombineMaterialEntity_o *__fastcall CombineMaterialMaster__GetEntity(
        CombineMaterialMaster_o *this,
        int32_t id,
        int32_t lv,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_49FE8F9 & 1) == 0 )
  {
    sub_1B64A00(
      &Method_DataMasterBase_CombineMaterialMaster__CombineMaterialEntity__string__GetEntity__,
      *(_QWORD *)&id);
    byte_49FE8F9 = 1;
  }
  PK = (Il2CppObject *)CombineMaterialEntity__CreatePK(id, lv, *(const MethodInfo **)&lv);
  return (CombineMaterialEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      PK,
                                      (const MethodInfo_30D6AF0 *)Method_DataMasterBase_CombineMaterialMaster__CombineMaterialEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CombineMaterialMaster__TryGetEntity(
        CombineMaterialMaster_o *this,
        CombineMaterialEntity_o **entity,
        int32_t id,
        int32_t lv,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_49FE8FA & 1) == 0 )
  {
    sub_1B64A00(&Method_DataMasterBase_CombineMaterialMaster__CombineMaterialEntity__string__TryGetEntity__, entity);
    byte_49FE8FA = 1;
  }
  PK = (Il2CppObject *)CombineMaterialEntity__CreatePK(id, lv, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D6B40 *)Method_DataMasterBase_CombineMaterialMaster__CombineMaterialEntity__string__TryGetEntity__);
}