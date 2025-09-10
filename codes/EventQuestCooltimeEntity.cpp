void EventQuestCooltimeEntity___ctor(EventQuestCooltimeEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C2736D & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_string___ctor__);
    byte_4C2736D = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_338592C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *EventQuestCooltimeEntity__CreatePK(
        int32_t eventId,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  if ( (byte_4C2736C & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4C2736C = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           eventId,
           questId,
           phase,
           (const MethodInfo_30CCF68 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *EventQuestCooltimeEntity__CreatePrimaryKey(EventQuestCooltimeEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return EventQuestCooltimeEntity__CreatePK(this->fields.eventId, this->fields.questId, this->fields.phase, v2);
}