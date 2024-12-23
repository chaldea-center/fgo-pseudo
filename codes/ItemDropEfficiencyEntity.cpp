void __fastcall ItemDropEfficiencyEntity___ctor(ItemDropEfficiencyEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B66ED5 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataEntityBase_string___ctor__, method);
    byte_4B66ED5 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31FD63C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ItemDropEfficiencyEntity__CreatePK(
        int32_t itemId,
        int32_t targetType,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_4B66ED4 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&targetType);
    byte_4B66ED4 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           itemId,
           targetType,
           priority,
           (const MethodInfo_2F577C4 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
    sub_1BE4D28(0LL, method);
  return System_String__Split(transitionParam, 0x2Fu, 0, 0LL);
}


bool __fastcall ItemDropEfficiencyEntity__IsMainScenario(ItemDropEfficiencyEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B66ED2 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_21557/*"mainScenario"*/, method);
    byte_4B66ED2 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21557/*"mainScenario"*/, 0, 0LL) > 0;
}


bool __fastcall ItemDropEfficiencyEntity__IsNotDisplayQuestInfo(
        ItemDropEfficiencyEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B66ED3 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_22460/*"notDisplayQuestInfo"*/, method);
    byte_4B66ED3 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22460/*"notDisplayQuestInfo"*/, 0, 0LL) > 0;
}