void GachaSubEntity___ctor(GachaSubEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938AAA & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_5938AAA = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *GachaSubEntity__CreatePK(int32_t gachaId, int32_t id, const MethodInfo *method)
{
  if ( (byte_5938AA9 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_5938AA9 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           gachaId,
           id,
           (const MethodInfo_3820F68 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *GachaSubEntity__CreatePrimaryKey(GachaSubEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return GachaSubEntity__CreatePK(this->fields.gachaId, this->fields.id, v2);
}


System_String_o *GachaSubEntity__GetSummonConfirmMessage(GachaSubEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938AA5 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_13693/*"SummonConfirmMessage"*/);
    byte_5938AA5 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_13693/*"SummonConfirmMessage"*/, 0, 0);
}


int32_t GachaSubEntity__GetSummonConfirmMessageFontSize(GachaSubEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938AA8 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_7073/*"FontSize"*/);
    byte_5938AA8 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_7073/*"FontSize"*/, 0, 0);
}


int32_t GachaSubEntity__GetSummonConfirmMessageSpacingX(GachaSubEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938AA7 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_13462/*"SpacingX"*/);
    byte_5938AA7 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_13462/*"SpacingX"*/, -1, 0);
}


int32_t GachaSubEntity__GetSummonConfirmMessageSpacingY(GachaSubEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938AA6 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_13463/*"SpacingY"*/);
    byte_5938AA6 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_13463/*"SpacingY"*/, -1, 0);
}