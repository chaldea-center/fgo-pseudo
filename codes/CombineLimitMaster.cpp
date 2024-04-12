void __fastcall CombineLimitMaster___ctor(CombineLimitMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B2C13 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_CombineLimitMaster__CombineLimitEntity__string___ctor__);
    byte_42B2C13 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    111,
    (const MethodInfo_23E268C *)Method_DataMasterBase_CombineLimitMaster__CombineLimitEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
CombineLimitEntity_o *__fastcall CombineLimitMaster__GetEntity(
        CombineLimitMaster_o *this,
        int32_t id,
        int32_t svtLimit,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42B2C11 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_CombineLimitMaster__CombineLimitEntity__string__GetEntity__);
    byte_42B2C11 = 1;
  }
  PK = CombineLimitEntity__CreatePK(id, svtLimit, *(const MethodInfo **)&svtLimit);
  return (CombineLimitEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                   (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                   PK,
                                   (const MethodInfo_23E2728 *)Method_DataMasterBase_CombineLimitMaster__CombineLimitEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CombineLimitMaster__TryGetEntity(
        CombineLimitMaster_o *this,
        CombineLimitEntity_o **entity,
        int32_t id,
        int32_t svtLimit,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42B2C12 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_CombineLimitMaster__CombineLimitEntity__string__TryGetEntity__);
    byte_42B2C12 = 1;
  }
  PK = CombineLimitEntity__CreatePK(id, svtLimit, *(const MethodInfo **)&id);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_CombineLimitMaster__CombineLimitEntity__string__TryGetEntity__);
}