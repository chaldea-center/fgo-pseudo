void CombineQpSvtEquipMaster___ctor(CombineQpSvtEquipMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5938434 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_CombineQpSvtEquipMaster__CombineQpSvtEquipEntity__string___ctor__);
    byte_5938434 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    119,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_CombineQpSvtEquipMaster__CombineQpSvtEquipEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
CombineQpSvtEquipEntity_o *CombineQpSvtEquipMaster__GetEntity(
        CombineQpSvtEquipMaster_o *this,
        int32_t rarity,
        int32_t lv,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_5938432 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_CombineQpSvtEquipMaster__CombineQpSvtEquipEntity__string__GetEntity__);
    byte_5938432 = 1;
  }
  PK = (Il2CppObject *)CombineQpSvtEquipEntity__CreatePK(rarity, lv, *(const MethodInfo **)&lv);
  return (CombineQpSvtEquipEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                        PK,
                                        (const MethodInfo_3EE2044 *)Method_DataMasterBase_CombineQpSvtEquipMaster__CombineQpSvtEquipEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool CombineQpSvtEquipMaster__TryGetEntity(
        CombineQpSvtEquipMaster_o *this,
        CombineQpSvtEquipEntity_o **entity,
        int32_t rarity,
        int32_t lv,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_5938433 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_CombineQpSvtEquipMaster__CombineQpSvtEquipEntity__string__TryGetEntity__);
    byte_5938433 = 1;
  }
  PK = (Il2CppObject *)CombineQpSvtEquipEntity__CreatePK(rarity, lv, *(const MethodInfo **)&rarity);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_CombineQpSvtEquipMaster__CombineQpSvtEquipEntity__string__TryGetEntity__);
}