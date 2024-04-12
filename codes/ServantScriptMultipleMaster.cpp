void __fastcall ServantScriptMultipleMaster___ctor(ServantScriptMultipleMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B2125 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_ServantScriptMultipleMaster__ServantScriptMultipleEntity__string___ctor__);
    byte_42B2125 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    403,
    (const MethodInfo_23E268C *)Method_DataMasterBase_ServantScriptMultipleMaster__ServantScriptMultipleEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantScriptMultipleEntity_o *__fastcall ServantScriptMultipleMaster__GetEntity(
        ServantScriptMultipleMaster_o *this,
        int32_t id,
        int32_t form,
        int32_t position,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42B2123 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_ServantScriptMultipleMaster__ServantScriptMultipleEntity__string__GetEntity__);
    byte_42B2123 = 1;
  }
  PK = ServantScriptMultipleEntity__CreatePK(id, form, position, *(const MethodInfo **)&position);
  return (ServantScriptMultipleEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                            (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                            PK,
                                            (const MethodInfo_23E2728 *)Method_DataMasterBase_ServantScriptMultipleMaster__ServantScriptMultipleEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantScriptMultipleMaster__TryGetEntity(
        ServantScriptMultipleMaster_o *this,
        ServantScriptMultipleEntity_o **entity,
        int32_t id,
        int32_t form,
        int32_t position,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42B2124 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_ServantScriptMultipleMaster__ServantScriptMultipleEntity__string__TryGetEntity__);
    byte_42B2124 = 1;
  }
  PK = ServantScriptMultipleEntity__CreatePK(id, form, position, *(const MethodInfo **)&form);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_ServantScriptMultipleMaster__ServantScriptMultipleEntity__string__TryGetEntity__);
}