void SelectBonusEntity___ctor(SelectBonusEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5939AC3 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_5939AC3 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *SelectBonusEntity__CreatePK(int32_t eventId, int32_t idx, const MethodInfo *method)
{
  if ( (byte_5939AC2 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_5939AC2 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           eventId,
           idx,
           (const MethodInfo_3820F68 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *SelectBonusEntity__CreatePrimaryKey(SelectBonusEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return SelectBonusEntity__CreatePK(this->fields.eventId, this->fields.idx, v2);
}