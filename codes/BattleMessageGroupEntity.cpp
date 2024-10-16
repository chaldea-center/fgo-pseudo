void __fastcall BattleMessageGroupEntity___ctor(BattleMessageGroupEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4AB59E0 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataEntityBase_string___ctor__, method);
    byte_4AB59E0 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3163C08 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BattleMessageGroupEntity__CreatePK(
        int32_t groupId,
        int32_t messageId,
        const MethodInfo *method)
{
  if ( (byte_4AB59DF & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&messageId);
    byte_4AB59DF = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           groupId,
           messageId,
           (const MethodInfo_2EC2598 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall BattleMessageGroupEntity__CreatePrimaryKey(
        BattleMessageGroupEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return BattleMessageGroupEntity__CreatePK(this->fields.groupId, this->fields.messageId, v2);
}