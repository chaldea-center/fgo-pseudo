void __fastcall QuestHintEntity___ctor(QuestHintEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438BC6C & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_438BC6C = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall QuestHintEntity__CreatePK(int32_t questId, int32_t questPhase, const MethodInfo *method)
{
  if ( (byte_438BC6B & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_438BC6B = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           questId,
           questPhase,
           (const MethodInfo_1D171BC *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall QuestHintEntity__CreatePrimaryKey(QuestHintEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return QuestHintEntity__CreatePK(this->fields.questId, this->fields.questPhase, v2);
}