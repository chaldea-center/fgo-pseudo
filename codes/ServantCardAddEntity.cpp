void __fastcall ServantCardAddEntity___ctor(ServantCardAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B45271 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataEntityBase_string___ctor__, method);
    byte_4B45271 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32DF9D0 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantCardAddEntity__CreatePK(int32_t svtId, int32_t cardId, const MethodInfo *method)
{
  if ( (byte_4B45269 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&cardId);
    byte_4B45269 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           svtId,
           cardId,
           (const MethodInfo_3031AE4 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
  if ( (byte_4B4526B & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_16937/*"attackNpRate"*/, method);
    byte_4B4526B = 1;
  }
  return EntityScriptUtil__GetMillesimal(this->fields.script, (System_String_o *)StringLiteral_16937/*"attackNpRate"*/, 1.0, 0LL);
}


float __fastcall ServantCardAddEntity__GetDamageRate(ServantCardAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B4526A & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_18452/*"damageRate"*/, method);
    byte_4B4526A = 1;
  }
  return EntityScriptUtil__GetMillesimal(this->fields.script, (System_String_o *)StringLiteral_18452/*"damageRate"*/, 1.0, 0LL);
}


float __fastcall ServantCardAddEntity__GetDefenseNpRate(ServantCardAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B4526C & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_18553/*"defenseNpRate"*/, method);
    byte_4B4526C = 1;
  }
  return EntityScriptUtil__GetMillesimal(this->fields.script, (System_String_o *)StringLiteral_18553/*"defenseNpRate"*/, 1.0, 0LL);
}


float __fastcall ServantCardAddEntity__GetDropStarRate(ServantCardAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B4526D & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_18681/*"dropStarRate"*/, method);
    byte_4B4526D = 1;
  }
  return EntityScriptUtil__GetMillesimal(this->fields.script, (System_String_o *)StringLiteral_18681/*"dropStarRate"*/, 1.0, 0LL);
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
  if ( (byte_4B45270 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_22761/*"positionDamageRatesSlideType"*/, method);
    byte_4B45270 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22761/*"positionDamageRatesSlideType"*/, 0, 0LL);
}


bool __fastcall ServantCardAddEntity__IsForceAttackFunctionTargetAll(
        ServantCardAddEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B4526E & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_6821/*"ForceAttackFunctionTargetAll"*/, method);
    byte_4B4526E = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_6821/*"ForceAttackFunctionTargetAll"*/, 0LL);
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
  if ( (byte_4B4526F & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_22760/*"positionDamageRates"*/, positionDamageRates);
    byte_4B4526F = 1;
  }
  return EntityScriptUtil__TryGetIntArray(
           this->fields.script,
           (System_String_o *)StringLiteral_22760/*"positionDamageRates"*/,
           positionDamageRates,
           0LL);
}