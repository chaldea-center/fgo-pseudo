void __fastcall CombineLimitMaster___ctor(CombineLimitMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5AF27 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_CombineLimitMaster__CombineLimitEntity__string___ctor__);
    byte_4A5AF27 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    112,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_CombineLimitMaster__CombineLimitEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
CombineLimitEntity_o *__fastcall CombineLimitMaster__GetEntity(
        CombineLimitMaster_o *this,
        int32_t id,
        int32_t svtLimit,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5AF25 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_CombineLimitMaster__CombineLimitEntity__string__GetEntity__);
    byte_4A5AF25 = 1;
  }
  PK = (Il2CppObject *)CombineLimitEntity__CreatePK(id, svtLimit, *(const MethodInfo **)&svtLimit);
  return (CombineLimitEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                   PK,
                                   (const MethodInfo_311DC8C *)Method_DataMasterBase_CombineLimitMaster__CombineLimitEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CombineLimitMaster__TryGetEntity(
        CombineLimitMaster_o *this,
        CombineLimitEntity_o **entity,
        int32_t id,
        int32_t svtLimit,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4A5AF26 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_CombineLimitMaster__CombineLimitEntity__string__TryGetEntity__);
    byte_4A5AF26 = 1;
  }
  PK = (Il2CppObject *)CombineLimitEntity__CreatePK(id, svtLimit, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_CombineLimitMaster__CombineLimitEntity__string__TryGetEntity__);
}