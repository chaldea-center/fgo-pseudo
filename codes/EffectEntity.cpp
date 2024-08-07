void __fastcall EffectEntity___ctor(EffectEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FE9A9 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataEntityBase_int___ctor__, method);
    byte_49FE9A9 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_30D6598 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall EffectEntity__CreatePrimaryKey(EffectEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_String_o *__fastcall EffectEntity__getNodeName(EffectEntity_o *this, const MethodInfo *method)
{
  return this->fields.nodeName;
}


bool __fastcall EffectEntity__isSe(EffectEntity_o *this, const MethodInfo *method)
{
  struct System_String_o *se; // x8

  se = this->fields.se;
  return se && se->fields._stringLength > 0;
}