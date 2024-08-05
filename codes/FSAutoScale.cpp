void __fastcall FSAutoScale___ctor(FSAutoScale_o *this, const MethodInfo *method)
{
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1

  if ( !byte_49F9206 )
  {
    sub_1B64870(&UnityEngine_Vector3_TypeInfo, method);
    byte_49F9206 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->oneVector.fields.z;
  *(_QWORD *)&this->fields.defaultScale.fields.x = *(_QWORD *)&static_fields->oneVector.fields.x;
  this->fields.defaultScale.fields.z = z;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FSAutoScale__Awake(FSAutoScale_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  float v5; // s8
  float y; // s9
  const MethodInfo *v7; // x1
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v9; // 0:s0.4,4:s1.4,8:s2.4

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (LODWORD(v5) = (unsigned int)UnityEngine_Transform__get_localScale(transform, 0LL),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL)
    || (localScale = UnityEngine_Transform__get_localScale(transform, 0LL),
        y = localScale.fields.y,
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1B64ACC(transform, v4);
  }
  v9 = UnityEngine_Transform__get_localScale(transform, 0LL);
  this->fields.defaultScale.fields.x = v5;
  this->fields.defaultScale.fields.y = y;
  this->fields.defaultScale.fields.z = v9.fields.z;
  FSAutoScale__UpdateScale(this, v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FSAutoScale__UpdateScale(FSAutoScale_o *this, const MethodInfo *method)
{
  int32_t width; // w20
  float v4; // s9
  UnityEngine_Transform_o *transform; // x0
  __int64 v6; // x1
  float z; // s2
  float y; // s1
  float x; // s0

  width = UnityEngine_Screen__get_width(0LL);
  v4 = (float)width / (float)UnityEngine_Screen__get_height(0LL);
  if ( v4 >= 1.7778 )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( transform )
    {
      y = this->fields.defaultScale.fields.y;
      z = this->fields.defaultScale.fields.z;
      x = this->fields.defaultScale.fields.x;
      goto LABEL_6;
    }
LABEL_7:
    sub_1B64ACC(transform, v6);
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_7;
  z = (float)(v4 / 1.7778) * this->fields.defaultScale.fields.z;
  y = (float)(v4 / 1.7778) * this->fields.defaultScale.fields.y;
  x = (float)(v4 / 1.7778) * this->fields.defaultScale.fields.x;
LABEL_6:
  UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&x, 0LL);
}