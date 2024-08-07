void __fastcall QuestScriptMaterialNextEntity___ctor(QuestScriptMaterialNextEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FF0CF & 1) == 0 )
  {
    sub_1B64A00(&Method_DataEntityBase_string___ctor__, method);
    byte_49FF0CF = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30D6610 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestScriptMaterialNextEntity__CreatePK(
        int32_t questId,
        int32_t nextType,
        const MethodInfo *method)
{
  if ( (byte_49FF0CE & 1) == 0 )
  {
    sub_1B64A00(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&nextType);
    byte_49FF0CE = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           questId,
           nextType,
           (const MethodInfo_2E39F04 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall QuestScriptMaterialNextEntity__CreatePrimaryKey(
        QuestScriptMaterialNextEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return QuestScriptMaterialNextEntity__CreatePK(this->fields.questId, this->fields.nextType, v2);
}