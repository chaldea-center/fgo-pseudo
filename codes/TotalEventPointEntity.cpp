void TotalEventPointEntity___ctor(TotalEventPointEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C27F84 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_string___ctor__);
    byte_4C27F84 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_338592C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *TotalEventPointEntity__CreatePK(
        int32_t eventId,
        int32_t id,
        int32_t groupId,
        const MethodInfo *method)
{
  if ( (byte_4C27F83 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4C27F83 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           eventId,
           id,
           groupId,
           (const MethodInfo_30CCF68 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *TotalEventPointEntity__CreatePrimaryKey(TotalEventPointEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return TotalEventPointEntity__CreatePK(this->fields.eventId, this->fields.id, this->fields.groupId, v2);
}