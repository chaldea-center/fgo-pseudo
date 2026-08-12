void ItemDropEfficiencyEntity___ctor(ItemDropEfficiencyEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5970CF1 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_string___ctor__);
    byte_5970CF1 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3F0E590 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *ItemDropEfficiencyEntity__CreatePK(
        int32_t itemId,
        int32_t targetType,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_5970CF0 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_5970CF0 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           itemId,
           targetType,
           priority,
           (const MethodInfo_38548C4 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
    sub_2213CDC(0, method);
  return System_String__Split(transitionParam, 0x2Fu, 0, 0);
}


bool ItemDropEfficiencyEntity__IsLoginBonus(ItemDropEfficiencyEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5970CEF & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_22421/*"loginBonus"*/);
    byte_5970CEF = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22421/*"loginBonus"*/, 0, 0) > 0;
}


bool ItemDropEfficiencyEntity__IsMainScenario(ItemDropEfficiencyEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5970CED & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_22483/*"mainScenario"*/);
    byte_5970CED = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22483/*"mainScenario"*/, 0, 0) > 0;
}


bool ItemDropEfficiencyEntity__IsNotDisplayQuestInfo(ItemDropEfficiencyEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5970CEE & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_23431/*"notDisplayQuestInfo"*/);
    byte_5970CEE = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_23431/*"notDisplayQuestInfo"*/, 0, 0) > 0;
}