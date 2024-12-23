void __fastcall GachaSubEntity___ctor(GachaSubEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B66E87 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataEntityBase_string___ctor__, method);
    byte_4B66E87 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31FD63C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall GachaSubEntity__CreatePK(int32_t gachaId, int32_t id, const MethodInfo *method)
{
  if ( (byte_4B66E86 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&id);
    byte_4B66E86 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           gachaId,
           id,
           (const MethodInfo_2F57334 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall GachaSubEntity__CreatePrimaryKey(GachaSubEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return GachaSubEntity__CreatePK(this->fields.gachaId, this->fields.id, v2);
}


System_String_o *__fastcall GachaSubEntity__GetSummonConfirmMessage(GachaSubEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B66E82 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_13272/*"SummonConfirmMessage"*/, method);
    byte_4B66E82 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_13272/*"SummonConfirmMessage"*/, 0LL, 0LL);
}


int32_t __fastcall GachaSubEntity__GetSummonConfirmMessageFontSize(GachaSubEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B66E85 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_6906/*"FontSize"*/, method);
    byte_4B66E85 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_6906/*"FontSize"*/, 0, 0LL);
}


int32_t __fastcall GachaSubEntity__GetSummonConfirmMessageSpacingX(GachaSubEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B66E84 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_13037/*"SpacingX"*/, method);
    byte_4B66E84 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_13037/*"SpacingX"*/, -1, 0LL);
}


int32_t __fastcall GachaSubEntity__GetSummonConfirmMessageSpacingY(GachaSubEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B66E83 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_13038/*"SpacingY"*/, method);
    byte_4B66E83 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_13038/*"SpacingY"*/, -1, 0LL);
}