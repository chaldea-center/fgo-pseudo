void BattleMessageGroupEntity___ctor(BattleMessageGroupEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59382B4 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_59382B4 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *BattleMessageGroupEntity__CreatePK(int32_t groupId, int32_t messageId, const MethodInfo *method)
{
  if ( (byte_59382B3 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_59382B3 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           groupId,
           messageId,
           (const MethodInfo_3820F68 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *BattleMessageGroupEntity__CreatePrimaryKey(BattleMessageGroupEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return BattleMessageGroupEntity__CreatePK(this->fields.groupId, this->fields.messageId, v2);
}