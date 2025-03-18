void __fastcall BgmEntity___ctor(BgmEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C21BEE & 1) == 0 )
  {
    sub_1C3B764(&Method_DataEntityBase_int___ctor__, method);
    byte_4C21BEE = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3298964 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall BgmEntity__CreatePrimaryKey(BgmEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


int32_t __fastcall BgmEntity__GetInvalidOverwrite(BgmEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C21BEC & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_8093/*"LOCATION_DLG_OUTOF_AREA_MESSAGE"*/, method);
    byte_4C21BEC = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_8093/*"LOCATION_DLG_OUTOF_AREA_MESSAGE"*/, 0, 0LL);
}


int32_t __fastcall BgmEntity__GetPriorityBgm(BgmEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C21BED & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_23074/*"soundStopAll"*/, method);
    byte_4C21BED = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_23074/*"soundStopAll"*/, 0, 0LL);
}


bool __fastcall BgmEntity__HasFlag(BgmEntity_o *this, int32_t flag, const MethodInfo *method)
{
  return (this->fields.flag & flag) != 0;
}


bool __fastcall BgmEntity__isRelease(BgmEntity_o *this, const MethodInfo *method)
{
  return (this->fields.flag & 1) == 0;
}