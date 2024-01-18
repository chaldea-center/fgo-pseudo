void __fastcall QuestScriptBranchMaterialEntity___ctor(
        QuestScriptBranchMaterialEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_418607F & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_418607F = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestScriptBranchMaterialEntity__CreatePK(
        int32_t questId,
        int32_t phase,
        int32_t playType,
        const MethodInfo *method)
{
  if ( (byte_418607E & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&phase);
    byte_418607E = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           questId,
           phase,
           playType,
           (const MethodInfo_1732D30 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall QuestScriptBranchMaterialEntity__CreatePrimaryKey(
        QuestScriptBranchMaterialEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return QuestScriptBranchMaterialEntity__CreatePK(this->fields.questId, this->fields.phase, this->fields.playType, v2);
}