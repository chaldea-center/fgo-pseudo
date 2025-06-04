void __fastcall ServantCardAddEntity___ctor(ServantCardAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B02825 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataEntityBase_string___ctor__, method);
    byte_4B02825 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32ACC04 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantCardAddEntity__CreatePK(int32_t svtId, int32_t cardId, const MethodInfo *method)
{
  if ( (byte_4B0281D & 1) == 0 )
  {
    sub_1BC3008(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&cardId);
    byte_4B0281D = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           svtId,
           cardId,
           (const MethodInfo_2FFFFEC *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
  if ( (byte_4B0281F & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_16779/*"attackNpRate"*/, method);
    byte_4B0281F = 1;
  }
  return EntityScriptUtil__GetMillesimal(this->fields.script, (System_String_o *)StringLiteral_16779/*"attackNpRate"*/, 1.0, 0LL);
}


float __fastcall ServantCardAddEntity__GetDamageRate(ServantCardAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B0281E & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_18277/*"damageRate"*/, method);
    byte_4B0281E = 1;
  }
  return EntityScriptUtil__GetMillesimal(this->fields.script, (System_String_o *)StringLiteral_18277/*"damageRate"*/, 1.0, 0LL);
}


float __fastcall ServantCardAddEntity__GetDefenseNpRate(ServantCardAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B02820 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_18377/*"defenseNpRate"*/, method);
    byte_4B02820 = 1;
  }
  return EntityScriptUtil__GetMillesimal(this->fields.script, (System_String_o *)StringLiteral_18377/*"defenseNpRate"*/, 1.0, 0LL);
}


float __fastcall ServantCardAddEntity__GetDropStarRate(ServantCardAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B02821 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_18497/*"dropStarRate"*/, method);
    byte_4B02821 = 1;
  }
  return EntityScriptUtil__GetMillesimal(this->fields.script, (System_String_o *)StringLiteral_18497/*"dropStarRate"*/, 1.0, 0LL);
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
  if ( (byte_4B02824 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_22516/*"positionDamageRatesSlideType"*/, method);
    byte_4B02824 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22516/*"positionDamageRatesSlideType"*/, 0, 0LL);
}


bool __fastcall ServantCardAddEntity__IsForceAttackFunctionTargetAll(
        ServantCardAddEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B02822 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_6754/*"ForceAttackFunctionTargetAll"*/, method);
    byte_4B02822 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_6754/*"ForceAttackFunctionTargetAll"*/, 0LL);
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
  if ( (byte_4B02823 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_22515/*"positionDamageRates"*/, positionDamageRates);
    byte_4B02823 = 1;
  }
  return EntityScriptUtil__TryGetIntArray(
           this->fields.script,
           (System_String_o *)StringLiteral_22515/*"positionDamageRates"*/,
           positionDamageRates,
           0LL);
}