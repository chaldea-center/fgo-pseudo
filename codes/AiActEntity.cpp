void __fastcall AiActEntity___ctor(AiActEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4185A55 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_int___ctor__, method);
    byte_4185A55 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_24E3F7C *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall AiActEntity__CreatePrimaryKey(AiActEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


int32_t __fastcall AiActEntity__GetNoTargetNoActionType(AiActEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4185A54 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_21102/*"noTargetNoActionType"*/, method);
    byte_4185A54 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21102/*"noTargetNoActionType"*/, 0, 0LL);
}


bool __fastcall AiActEntity__IsIncludeDeathSvt(AiActEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4185A52 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_19766/*"includeDeathSvt"*/, method);
    byte_4185A52 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_19766/*"includeDeathSvt"*/, 0LL);
}


bool __fastcall AiActEntity__TryGetMultiIndividuality(
        AiActEntity_o *this,
        System_Int32_array_array **resValues,
        const MethodInfo *method)
{
  if ( (byte_4185A53 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_7587/*"Individuality"*/, resValues);
    byte_4185A53 = 1;
  }
  return EntityScriptUtil__TryGet2DimensionalIntArray(
           this->fields.script,
           (System_String_o *)StringLiteral_7587/*"Individuality"*/,
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