void UIExtrusionLabel___ctor(UIExtrusionLabel_o *this, const MethodInfo *method)
{
  UILabel_c *v3; // x0

  if ( (byte_597212E & 1) == 0 )
  {
    sub_2213A60(&UILabel_TypeInfo);
    byte_597212E = 1;
  }
  v3 = UILabel_TypeInfo;
  this->fields.extrusionBlankSize = 2;
  if ( !*(&v3->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v3, method);
  UILabel___ctor((UILabel_o *)this, 0);
}


System_String_o *UIExtrusionLabel__get_text(UIExtrusionLabel_o *this, const MethodInfo *method)
{
  return this->fields.mText;
}


void UIExtrusionLabel__set_text(UIExtrusionLabel_o *this, System_String_o *value, const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *extrusionObject; // x20
  UnityEngine_Vector2_o v7; // x1
  float v8; // s0
  UnityEngine_GameObject_o *transform; // x0
  float v10; // s10
  float y; // s8
  float z; // s9
  int32_t mAlignment; // w9
  int32_t extrusionBlankSize; // w8
  float v15; // s10
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_597212D & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597212D = 1;
  }
  UILabel__set_text((UILabel_o *)this, value, 0);
  extrusionObject = (UnityEngine_Object_o *)this->fields.extrusionObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  if ( UnityEngine_Object__op_Inequality(extrusionObject, 0, 0) )
  {
    LODWORD(v8) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)this, 0);
    transform = this->fields.extrusionObject;
    if ( !transform )
      goto LABEL_17;
    v10 = v8;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
    if ( !transform )
      goto LABEL_17;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0);
    y = localPosition.fields.y;
    z = localPosition.fields.z;
    mAlignment = this->fields.mAlignment;
    extrusionBlankSize = this->fields.extrusionBlankSize;
    if ( mAlignment == 2 )
      v15 = (float)(v10 * 0.5) + (float)extrusionBlankSize;
    else
      v15 = mAlignment == 1 ? v10 + (float)extrusionBlankSize : (float)extrusionBlankSize;
    transform = this->fields.extrusionObject;
    if ( !transform
      || (transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0)) == 0 )
    {
LABEL_17:
      sub_2213CDC(transform, v7);
    }
    v17.fields.y = y;
    v17.fields.z = z;
    v17.fields.x = v15;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v17, 0);
  }
}