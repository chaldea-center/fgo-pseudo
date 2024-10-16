void __fastcall CombineQpMaster___ctor(CombineQpMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4AB5B28 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataMasterBase_CombineQpMaster__CombineQpEntity__string___ctor__, method);
    byte_4AB5B28 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    84,
    (const MethodInfo_31640A8 *)Method_DataMasterBase_CombineQpMaster__CombineQpEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
CombineQpEntity_o *__fastcall CombineQpMaster__GetEntity(
        CombineQpMaster_o *this,
        int32_t rarity,
        int32_t lv,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4AB5B26 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataMasterBase_CombineQpMaster__CombineQpEntity__string__GetEntity__, *(_QWORD *)&rarity);
    byte_4AB5B26 = 1;
  }
  PK = (Il2CppObject *)CombineQpEntity__CreatePK(rarity, lv, *(const MethodInfo **)&lv);
  return (CombineQpEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                PK,
                                (const MethodInfo_31640E8 *)Method_DataMasterBase_CombineQpMaster__CombineQpEntity__string__GetEntity__);
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

  if ( (byte_4AB5B27 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataMasterBase_CombineQpMaster__CombineQpEntity__string__TryGetEntity__, entity);
    byte_4AB5B27 = 1;
  }
  PK = (Il2CppObject *)CombineQpEntity__CreatePK(rarity, lv, *(const MethodInfo **)&rarity);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3164138 *)Method_DataMasterBase_CombineQpMaster__CombineQpEntity__string__TryGetEntity__);
}