void __fastcall CombineQpMaster___ctor(CombineQpMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BC786F & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_CombineQpMaster__CombineQpEntity__string___ctor__, method);
    byte_4BC786F = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    88,
    (const MethodInfo_324AE0C *)Method_DataMasterBase_CombineQpMaster__CombineQpEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
CombineQpEntity_o *__fastcall CombineQpMaster__GetEntity(
        CombineQpMaster_o *this,
        int32_t rarity,
        int32_t lv,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4BC786D & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_CombineQpMaster__CombineQpEntity__string__GetEntity__, *(_QWORD *)&rarity);
    byte_4BC786D = 1;
  }
  PK = (Il2CppObject *)CombineQpEntity__CreatePK(rarity, lv, *(const MethodInfo **)&lv);
  return (CombineQpEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                PK,
                                (const MethodInfo_324D130 *)Method_DataMasterBase_CombineQpMaster__CombineQpEntity__string__GetEntity__);
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

  if ( (byte_4BC786E & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_CombineQpMaster__CombineQpEntity__string__TryGetEntity__, entity);
    byte_4BC786E = 1;
  }
  PK = (Il2CppObject *)CombineQpEntity__CreatePK(rarity, lv, *(const MethodInfo **)&rarity);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_324D17C *)Method_DataMasterBase_CombineQpMaster__CombineQpEntity__string__TryGetEntity__);
}