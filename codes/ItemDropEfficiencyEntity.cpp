void __fastcall ItemDropEfficiencyEntity___ctor(ItemDropEfficiencyEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B460 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5B460 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall ItemDropEfficiencyEntity__CreatePK(
        int32_t itemId,
        int32_t targetType,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_4A5B45F & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4A5B45F = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           itemId,
           targetType,
           priority,
           (const MethodInfo_2E7DFBC *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall ItemDropEfficiencyEntity__CreatePrimaryKey(
        ItemDropEfficiencyEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return ItemDropEfficiencyEntity__CreatePK(this->fields.itemId, this->fields.targetType, this->fields.priority, v2);
}


bool __fastcall ItemDropEfficiencyEntity__IsMainScenario(ItemDropEfficiencyEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B45D & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_21255/*"mainScenario"*/);
    byte_4A5B45D = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21255/*"mainScenario"*/, 0, 0LL) > 0;
}


bool __fastcall ItemDropEfficiencyEntity__IsNotDisplayQuestInfo(
        ItemDropEfficiencyEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5B45E & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_22143/*"notDisplayQuestInfo"*/);
    byte_4A5B45E = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22143/*"notDisplayQuestInfo"*/, 0, 0LL) > 0;
}