void __fastcall AiActEntity___ctor(AiActEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E6834 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_int___ctor__, (_DWORD)method, v2, v3);
    byte_42E6834 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_23FACBC *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall AiActEntity__CreatePrimaryKey(AiActEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


int32_t __fastcall AiActEntity__GetNoTargetNoActionType(AiActEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E6832 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_21380/*"noTargetNoActionType"*/, (_DWORD)method, v2, v3);
    byte_42E6832 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21380/*"noTargetNoActionType"*/, 0, 0LL);
}


bool __fastcall AiActEntity__IsIncludeDeathSvt(AiActEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E6830 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_20015/*"includeDeathSvt"*/, (_DWORD)method, v2, v3);
    byte_42E6830 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_20015/*"includeDeathSvt"*/, 0LL);
}


bool __fastcall AiActEntity__IsNoCriticalOnAttack(AiActEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E6833 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_21372/*"noCriticalOnAttack"*/, (_DWORD)method, v2, v3);
    byte_42E6833 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21372/*"noCriticalOnAttack"*/, 0, 0LL) == 1;
}


bool __fastcall AiActEntity__TryGetMultiIndividuality(
        AiActEntity_o *this,
        System_Int32_array_array **resValues,
        const MethodInfo *method)
{
  __int64 v3; // x3

  if ( (byte_42E6831 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_7671/*"Individuality"*/, (_DWORD)resValues, (_DWORD)method, v3);
    byte_42E6831 = 1;
  }
  return EntityScriptUtil__TryGet2DimensionalIntArray(
           this->fields.script,
           (System_String_o *)StringLiteral_7671/*"Individuality"*/,
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