void EventFortificationSvtEntity___ctor(EventFortificationSvtEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938647 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_5938647 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *EventFortificationSvtEntity__CreatePK(
        int32_t eventId,
        int32_t fortificationIdx,
        int32_t position,
        const MethodInfo *method)
{
  if ( (byte_5938646 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_5938646 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           eventId,
           fortificationIdx,
           position,
           (const MethodInfo_38213FC *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *EventFortificationSvtEntity__CreatePrimaryKey(
        EventFortificationSvtEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return EventFortificationSvtEntity__CreatePK(
           this->fields.eventId,
           this->fields.fortificationIdx,
           this->fields.position,
           v2);
}