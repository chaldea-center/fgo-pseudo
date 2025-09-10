void ItemDropEfficiencyEntity___ctor(ItemDropEfficiencyEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C2764A & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_string___ctor__);
    byte_4C2764A = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_338592C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *ItemDropEfficiencyEntity__CreatePK(
        int32_t itemId,
        int32_t targetType,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_4C27649 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4C27649 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           itemId,
           targetType,
           priority,
           (const MethodInfo_30CCF68 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
    sub_1C2D6EC(0, method);
  return System_String__Split(transitionParam, 0x2Fu, 0, 0);
}


bool ItemDropEfficiencyEntity__IsMainScenario(ItemDropEfficiencyEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C27647 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_21383/*"mainScenario"*/);
    byte_4C27647 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21383/*"mainScenario"*/, 0, 0) > 0;
}


bool ItemDropEfficiencyEntity__IsNotDisplayQuestInfo(ItemDropEfficiencyEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C27648 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_22282/*"notDisplayQuestInfo"*/);
    byte_4C27648 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22282/*"notDisplayQuestInfo"*/, 0, 0) > 0;
}