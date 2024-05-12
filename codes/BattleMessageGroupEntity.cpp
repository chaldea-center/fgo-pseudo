void __fastcall BattleMessageGroupEntity___ctor(BattleMessageGroupEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438771C & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_438771C = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall BattleMessageGroupEntity__CreatePK(
        int32_t groupId,
        int32_t messageId,
        const MethodInfo *method)
{
  if ( (byte_438771B & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_438771B = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           groupId,
           messageId,
           (const MethodInfo_1D171BC *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall BattleMessageGroupEntity__CreatePrimaryKey(
        BattleMessageGroupEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return BattleMessageGroupEntity__CreatePK(this->fields.groupId, this->fields.messageId, v2);
}