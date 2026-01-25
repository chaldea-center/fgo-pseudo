void EventBoostItemUsedEntity___ctor(EventBoostItemUsedEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEE54A & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_long___ctor__);
    byte_4CEE54A = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_342BE60 *)Method_DataEntityBase_long___ctor__);
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
  struct UsedCount_array *usedCount; // x8
  il2cpp_array_size_t max_length; // x9
  int v5; // w10
  UsedCount_o *result; // x0

  usedCount = this->fields.usedCount;
  if ( !usedCount )
    return 0;
  max_length = usedCount->max_length;
  if ( !max_length || (int)max_length < 1 )
    return 0;
  v5 = 0;
  while ( 1 )
  {
    result = usedCount->m_Items[v5];
    if ( !result )
      sub_1C7BD40(0, userId);
    if ( result->fields.userId == userId )
      break;
    if ( (_DWORD)max_length == ++v5 )
      return 0;
  }
  return result;
}