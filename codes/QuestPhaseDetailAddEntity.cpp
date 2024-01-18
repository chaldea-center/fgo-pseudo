void __fastcall QuestPhaseDetailAddEntity___ctor(QuestPhaseDetailAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4186EE5 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_4186EE5 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestPhaseDetailAddEntity__CreatePK(
        int32_t questId,
        int32_t phase,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_4186EE4 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&phase);
    byte_4186EE4 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           questId,
           phase,
           priority,
           (const MethodInfo_1732D30 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall QuestPhaseDetailAddEntity__CreatePrimaryKey(
        QuestPhaseDetailAddEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return QuestPhaseDetailAddEntity__CreatePK(this->fields.questId, this->fields.phase, this->fields.priority, v2);
}