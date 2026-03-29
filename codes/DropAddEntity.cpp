void DropAddEntity___ctor(DropAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D30855 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataEntityBase_string___ctor__);
    byte_4D30855 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3460BB4 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *DropAddEntity__CreatePK(int32_t eventId, int32_t giftId, const MethodInfo *method)
{
  if ( (byte_4D30854 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4D30854 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           eventId,
           giftId,
           (const MethodInfo_31A2BC4 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *DropAddEntity__CreatePrimaryKey(DropAddEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return DropAddEntity__CreatePK(this->fields.eventId, this->fields.giftId, v2);
}


int32_t DropAddEntity__GetDropEffectId(DropAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D30852 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_18835/*"dropEffectId"*/);
    byte_4D30852 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_18835/*"dropEffectId"*/, 0, 0);
}


bool DropAddEntity__IsDropDefaultParticleDisable(DropAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D30853 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_18834/*"dropDefaultParticleDisable"*/);
    byte_4D30853 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_18834/*"dropDefaultParticleDisable"*/, 0, 0) == 1;
}