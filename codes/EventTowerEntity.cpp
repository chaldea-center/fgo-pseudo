void EventTowerEntity___ctor(EventTowerEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D2C9FD & 1) == 0 )
  {
    sub_1C94098(&Method_DataEntityBase_string___ctor__);
    byte_4D2C9FD = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3459054 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *EventTowerEntity__CreatePK(int32_t eventId, int32_t towerId, const MethodInfo *method)
{
  if ( (byte_4D2C9FC & 1) == 0 )
  {
    sub_1C94098(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4D2C9FC = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           eventId,
           towerId,
           (const MethodInfo_319A2BC *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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