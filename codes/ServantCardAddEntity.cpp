void __fastcall ServantCardAddEntity___ctor(ServantCardAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B7B4 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5B7B4 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall ServantCardAddEntity__CreatePK(int32_t svtId, int32_t cardId, const MethodInfo *method)
{
  if ( (byte_4A5B7AE & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4A5B7AE = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           svtId,
           cardId,
           (const MethodInfo_2E7DB2C *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
  if ( (byte_4A5B7B0 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_16952/*"attackNpRate"*/);
    byte_4A5B7B0 = 1;
  }
  return EntityScriptUtil__GetMillesimal(this->fields.script, (System_String_o *)StringLiteral_16952/*"attackNpRate"*/, 1.0, 0LL);
}


float __fastcall ServantCardAddEntity__GetDamageRate(ServantCardAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B7AF & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_18440/*"damageRate"*/);
    byte_4A5B7AF = 1;
  }
  return EntityScriptUtil__GetMillesimal(this->fields.script, (System_String_o *)StringLiteral_18440/*"damageRate"*/, 1.0, 0LL);
}


float __fastcall ServantCardAddEntity__GetDefenseNpRate(ServantCardAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B7B1 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_18545/*"defenseNpRate"*/);
    byte_4A5B7B1 = 1;
  }
  return EntityScriptUtil__GetMillesimal(this->fields.script, (System_String_o *)StringLiteral_18545/*"defenseNpRate"*/, 1.0, 0LL);
}


float __fastcall ServantCardAddEntity__GetDropStarRate(ServantCardAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B7B2 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_18670/*"dropStarRate"*/);
    byte_4A5B7B2 = 1;
  }
  return EntityScriptUtil__GetMillesimal(this->fields.script, (System_String_o *)StringLiteral_18670/*"dropStarRate"*/, 1.0, 0LL);
}


float __fastcall ServantCardAddEntity__GetMillesimal(
        ServantCardAddEntity_o *this,
        System_String_o *key,
        float defaultValue,
        const MethodInfo *method)
{
  return EntityScriptUtil__GetMillesimal(this->fields.script, key, defaultValue, 0LL);
}


bool __fastcall ServantCardAddEntity__IsForceAttackFunctionTargetAll(
        ServantCardAddEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5B7B3 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_6776/*"ForceAttackFunctionTargetAll"*/);
    byte_4A5B7B3 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_6776/*"ForceAttackFunctionTargetAll"*/, 0LL);
}