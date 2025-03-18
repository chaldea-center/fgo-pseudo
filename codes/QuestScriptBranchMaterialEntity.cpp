void __fastcall QuestScriptBranchMaterialEntity___ctor(
        QuestScriptBranchMaterialEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C2255D & 1) == 0 )
  {
    sub_1C3B764(&Method_DataEntityBase_string___ctor__, method);
    byte_4C2255D = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32989DC *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestScriptBranchMaterialEntity__CreatePK(
        int32_t questId,
        int32_t phase,
        int32_t playType,
        const MethodInfo *method)
{
  if ( (byte_4C2255C & 1) == 0 )
  {
    sub_1C3B764(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&phase);
    byte_4C2255C = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           questId,
           phase,
           playType,
           (const MethodInfo_2FEE81C *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall QuestScriptBranchMaterialEntity__CreatePrimaryKey(
        QuestScriptBranchMaterialEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return QuestScriptBranchMaterialEntity__CreatePK(this->fields.questId, this->fields.phase, this->fields.playType, v2);
}