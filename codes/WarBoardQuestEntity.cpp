void __fastcall WarBoardQuestEntity___ctor(WarBoardQuestEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42B21BB & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_string___ctor__);
    byte_42B21BB = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23E2224 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall WarBoardQuestEntity__CreatePK(
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  if ( (byte_42B21B9 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_42B21B9 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           questId,
           questPhase,
           (const MethodInfo_1A4DF50 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
  if ( (byte_42B21BA & 1) == 0 )
  {
    sub_B52984(&StringLiteral_20111/*"isUseEventUI"*/);
    byte_42B21BA = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_20111/*"isUseEventUI"*/, 0, 0LL) > 0;
}