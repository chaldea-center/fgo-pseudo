void UIButtonObjectComponent___ctor(UIButtonObjectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void UIButtonObjectComponent__setActive(UIButtonObjectComponent_o *this, bool flg, const MethodInfo *method)
{
  UnityEngine_Object_o *col; // x21
  UnityEngine_Collider_o *v6; // x0
  UnityEngine_Object_o *buttonsprite; // x21
  float v8; // s0 OVERLAPPED
  float v9; // s3
  float v10; // s1
  float v11; // s2
  UnityEngine_Object_o *textlabel; // x21
  float v13; // s0 OVERLAPPED
  float v14; // s3
  float v15; // s1
  float v16; // s2

  if ( (byte_4C36F7B & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C36F7B = 1;
  }
  col = (UnityEngine_Object_o *)this->fields.col;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(col, 0, 0) )
  {
    v6 = this->fields.col;
    if ( !v6 )
      goto LABEL_23;
    UnityEngine_Collider__set_enabled(v6, flg, 0);
  }
  buttonsprite = (UnityEngine_Object_o *)this->fields.buttonsprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(buttonsprite, 0, 0) )
  {
    v6 = (UnityEngine_Collider_o *)this->fields.buttonsprite;
    v8 = 0.5;
    if ( flg )
      v8 = 1.0;
    if ( !v6 )
      goto LABEL_23;
    v9 = 1.0;
    v10 = v8;
    v11 = v8;
    UIWidget__set_color((UIWidget_o *)v6, *(UnityEngine_Color_o *)&v8, 0);
  }
  textlabel = (UnityEngine_Object_o *)this->fields.textlabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(textlabel, 0, 0) )
  {
    v6 = (UnityEngine_Collider_o *)this->fields.textlabel;
    v13 = 0.5;
    if ( flg )
      v13 = 1.0;
    if ( v6 )
    {
      v14 = 1.0;
      v15 = v13;
      v16 = v13;
      UIWidget__set_color((UIWidget_o *)v6, *(UnityEngine_Color_o *)&v13, 0);
      return;
    }
LABEL_23:
    sub_1C32E7C(v6);
  }
}