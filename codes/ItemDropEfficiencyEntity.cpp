void __fastcall ItemDropEfficiencyEntity___ctor(ItemDropEfficiencyEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BC7DD2 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataEntityBase_string___ctor__, method);
    byte_4BC7DD2 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_324620C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ItemDropEfficiencyEntity__CreatePK(
        int32_t itemId,
        int32_t targetType,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_4BC7DD1 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&targetType);
    byte_4BC7DD1 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           itemId,
           targetType,
           priority,
           (const MethodInfo_2F9DB44 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
    sub_1C1AE30(0LL, method);
  return System_String__Split(transitionParam, 0x2Fu, 0, 0LL);
}


bool __fastcall ItemDropEfficiencyEntity__IsMainScenario(ItemDropEfficiencyEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BC7DCF & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_21620/*"mainScenario"*/, method);
    byte_4BC7DCF = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21620/*"mainScenario"*/, 0, 0LL) > 0;
}


bool __fastcall ItemDropEfficiencyEntity__IsNotDisplayQuestInfo(
        ItemDropEfficiencyEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BC7DD0 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_22528/*"notDisplayQuestInfo"*/, method);
    byte_4BC7DD0 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22528/*"notDisplayQuestInfo"*/, 0, 0LL) > 0;
}