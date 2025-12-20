void EventUiReleaseEntity___ctor(EventUiReleaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D2CB7F & 1) == 0 )
  {
    sub_1C94098(&Method_DataEntityBase_string___ctor__);
    byte_4D2CB7F = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3459054 *)Method_DataEntityBase_string___ctor__);
  *(_QWORD *)&this->fields.eventUiId = 0;
  *(_QWORD *)&this->fields.idx = 0;
  this->fields.condNum = 0;
  *(_QWORD *)&this->fields.condType = 0;
}


System_String_o *EventUiReleaseEntity__CreatePK(
        int32_t eventUiId,
        int32_t priority,
        int32_t idx,
        const MethodInfo *method)
{
  if ( (byte_4D2CB80 & 1) == 0 )
  {
    sub_1C94098(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4D2CB80 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           eventUiId,
           priority,
           idx,
           (const MethodInfo_319A74C *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *EventUiReleaseEntity__CreatePrimaryKey(EventUiReleaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return EventUiReleaseEntity__CreatePK(this->fields.eventUiId, this->fields.priority, this->fields.idx, v2);
}