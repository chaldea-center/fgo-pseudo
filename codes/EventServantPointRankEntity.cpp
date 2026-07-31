void EventServantPointRankEntity___ctor(EventServantPointRankEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938905 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_5938905 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *EventServantPointRankEntity__CreatePK(int32_t eventId, int32_t svtPoint, const MethodInfo *method)
{
  if ( (byte_5938904 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_5938904 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           eventId,
           svtPoint,
           (const MethodInfo_3820F68 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *EventServantPointRankEntity__CreatePrimaryKey(
        EventServantPointRankEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return EventServantPointRankEntity__CreatePK(this->fields.eventId, this->fields.svtPoint, v2);
}