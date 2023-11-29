void __fastcall GameOptionToggleButton___ctor(GameOptionToggleButton_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GameOptionToggleButton__ChangeSelectedState(
        GameOptionToggleButton_o *this,
        bool value,
        const MethodInfo *method)
{
  UIButton_o *Button; // x0
  __int64 v6; // x8
  const MethodInfo *v7; // x1
  UnityEngine_Object_o *Label; // x21
  const MethodInfo *v9; // x1
  UILabel_o *v10; // x0
  struct UnityEngine_Color_o *p_onButtonOutlineColor; // x8
  float *p_g; // x9
  float *p_b; // x10
  float *p_a; // x11
  UnityEngine_Color_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40FF551 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, value);
    byte_40FF551 = 1;
  }
  Button = GameOptionToggleButton__get_Button(this, (const MethodInfo *)value);
  if ( !Button )
LABEL_16:
    sub_B170D4();
  v6 = 48LL;
  if ( value )
    v6 = 40LL;
  UIButton__set_normalSprite(Button, *(System_String_o **)((char *)&this->klass + v6), 0LL);
  Label = (UnityEngine_Object_o *)GameOptionToggleButton__get_Label(this, v7);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(Label, 0LL, 0LL) )
  {
    v10 = GameOptionToggleButton__get_Label(this, v9);
    if ( value )
    {
      p_onButtonOutlineColor = &this->fields.onButtonOutlineColor;
      p_g = &this->fields.onButtonOutlineColor.fields.g;
      p_b = &this->fields.onButtonOutlineColor.fields.b;
      p_a = &this->fields.onButtonOutlineColor.fields.a;
      if ( !v10 )
        goto LABEL_16;
    }
    else
    {
      p_onButtonOutlineColor = &this->fields.offButtonOutlineColor;
      p_g = &this->fields.offButtonOutlineColor.fields.g;
      p_b = &this->fields.offButtonOutlineColor.fields.b;
      p_a = &this->fields.offButtonOutlineColor.fields.a;
      if ( !v10 )
        goto LABEL_16;
    }
    v15.fields.b = *p_b;
    v15.fields.g = *p_g;
    v15.fields.r = p_onButtonOutlineColor->fields.r;
    v15.fields.a = *p_a;
    UILabel__set_effectColor(v10, v15, 0LL);
  }
}


UIButton_o *__fastcall GameOptionToggleButton__get_Button(GameOptionToggleButton_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *button; // x21
  WebViewObject_o *Component_WebViewObject; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_40FF550 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIButton___, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40FF550 = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(button, 0LL, 0LL) )
  {
    Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                (UnityEngine_Component_o *)this,
                                (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIButton___);
    this->fields.button = (struct UIButton_o *)Component_WebViewObject;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.button,
      (System_Int32_array **)Component_WebViewObject,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
  }
  return this->fields.button;
}


UILabel_o *__fastcall GameOptionToggleButton__get_Label(GameOptionToggleButton_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *defaultLabel; // x21
  UIWidget_o *ComponentInChildren_UIWidget; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_40FF54F & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentInChildren_UILabel___, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40FF54F = 1;
  }
  defaultLabel = (UnityEngine_Object_o *)this->fields.defaultLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(defaultLabel, 0LL, 0LL) )
  {
    ComponentInChildren_UIWidget = UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                     (UnityEngine_Component_o *)this,
                                     (const MethodInfo_18BD4D4 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel___);
    this->fields.defaultLabel = (struct UILabel_o *)ComponentInChildren_UIWidget;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.defaultLabel,
      (System_Int32_array **)ComponentInChildren_UIWidget,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
  }
  return this->fields.defaultLabel;
}