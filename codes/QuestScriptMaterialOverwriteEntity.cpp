void __fastcall QuestScriptMaterialOverwriteEntity___ctor(
        QuestScriptMaterialOverwriteEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B451CB & 1) == 0 )
  {
    sub_1BDB878(&Method_DataEntityBase_string___ctor__, method);
    byte_4B451CB = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32DF9D0 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestScriptMaterialOverwriteEntity__CreatePK(
        int32_t questId,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_4B451CA & 1) == 0 )
  {
    sub_1BDB878(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&priority);
    byte_4B451CA = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           questId,
           priority,
           (const MethodInfo_3031AE4 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall QuestScriptMaterialOverwriteEntity__CreatePrimaryKey(
        QuestScriptMaterialOverwriteEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return QuestScriptMaterialOverwriteEntity__CreatePK(this->fields.questId, this->fields.priority, v2);
}