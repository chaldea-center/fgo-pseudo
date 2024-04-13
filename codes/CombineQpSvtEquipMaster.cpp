void __fastcall CombineQpSvtEquipMaster___ctor(CombineQpSvtEquipMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E9A06 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_CombineQpSvtEquipMaster__CombineQpSvtEquipEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42E9A06 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    113,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_CombineQpSvtEquipMaster__CombineQpSvtEquipEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
CombineQpSvtEquipEntity_o *__fastcall CombineQpSvtEquipMaster__GetEntity(
        CombineQpSvtEquipMaster_o *this,
        int32_t rarity,
        int32_t lv,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42E9A04 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_CombineQpSvtEquipMaster__CombineQpSvtEquipEntity__string__GetEntity__,
      rarity,
      lv,
      method);
    byte_42E9A04 = 1;
  }
  PK = CombineQpSvtEquipEntity__CreatePK(rarity, lv, *(const MethodInfo **)&lv);
  return (CombineQpSvtEquipEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                        (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                        PK,
                                        (const MethodInfo_23FB260 *)Method_DataMasterBase_CombineQpSvtEquipMaster__CombineQpSvtEquipEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CombineQpSvtEquipMaster__TryGetEntity(
        CombineQpSvtEquipMaster_o *this,
        CombineQpSvtEquipEntity_o **entity,
        int32_t rarity,
        int32_t lv,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42E9A05 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_CombineQpSvtEquipMaster__CombineQpSvtEquipEntity__string__TryGetEntity__,
      (_DWORD)entity,
      rarity,
      *(_QWORD *)&lv);
    byte_42E9A05 = 1;
  }
  PK = CombineQpSvtEquipEntity__CreatePK(rarity, lv, *(const MethodInfo **)&rarity);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_CombineQpSvtEquipMaster__CombineQpSvtEquipEntity__string__TryGetEntity__);
}