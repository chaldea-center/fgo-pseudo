void __fastcall CombineLimitMaster___ctor(CombineLimitMaster_o *this, const MethodInfo *method)
{
  if ( (byte_41861DD & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_CombineLimitMaster__CombineLimitEntity__string___ctor__, method);
    byte_41861DD = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    110,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_CombineLimitMaster__CombineLimitEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
CombineLimitEntity_o *__fastcall CombineLimitMaster__GetEntity(
        CombineLimitMaster_o *this,
        int32_t id,
        int32_t svtLimit,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_41861DB & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_CombineLimitMaster__CombineLimitEntity__string__GetEntity__, *(_QWORD *)&id);
    byte_41861DB = 1;
  }
  PK = CombineLimitEntity__CreatePK(id, svtLimit, *(const MethodInfo **)&svtLimit);
  return (CombineLimitEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                   (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                   PK,
                                   (const MethodInfo_24E4520 *)Method_DataMasterBase_CombineLimitMaster__CombineLimitEntity__string__GetEntity__);
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

  if ( (byte_41861DC & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_CombineLimitMaster__CombineLimitEntity__string__TryGetEntity__, entity);
    byte_41861DC = 1;
  }
  PK = CombineLimitEntity__CreatePK(id, svtLimit, *(const MethodInfo **)&id);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_CombineLimitMaster__CombineLimitEntity__string__TryGetEntity__);
}