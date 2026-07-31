void TotalEventRaidEntity___ctor(TotalEventRaidEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59393D9 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_59393D9 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *TotalEventRaidEntity__CreatePK(int32_t eventId, int32_t day, const MethodInfo *method)
{
  if ( (byte_59393D8 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_59393D8 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           eventId,
           day,
           (const MethodInfo_3820F68 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *TotalEventRaidEntity__CreatePrimaryKey(TotalEventRaidEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return TotalEventRaidEntity__CreatePK(this->fields.eventId, this->fields.day, v2);
}