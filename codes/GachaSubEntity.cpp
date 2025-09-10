void GachaSubEntity___ctor(GachaSubEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C275BC & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_string___ctor__);
    byte_4C275BC = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_338592C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *GachaSubEntity__CreatePK(int32_t gachaId, int32_t id, const MethodInfo *method)
{
  if ( (byte_4C275BB & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4C275BB = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           gachaId,
           id,
           (const MethodInfo_30CCAD8 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *GachaSubEntity__CreatePrimaryKey(GachaSubEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return GachaSubEntity__CreatePK(this->fields.gachaId, this->fields.id, v2);
}


System_String_o *GachaSubEntity__GetSummonConfirmMessage(GachaSubEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C275B7 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_13165/*"SummonConfirmMessage"*/);
    byte_4C275B7 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_13165/*"SummonConfirmMessage"*/, 0, 0);
}


int32_t GachaSubEntity__GetSummonConfirmMessageFontSize(GachaSubEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C275BA & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_6794/*"FontSize"*/);
    byte_4C275BA = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_6794/*"FontSize"*/, 0, 0);
}


int32_t GachaSubEntity__GetSummonConfirmMessageSpacingX(GachaSubEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C275B9 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_12937/*"SpacingX"*/);
    byte_4C275B9 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_12937/*"SpacingX"*/, -1, 0);
}


int32_t GachaSubEntity__GetSummonConfirmMessageSpacingY(GachaSubEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C275B8 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_12938/*"SpacingY"*/);
    byte_4C275B8 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_12938/*"SpacingY"*/, -1, 0);
}