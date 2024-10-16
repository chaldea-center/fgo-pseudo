void __fastcall GachaSubEntity___ctor(GachaSubEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4AB6006 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataEntityBase_string___ctor__, method);
    byte_4AB6006 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3163C08 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall GachaSubEntity__CreatePK(int32_t gachaId, int32_t id, const MethodInfo *method)
{
  if ( (byte_4AB6005 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&id);
    byte_4AB6005 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           gachaId,
           id,
           (const MethodInfo_2EC2598 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall GachaSubEntity__CreatePrimaryKey(GachaSubEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return GachaSubEntity__CreatePK(this->fields.gachaId, this->fields.id, v2);
}


System_String_o *__fastcall GachaSubEntity__GetSummonConfirmMessage(GachaSubEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4AB6001 & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_13104/*"SummonConfirmMessage"*/, method);
    byte_4AB6001 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_13104/*"SummonConfirmMessage"*/, 0LL, 0LL);
}


int32_t __fastcall GachaSubEntity__GetSummonConfirmMessageFontSize(GachaSubEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4AB6004 & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_6769/*"FontSize"*/, method);
    byte_4AB6004 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_6769/*"FontSize"*/, 0, 0LL);
}


int32_t __fastcall GachaSubEntity__GetSummonConfirmMessageSpacingX(GachaSubEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4AB6003 & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_12869/*"SpacingX"*/, method);
    byte_4AB6003 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_12869/*"SpacingX"*/, -1, 0LL);
}


int32_t __fastcall GachaSubEntity__GetSummonConfirmMessageSpacingY(GachaSubEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4AB6002 & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_12870/*"SpacingY"*/, method);
    byte_4AB6002 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_12870/*"SpacingY"*/, -1, 0LL);
}