void __fastcall QuestScriptMaterialNextEntity___ctor(QuestScriptMaterialNextEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42AE4B6 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_string___ctor__);
    byte_42AE4B6 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23E2224 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall QuestScriptMaterialNextEntity__CreatePK(
        int32_t questId,
        int32_t nextType,
        const MethodInfo *method)
{
  if ( (byte_42AE4B5 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_42AE4B5 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           questId,
           nextType,
           (const MethodInfo_1A4DF50 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall QuestScriptMaterialNextEntity__CreatePrimaryKey(
        QuestScriptMaterialNextEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return QuestScriptMaterialNextEntity__CreatePK(this->fields.questId, this->fields.nextType, v2);
}