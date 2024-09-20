void __fastcall WarBoardQuestEntity___ctor(WarBoardQuestEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5C146 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5C146 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall WarBoardQuestEntity__CreatePK(
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  if ( (byte_4A5C144 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4A5C144 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           questId,
           questPhase,
           (const MethodInfo_2E7DB2C *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall WarBoardQuestEntity__CreatePrimaryKey(
        WarBoardQuestEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return WarBoardQuestEntity__CreatePK(this->fields.questId, this->fields.questPhase, v2);
}


bool __fastcall WarBoardQuestEntity__IsUseEventUI(WarBoardQuestEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5C145 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_20822/*"isUseEventUI"*/);
    byte_4A5C145 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_20822/*"isUseEventUI"*/, 0, 0LL) > 0;
}