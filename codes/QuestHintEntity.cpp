void __fastcall QuestHintEntity___ctor(QuestHintEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B67CFF & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataEntityBase_string___ctor__, method);
    byte_4B67CFF = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31FD63C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestHintEntity__CreatePK(int32_t questId, int32_t questPhase, const MethodInfo *method)
{
  if ( (byte_4B67CFE & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&questPhase);
    byte_4B67CFE = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           questId,
           questPhase,
           (const MethodInfo_2F57334 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall QuestHintEntity__CreatePrimaryKey(QuestHintEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return QuestHintEntity__CreatePK(this->fields.questId, this->fields.questPhase, v2);
}