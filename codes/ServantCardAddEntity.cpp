void __fastcall ServantCardAddEntity___ctor(ServantCardAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42B105E & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_string___ctor__);
    byte_42B105E = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23E2224 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall ServantCardAddEntity__CreatePK(int32_t svtId, int32_t cardId, const MethodInfo *method)
{
  if ( (byte_42B1059 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_42B1059 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           svtId,
           cardId,
           (const MethodInfo_1A4DF50 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
  if ( (byte_42B105B & 1) == 0 )
  {
    sub_B52984(&StringLiteral_16623/*"attackNpRate"*/);
    byte_42B105B = 1;
  }
  return EntityScriptUtil__GetMillesimal(this->fields.script, (System_String_o *)StringLiteral_16623/*"attackNpRate"*/, 1.0, 0LL);
}


float __fastcall ServantCardAddEntity__GetDamageRate(ServantCardAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42B105A & 1) == 0 )
  {
    sub_B52984(&StringLiteral_17990/*"damageRate"*/);
    byte_42B105A = 1;
  }
  return EntityScriptUtil__GetMillesimal(this->fields.script, (System_String_o *)StringLiteral_17990/*"damageRate"*/, 1.0, 0LL);
}


float __fastcall ServantCardAddEntity__GetDefenseNpRate(ServantCardAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42B105C & 1) == 0 )
  {
    sub_B52984(&StringLiteral_18074/*"defenseNpRate"*/);
    byte_42B105C = 1;
  }
  return EntityScriptUtil__GetMillesimal(this->fields.script, (System_String_o *)StringLiteral_18074/*"defenseNpRate"*/, 1.0, 0LL);
}


float __fastcall ServantCardAddEntity__GetDropStarRate(ServantCardAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42B105D & 1) == 0 )
  {
    sub_B52984(&StringLiteral_18184/*"dropStarRate"*/);
    byte_42B105D = 1;
  }
  return EntityScriptUtil__GetMillesimal(this->fields.script, (System_String_o *)StringLiteral_18184/*"dropStarRate"*/, 1.0, 0LL);
}


float __fastcall ServantCardAddEntity__GetMillesimal(
        ServantCardAddEntity_o *this,
        System_String_o *key,
        float defaultValue,
        const MethodInfo *method)
{
  return EntityScriptUtil__GetMillesimal(this->fields.script, key, defaultValue, 0LL);
}