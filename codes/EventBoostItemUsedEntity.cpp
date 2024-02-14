void __fastcall EventBoostItemUsedEntity___ctor(EventBoostItemUsedEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4216E7D & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataEntityBase_long___ctor__, method);
    byte_4216E7D = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_2669AD8 *)Method_DataEntityBase_long___ctor__);
}


int64_t __fastcall EventBoostItemUsedEntity__CreatePrimaryKey(
        EventBoostItemUsedEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.eventId;
}


UsedCount_o *__fastcall EventBoostItemUsedEntity__GetUsedCount(
        EventBoostItemUsedEntity_o *this,
        int64_t userId,
        const MethodInfo *method)
{
  struct UsedCount_array *usedCount; // x10
  __int64 v4; // x8
  __int64 v5; // x9
  UsedCount_o **m_Items; // x10
  UsedCount_o *result; // x0

  usedCount = this->fields.usedCount;
  if ( !usedCount )
    return 0LL;
  v4 = *(_QWORD *)&usedCount->max_length;
  if ( !v4 || (int)v4 < 1 )
    return 0LL;
  v5 = 0LL;
  m_Items = usedCount->m_Items;
  while ( 1 )
  {
    result = m_Items[v5];
    if ( !result )
      sub_B0D97C(0LL);
    if ( result->fields.userId == userId )
      break;
    if ( (int)++v5 >= (int)v4 )
      return 0LL;
  }
  return result;
}