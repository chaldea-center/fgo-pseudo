void __fastcall EventPointMaster___ctor(EventPointMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B66C3F & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_EventPointMaster__EventPointEntity__string___ctor__, method);
    byte_4B66C3F = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    155,
    (const MethodInfo_31FDADC *)Method_DataMasterBase_EventPointMaster__EventPointEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventPointEntity_o *__fastcall EventPointMaster__GetEntity(
        EventPointMaster_o *this,
        int32_t id,
        int32_t eventId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B66C3D & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_EventPointMaster__EventPointEntity__string__GetEntity__, *(_QWORD *)&id);
    byte_4B66C3D = 1;
  }
  PK = (Il2CppObject *)EventPointEntity__CreatePK(id, eventId, *(const MethodInfo **)&eventId);
  return (EventPointEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                 PK,
                                 (const MethodInfo_31FDB1C *)Method_DataMasterBase_EventPointMaster__EventPointEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventPointMaster__TryGetEntity(
        EventPointMaster_o *this,
        EventPointEntity_o **entity,
        int32_t id,
        int32_t eventId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B66C3E & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_EventPointMaster__EventPointEntity__string__TryGetEntity__, entity);
    byte_4B66C3E = 1;
  }
  PK = (Il2CppObject *)EventPointEntity__CreatePK(id, eventId, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31FDB6C *)Method_DataMasterBase_EventPointMaster__EventPointEntity__string__TryGetEntity__);
}