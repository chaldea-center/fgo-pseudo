void GameOptionToggleButton___ctor(GameOptionToggleButton_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void GameOptionToggleButton__ChangeSelectedState(GameOptionToggleButton_o *this, bool value, const MethodInfo *method)
{
  UIButton_o *Button; // x0
  __int64 v6; // x1
  __int64 v7; // x8
  const MethodInfo *v8; // x1
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_Object_o *Label; // x21
  const MethodInfo *v12; // x1
  struct UnityEngine_Color_o *p_onButtonOutlineColor; // x8
  float *p_g; // x9
  float *p_b; // x10
  float *p_a; // x11
  UnityEngine_Color_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_596B570 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596B570 = 1;
  }
  Button = GameOptionToggleButton__get_Button(this, (const MethodInfo *)value);
  if ( !Button )
    goto LABEL_15;
  v7 = 56;
  if ( value )
    v7 = 48;
  UIButton__set_normalSprite(Button, *(System_String_o **)((char *)&this->klass + v7), 0);
  Label = (UnityEngine_Object_o *)GameOptionToggleButton__get_Label(this, v8);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
  if ( UnityEngine_Object__op_Inequality(Label, 0, 0) )
  {
    Button = (UIButton_o *)GameOptionToggleButton__get_Label(this, v12);
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
      v17.fields.g = *p_g;
      v17.fields.r = p_onButtonOutlineColor->fields.r;
      v17.fields.a = *p_a;
      v17.fields.b = *p_b;
      UILabel__set_effectColor((UILabel_o *)Button, v17, 0);
      return;
    }
LABEL_15:
    sub_2213CDC(Button, v6);
  }
}


void GameOptionToggleButton__SetButtonEnableWithCollider(
        GameOptionToggleButton_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *Component_object; // x21
  _BOOL8 v8; // x0
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x2
  Il2CppObject *v12; // x20

  if ( (byte_596B571 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UITouchPress___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596B571 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  v8 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( v8 )
  {
    if ( !Component_object )
      goto LABEL_14;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, isEnable, 0);
  }
  v12 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UITouchPress___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v11);
  v8 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v12, 0, 0);
  if ( v8 )
  {
    if ( v12 )
    {
      UITouchPress__set_IsEnabled((UITouchPress_o *)v12, isEnable, 0);
      return;
    }
LABEL_14:
    sub_2213CDC(v8, v9);
  }
}


UIButton_o *GameOptionToggleButton__get_Button(GameOptionToggleButton_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *button; // x21
  Il2CppObject *Component_object; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_596B56F & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIButton___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596B56F = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(button, 0, 0) )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIButton___);
    this->fields.button = (struct UIButton_o *)Component_object;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.button,
      (int32_t)Component_object,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
  }
  return this->fields.button;
}


UILabel_o *GameOptionToggleButton__get_Label(GameOptionToggleButton_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *defaultLabel; // x21
  Il2CppObject *ComponentInChildren_object__58855044; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_596B56E & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponentInChildren_UILabel___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596B56E = 1;
  }
  defaultLabel = (UnityEngine_Object_o *)this->fields.defaultLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(defaultLabel, 0, 0) )
  {
    ComponentInChildren_object__58855044 = UnityEngine_Component__GetComponentInChildren_object__58855044(
                                             (UnityEngine_Component_o *)this,
                                             (const MethodInfo_3820E84 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel___);
    this->fields.defaultLabel = (struct UILabel_o *)ComponentInChildren_object__58855044;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.defaultLabel,
      (int32_t)ComponentInChildren_object__58855044,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
  }
  return this->fields.defaultLabel;
}