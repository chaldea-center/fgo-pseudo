void __fastcall BgmEntity___ctor(BgmEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5AE0F & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_int___ctor__);
    byte_4A5AE0F = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_311D734 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall BgmEntity__CreatePrimaryKey(BgmEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


int32_t __fastcall BgmEntity__GetInvalidOverwrite(BgmEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5AE0D & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_7923/*"InvalidOverwrite"*/);
    byte_4A5AE0D = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_7923/*"InvalidOverwrite"*/, 0, 0LL);
}


int32_t __fastcall BgmEntity__GetPriorityBgm(BgmEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5AE0E & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_22602/*"priorityBgm"*/);
    byte_4A5AE0E = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22602/*"priorityBgm"*/, 0, 0LL);
}


bool __fastcall BgmEntity__HasFlag(BgmEntity_o *this, int32_t flag, const MethodInfo *method)
{
  return (this->fields.flag & flag) != 0;
}


bool __fastcall BgmEntity__isRelease(BgmEntity_o *this, const MethodInfo *method)
{
  return (this->fields.flag & 1) == 0;
}