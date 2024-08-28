void __fastcall EventBoostItemUsedEntity___ctor(EventBoostItemUsedEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A08B3D & 1) == 0 )
  {
    sub_1B686D4(&Method_DataEntityBase_long___ctor__, method);
    byte_4A08B3D = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_30E4308 *)Method_DataEntityBase_long___ctor__);
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
  struct UsedCount_array *usedCount; // x8
  __int64 v4; // x9
  int v5; // w10
  UsedCount_o *result; // x0

  usedCount = this->fields.usedCount;
  if ( !usedCount )
    return 0LL;
  v4 = *(_QWORD *)&usedCount->max_length;
  if ( !v4 || (int)v4 < 1 )
    return 0LL;
  v5 = 0;
  while ( 1 )
  {
    result = usedCount->m_Items[v5];
    if ( !result )
      sub_1B68930(0LL, userId);
    if ( result->fields.userId == userId )
      break;
    if ( (_DWORD)v4 == ++v5 )
      return 0LL;
  }
  return result;
}