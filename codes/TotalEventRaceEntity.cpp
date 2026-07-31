void TotalEventRaceEntity___ctor(TotalEventRaceEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59393D2 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_59393D2 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *TotalEventRaceEntity__CreatePK(
        int32_t eventId,
        int32_t termId,
        int32_t groupId,
        const MethodInfo *method)
{
  if ( (byte_59393D1 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_59393D1 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           eventId,
           termId,
           groupId,
           (const MethodInfo_38213FC *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *TotalEventRaceEntity__CreatePrimaryKey(TotalEventRaceEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return TotalEventRaceEntity__CreatePK(this->fields.eventId, this->fields.termId, this->fields.groupId, v2);
}