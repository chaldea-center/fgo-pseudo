void UICrossNarrowLabel___ctor(UICrossNarrowLabel_o *this, const MethodInfo *method)
{
  if ( (byte_59720DD & 1) == 0 )
  {
    sub_2213A60(&UILabel_TypeInfo);
    byte_59720DD = 1;
  }
  if ( !*(&UILabel_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UILabel_TypeInfo, method);
  UILabel___ctor((UILabel_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void UICrossNarrowLabel__SetCrossNarrowText(
        UICrossNarrowLabel_o *this,
        System_String_o *text,
        const MethodInfo *method)
{
  int32_t mWidth; // w9
  ManagerConfig_c *v6; // x0
  float v7; // s8
  UnityEngine_Transform_o *transform; // x0
  __int64 v9; // x1
  int32_t baseWidth; // w20
  float y; // s9
  float z; // s10
  float v13; // s0 OVERLAPPED
  float v14; // s1
  float v15; // s2
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_59720DC & 1) == 0 )
  {
    sub_2213A60(&ManagerConfig_TypeInfo);
    byte_59720DC = 1;
  }
  if ( !this->fields.isInit )
  {
    mWidth = this->fields.mWidth;
    this->fields.isInit = 1;
    v6 = ManagerConfig_TypeInfo;
    this->fields.baseWidth = mWidth;
    if ( !*(&v6->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v6, text);
      v6 = ManagerConfig_TypeInfo;
    }
    UIWidget__set_width((UIWidget_o *)this, v6->static_fields->WIDTH, 0);
  }
  UILabel__set_text((UILabel_o *)this, text, 0);
  LODWORD(v7) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)this, 0);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (localScale = UnityEngine_Transform__get_localScale(transform, 0),
        baseWidth = this->fields.baseWidth,
        y = localScale.fields.y,
        z = localScale.fields.z,
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_2213CDC(transform, v9);
  }
  if ( v7 <= (float)baseWidth )
    v13 = 1.0;
  else
    v13 = (float)baseWidth / v7;
  v14 = y;
  v15 = z;
  UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v13, 0);
}