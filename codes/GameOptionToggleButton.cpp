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

  if ( (byte_4B175F1 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, value);
    byte_4B175F1 = 1;
  }
  Button = GameOptionToggleButton__get_Button(this, (const MethodInfo *)value);
  if ( !Button )
    goto LABEL_15;
  v7 = 56LL;
  if ( value )
    v7 = 48LL;
  UIButton__set_normalSprite(Button, *(System_String_o **)((char *)&this->klass + v7), 0LL);
  Label = (UnityEngine_Object_o *)GameOptionToggleButton__get_Label(this, v8);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(Label, 0LL, 0LL) )
  {
    Button = (UIButton_o *)GameOptionToggleButton__get_Label(this, v10);
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
      v15.fields.a = *p_a;
      v15.fields.b = *p_b;
      v15.fields.g = *p_g;
      v15.fields.r = p_onButtonOutlineColor->fields.r;
      UILabel__set_effectColor((UILabel_o *)Button, v15, 0LL);
      return;
    }
LABEL_15:
    sub_1BCB254(Button, v6);
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
  Il2CppObject *Component_object; // x21
  _BOOL8 v8; // x0
  __int64 v9; // x1
  Il2CppObject *v10; // x20

  if ( (byte_4B175F2 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_Component_GetComponent_Collider___, isEnable);
    sub_1BCAFF8(&Method_UnityEngine_Component_GetComponent_UITouchPress___, v5);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v6);
    byte_4B175F2 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3011274 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( v8 )
  {
    if ( !Component_object )
      goto LABEL_14;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, isEnable, 0LL);
  }
  v10 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_3011274 *)Method_UnityEngine_Component_GetComponent_UITouchPress___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v10, 0LL, 0LL);
  if ( v8 )
  {
    if ( v10 )
    {
      UITouchPress__set_IsEnabled((UITouchPress_o *)v10, isEnable, 0LL);
      return;
    }
LABEL_14:
    sub_1BCB254(v8, v9);
  }
}


UIButton_o *__fastcall GameOptionToggleButton__get_Button(GameOptionToggleButton_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *button; // x21
  Il2CppObject *Component_object; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4B175F0 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_Component_GetComponent_UIButton___, method);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v3);
    byte_4B175F0 = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(button, 0LL, 0LL) )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_3011274 *)Method_UnityEngine_Component_GetComponent_UIButton___);
    this->fields.button = (struct UIButton_o *)Component_object;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.button, (int32_t)Component_object, v6, v7);
  }
  return this->fields.button;
}


UILabel_o *__fastcall GameOptionToggleButton__get_Label(GameOptionToggleButton_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *defaultLabel; // x21
  Il2CppObject *ComponentInChildren_object__50402520; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4B175EF & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_Component_GetComponentInChildren_UILabel___, method);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v3);
    byte_4B175EF = 1;
  }
  defaultLabel = (UnityEngine_Object_o *)this->fields.defaultLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(defaultLabel, 0LL, 0LL) )
  {
    ComponentInChildren_object__50402520 = UnityEngine_Component__GetComponentInChildren_object__50402520(
                                             (UnityEngine_Component_o *)this,
                                             (const MethodInfo_30114D8 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel___);
    this->fields.defaultLabel = (struct UILabel_o *)ComponentInChildren_object__50402520;
    sub_1BCAF9C(
      (CGThumbnailListItem_o *)&this->fields.defaultLabel,
      (int32_t)ComponentInChildren_object__50402520,
      v6,
      v7);
  }
  return this->fields.defaultLabel;
}