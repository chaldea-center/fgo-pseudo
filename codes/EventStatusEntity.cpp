void EventStatusEntity___ctor(EventStatusEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D30B59 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataEntityBase_string___ctor__);
    byte_4D30B59 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3460BB4 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *EventStatusEntity__CreatePK(int32_t eventId, int32_t statusId, const MethodInfo *method)
{
  if ( (byte_4D30B58 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4D30B58 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           eventId,
           statusId,
           (const MethodInfo_31A2BC4 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *EventStatusEntity__CreatePrimaryKey(EventStatusEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return EventStatusEntity__CreatePK(this->fields.eventId, this->fields.statusId, v2);
}


int32_t EventStatusEntity__GetDay(EventStatusEntity_o *this, const MethodInfo *method)
{
  int v2; // w8

  v2 = 2;
  while ( (((unsigned int)this->fields.status >> v2) & 1) == 0 )
  {
    if ( ++v2 == 9 )
      return 0;
  }
  return v2 - 1;
}


bool EventStatusEntity__HasFlag(EventStatusEntity_o *this, int32_t flag, const MethodInfo *method)
{
  return (this->fields.status & flag) != 0;
}


bool EventStatusEntity__IsNight(EventStatusEntity_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.status) >> 1) & 1;
}


bool EventStatusEntity__IsScenario(EventStatusEntity_o *this, const MethodInfo *method)
{
  return this->fields.status & 1;
}