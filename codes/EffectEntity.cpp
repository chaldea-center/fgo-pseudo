void EffectEntity___ctor(EffectEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C2712E & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_int___ctor__);
    byte_4C2712E = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_33858B4 *)Method_DataEntityBase_int___ctor__);
}


int32_t EffectEntity__CreatePrimaryKey(EffectEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_String_o *EffectEntity__getNodeName(EffectEntity_o *this, const MethodInfo *method)
{
  return this->fields.nodeName;
}


bool EffectEntity__isSe(EffectEntity_o *this, const MethodInfo *method)
{
  struct System_String_o *se; // x8

  se = this->fields.se;
  return se && se->fields._stringLength > 0;
}