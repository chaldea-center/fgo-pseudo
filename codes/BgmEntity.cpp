void __fastcall BgmEntity___ctor(BgmEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42AFC99 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_int___ctor__);
    byte_42AFC99 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_23E2184 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall BgmEntity__CreatePrimaryKey(BgmEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


int32_t __fastcall BgmEntity__GetInvalidOverwrite(BgmEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42AFC98 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_8117/*"InvalidOverwrite"*/);
    byte_42AFC98 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_8117/*"InvalidOverwrite"*/, 0, 0LL);
}


bool __fastcall BgmEntity__HasFlag(BgmEntity_o *this, int32_t flag, const MethodInfo *method)
{
  return (this->fields.flag & flag) != 0;
}


bool __fastcall BgmEntity__isRelease(BgmEntity_o *this, const MethodInfo *method)
{
  return (this->fields.flag & 1) == 0;
}