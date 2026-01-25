void BgmEntity___ctor(BgmEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEE30A & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_int___ctor__);
    byte_4CEE30A = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_342BE18 *)Method_DataEntityBase_int___ctor__);
}


int32_t BgmEntity__CreatePrimaryKey(BgmEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


int32_t BgmEntity__GetInvalidOverwrite(BgmEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEE308 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_7969/*"InvalidOverwrite"*/);
    byte_4CEE308 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_7969/*"InvalidOverwrite"*/, 0, 0);
}


int32_t BgmEntity__GetPriorityBgm(BgmEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEE309 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_22995/*"priorityBgm"*/);
    byte_4CEE309 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22995/*"priorityBgm"*/, 0, 0);
}


bool BgmEntity__HasFlag(BgmEntity_o *this, int32_t flag, const MethodInfo *method)
{
  return (this->fields.flag & flag) != 0;
}


bool BgmEntity__isRelease(BgmEntity_o *this, const MethodInfo *method)
{
  return (this->fields.flag & 1) == 0;
}