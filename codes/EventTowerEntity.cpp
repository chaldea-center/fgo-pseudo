void EventTowerEntity___ctor(EventTowerEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D30B78 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataEntityBase_string___ctor__);
    byte_4D30B78 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3460BB4 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *EventTowerEntity__CreatePK(int32_t eventId, int32_t towerId, const MethodInfo *method)
{
  if ( (byte_4D30B77 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4D30B77 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           eventId,
           towerId,
           (const MethodInfo_31A2BC4 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *EventTowerEntity__CreatePrimaryKey(EventTowerEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return EventTowerEntity__CreatePK(this->fields.eventId, this->fields.towerId, v2);
}


bool EventTowerEntity__HasFlag(EventTowerEntity_o *this, int32_t towerFlag, const MethodInfo *method)
{
  return (this->fields.flag & towerFlag) != 0;
}