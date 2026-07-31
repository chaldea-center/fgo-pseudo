void DropAddEntity___ctor(DropAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59384DC & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_59384DC = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *DropAddEntity__CreatePK(int32_t eventId, int32_t giftId, const MethodInfo *method)
{
  if ( (byte_59384DB & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_59384DB = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           eventId,
           giftId,
           (const MethodInfo_3820F68 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *DropAddEntity__CreatePrimaryKey(DropAddEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return DropAddEntity__CreatePK(this->fields.eventId, this->fields.giftId, v2);
}


int32_t DropAddEntity__GetDropEffectId(DropAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59384D9 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_19482/*"dropEffectId"*/);
    byte_59384D9 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_19482/*"dropEffectId"*/, 0, 0);
}


bool DropAddEntity__IsDropDefaultParticleDisable(DropAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59384DA & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_19481/*"dropDefaultParticleDisable"*/);
    byte_59384DA = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_19481/*"dropDefaultParticleDisable"*/, 0, 0) == 1;
}