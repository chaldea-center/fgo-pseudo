void EventPointActivityEntity___ctor(EventPointActivityEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C27330 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_string___ctor__);
    byte_4C27330 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_338592C *)Method_DataEntityBase_string___ctor__);
  *(_QWORD *)&this->fields.eventId = 0;
  *(_QWORD *)&this->fields.objectType = 0;
  this->fields.point = 0;
  this->fields.objectValue = 0;
}


System_String_o *EventPointActivityEntity__CreatePK(
        int32_t eventId,
        int32_t groupId,
        int32_t objectType,
        int32_t objectId,
        int64_t objectValue,
        const MethodInfo *method)
{
  if ( (byte_4C2732F & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int__long___);
    byte_4C2732F = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int__long_(
           eventId,
           groupId,
           objectType,
           objectId,
           objectValue,
           (const MethodInfo_30CDA18 *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int__long___);
}


System_String_o *EventPointActivityEntity__CreatePrimaryKey(EventPointActivityEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x5

  return EventPointActivityEntity__CreatePK(
           this->fields.eventId,
           this->fields.groupId,
           this->fields.objectType,
           this->fields.objectId,
           this->fields.objectValue,
           v2);
}