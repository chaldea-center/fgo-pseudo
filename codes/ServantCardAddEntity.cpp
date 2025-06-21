void __fastcall ServantCardAddEntity___ctor(ServantCardAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B1CD2E & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataEntityBase_string___ctor__, method);
    byte_4B1CD2E = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32C5994 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantCardAddEntity__CreatePK(int32_t svtId, int32_t cardId, const MethodInfo *method)
{
  if ( (byte_4B1CD26 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&cardId);
    byte_4B1CD26 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           svtId,
           cardId,
           (const MethodInfo_3018C2C *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
  if ( (byte_4B1CD28 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_16791/*"attackNpRate"*/, method);
    byte_4B1CD28 = 1;
  }
  return EntityScriptUtil__GetMillesimal(this->fields.script, (System_String_o *)StringLiteral_16791/*"attackNpRate"*/, 1.0, 0LL);
}


float __fastcall ServantCardAddEntity__GetDamageRate(ServantCardAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B1CD27 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_18291/*"damageRate"*/, method);
    byte_4B1CD27 = 1;
  }
  return EntityScriptUtil__GetMillesimal(this->fields.script, (System_String_o *)StringLiteral_18291/*"damageRate"*/, 1.0, 0LL);
}


float __fastcall ServantCardAddEntity__GetDefenseNpRate(ServantCardAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B1CD29 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_18391/*"defenseNpRate"*/, method);
    byte_4B1CD29 = 1;
  }
  return EntityScriptUtil__GetMillesimal(this->fields.script, (System_String_o *)StringLiteral_18391/*"defenseNpRate"*/, 1.0, 0LL);
}


float __fastcall ServantCardAddEntity__GetDropStarRate(ServantCardAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B1CD2A & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_18511/*"dropStarRate"*/, method);
    byte_4B1CD2A = 1;
  }
  return EntityScriptUtil__GetMillesimal(this->fields.script, (System_String_o *)StringLiteral_18511/*"dropStarRate"*/, 1.0, 0LL);
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
  if ( (byte_4B1CD2D & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_22535/*"positionDamageRatesSlideType"*/, method);
    byte_4B1CD2D = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22535/*"positionDamageRatesSlideType"*/, 0, 0LL);
}


bool __fastcall ServantCardAddEntity__IsForceAttackFunctionTargetAll(
        ServantCardAddEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B1CD2B & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_6759/*"ForceAttackFunctionTargetAll"*/, method);
    byte_4B1CD2B = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_6759/*"ForceAttackFunctionTargetAll"*/, 0LL);
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
  if ( (byte_4B1CD2C & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_22534/*"positionDamageRates"*/, positionDamageRates);
    byte_4B1CD2C = 1;
  }
  return EntityScriptUtil__TryGetIntArray(
           this->fields.script,
           (System_String_o *)StringLiteral_22534/*"positionDamageRates"*/,
           positionDamageRates,
           0LL);
}