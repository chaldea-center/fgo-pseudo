void GameOptionToggleButton___ctor(GameOptionToggleButton_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void GameOptionToggleButton__ChangeSelectedState(GameOptionToggleButton_o *this, bool value, const MethodInfo *method)
{
  UIButton_o *Button; // x0
  __int64 v6; // x8
  const MethodInfo *v7; // x1
  UnityEngine_Object_o *Label; // x21
  const MethodInfo *v9; // x1
  struct UnityEngine_Color_o *p_onButtonOutlineColor; // x8
  float *p_g; // x9
  float *p_b; // x10
  float *p_a; // x11
  UnityEngine_Color_o v14; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C3DFD9 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3DFD9 = 1;
  }
  Button = GameOptionToggleButton__get_Button(this, (const MethodInfo *)value);
  if ( !Button )
    goto LABEL_15;
  v6 = 56;
  if ( value )
    v6 = 48;
  UIButton__set_normalSprite(Button, *(System_String_o **)((char *)&this->klass + v6), 0);
  Label = (UnityEngine_Object_o *)GameOptionToggleButton__get_Label(this, v7);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(Label, 0, 0) )
  {
    Button = (UIButton_o *)GameOptionToggleButton__get_Label(this, v9);
    if ( value )
    {
      p_onButtonOutlineColor = &this->fields.onButtonOutlineColor;
      p_g = &this->fields.onButtonOutlineColor.fields.g;
      p_b = &this->fields.onButtonOutlineColor.fields.b;
      p_a = &this->fields.onButtonOutlineColor.fields.a;
    }
    else
    {
      p_onButtonOutlineColor = &this->fields.offButtonOutlineColor;
      p_g = &this->fields.offButtonOutlineColor.fields.g;
      p_b = &this->fields.offButtonOutlineColor.fields.b;
      p_a = &this->fields.offButtonOutlineColor.fields.a;
    }
    if ( Button )
    {
      v14.fields.a = *p_a;
      v14.fields.b = *p_b;
      v14.fields.g = *p_g;
      v14.fields.r = p_onButtonOutlineColor->fields.r;
      UILabel__set_effectColor((UILabel_o *)Button, v14, 0);
      return;
    }
LABEL_15:
    sub_1C372B4(Button);
  }
}


void GameOptionToggleButton__SetButtonEnableWithCollider(
        GameOptionToggleButton_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  Il2CppObject *Component_object; // x21
  _BOOL8 v6; // x0
  Il2CppObject *v7; // x20

  if ( (byte_4C3DFDA & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_UITouchPress___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3DFDA = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( v6 )
  {
    if ( !Component_object )
      goto LABEL_14;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, isEnable, 0);
  }
  v7 = UnityEngine_Component__GetComponent_object_(
         (UnityEngine_Component_o *)this,
         (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UITouchPress___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v7, 0, 0);
  if ( v6 )
  {
    if ( v7 )
    {
      UITouchPress__set_IsEnabled((UITouchPress_o *)v7, isEnable, 0);
      return;
    }
LABEL_14:
    sub_1C372B4(v6);
  }
}


UIButton_o *GameOptionToggleButton__get_Button(GameOptionToggleButton_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *button; // x21
  Il2CppObject *Component_object; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C3DFD8 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_UIButton___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3DFD8 = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(button, 0, 0) )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UIButton___);
    this->fields.button = (struct UIButton_o *)Component_object;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.button, (int32_t)Component_object, v5, v6);
  }
  return this->fields.button;
}


UILabel_o *GameOptionToggleButton__get_Label(GameOptionToggleButton_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *defaultLabel; // x21
  Il2CppObject *ComponentInChildren_object__51242636; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C3DFD7 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponentInChildren_UILabel___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3DFD7 = 1;
  }
  defaultLabel = (UnityEngine_Object_o *)this->fields.defaultLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(defaultLabel, 0, 0) )
  {
    ComponentInChildren_object__51242636 = UnityEngine_Component__GetComponentInChildren_object__51242636(
                                             (UnityEngine_Component_o *)this,
                                             (const MethodInfo_30DE68C *)Method_UnityEngine_Component_GetComponentInChildren_UILabel___);
    this->fields.defaultLabel = (struct UILabel_o *)ComponentInChildren_object__51242636;
    sub_1C36FFC(
      (CGThumbnailListItem_o *)&this->fields.defaultLabel,
      (int32_t)ComponentInChildren_object__51242636,
      v5,
      v6);
  }
  return this->fields.defaultLabel;
}