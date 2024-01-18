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
  __int64 v6; // x1
  __int64 v7; // x8
  const MethodInfo *v8; // x1
  UnityEngine_Object_o *Label; // x21
  const MethodInfo *v10; // x1
  struct UnityEngine_Color_o *p_onButtonOutlineColor; // x8
  float *p_g; // x9
  float *p_b; // x10
  float *p_a; // x11
  UnityEngine_Color_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_418B038 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, value);
    byte_418B038 = 1;
  }
  Button = GameOptionToggleButton__get_Button(this, (const MethodInfo *)value);
  if ( !Button )
LABEL_16:
    sub_B2C434(Button, v6);
  v7 = 48LL;
  if ( value )
    v7 = 40LL;
  UIButton__set_normalSprite(Button, *(System_String_o **)((char *)&this->klass + v7), 0LL);
  Label = (UnityEngine_Object_o *)GameOptionToggleButton__get_Label(this, v8);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(Label, 0LL, 0LL) )
  {
    Button = (UIButton_o *)GameOptionToggleButton__get_Label(this, v10);
    if ( value )
    {
      p_onButtonOutlineColor = &this->fields.onButtonOutlineColor;
      p_g = &this->fields.onButtonOutlineColor.fields.g;
      p_b = &this->fields.onButtonOutlineColor.fields.b;
      p_a = &this->fields.onButtonOutlineColor.fields.a;
      if ( !Button )
        goto LABEL_16;
    }
    else
    {
      p_onButtonOutlineColor = &this->fields.offButtonOutlineColor;
      p_g = &this->fields.offButtonOutlineColor.fields.g;
      p_b = &this->fields.offButtonOutlineColor.fields.b;
      p_a = &this->fields.offButtonOutlineColor.fields.a;
      if ( !Button )
        goto LABEL_16;
    }
    v15.fields.b = *p_b;
    v15.fields.g = *p_g;
    v15.fields.r = p_onButtonOutlineColor->fields.r;
    v15.fields.a = *p_a;
    UILabel__set_effectColor((UILabel_o *)Button, v15, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GameOptionToggleButton__SetButtonEnableWithCollider(
        GameOptionToggleButton_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Object_o *Component_WebViewObject; // x21
  _BOOL8 v8; // x0
  __int64 v9; // x1
  UnityEngine_Object_o *v10; // x20

  if ( (byte_418B039 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_Collider___, isEnable);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UITouchPress___, v5);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    byte_418B039 = 1;
  }
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v8 = UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL);
  if ( v8 )
  {
    if ( !Component_WebViewObject )
      goto LABEL_16;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_WebViewObject, isEnable, 0LL);
  }
  v10 = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                  (UnityEngine_Component_o *)this,
                                  (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UITouchPress___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v8 = UnityEngine_Object__op_Inequality(v10, 0LL, 0LL);
  if ( v8 )
  {
    if ( v10 )
    {
      UITouchPress__set_IsEnabled((UITouchPress_o *)v10, isEnable, 0LL);
      return;
    }
LABEL_16:
    sub_B2C434(v8, v9);
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

  if ( (byte_418B037 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UIButton___, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    byte_418B037 = 1;
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
                                (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIButton___);
    this->fields.button = (struct UIButton_o *)Component_WebViewObject;
    sub_B2C2F8(
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

  if ( (byte_418B036 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponentInChildren_UILabel___, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    byte_418B036 = 1;
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
                                     (const MethodInfo_172DC3C *)Method_UnityEngine_Component_GetComponentInChildren_UILabel___);
    this->fields.defaultLabel = (struct UILabel_o *)ComponentInChildren_UIWidget;
    sub_B2C2F8(
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