void EventJobQuestEntity___ctor(EventJobQuestEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5970845 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_string___ctor__);
    byte_5970845 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3F0E590 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *EventJobQuestEntity__CreatePK(
        int32_t eventId,
        int32_t jobId,
        int32_t questId,
        const MethodInfo *method)
{
  if ( (byte_5970844 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_5970844 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           eventId,
           jobId,
           questId,
           (const MethodInfo_38548C4 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *EventJobQuestEntity__CreatePrimaryKey(EventJobQuestEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return EventJobQuestEntity__CreatePK(this->fields.eventId, this->fields.jobId, this->fields.questId, v2);
}