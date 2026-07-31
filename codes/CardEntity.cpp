void CardEntity___ctor(CardEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59383C1 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_59383C1 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *CardEntity__CreatePK(int32_t id, int32_t num, const MethodInfo *method)
{
  if ( (byte_59383C0 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_59383C0 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           num,
           (const MethodInfo_3820F68 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *CardEntity__CreatePrimaryKey(CardEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return CardEntity__CreatePK(this->fields.id, this->fields.num, v2);
}