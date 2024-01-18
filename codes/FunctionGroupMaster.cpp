void __fastcall FunctionGroupMaster___ctor(FunctionGroupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418A4FA & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_FunctionGroupMaster__FunctionGroupEntity__string___ctor__, method);
    byte_418A4FA = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    145,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_FunctionGroupMaster__FunctionGroupEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
FunctionGroupEntity_o *__fastcall FunctionGroupMaster__GetEntity(
        FunctionGroupMaster_o *this,
        int32_t funcId,
        int32_t eventId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_418A4F8 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_FunctionGroupMaster__FunctionGroupEntity__string__GetEntity__, *(_QWORD *)&funcId);
    byte_418A4F8 = 1;
  }
  PK = FunctionGroupEntity__CreatePK(funcId, eventId, *(const MethodInfo **)&eventId);
  return (FunctionGroupEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                    (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                    PK,
                                    (const MethodInfo_24E4520 *)Method_DataMasterBase_FunctionGroupMaster__FunctionGroupEntity__string__GetEntity__);
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

  if ( (byte_418A4F9 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_FunctionGroupMaster__FunctionGroupEntity__string__TryGetEntity__, entity);
    byte_418A4F9 = 1;
  }
  PK = FunctionGroupEntity__CreatePK(funcId, eventId, *(const MethodInfo **)&funcId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_FunctionGroupMaster__FunctionGroupEntity__string__TryGetEntity__);
}