void EventPointUpperReleaseEntity___ctor(EventPointUpperReleaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEE71F & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_string___ctor__);
    byte_4CEE71F = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_342BE90 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *EventPointUpperReleaseEntity__CreatePK(
        int32_t version,
        int32_t eventPointUpperId,
        int32_t priority,
        int32_t idx,
        const MethodInfo *method)
{
  if ( (byte_4CEE71E & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
    byte_4CEE71E = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           version,
           eventPointUpperId,
           priority,
           idx,
           (const MethodInfo_316EECC *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
}


System_String_o *EventPointUpperReleaseEntity__CreatePrimaryKey(
        EventPointUpperReleaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  return EventPointUpperReleaseEntity__CreatePK(
           this->fields.version,
           this->fields.eventPointUpperId,
           this->fields.priority,
           this->fields.idx,
           v2);
}