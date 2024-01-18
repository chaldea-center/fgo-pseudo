void __fastcall CombineMaterialMaster___ctor(CombineMaterialMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4186212 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_CombineMaterialMaster__CombineMaterialEntity__string___ctor__, method);
    byte_4186212 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    83,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_CombineMaterialMaster__CombineMaterialEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
CombineMaterialEntity_o *__fastcall CombineMaterialMaster__GetEntity(
        CombineMaterialMaster_o *this,
        int32_t id,
        int32_t lv,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_4186210 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_CombineMaterialMaster__CombineMaterialEntity__string__GetEntity__, *(_QWORD *)&id);
    byte_4186210 = 1;
  }
  PK = CombineMaterialEntity__CreatePK(id, lv, *(const MethodInfo **)&lv);
  return (CombineMaterialEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                      (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                      PK,
                                      (const MethodInfo_24E4520 *)Method_DataMasterBase_CombineMaterialMaster__CombineMaterialEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CombineMaterialMaster__TryGetEntity(
        CombineMaterialMaster_o *this,
        CombineMaterialEntity_o **entity,
        int32_t id,
        int32_t lv,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_4186211 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_CombineMaterialMaster__CombineMaterialEntity__string__TryGetEntity__, entity);
    byte_4186211 = 1;
  }
  PK = CombineMaterialEntity__CreatePK(id, lv, *(const MethodInfo **)&id);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_CombineMaterialMaster__CombineMaterialEntity__string__TryGetEntity__);
}