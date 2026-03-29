void UIButtonObjectComponent___ctor(UIButtonObjectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UIButtonObjectComponent__setActive(UIButtonObjectComponent_o *this, bool flg, const MethodInfo *method)
{
  UnityEngine_Object_o *col; // x21
  __int64 v6; // x1
  UnityEngine_Collider_o *v7; // x0
  UnityEngine_Object_o *buttonsprite; // x21
  UnityEngine_Object_o *textlabel; // x21
  UnityEngine_Color_o v10; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v11; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4D2FFB2 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2FFB2 = 1;
  }
  col = (UnityEngine_Object_o *)this->fields.col;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(col, 0, 0) )
  {
    v7 = this->fields.col;
    if ( !v7 )
      goto LABEL_23;
    UnityEngine_Collider__set_enabled(v7, flg, 0);
  }
  buttonsprite = (UnityEngine_Object_o *)this->fields.buttonsprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(buttonsprite, 0, 0) )
  {
    v7 = (UnityEngine_Collider_o *)this->fields.buttonsprite;
    v10.fields.r = 0.5;
    if ( flg )
      v10.fields.r = 1.0;
    if ( !v7 )
      goto LABEL_23;
    v10.fields.a = 1.0;
    v10.fields.g = v10.fields.r;
    v10.fields.b = v10.fields.r;
    UIWidget__set_color((UIWidget_o *)v7, v10, 0);
  }
  textlabel = (UnityEngine_Object_o *)this->fields.textlabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(textlabel, 0, 0) )
  {
    v7 = (UnityEngine_Collider_o *)this->fields.textlabel;
    v11.fields.r = 0.5;
    if ( flg )
      v11.fields.r = 1.0;
    if ( v7 )
    {
      v11.fields.a = 1.0;
      v11.fields.g = v11.fields.r;
      v11.fields.b = v11.fields.r;
      UIWidget__set_color((UIWidget_o *)v7, v11, 0);
      return;
    }
LABEL_23:
    sub_1C93D2C(v7, v6);
  }
}