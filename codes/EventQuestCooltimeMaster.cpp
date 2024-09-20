void __fastcall EventQuestCooltimeMaster___ctor(EventQuestCooltimeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B202 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventQuestCooltimeMaster__EventQuestCooltimeEntity__string___ctor__);
    byte_4A5B202 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    316,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_EventQuestCooltimeMaster__EventQuestCooltimeEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventQuestCooltimeEntity_o *__fastcall EventQuestCooltimeMaster__GetEntity(
        EventQuestCooltimeMaster_o *this,
        int32_t eventId,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5B200 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventQuestCooltimeMaster__EventQuestCooltimeEntity__string__GetEntity__);
    byte_4A5B200 = 1;
  }
  PK = (Il2CppObject *)EventQuestCooltimeEntity__CreatePK(eventId, questId, phase, *(const MethodInfo **)&phase);
  return (EventQuestCooltimeEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                         PK,
                                         (const MethodInfo_311DC8C *)Method_DataMasterBase_EventQuestCooltimeMaster__EventQuestCooltimeEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventQuestCooltimeMaster__TryGetEntity(
        EventQuestCooltimeMaster_o *this,
        EventQuestCooltimeEntity_o **entity,
        int32_t eventId,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4A5B201 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventQuestCooltimeMaster__EventQuestCooltimeEntity__string__TryGetEntity__);
    byte_4A5B201 = 1;
  }
  PK = (Il2CppObject *)EventQuestCooltimeEntity__CreatePK(eventId, questId, phase, *(const MethodInfo **)&questId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_EventQuestCooltimeMaster__EventQuestCooltimeEntity__string__TryGetEntity__);
}