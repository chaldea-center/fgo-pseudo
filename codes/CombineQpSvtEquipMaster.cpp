void __fastcall CombineQpSvtEquipMaster___ctor(CombineQpSvtEquipMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FE905 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataMasterBase_CombineQpSvtEquipMaster__CombineQpSvtEquipEntity__string___ctor__, method);
    byte_49FE905 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    114,
    (const MethodInfo_30D6AB0 *)Method_DataMasterBase_CombineQpSvtEquipMaster__CombineQpSvtEquipEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
CombineQpSvtEquipEntity_o *__fastcall CombineQpSvtEquipMaster__GetEntity(
        CombineQpSvtEquipMaster_o *this,
        int32_t rarity,
        int32_t lv,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_49FE903 & 1) == 0 )
  {
    sub_1B64A00(
      &Method_DataMasterBase_CombineQpSvtEquipMaster__CombineQpSvtEquipEntity__string__GetEntity__,
      *(_QWORD *)&rarity);
    byte_49FE903 = 1;
  }
  PK = (Il2CppObject *)CombineQpSvtEquipEntity__CreatePK(rarity, lv, *(const MethodInfo **)&lv);
  return (CombineQpSvtEquipEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                        PK,
                                        (const MethodInfo_30D6AF0 *)Method_DataMasterBase_CombineQpSvtEquipMaster__CombineQpSvtEquipEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CombineQpSvtEquipMaster__TryGetEntity(
        CombineQpSvtEquipMaster_o *this,
        CombineQpSvtEquipEntity_o **entity,
        int32_t rarity,
        int32_t lv,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_49FE904 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataMasterBase_CombineQpSvtEquipMaster__CombineQpSvtEquipEntity__string__TryGetEntity__, entity);
    byte_49FE904 = 1;
  }
  PK = (Il2CppObject *)CombineQpSvtEquipEntity__CreatePK(rarity, lv, *(const MethodInfo **)&rarity);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D6B40 *)Method_DataMasterBase_CombineQpSvtEquipMaster__CombineQpSvtEquipEntity__string__TryGetEntity__);
}