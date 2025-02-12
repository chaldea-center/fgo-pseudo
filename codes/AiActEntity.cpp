void __fastcall AiActEntity___ctor(AiActEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BB42D1 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataEntityBase_int___ctor__, method);
    byte_4BB42D1 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3236140 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall AiActEntity__CreatePrimaryKey(AiActEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


int32_t __fastcall AiActEntity__GetNoTargetNoActionType(AiActEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BB42CF & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_22463/*"no number"*/, method);
    byte_4BB42CF = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22463/*"no number"*/, 0, v2);
}


bool __fastcall AiActEntity__IsIncludeDeathSvt(AiActEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4BB42CD & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_20953/*"img_wall_{0}"*/, method);
    byte_4BB42CD = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_20953/*"img_wall_{0}"*/, v2);
}


bool __fastcall AiActEntity__IsNoCriticalOnAttack(AiActEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BB42D0 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_22454/*"no"*/, method);
    byte_4BB42D0 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22454/*"no"*/, 0, v2) == 1;
}


bool __fastcall AiActEntity__TryGetMultiIndividuality(
        AiActEntity_o *this,
        System_Int32_array_array **resValues,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4BB42CE & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_7731/*"Indices allocated != Indices requested"*/, resValues);
    byte_4BB42CE = 1;
  }
  return EntityScriptUtil__TryGet2DimensionalIntArray(
           this->fields.script,
           (System_String_o *)StringLiteral_7731/*"Indices allocated != Indices requested"*/,
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