void ItemDropEfficiencyEntity___ctor(ItemDropEfficiencyEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEEAF5 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_string___ctor__);
    byte_4CEEAF5 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_342BE90 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *ItemDropEfficiencyEntity__CreatePK(
        int32_t itemId,
        int32_t targetType,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_4CEEAF4 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4CEEAF4 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           itemId,
           targetType,
           priority,
           (const MethodInfo_316EA0C *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *ItemDropEfficiencyEntity__CreatePrimaryKey(ItemDropEfficiencyEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return ItemDropEfficiencyEntity__CreatePK(this->fields.itemId, this->fields.targetType, this->fields.priority, v2);
}


System_String_array *ItemDropEfficiencyEntity__GetTransitionParams(
        ItemDropEfficiencyEntity_o *this,
        const MethodInfo *method)
{
  System_String_o *transitionParam; // x0

  transitionParam = this->fields.transitionParam;
  if ( !transitionParam )
    sub_1C7BD40(0, method);
  return System_String__Split(transitionParam, 0x2Fu, 0, 0);
}


bool ItemDropEfficiencyEntity__IsLoginBonus(ItemDropEfficiencyEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEEAF3 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_21542/*"loginBonus"*/);
    byte_4CEEAF3 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21542/*"loginBonus"*/, 0, 0) > 0;
}


bool ItemDropEfficiencyEntity__IsMainScenario(ItemDropEfficiencyEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEEAF1 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_21599/*"mainScenario"*/);
    byte_4CEEAF1 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21599/*"mainScenario"*/, 0, 0) > 0;
}


bool ItemDropEfficiencyEntity__IsNotDisplayQuestInfo(ItemDropEfficiencyEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEEAF2 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_22507/*"notDisplayQuestInfo"*/);
    byte_4CEEAF2 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22507/*"notDisplayQuestInfo"*/, 0, 0) > 0;
}