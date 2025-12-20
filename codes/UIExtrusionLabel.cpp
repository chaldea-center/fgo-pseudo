void UIExtrusionLabel___ctor(UIExtrusionLabel_o *this, const MethodInfo *method)
{
  if ( (byte_4D2E129 & 1) == 0 )
  {
    sub_1C94098(&UILabel_TypeInfo);
    byte_4D2E129 = 1;
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
  UnityEngine_Vector2_o v6; // x1
  float v7; // s0
  UnityEngine_GameObject_o *transform; // x0
  float v9; // s10
  int32_t mAlignment; // w8
  float y; // s8
  float z; // s9
  float v13; // s10
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D2E128 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2E128 = 1;
  }
  UILabel__set_text((UILabel_o *)this, value, 0);
  extrusionObject = (UnityEngine_Object_o *)this->fields.extrusionObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(extrusionObject, 0, 0) )
  {
    LODWORD(v7) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)this, 0);
    transform = this->fields.extrusionObject;
    if ( !transform )
      goto LABEL_17;
    v9 = v7;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
    if ( !transform )
      goto LABEL_17;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0);
    mAlignment = this->fields.mAlignment;
    y = localPosition.fields.y;
    z = localPosition.fields.z;
    if ( mAlignment == 2 )
      v13 = (float)(v9 * 0.5) + (float)this->fields.extrusionBlankSize;
    else
      v13 = mAlignment == 1 ? v9 + (float)this->fields.extrusionBlankSize : (float)this->fields.extrusionBlankSize;
    transform = this->fields.extrusionObject;
    if ( !transform
      || (transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0)) == 0 )
    {
LABEL_17:
      ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_1C942F0)(transform, v6);
    }
    v15.fields.y = y;
    v15.fields.z = z;
    v15.fields.x = v13;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v15, 0);
  }
}