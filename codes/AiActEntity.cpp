void __fastcall AiActEntity___ctor(AiActEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42ADFA8 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_int___ctor__);
    byte_42ADFA8 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_23E2184 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall AiActEntity__CreatePrimaryKey(AiActEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


int32_t __fastcall AiActEntity__GetNoTargetNoActionType(AiActEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42ADFA6 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_21274/*"noTargetNoActionType"*/);
    byte_42ADFA6 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21274/*"noTargetNoActionType"*/, 0, 0LL);
}


bool __fastcall AiActEntity__IsIncludeDeathSvt(AiActEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42ADFA4 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_19913/*"includeDeathSvt"*/);
    byte_42ADFA4 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_19913/*"includeDeathSvt"*/, 0LL);
}


bool __fastcall AiActEntity__IsNoCriticalOnAttack(AiActEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42ADFA7 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_21266/*"noCriticalOnAttack"*/);
    byte_42ADFA7 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21266/*"noCriticalOnAttack"*/, 0, 0LL) == 1;
}


bool __fastcall AiActEntity__TryGetMultiIndividuality(
        AiActEntity_o *this,
        System_Int32_array_array **resValues,
        const MethodInfo *method)
{
  if ( (byte_42ADFA5 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_7634/*"Individuality"*/);
    byte_42ADFA5 = 1;
  }
  return EntityScriptUtil__TryGet2DimensionalIntArray(
           this->fields.script,
           (System_String_o *)StringLiteral_7634/*"Individuality"*/,
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
  return this->fields.type != 99;
}