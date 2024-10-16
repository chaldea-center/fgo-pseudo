void __fastcall AiActEntity___ctor(AiActEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4AB5962 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataEntityBase_int___ctor__, method);
    byte_4AB5962 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3163B90 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall AiActEntity__CreatePrimaryKey(AiActEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


int32_t __fastcall AiActEntity__GetNoTargetNoActionType(AiActEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4AB5960 & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_22132/*"noTargetNoActionType"*/, method);
    byte_4AB5960 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22132/*"noTargetNoActionType"*/, 0, v2);
}


bool __fastcall AiActEntity__IsIncludeDeathSvt(AiActEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4AB595E & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_20643/*"includeDeathSvt"*/, method);
    byte_4AB595E = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_20643/*"includeDeathSvt"*/, v2);
}


bool __fastcall AiActEntity__IsNoCriticalOnAttack(AiActEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4AB5961 & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_22123/*"noCriticalOnAttack"*/, method);
    byte_4AB5961 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22123/*"noCriticalOnAttack"*/, 0, v2) == 1;
}


bool __fastcall AiActEntity__TryGetMultiIndividuality(
        AiActEntity_o *this,
        System_Int32_array_array **resValues,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4AB595F & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_7571/*"Individuality"*/, resValues);
    byte_4AB595F = 1;
  }
  return EntityScriptUtil__TryGet2DimensionalIntArray(
           this->fields.script,
           (System_String_o *)StringLiteral_7571/*"Individuality"*/,
           resValues,
           v3);
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