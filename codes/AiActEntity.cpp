void __fastcall AiActEntity___ctor(AiActEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FE749 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataEntityBase_int___ctor__, method);
    byte_49FE749 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_30D6598 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall AiActEntity__CreatePrimaryKey(AiActEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


int32_t __fastcall AiActEntity__GetNoTargetNoActionType(AiActEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FE747 & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_22012/*"noTargetNoActionType"*/, method);
    byte_49FE747 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22012/*"noTargetNoActionType"*/, 0, 0LL);
}


bool __fastcall AiActEntity__IsIncludeDeathSvt(AiActEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FE745 & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_20533/*"includeDeathSvt"*/, method);
    byte_49FE745 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_20533/*"includeDeathSvt"*/, 0LL);
}


bool __fastcall AiActEntity__IsNoCriticalOnAttack(AiActEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FE748 & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_22004/*"noCriticalOnAttack"*/, method);
    byte_49FE748 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22004/*"noCriticalOnAttack"*/, 0, 0LL) == 1;
}


bool __fastcall AiActEntity__TryGetMultiIndividuality(
        AiActEntity_o *this,
        System_Int32_array_array **resValues,
        const MethodInfo *method)
{
  if ( (byte_49FE746 & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_7535/*"Individuality"*/, resValues);
    byte_49FE746 = 1;
  }
  return EntityScriptUtil__TryGet2DimensionalIntArray(
           this->fields.script,
           (System_String_o *)StringLiteral_7535/*"Individuality"*/,
           resValues,
           0LL);
}


int32_t __fastcall AiActEntity__getActTarget(AiActEntity_o *this, const MethodInfo *method)
{
  return this->fields.target;
}


int32_t __fastcall AiActEntity__getActType(AiActEntity_o *this, const MethodInfo *method)
{
  return this->fields.type;
}


bool __fastcall AiActEntity__isThinkEnd(AiActEntity_o *this, const MethodInfo *method)
{
  return AiAct__isThinkEnd(this->fields.type, 0LL);
}