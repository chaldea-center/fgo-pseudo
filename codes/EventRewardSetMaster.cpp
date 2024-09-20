void __fastcall EventRewardSetMaster___ctor(EventRewardSetMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B28D & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventRewardSetMaster__EventRewardSetEntity__string___ctor__);
    byte_4A5B28D = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    140,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_EventRewardSetMaster__EventRewardSetEntity__string___ctor__);
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

  if ( (byte_4A5B28B & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventRewardSetMaster__EventRewardSetEntity__string__GetEntity__);
    byte_4A5B28B = 1;
  }
  PK = (Il2CppObject *)EventRewardSetEntity__CreatePK(rewardSetType, eventId, id, *(const MethodInfo **)&id);
  return (EventRewardSetEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     PK,
                                     (const MethodInfo_311DC8C *)Method_DataMasterBase_EventRewardSetMaster__EventRewardSetEntity__string__GetEntity__);
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

  if ( (byte_4A5B28C & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventRewardSetMaster__EventRewardSetEntity__string__TryGetEntity__);
    byte_4A5B28C = 1;
  }
  PK = (Il2CppObject *)EventRewardSetEntity__CreatePK(rewardSetType, eventId, id, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_EventRewardSetMaster__EventRewardSetEntity__string__TryGetEntity__);
}