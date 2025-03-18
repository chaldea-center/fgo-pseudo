void __fastcall EventRewardExtraMaster___ctor(EventRewardExtraMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C2205A & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_EventRewardExtraMaster__EventRewardExtraEntity__string___ctor__, method);
    byte_4C2205A = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    137,
    (const MethodInfo_329D5DC *)Method_DataMasterBase_EventRewardExtraMaster__EventRewardExtraEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventRewardExtraEntity_o *__fastcall EventRewardExtraMaster__GetEntity(
        EventRewardExtraMaster_o *this,
        int32_t eventId,
        int64_t point,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C22058 & 1) == 0 )
  {
    sub_1C3B764(
      &Method_DataMasterBase_EventRewardExtraMaster__EventRewardExtraEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_4C22058 = 1;
  }
  PK = (Il2CppObject *)EventRewardExtraEntity__CreatePK(eventId, point, (const MethodInfo *)point);
  return (EventRewardExtraEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_329F900 *)Method_DataMasterBase_EventRewardExtraMaster__EventRewardExtraEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventRewardExtraMaster__TryGetEntity(
        EventRewardExtraMaster_o *this,
        EventRewardExtraEntity_o **entity,
        int32_t eventId,
        int64_t point,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C22059 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_EventRewardExtraMaster__EventRewardExtraEntity__string__TryGetEntity__, entity);
    byte_4C22059 = 1;
  }
  PK = (Il2CppObject *)EventRewardExtraEntity__CreatePK(eventId, point, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_329F94C *)Method_DataMasterBase_EventRewardExtraMaster__EventRewardExtraEntity__string__TryGetEntity__);
}