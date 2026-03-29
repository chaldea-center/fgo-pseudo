void BgmEntity___ctor(BgmEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D3066A & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataEntityBase_int___ctor__);
    byte_4D3066A = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3460B3C *)Method_DataEntityBase_int___ctor__);
}


int32_t BgmEntity__CreatePrimaryKey(BgmEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


int32_t BgmEntity__GetInvalidOverwrite(BgmEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D30668 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_7993/*"InvalidOverwrite"*/);
    byte_4D30668 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_7993/*"InvalidOverwrite"*/, 0, 0);
}


int32_t BgmEntity__GetPriorityBgm(BgmEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D30669 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_23060/*"priorityBgm"*/);
    byte_4D30669 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_23060/*"priorityBgm"*/, 0, 0);
}


bool BgmEntity__HasFlag(BgmEntity_o *this, int32_t flag, const MethodInfo *method)
{
  return (this->fields.flag & flag) != 0;
}


bool BgmEntity__isRelease(BgmEntity_o *this, const MethodInfo *method)
{
  return (this->fields.flag & 1) == 0;
}