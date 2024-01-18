void __fastcall QuestScriptMaterialNextEntity___ctor(QuestScriptMaterialNextEntity_o *this, const MethodInfo *method)
{
  if ( (byte_418609A & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_418609A = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestScriptMaterialNextEntity__CreatePK(
        int32_t questId,
        int32_t nextType,
        const MethodInfo *method)
{
  if ( (byte_4186099 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&nextType);
    byte_4186099 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           questId,
           nextType,
           (const MethodInfo_1732908 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall QuestScriptMaterialNextEntity__CreatePrimaryKey(
        QuestScriptMaterialNextEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return QuestScriptMaterialNextEntity__CreatePK(this->fields.questId, this->fields.nextType, v2);
}