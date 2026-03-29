void FSAutoScale___ctor(FSAutoScale_o *this, const MethodInfo *method)
{
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1

  if ( !byte_4D2A13E )
  {
    sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2A13E = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->oneVector.fields.z;
  *(_QWORD *)&this->fields.defaultScale.fields.x = *(_QWORD *)&static_fields->oneVector.fields.x;
  this->fields.defaultScale.fields.z = z;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void FSAutoScale__Awake(FSAutoScale_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  float v5; // s8
  float y; // s9
  const MethodInfo *v7; // x1
  float z; // s2

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (LODWORD(v5) = (unsigned int)UnityEngine_Transform__get_localScale(transform, 0),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0)
    || (y = UnityEngine_Transform__get_localScale(transform, 0).fields.y,
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_1C93D2C(transform, v4);
  }
  z = UnityEngine_Transform__get_localScale(transform, 0).fields.z;
  this->fields.defaultScale.fields.x = v5;
  this->fields.defaultScale.fields.y = y;
  this->fields.defaultScale.fields.z = z;
  FSAutoScale__UpdateScale(this, v7);
}


void FSAutoScale__UpdateScale(FSAutoScale_o *this, const MethodInfo *method)
{
  int32_t width; // w20
  float v4; // s9
  UnityEngine_Transform_o *transform; // x0
  __int64 v6; // x1
  UnityEngine_Vector3_o defaultScale; // 0:s0.4,4:s1.4,8:s2.4

  width = UnityEngine_Screen__get_width(0);
  v4 = (float)width / (float)UnityEngine_Screen__get_height(0);
  if ( v4 >= 1.7778 )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( transform )
    {
      defaultScale = this->fields.defaultScale;
      goto LABEL_6;
    }
LABEL_7:
    sub_1C93D2C(transform, v6);
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_7;
  defaultScale.fields.z = (float)(v4 / 1.7778) * this->fields.defaultScale.fields.z;
  defaultScale.fields.y = (float)(v4 / 1.7778) * this->fields.defaultScale.fields.y;
  defaultScale.fields.x = (float)(v4 / 1.7778) * this->fields.defaultScale.fields.x;
LABEL_6:
  UnityEngine_Transform__set_localScale(transform, defaultScale, 0);
}