void __fastcall QuestScriptMaterialOverwriteEntity___ctor(
        QuestScriptMaterialOverwriteEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_49FF0D9 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataEntityBase_string___ctor__, method);
    byte_49FF0D9 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30D6610 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestScriptMaterialOverwriteEntity__CreatePK(
        int32_t questId,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_49FF0D8 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&priority);
    byte_49FF0D8 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           questId,
           priority,
           (const MethodInfo_2E39F04 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall QuestScriptMaterialOverwriteEntity__CreatePrimaryKey(
        QuestScriptMaterialOverwriteEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return QuestScriptMaterialOverwriteEntity__CreatePK(this->fields.questId, this->fields.priority, v2);
}