void __fastcall FunctionGroupMaster___ctor(FunctionGroupMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EB553 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_FunctionGroupMaster__FunctionGroupEntity__string___ctor__, (_DWORD)method, v2, v3);
    byte_42EB553 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    146,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_FunctionGroupMaster__FunctionGroupEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
FunctionGroupEntity_o *__fastcall FunctionGroupMaster__GetEntity(
        FunctionGroupMaster_o *this,
        int32_t funcId,
        int32_t eventId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42EB551 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_FunctionGroupMaster__FunctionGroupEntity__string__GetEntity__,
      funcId,
      eventId,
      method);
    byte_42EB551 = 1;
  }
  PK = FunctionGroupEntity__CreatePK(funcId, eventId, *(const MethodInfo **)&eventId);
  return (FunctionGroupEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                    (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                    PK,
                                    (const MethodInfo_23FB260 *)Method_DataMasterBase_FunctionGroupMaster__FunctionGroupEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall FunctionGroupMaster__TryGetEntity(
        FunctionGroupMaster_o *this,
        FunctionGroupEntity_o **entity,
        int32_t funcId,
        int32_t eventId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42EB552 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_FunctionGroupMaster__FunctionGroupEntity__string__TryGetEntity__,
      (_DWORD)entity,
      funcId,
      *(_QWORD *)&eventId);
    byte_42EB552 = 1;
  }
  PK = FunctionGroupEntity__CreatePK(funcId, eventId, *(const MethodInfo **)&funcId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_FunctionGroupMaster__FunctionGroupEntity__string__TryGetEntity__);
}