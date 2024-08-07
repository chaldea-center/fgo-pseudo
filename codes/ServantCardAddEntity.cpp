void __fastcall ServantCardAddEntity___ctor(ServantCardAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FF15E & 1) == 0 )
  {
    sub_1B64A00(&Method_DataEntityBase_string___ctor__, method);
    byte_49FF15E = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30D6610 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantCardAddEntity__CreatePK(int32_t svtId, int32_t cardId, const MethodInfo *method)
{
  if ( (byte_49FF158 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&cardId);
    byte_49FF158 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           svtId,
           cardId,
           (const MethodInfo_2E39F04 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
  if ( (byte_49FF15A & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_16886/*"attackNpRate"*/, method);
    byte_49FF15A = 1;
  }
  return EntityScriptUtil__GetMillesimal(this->fields.script, (System_String_o *)StringLiteral_16886/*"attackNpRate"*/, 1.0, 0LL);
}


float __fastcall ServantCardAddEntity__GetDamageRate(ServantCardAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FF159 & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_18371/*"damageRate"*/, method);
    byte_49FF159 = 1;
  }
  return EntityScriptUtil__GetMillesimal(this->fields.script, (System_String_o *)StringLiteral_18371/*"damageRate"*/, 1.0, 0LL);
}


float __fastcall ServantCardAddEntity__GetDefenseNpRate(ServantCardAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FF15B & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_18476/*"defenseNpRate"*/, method);
    byte_49FF15B = 1;
  }
  return EntityScriptUtil__GetMillesimal(this->fields.script, (System_String_o *)StringLiteral_18476/*"defenseNpRate"*/, 1.0, 0LL);
}


float __fastcall ServantCardAddEntity__GetDropStarRate(ServantCardAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FF15C & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_18600/*"dropStarRate"*/, method);
    byte_49FF15C = 1;
  }
  return EntityScriptUtil__GetMillesimal(this->fields.script, (System_String_o *)StringLiteral_18600/*"dropStarRate"*/, 1.0, 0LL);
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
  if ( (byte_49FF15D & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_6749/*"ForceAttackFunctionTargetAll"*/, method);
    byte_49FF15D = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_6749/*"ForceAttackFunctionTargetAll"*/, 0LL);
}