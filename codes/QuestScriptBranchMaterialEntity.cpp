void __fastcall QuestScriptBranchMaterialEntity___ctor(
        QuestScriptBranchMaterialEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4389924 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_4389924 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall QuestScriptBranchMaterialEntity__CreatePK(
        int32_t questId,
        int32_t phase,
        int32_t playType,
        const MethodInfo *method)
{
  if ( (byte_4389923 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4389923 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           questId,
           phase,
           playType,
           (const MethodInfo_1D175E4 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall QuestScriptBranchMaterialEntity__CreatePrimaryKey(
        QuestScriptBranchMaterialEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return QuestScriptBranchMaterialEntity__CreatePK(this->fields.questId, this->fields.phase, this->fields.playType, v2);
}