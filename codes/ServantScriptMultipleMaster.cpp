void __fastcall ServantScriptMultipleMaster___ctor(ServantScriptMultipleMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4189C0F & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_ServantScriptMultipleMaster__ServantScriptMultipleEntity__string___ctor__, method);
    byte_4189C0F = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    402,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_ServantScriptMultipleMaster__ServantScriptMultipleEntity__string___ctor__);
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

  if ( (byte_4189C0D & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_ServantScriptMultipleMaster__ServantScriptMultipleEntity__string__GetEntity__,
      *(_QWORD *)&id);
    byte_4189C0D = 1;
  }
  PK = ServantScriptMultipleEntity__CreatePK(id, form, position, *(const MethodInfo **)&position);
  return (ServantScriptMultipleEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                            (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                            PK,
                                            (const MethodInfo_24E4520 *)Method_DataMasterBase_ServantScriptMultipleMaster__ServantScriptMultipleEntity__string__GetEntity__);
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

  if ( (byte_4189C0E & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_ServantScriptMultipleMaster__ServantScriptMultipleEntity__string__TryGetEntity__,
      entity);
    byte_4189C0E = 1;
  }
  PK = ServantScriptMultipleEntity__CreatePK(id, form, position, *(const MethodInfo **)&form);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_ServantScriptMultipleMaster__ServantScriptMultipleEntity__string__TryGetEntity__);
}