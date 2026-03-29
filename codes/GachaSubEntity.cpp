void GachaSubEntity___ctor(GachaSubEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D30DD0 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataEntityBase_string___ctor__);
    byte_4D30DD0 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3460BB4 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *GachaSubEntity__CreatePK(int32_t gachaId, int32_t id, const MethodInfo *method)
{
  if ( (byte_4D30DCF & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4D30DCF = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           gachaId,
           id,
           (const MethodInfo_31A2BC4 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *GachaSubEntity__CreatePrimaryKey(GachaSubEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return GachaSubEntity__CreatePK(this->fields.gachaId, this->fields.id, v2);
}


System_String_o *GachaSubEntity__GetSummonConfirmMessage(GachaSubEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D30DCB & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_13264/*"SummonConfirmMessage"*/);
    byte_4D30DCB = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_13264/*"SummonConfirmMessage"*/, 0, 0);
}


int32_t GachaSubEntity__GetSummonConfirmMessageFontSize(GachaSubEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D30DCE & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_6830/*"FontSize"*/);
    byte_4D30DCE = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_6830/*"FontSize"*/, 0, 0);
}


int32_t GachaSubEntity__GetSummonConfirmMessageSpacingX(GachaSubEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D30DCD & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_13038/*"SpacingX"*/);
    byte_4D30DCD = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_13038/*"SpacingX"*/, -1, 0);
}


int32_t GachaSubEntity__GetSummonConfirmMessageSpacingY(GachaSubEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D30DCC & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_13039/*"SpacingY"*/);
    byte_4D30DCC = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_13039/*"SpacingY"*/, -1, 0);
}