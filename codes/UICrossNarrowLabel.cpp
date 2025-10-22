void UICrossNarrowLabel___ctor(UICrossNarrowLabel_o *this, const MethodInfo *method)
{
  if ( (byte_4C5859B & 1) == 0 )
  {
    sub_1C3E564(&UILabel_TypeInfo);
    byte_4C5859B = 1;
  }
  if ( !UILabel_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UILabel_TypeInfo);
  UILabel___ctor((UILabel_o *)this, 0);
}


void UICrossNarrowLabel__SetCrossNarrowText(
        UICrossNarrowLabel_o *this,
        System_String_o *text,
        const MethodInfo *method)
{
  int32_t mWidth; // w8
  ManagerConfig_c *v6; // x0
  float v7; // s10
  UnityEngine_Transform_o *transform; // x0
  __int64 v9; // x1
  float y; // s8
  float baseWidth; // s0
  float v12; // s1
  bool v13; // cc
  float v14; // s0
  float z; // s9
  float value; // [xsp+Ch] [xbp-34h]
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C5859A & 1) == 0 )
  {
    sub_1C3E564(&ManagerConfig_TypeInfo);
    byte_4C5859A = 1;
  }
  if ( !this->fields.isInit )
  {
    mWidth = this->fields.mWidth;
    this->fields.isInit = 1;
    this->fields.baseWidth = mWidth;
    v6 = ManagerConfig_TypeInfo;
    if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
      v6 = ManagerConfig_TypeInfo;
    }
    UIWidget__set_width((UIWidget_o *)this, v6->static_fields->WIDTH, 0);
  }
  UILabel__set_text((UILabel_o *)this, text, 0);
  LODWORD(v7) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)this, 0);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_12;
  localScale = UnityEngine_Transform__get_localScale(transform, 0);
  y = localScale.fields.y;
  baseWidth = (float)this->fields.baseWidth;
  v12 = baseWidth / v7;
  v13 = v7 <= baseWidth;
  v14 = 1.0;
  if ( !v13 )
    v14 = v12;
  z = localScale.fields.z;
  value = v14;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
LABEL_12:
    sub_1C3E7C0(transform, v9);
  v18.fields.x = value;
  v18.fields.y = y;
  v18.fields.z = z;
  UnityEngine_Transform__set_localScale(transform, v18, 0);
}