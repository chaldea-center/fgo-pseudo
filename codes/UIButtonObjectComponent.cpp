void UIButtonObjectComponent___ctor(UIButtonObjectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void UIButtonObjectComponent__setActive(UIButtonObjectComponent_o *this, bool flg, const MethodInfo *method)
{
  UnityEngine_Object_o *col; // x21
  __int64 v6; // x1
  UnityEngine_Collider_o *v7; // x0
  UnityEngine_Object_o *buttonsprite; // x21
  UnityEngine_Object_o *textlabel; // x21
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_596FD6A & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596FD6A = 1;
  }
  col = (UnityEngine_Object_o *)this->fields.col;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, flg);
  if ( UnityEngine_Object__op_Inequality(col, 0, 0) )
  {
    v7 = this->fields.col;
    if ( !v7 )
      goto LABEL_23;
    UnityEngine_Collider__set_enabled(v7, flg, 0);
  }
  buttonsprite = (UnityEngine_Object_o *)this->fields.buttonsprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  if ( UnityEngine_Object__op_Inequality(buttonsprite, 0, 0) )
  {
    v7 = (UnityEngine_Collider_o *)this->fields.buttonsprite;
    if ( !v7 )
      goto LABEL_23;
    v12.fields.r = 0.5;
    v12.fields.a = 1.0;
    if ( flg )
      v12.fields.r = 1.0;
    v12.fields.g = v12.fields.r;
    v12.fields.b = v12.fields.r;
    UIWidget__set_color((UIWidget_o *)v7, v12, 0);
  }
  textlabel = (UnityEngine_Object_o *)this->fields.textlabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  if ( UnityEngine_Object__op_Inequality(textlabel, 0, 0) )
  {
    v7 = (UnityEngine_Collider_o *)this->fields.textlabel;
    if ( v7 )
    {
      v13.fields.r = 0.5;
      v13.fields.a = 1.0;
      if ( flg )
        v13.fields.r = 1.0;
      v13.fields.g = v13.fields.r;
      v13.fields.b = v13.fields.r;
      UIWidget__set_color((UIWidget_o *)v7, v13, 0);
      return;
    }
LABEL_23:
    sub_2213CDC(v7, v6);
  }
}