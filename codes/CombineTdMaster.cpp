void __fastcall CombineTdMaster___ctor(CombineTdMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E8B57 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_CombineTdMaster__CombineTdEntity__string___ctor__, (_DWORD)method, v2, v3);
    byte_42E8B57 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    88,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_CombineTdMaster__CombineTdEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
CombineTdEntity_o *__fastcall CombineTdMaster__GetEntity(
        CombineTdMaster_o *this,
        int32_t id,
        int32_t treasureDeviceLv,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42E8B55 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_CombineTdMaster__CombineTdEntity__string__GetEntity__,
      id,
      treasureDeviceLv,
      method);
    byte_42E8B55 = 1;
  }
  PK = CombineTdEntity__CreatePK(id, treasureDeviceLv, *(const MethodInfo **)&treasureDeviceLv);
  return (CombineTdEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                PK,
                                (const MethodInfo_23FB260 *)Method_DataMasterBase_CombineTdMaster__CombineTdEntity__string__GetEntity__);
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

  if ( (byte_42E8B56 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_CombineTdMaster__CombineTdEntity__string__TryGetEntity__,
      (_DWORD)entity,
      id,
      *(_QWORD *)&treasureDeviceLv);
    byte_42E8B56 = 1;
  }
  PK = CombineTdEntity__CreatePK(id, treasureDeviceLv, *(const MethodInfo **)&id);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_CombineTdMaster__CombineTdEntity__string__TryGetEntity__);
}