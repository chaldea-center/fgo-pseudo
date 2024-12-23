void __fastcall ServantCardAddEntity___ctor(ServantCardAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B67249 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataEntityBase_string___ctor__, method);
    byte_4B67249 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31FD63C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantCardAddEntity__CreatePK(int32_t svtId, int32_t cardId, const MethodInfo *method)
{
  if ( (byte_4B67243 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&cardId);
    byte_4B67243 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           svtId,
           cardId,
           (const MethodInfo_2F57334 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
  if ( (byte_4B67245 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_17165/*"attackNpRate"*/, method);
    byte_4B67245 = 1;
  }
  return EntityScriptUtil__GetMillesimal(this->fields.script, (System_String_o *)StringLiteral_17165/*"attackNpRate"*/, 1.0, 0LL);
}


float __fastcall ServantCardAddEntity__GetDamageRate(ServantCardAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B67244 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_18678/*"damageRate"*/, method);
    byte_4B67244 = 1;
  }
  return EntityScriptUtil__GetMillesimal(this->fields.script, (System_String_o *)StringLiteral_18678/*"damageRate"*/, 1.0, 0LL);
}


float __fastcall ServantCardAddEntity__GetDefenseNpRate(ServantCardAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B67246 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_18786/*"defenseNpRate"*/, method);
    byte_4B67246 = 1;
  }
  return EntityScriptUtil__GetMillesimal(this->fields.script, (System_String_o *)StringLiteral_18786/*"defenseNpRate"*/, 1.0, 0LL);
}


float __fastcall ServantCardAddEntity__GetDropStarRate(ServantCardAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B67247 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_18920/*"dropStarRate"*/, method);
    byte_4B67247 = 1;
  }
  return EntityScriptUtil__GetMillesimal(this->fields.script, (System_String_o *)StringLiteral_18920/*"dropStarRate"*/, 1.0, 0LL);
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
  if ( (byte_4B67248 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_6915/*"ForceAttackFunctionTargetAll"*/, method);
    byte_4B67248 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_6915/*"ForceAttackFunctionTargetAll"*/, 0LL);
}