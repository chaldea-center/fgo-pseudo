void __fastcall BgmEntity___ctor(BgmEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FE7E3 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataEntityBase_int___ctor__, method);
    byte_49FE7E3 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_30D6598 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall BgmEntity__CreatePrimaryKey(BgmEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


int32_t __fastcall BgmEntity__GetInvalidOverwrite(BgmEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FE7E1 & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_7890/*"InvalidOverwrite"*/, method);
    byte_49FE7E1 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_7890/*"InvalidOverwrite"*/, 0, 0LL);
}


int32_t __fastcall BgmEntity__GetPriorityBgm(BgmEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FE7E2 & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_22513/*"priorityBgm"*/, method);
    byte_49FE7E2 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22513/*"priorityBgm"*/, 0, 0LL);
}


bool __fastcall BgmEntity__HasFlag(BgmEntity_o *this, int32_t flag, const MethodInfo *method)
{
  return (this->fields.flag & flag) != 0;
}


bool __fastcall BgmEntity__isRelease(BgmEntity_o *this, const MethodInfo *method)
{
  return (this->fields.flag & 1) == 0;
}