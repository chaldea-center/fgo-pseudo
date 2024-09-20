void __fastcall BattleMessageGroupEntity___ctor(BattleMessageGroupEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5ADF2 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5ADF2 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall BattleMessageGroupEntity__CreatePK(
        int32_t groupId,
        int32_t messageId,
        const MethodInfo *method)
{
  if ( (byte_4A5ADF1 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4A5ADF1 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           groupId,
           messageId,
           (const MethodInfo_2E7DB2C *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall BattleMessageGroupEntity__CreatePrimaryKey(
        BattleMessageGroupEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return BattleMessageGroupEntity__CreatePK(this->fields.groupId, this->fields.messageId, v2);
}