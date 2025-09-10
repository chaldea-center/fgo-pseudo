void BgmEntity___ctor(BgmEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C26F3B & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_int___ctor__);
    byte_4C26F3B = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_33858B4 *)Method_DataEntityBase_int___ctor__);
}


int32_t BgmEntity__CreatePrimaryKey(BgmEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


int32_t BgmEntity__GetInvalidOverwrite(BgmEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C26F39 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_7941/*"InvalidOverwrite"*/);
    byte_4C26F39 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_7941/*"InvalidOverwrite"*/, 0, 0);
}


int32_t BgmEntity__GetPriorityBgm(BgmEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C26F3A & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_22757/*"priorityBgm"*/);
    byte_4C26F3A = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22757/*"priorityBgm"*/, 0, 0);
}


bool BgmEntity__HasFlag(BgmEntity_o *this, int32_t flag, const MethodInfo *method)
{
  return (this->fields.flag & flag) != 0;
}


bool BgmEntity__isRelease(BgmEntity_o *this, const MethodInfo *method)
{
  return (this->fields.flag & 1) == 0;
}