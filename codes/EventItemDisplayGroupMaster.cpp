void __fastcall EventItemDisplayGroupMaster___ctor(EventItemDisplayGroupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B12E & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventItemDisplayGroupMaster__EventItemDisplayGroupEntity__string___ctor__);
    byte_4A5B12E = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    165,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_EventItemDisplayGroupMaster__EventItemDisplayGroupEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventItemDisplayGroupEntity_o *__fastcall EventItemDisplayGroupMaster__GetEntity(
        EventItemDisplayGroupMaster_o *this,
        int32_t eventId,
        int32_t groupIndex,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5B12C & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventItemDisplayGroupMaster__EventItemDisplayGroupEntity__string__GetEntity__);
    byte_4A5B12C = 1;
  }
  PK = (Il2CppObject *)EventItemDisplayGroupEntity__CreatePK(eventId, groupIndex, *(const MethodInfo **)&groupIndex);
  return (EventItemDisplayGroupEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            PK,
                                            (const MethodInfo_311DC8C *)Method_DataMasterBase_EventItemDisplayGroupMaster__EventItemDisplayGroupEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventItemDisplayGroupMaster__TryGetEntity(
        EventItemDisplayGroupMaster_o *this,
        EventItemDisplayGroupEntity_o **entity,
        int32_t eventId,
        int32_t groupIndex,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4A5B12D & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventItemDisplayGroupMaster__EventItemDisplayGroupEntity__string__TryGetEntity__);
    byte_4A5B12D = 1;
  }
  PK = (Il2CppObject *)EventItemDisplayGroupEntity__CreatePK(eventId, groupIndex, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_EventItemDisplayGroupMaster__EventItemDisplayGroupEntity__string__TryGetEntity__);
}