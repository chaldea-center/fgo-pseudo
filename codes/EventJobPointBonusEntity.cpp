void EventJobPointBonusEntity___ctor(EventJobPointBonusEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938770 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_5938770 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *EventJobPointBonusEntity__CreatePK(
        int32_t eventId,
        int32_t jobId,
        int32_t lv,
        const MethodInfo *method)
{
  if ( (byte_593876F & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_593876F = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           eventId,
           jobId,
           lv,
           (const MethodInfo_38213FC *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *EventJobPointBonusEntity__CreatePrimaryKey(EventJobPointBonusEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return EventJobPointBonusEntity__CreatePK(this->fields.eventId, this->fields.jobId, this->fields.lv, v2);
}


int32_t EventJobPointBonusEntity__GetAdditionValue(EventJobPointBonusEntity_o *this, const MethodInfo *method)
{
  return this->fields.value;
}


float EventJobPointBonusEntity__GetMultiplyValue(EventJobPointBonusEntity_o *this, const MethodInfo *method)
{
  return (float)this->fields.value / 1000.0;
}