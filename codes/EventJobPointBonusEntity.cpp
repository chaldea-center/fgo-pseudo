void EventJobPointBonusEntity___ctor(EventJobPointBonusEntity_o *this, const MethodInfo *method)
{
  if ( (byte_597083A & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_string___ctor__);
    byte_597083A = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3F0E590 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *EventJobPointBonusEntity__CreatePK(
        int32_t eventId,
        int32_t jobId,
        int32_t lv,
        const MethodInfo *method)
{
  if ( (byte_5970839 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_5970839 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           eventId,
           jobId,
           lv,
           (const MethodInfo_38548C4 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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