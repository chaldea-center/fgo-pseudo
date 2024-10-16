void __fastcall BgmEntity___ctor(BgmEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4AB59FD & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataEntityBase_int___ctor__, method);
    byte_4AB59FD = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3163B90 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall BgmEntity__CreatePrimaryKey(BgmEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


int32_t __fastcall BgmEntity__GetInvalidOverwrite(BgmEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4AB59FB & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_7927/*"InvalidOverwrite"*/, method);
    byte_4AB59FB = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_7927/*"InvalidOverwrite"*/, 0, 0LL);
}


int32_t __fastcall BgmEntity__GetPriorityBgm(BgmEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4AB59FC & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_22640/*"priorityBgm"*/, method);
    byte_4AB59FC = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22640/*"priorityBgm"*/, 0, 0LL);
}


bool __fastcall BgmEntity__HasFlag(BgmEntity_o *this, int32_t flag, const MethodInfo *method)
{
  return (this->fields.flag & flag) != 0;
}


bool __fastcall BgmEntity__isRelease(BgmEntity_o *this, const MethodInfo *method)
{
  return (this->fields.flag & 1) == 0;
}