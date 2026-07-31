void EventBoostItemUsedEntity___ctor(EventBoostItemUsedEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938535 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_long___ctor__);
    byte_5938535 = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_3EDADB8 *)Method_DataEntityBase_long___ctor__);
}


int64_t EventBoostItemUsedEntity__CreatePrimaryKey(EventBoostItemUsedEntity_o *this, const MethodInfo *method)
{
  return this->fields.eventId;
}


UsedCount_o *EventBoostItemUsedEntity__GetUsedCount(
        EventBoostItemUsedEntity_o *this,
        int64_t userId,
        const MethodInfo *method)
{
  struct UsedCount_array *usedCount; // x9
  il2cpp_array_size_t max_length; // x8
  UsedCount_o **i; // x9
  UsedCount_o *result; // x0

  usedCount = this->fields.usedCount;
  if ( !usedCount )
    return 0;
  max_length = usedCount->max_length;
  if ( !max_length || (int)max_length < 1 )
    return 0;
  for ( i = usedCount->m_Items; ; ++i )
  {
    result = *i;
    if ( !*i )
      sub_21FFECC(0, userId);
    if ( result->fields.userId == userId )
      break;
    LODWORD(max_length) = max_length - 1;
    if ( !(_DWORD)max_length )
      return 0;
  }
  return result;
}