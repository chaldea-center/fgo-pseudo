void __fastcall FunctionGroupMaster___ctor(FunctionGroupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438D91F & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_FunctionGroupMaster__FunctionGroupEntity__string___ctor__);
    byte_438D91F = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    146,
    (const MethodInfo_21FBC48 *)Method_DataMasterBase_FunctionGroupMaster__FunctionGroupEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
FunctionGroupEntity_o *__fastcall FunctionGroupMaster__GetEntity(
        FunctionGroupMaster_o *this,
        int32_t funcId,
        int32_t eventId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_438D91D & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_FunctionGroupMaster__FunctionGroupEntity__string__GetEntity__);
    byte_438D91D = 1;
  }
  PK = FunctionGroupEntity__CreatePK(funcId, eventId, *(const MethodInfo **)&eventId);
  return (FunctionGroupEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                    (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                    PK,
                                    (const MethodInfo_21FBCE4 *)Method_DataMasterBase_FunctionGroupMaster__FunctionGroupEntity__string__GetEntity__);
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

  if ( (byte_438D91E & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_FunctionGroupMaster__FunctionGroupEntity__string__TryGetEntity__);
    byte_438D91E = 1;
  }
  PK = FunctionGroupEntity__CreatePK(funcId, eventId, *(const MethodInfo **)&funcId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_21FBD3C *)Method_DataMasterBase_FunctionGroupMaster__FunctionGroupEntity__string__TryGetEntity__);
}