void __fastcall WarBoardQuestEntity___ctor(WarBoardQuestEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BC8B07 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataEntityBase_string___ctor__, method);
    byte_4BC8B07 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_324620C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall WarBoardQuestEntity__CreatePK(
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  if ( (byte_4BC8B05 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&questPhase);
    byte_4BC8B05 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           questId,
           questPhase,
           (const MethodInfo_2F9D6B4 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
  if ( (byte_4BC8B06 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_21184/*"isUseEventUI"*/, method);
    byte_4BC8B06 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21184/*"isUseEventUI"*/, 0, 0LL) > 0;
}