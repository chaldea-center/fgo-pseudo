void __fastcall FSAutoScale___ctor(FSAutoScale_o *this, const MethodInfo *method)
{
  *(UnityEngine_Vector3_o *)&this->fields.defaultScale.fields.y = UnityEngine_Vector3__get_one(0LL);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FSAutoScale__Awake(FSAutoScale_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  float v4; // s8
  UnityEngine_Transform_o *v5; // x0
  float y; // s9
  UnityEngine_Transform_o *v7; // x0
  const MethodInfo *v8; // x1
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v10; // 0:s0.4,4:s1.4,8:s2.4

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (LODWORD(v4) = (unsigned int)UnityEngine_Transform__get_localScale(transform, 0LL),
        (v5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL)
    || (localScale = UnityEngine_Transform__get_localScale(v5, 0LL),
        y = localScale.fields.y,
        (v7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_B170D4();
  }
  v10 = UnityEngine_Transform__get_localScale(v7, 0LL);
  this->fields.defaultScale.fields.y = v4;
  this->fields.defaultScale.fields.z = y;
  *(float *)&this[1].klass = v10.fields.z;
  FSAutoScale__UpdateScale(this, v8);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FSAutoScale__UpdateScale(FSAutoScale_o *this, const MethodInfo *method)
{
  int32_t width; // w20
  float v4; // s9
  UnityEngine_Transform_o *transform; // x0
  float v6; // s2
  float z; // s1
  float y; // s0

  width = UnityEngine_Screen__get_width(0LL);
  v4 = (float)width / (float)UnityEngine_Screen__get_height(0LL);
  if ( v4 >= 1.7778 )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( transform )
    {
      z = this->fields.defaultScale.fields.z;
      v6 = *(float *)&this[1].klass;
      y = this->fields.defaultScale.fields.y;
      goto LABEL_6;
    }
LABEL_7:
    sub_B170D4();
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_7;
  v6 = (float)(v4 / 1.7778) * *(float *)&this[1].klass;
  z = (float)(v4 / 1.7778) * this->fields.defaultScale.fields.z;
  y = (float)(v4 / 1.7778) * this->fields.defaultScale.fields.y;
LABEL_6:
  UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&y, 0LL);
}