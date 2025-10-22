void EffectFlipData___ctor(EffectFlipData_o *this, const MethodInfo *method)
{
  this->fields.effectId = -1;
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EffectFlipData__Flip(EffectFlipData_o *this, UnityEngine_Transform_o *trEffect, const MethodInfo *method)
{
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4

  if ( this->fields.rotate >= 1 )
  {
    if ( !trEffect )
      goto LABEL_13;
    UnityEngine_Transform__Rotate_71366240(trEffect, 0.0, 180.0, 0.0, 0);
  }
  if ( this->fields.scaleX <= 0 && this->fields.scaleZ < 1 )
    return;
  if ( !trEffect )
LABEL_13:
    sub_1C3E7C0(this, trEffect);
  localScale = UnityEngine_Transform__get_localScale(trEffect, 0);
  if ( this->fields.scaleX >= 1 )
    localScale.fields.x = -localScale.fields.x;
  if ( this->fields.scaleZ >= 1 )
    localScale.fields.z = -localScale.fields.z;
  UnityEngine_Transform__set_localScale(trEffect, localScale, 0);
}


bool EffectFlipData__IsMatch(EffectFlipData_o *this, int32_t compEffectId, const MethodInfo *method)
{
  return this->fields.effectId == -1 || this->fields.effectId == compEffectId;
}


void EffectFlipData__OverwriteNodeName(
        EffectFlipData_o *this,
        System_String_o **baseNodeName,
        const MethodInfo *method)
{
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  System_String_o *parentNodeName; // x1

  if ( !System_String__IsNullOrEmpty(this->fields.parentNodeName, 0) )
  {
    parentNodeName = this->fields.parentNodeName;
    *baseNodeName = parentNodeName;
    sub_1C3E508((CGThumbnailListItem_o *)baseNodeName, (int32_t)parentNodeName, v5, v6);
  }
}