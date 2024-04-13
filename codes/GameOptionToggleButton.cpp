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
  __int64 v3; // x3
  UIButton_o *Button; // x0
  __int64 v7; // x1
  __int64 v8; // x8
  const MethodInfo *v9; // x1
  UnityEngine_Object_o *Label; // x21
  const MethodInfo *v11; // x1
  struct UnityEngine_Color_o *p_onButtonOutlineColor; // x8
  float *p_g; // x9
  float *p_b; // x10
  float *p_a; // x11
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42EC65E & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, value, (_DWORD)method, v3);
    byte_42EC65E = 1;
  }
  Button = GameOptionToggleButton__get_Button(this, (const MethodInfo *)value);
  if ( !Button )
LABEL_16:
    sub_B5D69C(Button, v7);
  v8 = 48LL;
  if ( value )
    v8 = 40LL;
  UIButton__set_normalSprite(Button, *(System_String_o **)((char *)&this->klass + v8), 0LL);
  Label = (UnityEngine_Object_o *)GameOptionToggleButton__get_Label(this, v9);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(Label, 0LL, 0LL) )
  {
    Button = (UIButton_o *)GameOptionToggleButton__get_Label(this, v11);
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
    v16.fields.b = *p_b;
    v16.fields.g = *p_g;
    v16.fields.r = p_onButtonOutlineColor->fields.r;
    v16.fields.a = *p_a;
    UILabel__set_effectColor((UILabel_o *)Button, v16, 0LL);
  }
}


void __fastcall GameOptionToggleButton__SetButtonEnableWithCollider(
        GameOptionToggleButton_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  UnityEngine_Object_o *Component_WebViewObject; // x21
  _BOOL8 v13; // x0
  __int64 v14; // x1
  UnityEngine_Object_o *v15; // x20

  if ( (byte_42EC65F & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_Collider___, isEnable, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UITouchPress___, v6, v7, v8);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v9, v10, v11);
    byte_42EC65F = 1;
  }
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v13 = UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL);
  if ( v13 )
  {
    if ( !Component_WebViewObject )
      goto LABEL_16;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_WebViewObject, isEnable, 0LL);
  }
  v15 = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                  (UnityEngine_Component_o *)this,
                                  (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UITouchPress___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v13 = UnityEngine_Object__op_Inequality(v15, 0LL, 0LL);
  if ( v13 )
  {
    if ( v15 )
    {
      UITouchPress__set_IsEnabled((UITouchPress_o *)v15, isEnable, 0LL);
      return;
    }
LABEL_16:
    sub_B5D69C(v13, v14);
  }
}


UIButton_o *__fastcall GameOptionToggleButton__get_Button(GameOptionToggleButton_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *button; // x21
  WebViewObject_o *Component_WebViewObject; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_42EC65D & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UIButton___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42EC65D = 1;
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
                                (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIButton___);
    this->fields.button = (struct UIButton_o *)Component_WebViewObject;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.button,
      (System_Int32_array **)Component_WebViewObject,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  return this->fields.button;
}


UILabel_o *__fastcall GameOptionToggleButton__get_Label(GameOptionToggleButton_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *defaultLabel; // x21
  UIWidget_o *ComponentInChildren_UIWidget; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_42EC65C & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponentInChildren_UILabel___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42EC65C = 1;
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
                                     (const MethodInfo_1ADE34C *)Method_UnityEngine_Component_GetComponentInChildren_UILabel___);
    this->fields.defaultLabel = (struct UILabel_o *)ComponentInChildren_UIWidget;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.defaultLabel,
      (System_Int32_array **)ComponentInChildren_UIWidget,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  return this->fields.defaultLabel;
}