void __fastcall CombineQpMaster___ctor(CombineQpMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4186220 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_CombineQpMaster__CombineQpEntity__string___ctor__, method);
    byte_4186220 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    82,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_CombineQpMaster__CombineQpEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
CombineQpEntity_o *__fastcall CombineQpMaster__GetEntity(
        CombineQpMaster_o *this,
        int32_t rarity,
        int32_t lv,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_418621E & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_CombineQpMaster__CombineQpEntity__string__GetEntity__, *(_QWORD *)&rarity);
    byte_418621E = 1;
  }
  PK = CombineQpEntity__CreatePK(rarity, lv, *(const MethodInfo **)&lv);
  return (CombineQpEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                PK,
                                (const MethodInfo_24E4520 *)Method_DataMasterBase_CombineQpMaster__CombineQpEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CombineQpMaster__TryGetEntity(
        CombineQpMaster_o *this,
        CombineQpEntity_o **entity,
        int32_t rarity,
        int32_t lv,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_418621F & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_CombineQpMaster__CombineQpEntity__string__TryGetEntity__, entity);
    byte_418621F = 1;
  }
  PK = CombineQpEntity__CreatePK(rarity, lv, *(const MethodInfo **)&rarity);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_CombineQpMaster__CombineQpEntity__string__TryGetEntity__);
}