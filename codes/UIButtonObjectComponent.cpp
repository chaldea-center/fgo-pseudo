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
  float v9; // s0 OVERLAPPED
  float v10; // s3
  float v11; // s1
  float v12; // s2
  UnityEngine_Object_o *textlabel; // x21
  float v14; // s0 OVERLAPPED
  float v15; // s3
  float v16; // s1
  float v17; // s2

  if ( (byte_4CC699C & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC699C = 1;
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
    v9 = 0.5;
    if ( flg )
      v9 = 1.0;
    if ( !v7 )
      goto LABEL_23;
    v10 = 1.0;
    v11 = v9;
    v12 = v9;
    UIWidget__set_color((UIWidget_o *)v7, *(UnityEngine_Color_o *)&v9, 0);
  }
  textlabel = (UnityEngine_Object_o *)this->fields.textlabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(textlabel, 0, 0) )
  {
    v7 = (UnityEngine_Collider_o *)this->fields.textlabel;
    v14 = 0.5;
    if ( flg )
      v14 = 1.0;
    if ( v7 )
    {
      v15 = 1.0;
      v16 = v14;
      v17 = v14;
      UIWidget__set_color((UIWidget_o *)v7, *(UnityEngine_Color_o *)&v14, 0);
      return;
    }
LABEL_23:
    sub_1C71608(v7, v6);
  }
}