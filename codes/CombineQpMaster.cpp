void __fastcall CombineQpMaster___ctor(CombineQpMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B66989 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_CombineQpMaster__CombineQpEntity__string___ctor__, method);
    byte_4B66989 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    88,
    (const MethodInfo_31FDADC *)Method_DataMasterBase_CombineQpMaster__CombineQpEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
CombineQpEntity_o *__fastcall CombineQpMaster__GetEntity(
        CombineQpMaster_o *this,
        int32_t rarity,
        int32_t lv,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B66987 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_CombineQpMaster__CombineQpEntity__string__GetEntity__, *(_QWORD *)&rarity);
    byte_4B66987 = 1;
  }
  PK = (Il2CppObject *)CombineQpEntity__CreatePK(rarity, lv, *(const MethodInfo **)&lv);
  return (CombineQpEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                PK,
                                (const MethodInfo_31FDB1C *)Method_DataMasterBase_CombineQpMaster__CombineQpEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CombineQpMaster__TryGetEntity(
        CombineQpMaster_o *this,
        CombineQpEntity_o **entity,
        int32_t rarity,
        int32_t lv,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B66988 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_CombineQpMaster__CombineQpEntity__string__TryGetEntity__, entity);
    byte_4B66988 = 1;
  }
  PK = (Il2CppObject *)CombineQpEntity__CreatePK(rarity, lv, *(const MethodInfo **)&rarity);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31FDB6C *)Method_DataMasterBase_CombineQpMaster__CombineQpEntity__string__TryGetEntity__);
}