void CombineMenuListItemComponent___ctor(CombineMenuListItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void CombineMenuListItemComponent__CheckAssertion(CombineMenuListItemComponent_o *this, const MethodInfo *method)
{
  ;
}


void CombineMenuListItemComponent__InitButton(CombineMenuListItemComponent_o *this, const MethodInfo *method)
{
  UILabel_o *preparationLabel; // x20
  System_String_o *v4; // x0
  struct UICommonButton_o *button; // x8
  struct UICommonButton_o *v6; // x8
  struct UICommonButton_o *v7; // x8
  unsigned __int128 v8; // [xsp+0h] [xbp-60h] BYREF
  UnityEngine_Color_o v9; // [xsp+10h] [xbp-50h] BYREF
  UnityEngine_Color_o color; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_4C46E14 & 1) == 0 )
  {
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&StringLiteral_3612/*"COMBINE_PREPARATION"*/);
    sub_1C37058(&StringLiteral_412/*"#6B6B6B"*/);
    sub_1C37058(&StringLiteral_420/*"#E1C896"*/);
    sub_1C37058(&StringLiteral_418/*"#B7A37B"*/);
    byte_4C46E14 = 1;
  }
  *(_QWORD *)&color.fields.r = 0;
  *(_QWORD *)&color.fields.b = 0;
  *(_QWORD *)&v9.fields.r = 0;
  *(_QWORD *)&v9.fields.b = 0;
  v8 = 0u;
  preparationLabel = this->fields.preparationLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_3612/*"COMBINE_PREPARATION"*/, 0);
  if ( !preparationLabel )
    goto LABEL_10;
  UILabel__set_text(preparationLabel, v4, 0);
  UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_420/*"#E1C896"*/, &color, 0);
  UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_418/*"#B7A37B"*/, &v9, 0);
  v4 = (System_String_o *)UnityEngine_ColorUtility__TryParseHtmlString(
                            (System_String_o *)StringLiteral_412/*"#6B6B6B"*/,
                            (UnityEngine_Color_o *)&v8,
                            0);
  button = this->fields.button;
  if ( !button
    || (button->fields.specifyHoverColor = color, (v6 = this->fields.button) == 0)
    || (v6->fields.specifyPressedColor = v9, (v7 = this->fields.button) == 0) )
  {
LABEL_10:
    sub_1C372B4(v4);
  }
  v7->fields.specifyDisabledColor = (struct UnityEngine_Color_o)v8;
}


void CombineMenuListItemComponent__ResetDisableState(CombineMenuListItemComponent_o *this, const MethodInfo *method)
{
  struct UICommonButton_o *button; // x0

  if ( this->fields.currentState == 3 )
  {
    button = this->fields.button;
    if ( !button )
      sub_1C372B4(0);
    ((void (__fastcall *)(struct UICommonButton_o *, __int64, __int64, const MethodInfo *))button->klass->vtable._14_SetState.methodPtr)(
      button,
      3,
      1,
      button->klass->vtable._14_SetState.method);
  }
}


// local variable allocation has failed, the output may be wrong!
void CombineMenuListItemComponent__SetButtonState(
        CombineMenuListItemComponent_o *this,
        int32_t state,
        bool immediate,
        const MethodInfo *method)
{
  unsigned int v5; // w19
  struct UICommonButton_o *button; // x0

  v5 = state;
  if ( state )
  {
    if ( state != 3 )
      goto LABEL_5;
    LOBYTE(state) = 1;
  }
  CombineMenuListItemComponent__SetDisableUiActivity(this, state, (const MethodInfo *)immediate);
LABEL_5:
  button = this->fields.button;
  if ( !button )
    sub_1C372B4(0);
  ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, bool, const MethodInfo *))button->klass->vtable._14_SetState.methodPtr)(
    button,
    v5,
    immediate,
    button->klass->vtable._14_SetState.method);
  this->fields.currentState = v5;
}


void CombineMenuListItemComponent__SetDisableMessage(
        CombineMenuListItemComponent_o *this,
        System_String_o *disableMessage,
        const MethodInfo *method)
{
  UILabel_o *disableMessageLabel; // x0

  disableMessageLabel = this->fields.disableMessageLabel;
  if ( !disableMessageLabel )
    sub_1C372B4(0);
  UILabel__set_text(disableMessageLabel, disableMessage, 0);
}


void CombineMenuListItemComponent__SetDisableUiActivity(
        CombineMenuListItemComponent_o *this,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_Component_o *preparationLabel; // x0

  preparationLabel = (UnityEngine_Component_o *)this->fields.preparationLabel;
  if ( !preparationLabel
    || (preparationLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(preparationLabel, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)preparationLabel, isActive, 0),
        (preparationLabel = (UnityEngine_Component_o *)this->fields.disableMessageLabel) == 0)
    || (preparationLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(preparationLabel, 0)) == 0 )
  {
    sub_1C372B4(preparationLabel);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)preparationLabel, isActive, 0);
}


void CombineMenuListItemComponent__SetEventSprite(
        CombineMenuListItemComponent_o *this,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  UISprite_o *baseSprite; // x20

  if ( (byte_4C46E15 & 1) == 0 )
  {
    sub_1C37058(&AtlasManager_TypeInfo);
    byte_4C46E15 = 1;
  }
  baseSprite = this->fields.baseSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventSprite(baseSprite, spriteName, 0);
}