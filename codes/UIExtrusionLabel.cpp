void UIExtrusionLabel___ctor(UIExtrusionLabel_o *this, const MethodInfo *method)
{
  if ( (byte_4C39227 & 1) == 0 )
  {
    sub_1C32C20(&UILabel_TypeInfo);
    byte_4C39227 = 1;
  }
  this->fields.extrusionBlankSize = 2;
  if ( !UILabel_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UILabel_TypeInfo);
  UILabel___ctor((UILabel_o *)this, 0);
}


System_String_o *UIExtrusionLabel__get_text(UIExtrusionLabel_o *this, const MethodInfo *method)
{
  return this->fields.mText;
}


void UIExtrusionLabel__set_text(UIExtrusionLabel_o *this, System_String_o *value, const MethodInfo *method)
{
  UnityEngine_Object_o *extrusionObject; // x20
  float v6; // s0
  UnityEngine_GameObject_o *transform; // x0
  float v8; // s10
  int32_t mAlignment; // w8
  float y; // s8
  float z; // s9
  float v12; // s10
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C39226 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C39226 = 1;
  }
  UILabel__set_text((UILabel_o *)this, value, 0);
  extrusionObject = (UnityEngine_Object_o *)this->fields.extrusionObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(extrusionObject, 0, 0) )
  {
    LODWORD(v6) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)this, 0);
    transform = this->fields.extrusionObject;
    if ( !transform )
      goto LABEL_17;
    v8 = v6;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
    if ( !transform )
      goto LABEL_17;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0);
    mAlignment = this->fields.mAlignment;
    y = localPosition.fields.y;
    z = localPosition.fields.z;
    if ( mAlignment == 2 )
      v12 = (float)(v8 * 0.5) + (float)this->fields.extrusionBlankSize;
    else
      v12 = mAlignment == 1 ? v8 + (float)this->fields.extrusionBlankSize : (float)this->fields.extrusionBlankSize;
    transform = this->fields.extrusionObject;
    if ( !transform
      || (transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0)) == 0 )
    {
LABEL_17:
      sub_1C32E7C(transform);
    }
    v14.fields.y = y;
    v14.fields.z = z;
    v14.fields.x = v12;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v14, 0);
  }
}