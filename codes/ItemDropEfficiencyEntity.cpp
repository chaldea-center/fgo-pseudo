void __fastcall ItemDropEfficiencyEntity___ctor(ItemDropEfficiencyEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4AB6054 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataEntityBase_string___ctor__, method);
    byte_4AB6054 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3163C08 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ItemDropEfficiencyEntity__CreatePK(
        int32_t itemId,
        int32_t targetType,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_4AB6053 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&targetType);
    byte_4AB6053 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           itemId,
           targetType,
           priority,
           (const MethodInfo_2EC2A28 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall ItemDropEfficiencyEntity__CreatePrimaryKey(
        ItemDropEfficiencyEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return ItemDropEfficiencyEntity__CreatePK(this->fields.itemId, this->fields.targetType, this->fields.priority, v2);
}


System_String_array *__fastcall ItemDropEfficiencyEntity__GetTransitionParams(
        ItemDropEfficiencyEntity_o *this,
        const MethodInfo *method)
{
  System_String_o *transitionParam; // x0

  transitionParam = this->fields.transitionParam;
  if ( !transitionParam )
    sub_1BAB678(0LL, method);
  return System_String__Split(transitionParam, 0x2Fu, 0, 0LL);
}


bool __fastcall ItemDropEfficiencyEntity__IsMainScenario(ItemDropEfficiencyEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4AB6051 & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_21287/*"mainScenario"*/, method);
    byte_4AB6051 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21287/*"mainScenario"*/, 0, 0LL) > 0;
}


bool __fastcall ItemDropEfficiencyEntity__IsNotDisplayQuestInfo(
        ItemDropEfficiencyEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4AB6052 & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_22179/*"notDisplayQuestInfo"*/, method);
    byte_4AB6052 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22179/*"notDisplayQuestInfo"*/, 0, 0LL) > 0;
}