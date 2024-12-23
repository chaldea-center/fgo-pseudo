void __fastcall EventRewardSetMaster___ctor(EventRewardSetMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B66CE5 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_EventRewardSetMaster__EventRewardSetEntity__string___ctor__, method);
    byte_4B66CE5 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    144,
    (const MethodInfo_31FDADC *)Method_DataMasterBase_EventRewardSetMaster__EventRewardSetEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventRewardSetEntity_o *__fastcall EventRewardSetMaster__GetEntity(
        EventRewardSetMaster_o *this,
        int32_t rewardSetType,
        int32_t eventId,
        int32_t id,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B66CE3 & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_DataMasterBase_EventRewardSetMaster__EventRewardSetEntity__string__GetEntity__,
      *(_QWORD *)&rewardSetType);
    byte_4B66CE3 = 1;
  }
  PK = (Il2CppObject *)EventRewardSetEntity__CreatePK(rewardSetType, eventId, id, *(const MethodInfo **)&id);
  return (EventRewardSetEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     PK,
                                     (const MethodInfo_31FDB1C *)Method_DataMasterBase_EventRewardSetMaster__EventRewardSetEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventRewardSetMaster__TryGetEntity(
        EventRewardSetMaster_o *this,
        EventRewardSetEntity_o **entity,
        int32_t rewardSetType,
        int32_t eventId,
        int32_t id,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B66CE4 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_EventRewardSetMaster__EventRewardSetEntity__string__TryGetEntity__, entity);
    byte_4B66CE4 = 1;
  }
  PK = (Il2CppObject *)EventRewardSetEntity__CreatePK(rewardSetType, eventId, id, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31FDB6C *)Method_DataMasterBase_EventRewardSetMaster__EventRewardSetEntity__string__TryGetEntity__);
}