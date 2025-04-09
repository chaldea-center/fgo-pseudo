void __fastcall ServantCardAddEntity___ctor(ServantCardAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49BB555 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataEntityBase_string___ctor__, method);
    byte_49BB555 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_319B530 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantCardAddEntity__CreatePK(int32_t svtId, int32_t cardId, const MethodInfo *method)
{
  if ( (byte_49BB54D & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&cardId);
    byte_49BB54D = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           svtId,
           cardId,
           (const MethodInfo_2EFFCAC *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall ServantCardAddEntity__CreatePrimaryKey(
        ServantCardAddEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return ServantCardAddEntity__CreatePK(this->fields.svtId, this->fields.cardId, v2);
}


float __fastcall ServantCardAddEntity__GetAttackNpRate(ServantCardAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49BB54F & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_16640/*"attackNpRate"*/, method);
    byte_49BB54F = 1;
  }
  return EntityScriptUtil__GetMillesimal(this->fields.script, (System_String_o *)StringLiteral_16640/*"attackNpRate"*/, 1.0, 0LL);
}


float __fastcall ServantCardAddEntity__GetDamageRate(ServantCardAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49BB54E & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_18133/*"damageRate"*/, method);
    byte_49BB54E = 1;
  }
  return EntityScriptUtil__GetMillesimal(this->fields.script, (System_String_o *)StringLiteral_18133/*"damageRate"*/, 1.0, 0LL);
}


float __fastcall ServantCardAddEntity__GetDefenseNpRate(ServantCardAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49BB550 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_18234/*"defenseNpRate"*/, method);
    byte_49BB550 = 1;
  }
  return EntityScriptUtil__GetMillesimal(this->fields.script, (System_String_o *)StringLiteral_18234/*"defenseNpRate"*/, 1.0, 0LL);
}


float __fastcall ServantCardAddEntity__GetDropStarRate(ServantCardAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49BB551 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_18361/*"dropStarRate"*/, method);
    byte_49BB551 = 1;
  }
  return EntityScriptUtil__GetMillesimal(this->fields.script, (System_String_o *)StringLiteral_18361/*"dropStarRate"*/, 1.0, 0LL);
}


float __fastcall ServantCardAddEntity__GetMillesimal(
        ServantCardAddEntity_o *this,
        System_String_o *key,
        float defaultValue,
        const MethodInfo *method)
{
  return EntityScriptUtil__GetMillesimal(this->fields.script, key, defaultValue, 0LL);
}


int32_t __fastcall ServantCardAddEntity__GetPositionDamageRatesSlideType(
        ServantCardAddEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_49BB554 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_22296/*"positionDamageRatesSlideType"*/, method);
    byte_49BB554 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22296/*"positionDamageRatesSlideType"*/, 0, 0LL);
}


bool __fastcall ServantCardAddEntity__IsForceAttackFunctionTargetAll(
        ServantCardAddEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_49BB552 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_6697/*"ForceAttackFunctionTargetAll"*/, method);
    byte_49BB552 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_6697/*"ForceAttackFunctionTargetAll"*/, 0LL);
}


bool __fastcall ServantCardAddEntity__IsSlidePositionDamageRates(
        ServantCardAddEntity_o *this,
        const MethodInfo *method)
{
  return ServantCardAddEntity__GetPositionDamageRatesSlideType(this, method) != 0;
}


bool __fastcall ServantCardAddEntity__TryGetPositionDamageRates(
        ServantCardAddEntity_o *this,
        System_Int32_array **positionDamageRates,
        const MethodInfo *method)
{
  if ( (byte_49BB553 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_22295/*"positionDamageRates"*/, positionDamageRates);
    byte_49BB553 = 1;
  }
  return EntityScriptUtil__TryGetIntArray(
           this->fields.script,
           (System_String_o *)StringLiteral_22295/*"positionDamageRates"*/,
           positionDamageRates,
           0LL);
}