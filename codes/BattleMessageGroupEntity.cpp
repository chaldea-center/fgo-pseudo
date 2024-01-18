void __fastcall BattleMessageGroupEntity___ctor(BattleMessageGroupEntity_o *this, const MethodInfo *method)
{
  if ( (byte_41843C8 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_41843C8 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BattleMessageGroupEntity__CreatePK(
        int32_t groupId,
        int32_t messageId,
        const MethodInfo *method)
{
  if ( (byte_41843C7 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&messageId);
    byte_41843C7 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           groupId,
           messageId,
           (const MethodInfo_1732908 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall BattleMessageGroupEntity__CreatePrimaryKey(
        BattleMessageGroupEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return BattleMessageGroupEntity__CreatePK(this->fields.groupId, this->fields.messageId, v2);
}