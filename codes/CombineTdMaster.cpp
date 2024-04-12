void __fastcall CombineTdMaster___ctor(CombineTdMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B0076 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_CombineTdMaster__CombineTdEntity__string___ctor__);
    byte_42B0076 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    88,
    (const MethodInfo_23E268C *)Method_DataMasterBase_CombineTdMaster__CombineTdEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
CombineTdEntity_o *__fastcall CombineTdMaster__GetEntity(
        CombineTdMaster_o *this,
        int32_t id,
        int32_t treasureDeviceLv,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42B0074 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_CombineTdMaster__CombineTdEntity__string__GetEntity__);
    byte_42B0074 = 1;
  }
  PK = CombineTdEntity__CreatePK(id, treasureDeviceLv, *(const MethodInfo **)&treasureDeviceLv);
  return (CombineTdEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                PK,
                                (const MethodInfo_23E2728 *)Method_DataMasterBase_CombineTdMaster__CombineTdEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CombineTdMaster__TryGetEntity(
        CombineTdMaster_o *this,
        CombineTdEntity_o **entity,
        int32_t id,
        int32_t treasureDeviceLv,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42B0075 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_CombineTdMaster__CombineTdEntity__string__TryGetEntity__);
    byte_42B0075 = 1;
  }
  PK = CombineTdEntity__CreatePK(id, treasureDeviceLv, *(const MethodInfo **)&id);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_CombineTdMaster__CombineTdEntity__string__TryGetEntity__);
}