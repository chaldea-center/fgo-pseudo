void ItemDropEfficiencyEntity___ctor(ItemDropEfficiencyEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CC7866 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataEntityBase_string___ctor__);
    byte_4CC7866 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3406A14 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *ItemDropEfficiencyEntity__CreatePK(
        int32_t itemId,
        int32_t targetType,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_4CC7865 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4CC7865 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           itemId,
           targetType,
           priority,
           (const MethodInfo_3149724 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
    sub_1C71608(0, method);
  return System_String__Split(transitionParam, 0x2Fu, 0, 0);
}


bool ItemDropEfficiencyEntity__IsLoginBonus(ItemDropEfficiencyEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CC7864 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_21442/*"loginBonus"*/);
    byte_4CC7864 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21442/*"loginBonus"*/, 0, 0) > 0;
}


bool ItemDropEfficiencyEntity__IsMainScenario(ItemDropEfficiencyEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CC7862 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_21499/*"mainScenario"*/);
    byte_4CC7862 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21499/*"mainScenario"*/, 0, 0) > 0;
}


bool ItemDropEfficiencyEntity__IsNotDisplayQuestInfo(ItemDropEfficiencyEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CC7863 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_22403/*"notDisplayQuestInfo"*/);
    byte_4CC7863 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22403/*"notDisplayQuestInfo"*/, 0, 0) > 0;
}