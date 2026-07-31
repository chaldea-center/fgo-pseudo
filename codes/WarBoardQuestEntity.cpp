void WarBoardQuestEntity___ctor(WarBoardQuestEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59398CE & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_59398CE = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *WarBoardQuestEntity__CreatePK(int32_t questId, int32_t questPhase, const MethodInfo *method)
{
  if ( (byte_59398CC & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_59398CC = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           questId,
           questPhase,
           (const MethodInfo_3820F68 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *WarBoardQuestEntity__CreatePrimaryKey(WarBoardQuestEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return WarBoardQuestEntity__CreatePK(this->fields.questId, this->fields.questPhase, v2);
}


bool WarBoardQuestEntity__IsUseEventUI(WarBoardQuestEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59398CD & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_21953/*"isUseEventUI"*/);
    byte_59398CD = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21953/*"isUseEventUI"*/, 0, 0) > 0;
}