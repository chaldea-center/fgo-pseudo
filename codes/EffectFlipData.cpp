void EffectFlipData___ctor(EffectFlipData_o *this, const MethodInfo *method)
{
  this->fields.effectId = -1;
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EffectFlipData__Flip(EffectFlipData_o *this, UnityEngine_Transform_o *trEffect, const MethodInfo *method)
{
  UnityEngine_Vector3_o localScale; // 0:kr00_12.12
  UnityEngine_Vector3_o v6; // 0:s0.4,4:s1.4,8:s2.4

  if ( this->fields.rotate >= 1 )
  {
    if ( !trEffect )
      goto LABEL_13;
    UnityEngine_Transform__Rotate_83494228(trEffect, 0.0, 180.0, 0.0, 0);
  }
  if ( this->fields.scaleX <= 0 && this->fields.scaleZ < 1 )
    return;
  if ( !trEffect )
LABEL_13:
    sub_2213CDC(this, trEffect);
  localScale = UnityEngine_Transform__get_localScale(trEffect, 0);
  v6 = localScale;
  if ( this->fields.scaleX >= 1 )
    v6.fields.x = -localScale.fields.x;
  if ( this->fields.scaleZ >= 1 )
    v6.fields.z = -localScale.fields.z;
  UnityEngine_Transform__set_localScale(trEffect, v6, 0);
}


bool EffectFlipData__IsMatch(EffectFlipData_o *this, int32_t compEffectId, const MethodInfo *method)
{
  int32_t effectId; // w8

  effectId = this->fields.effectId;
  return effectId == -1 || effectId == compEffectId;
}


void EffectFlipData__OverwriteNodeName(
        EffectFlipData_o *this,
        System_String_o **baseNodeName,
        const MethodInfo *method)
{
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  System_String_o *parentNodeName; // x1

  if ( !System_String__IsNullOrEmpty(this->fields.parentNodeName, 0) )
  {
    parentNodeName = this->fields.parentNodeName;
    *baseNodeName = parentNodeName;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)baseNodeName, (int32_t)parentNodeName, v5, v6, v7, v8, v9, v10);
  }
}