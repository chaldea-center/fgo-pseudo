void EventBoardGameTokenEntity___ctor(EventBoardGameTokenEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CC7285 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataEntityBase_string___ctor__);
    byte_4CC7285 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3406A14 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *EventBoardGameTokenEntity__CreatePK(int32_t eventId, int32_t tokenId, const MethodInfo *method)
{
  if ( (byte_4CC7284 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4CC7284 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           eventId,
           tokenId,
           (const MethodInfo_3149294 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *EventBoardGameTokenEntity__CreatePrimaryKey(
        EventBoardGameTokenEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return EventBoardGameTokenEntity__CreatePK(this->fields.eventId, this->fields.tokenId, v2);
}