void __fastcall ServantCardAddEntity___ctor(ServantCardAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4187C26 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_4187C26 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantCardAddEntity__CreatePK(int32_t svtId, int32_t cardId, const MethodInfo *method)
{
  if ( (byte_4187C21 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&cardId);
    byte_4187C21 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           svtId,
           cardId,
           (const MethodInfo_1732908 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
  if ( (byte_4187C23 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_16510/*"attackNpRate"*/, method);
    byte_4187C23 = 1;
  }
  return EntityScriptUtil__GetMillesimal(this->fields.script, (System_String_o *)StringLiteral_16510/*"attackNpRate"*/, 1.0, 0LL);
}


float __fastcall ServantCardAddEntity__GetDamageRate(ServantCardAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4187C22 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_17865/*"damageRate"*/, method);
    byte_4187C22 = 1;
  }
  return EntityScriptUtil__GetMillesimal(this->fields.script, (System_String_o *)StringLiteral_17865/*"damageRate"*/, 1.0, 0LL);
}


float __fastcall ServantCardAddEntity__GetDefenseNpRate(ServantCardAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4187C24 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_17944/*"defenseNpRate"*/, method);
    byte_4187C24 = 1;
  }
  return EntityScriptUtil__GetMillesimal(this->fields.script, (System_String_o *)StringLiteral_17944/*"defenseNpRate"*/, 1.0, 0LL);
}


float __fastcall ServantCardAddEntity__GetDropStarRate(ServantCardAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4187C25 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_18051/*"dropStarRate"*/, method);
    byte_4187C25 = 1;
  }
  return EntityScriptUtil__GetMillesimal(this->fields.script, (System_String_o *)StringLiteral_18051/*"dropStarRate"*/, 1.0, 0LL);
}


float __fastcall ServantCardAddEntity__GetMillesimal(
        ServantCardAddEntity_o *this,
        System_String_o *key,
        float defaultValue,
        const MethodInfo *method)
{
  return EntityScriptUtil__GetMillesimal(this->fields.script, key, defaultValue, 0LL);
}