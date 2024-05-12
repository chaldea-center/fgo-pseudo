void __fastcall WarBoardQuestEntity___ctor(WarBoardQuestEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438D1FC & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_438D1FC = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall WarBoardQuestEntity__CreatePK(
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  if ( (byte_438D1FA & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_438D1FA = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           questId,
           questPhase,
           (const MethodInfo_1D171BC *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
  if ( (byte_438D1FB & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_20368/*"isUseEventUI"*/);
    byte_438D1FB = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_20368/*"isUseEventUI"*/, 0, 0LL) > 0;
}