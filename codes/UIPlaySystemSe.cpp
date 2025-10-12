void UIPlaySystemSe___ctor(UIPlaySystemSe_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UIPlaySystemSe__OnClick(UIPlaySystemSe_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0

  if ( (byte_4C392BE & 1) == 0 )
  {
    sub_1C32C20(&Method_UIPlaySystemSe_OnClick__);
    byte_4C392BE = 1;
  }
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) && !this->fields.trigger )
  {
    v3 = Method_UIPlaySystemSe_OnClick__;
    if ( (*((_BYTE *)Method_UIPlaySystemSe_OnClick__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_UIPlaySystemSe_OnClick__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, this->fields.kind, 0, 0);
  }
}


void UIPlaySystemSe__OnHover(UIPlaySystemSe_o *this, bool isOver, const MethodInfo *method)
{
  int32_t trigger; // w8
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0

  if ( (byte_4C392BC & 1) == 0 )
  {
    sub_1C32C20(&Method_UIPlaySystemSe_OnHover__);
    byte_4C392BC = 1;
  }
  if ( this->fields.trigger == 1 )
  {
    if ( this->fields.mIsOver == isOver )
      return;
    this->fields.mIsOver = isOver;
  }
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    trigger = this->fields.trigger;
    if ( isOver )
    {
      if ( trigger != 1 )
        return;
    }
    else if ( trigger != 2 )
    {
      return;
    }
    v6 = Method_UIPlaySystemSe_OnHover__;
    if ( (*((_BYTE *)Method_UIPlaySystemSe_OnHover__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1C32C38(Method_UIPlaySystemSe_OnHover__);
    v7 = (System_Reflection_MethodBase_o *)sub_1C32C04(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, this->fields.kind, 0, 0);
  }
}


void UIPlaySystemSe__OnPress(UIPlaySystemSe_o *this, bool isPressed, const MethodInfo *method)
{
  int32_t trigger; // w8
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0

  if ( (byte_4C392BD & 1) == 0 )
  {
    sub_1C32C20(&Method_UIPlaySystemSe_OnPress__);
    byte_4C392BD = 1;
  }
  if ( this->fields.trigger == 3 )
  {
    if ( this->fields.mIsOver == isPressed )
      return;
    this->fields.mIsOver = isPressed;
  }
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    trigger = this->fields.trigger;
    if ( isPressed )
    {
      if ( trigger != 3 )
        return;
    }
    else if ( trigger != 4 )
    {
      return;
    }
    v6 = Method_UIPlaySystemSe_OnPress__;
    if ( (*((_BYTE *)Method_UIPlaySystemSe_OnPress__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1C32C38(Method_UIPlaySystemSe_OnPress__);
    v7 = (System_Reflection_MethodBase_o *)sub_1C32C04(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, this->fields.kind, 0, 0);
  }
}


void UIPlaySystemSe__OnSelect(UIPlaySystemSe_o *this, bool isSelected, const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  UICamera_c *v6; // x0

  if ( (byte_4C392BF & 1) == 0 )
  {
    sub_1C32C20(&UICamera_TypeInfo);
    byte_4C392BF = 1;
  }
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    if ( !isSelected )
      goto LABEL_8;
    v6 = UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v6 = UICamera_TypeInfo;
    }
    if ( v6->static_fields->currentScheme == 2 )
LABEL_8:
      UIPlaySystemSe__OnHover(this, isSelected, v5);
  }
}


void UIPlaySystemSe__Play(UIPlaySystemSe_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0

  if ( (byte_4C392C0 & 1) == 0 )
  {
    sub_1C32C20(&Method_UIPlaySystemSe_Play__);
    byte_4C392C0 = 1;
  }
  v3 = Method_UIPlaySystemSe_Play__;
  if ( (*((_BYTE *)Method_UIPlaySystemSe_Play__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C32C38(Method_UIPlaySystemSe_Play__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, this->fields.kind, 0, 0);
}