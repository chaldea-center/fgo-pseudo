void __fastcall AiActEntity___ctor(AiActEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438A465 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_int___ctor__);
    byte_438A465 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_21FB740 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall AiActEntity__CreatePrimaryKey(AiActEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


int32_t __fastcall AiActEntity__GetNoTargetNoActionType(AiActEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438A463 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_21539/*"noTargetNoActionType"*/);
    byte_438A463 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21539/*"noTargetNoActionType"*/, 0, 0LL);
}


bool __fastcall AiActEntity__IsIncludeDeathSvt(AiActEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438A461 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_20169/*"includeDeathSvt"*/);
    byte_438A461 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_20169/*"includeDeathSvt"*/, 0LL);
}


bool __fastcall AiActEntity__IsNoCriticalOnAttack(AiActEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438A464 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_21531/*"noCriticalOnAttack"*/);
    byte_438A464 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21531/*"noCriticalOnAttack"*/, 0, 0LL) == 1;
}


bool __fastcall AiActEntity__TryGetMultiIndividuality(
        AiActEntity_o *this,
        System_Int32_array_array **resValues,
        const MethodInfo *method)
{
  if ( (byte_438A462 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_7742/*"Individuality"*/);
    byte_438A462 = 1;
  }
  return EntityScriptUtil__TryGet2DimensionalIntArray(
           this->fields.script,
           (System_String_o *)StringLiteral_7742/*"Individuality"*/,
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