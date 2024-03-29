void __fastcall CombineMenuListItemComponent___ctor(CombineMenuListItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall CombineMenuListItemComponent__CheckAssertion(
        CombineMenuListItemComponent_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall CombineMenuListItemComponent__InitButton(
        CombineMenuListItemComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UILabel_o *preparationLabel; // x20
  System_String_o *v8; // x0
  struct UICommonButton_o *button; // x8
  struct UICommonButton_o *v10; // x8
  struct UICommonButton_o *v11; // x8
  unsigned __int128 v12; // [xsp+0h] [xbp-40h] BYREF
  UnityEngine_Color_o v13; // [xsp+10h] [xbp-30h] BYREF
  UnityEngine_Color_o color; // [xsp+20h] [xbp-20h] BYREF

  if ( (byte_4211000 & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_3208/*"COMBINE_PREPARATION"*/, v3);
    sub_B0D8A4(&StringLiteral_359/*"#6B6B6B"*/, v4);
    sub_B0D8A4(&StringLiteral_364/*"#E1C896"*/, v5);
    sub_B0D8A4(&StringLiteral_362/*"#B7A37B"*/, v6);
    byte_4211000 = 1;
  }
  *(_QWORD *)&color.fields.r = 0LL;
  *(_QWORD *)&color.fields.b = 0LL;
  *(_QWORD *)&v13.fields.b = 0LL;
  *(_QWORD *)&v13.fields.r = 0LL;
  v12 = 0uLL;
  preparationLabel = this->fields.preparationLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_3208/*"COMBINE_PREPARATION"*/, 0LL);
  if ( !preparationLabel )
    goto LABEL_11;
  UILabel__set_text(preparationLabel, v8, 0LL);
  UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_364/*"#E1C896"*/, &color, 0LL);
  UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_362/*"#B7A37B"*/, &v13, 0LL);
  v8 = (System_String_o *)UnityEngine_ColorUtility__TryParseHtmlString(
                            (System_String_o *)StringLiteral_359/*"#6B6B6B"*/,
                            (UnityEngine_Color_o *)&v12,
                            0LL);
  button = this->fields.button;
  if ( !button
    || (button->fields.specifyHoverColor = color, (v10 = this->fields.button) == 0LL)
    || (v10->fields.specifyPressedColor = v13, (v11 = this->fields.button) == 0LL) )
  {
LABEL_11:
    sub_B0D97C(v8);
  }
  v11->fields.specifyDisabledColor = (struct UnityEngine_Color_o)v12;
}


void __fastcall CombineMenuListItemComponent__ResetDisableState(
        CombineMenuListItemComponent_o *this,
        const MethodInfo *method)
{
  struct UICommonButton_o *button; // x0

  if ( this->fields.currentState == 3 )
  {
    button = this->fields.button;
    if ( !button )
      sub_B0D97C(0LL);
    ((void (__fastcall *)(struct UICommonButton_o *, __int64, __int64, Il2CppMethodPointer))button->klass->vtable._14_SetState.method)(
      button,
      3LL,
      1LL,
      button->klass->vtable._15_OnPress.methodPtr);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineMenuListItemComponent__SetButtonState(
        CombineMenuListItemComponent_o *this,
        int32_t state,
        bool immediate,
        const MethodInfo *method)
{
  bool v7; // w1
  struct UICommonButton_o *button; // x0

  if ( state == 3 )
  {
    v7 = 1;
  }
  else
  {
    if ( state )
      goto LABEL_6;
    v7 = 0;
  }
  CombineMenuListItemComponent__SetDisableUiActivity(this, v7, (const MethodInfo *)immediate);
LABEL_6:
  button = this->fields.button;
  if ( !button )
    sub_B0D97C(0LL);
  ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, bool, Il2CppMethodPointer))button->klass->vtable._14_SetState.method)(
    button,
    (unsigned int)state,
    immediate,
    button->klass->vtable._15_OnPress.methodPtr);
  this->fields.currentState = state;
}


void __fastcall CombineMenuListItemComponent__SetDisableMessage(
        CombineMenuListItemComponent_o *this,
        System_String_o *disableMessage,
        const MethodInfo *method)
{
  UILabel_o *disableMessageLabel; // x0

  disableMessageLabel = this->fields.disableMessageLabel;
  if ( !disableMessageLabel )
    sub_B0D97C(0LL);
  UILabel__set_text(disableMessageLabel, disableMessage, 0LL);
}


void __fastcall CombineMenuListItemComponent__SetDisableUiActivity(
        CombineMenuListItemComponent_o *this,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_Component_o *preparationLabel; // x0

  preparationLabel = (UnityEngine_Component_o *)this->fields.preparationLabel;
  if ( !preparationLabel
    || (preparationLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(preparationLabel, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)preparationLabel, isActive, 0LL),
        (preparationLabel = (UnityEngine_Component_o *)this->fields.disableMessageLabel) == 0LL)
    || (preparationLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(preparationLabel, 0LL)) == 0LL )
  {
    sub_B0D97C(preparationLabel);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)preparationLabel, isActive, 0LL);
}


void __fastcall CombineMenuListItemComponent__SetEventSprite(
        CombineMenuListItemComponent_o *this,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  UISprite_o *baseSprite; // x20

  if ( (byte_4211001 & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, spriteName);
    byte_4211001 = 1;
  }
  baseSprite = this->fields.baseSprite;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventSprite(baseSprite, spriteName, 0LL);
}