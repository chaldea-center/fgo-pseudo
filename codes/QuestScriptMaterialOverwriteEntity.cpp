void __fastcall QuestScriptMaterialOverwriteEntity___ctor(
        QuestScriptMaterialOverwriteEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_438994A & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_438994A = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall QuestScriptMaterialOverwriteEntity__CreatePK(
        int32_t questId,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_4389949 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4389949 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           questId,
           priority,
           (const MethodInfo_1D171BC *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall QuestScriptMaterialOverwriteEntity__CreatePrimaryKey(
        QuestScriptMaterialOverwriteEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return QuestScriptMaterialOverwriteEntity__CreatePK(this->fields.questId, this->fields.priority, v2);
}