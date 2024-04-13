void __fastcall QuestScriptMaterialOverwriteEntity___ctor(
        QuestScriptMaterialOverwriteEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E6F30 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)method, v2, v3);
    byte_42E6F30 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall QuestScriptMaterialOverwriteEntity__CreatePK(
        int32_t questId,
        int32_t priority,
        const MethodInfo *method)
{
  __int64 v3; // x3

  if ( (byte_42E6F2F & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_CreateMultiplePK_int__int___, priority, (_DWORD)method, v3);
    byte_42E6F2F = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           questId,
           priority,
           (const MethodInfo_1AE3018 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall QuestScriptMaterialOverwriteEntity__CreatePrimaryKey(
        QuestScriptMaterialOverwriteEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return QuestScriptMaterialOverwriteEntity__CreatePK(this->fields.questId, this->fields.priority, v2);
}