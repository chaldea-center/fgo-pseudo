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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  UILabel_o *preparationLabel; // x20
  System_String_o *v13; // x0
  __int64 v14; // x1
  struct UICommonButton_o *button; // x8
  struct UICommonButton_o *v16; // x8
  struct UICommonButton_o *v17; // x8
  unsigned __int128 v18; // [xsp+0h] [xbp-60h] BYREF
  UnityEngine_Color_o v19; // [xsp+10h] [xbp-50h] BYREF
  UnityEngine_Color_o color; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_4B199C3 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_3720/*"COMBINE_PREPARATION"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_438/*"#6B6B6B"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_445/*"#E1C896"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_443/*"#B7A37B"*/, v10, v11);
    byte_4B199C3 = 1;
  }
  *(_QWORD *)&color.fields.r = 0LL;
  *(_QWORD *)&color.fields.b = 0LL;
  *(_QWORD *)&v19.fields.r = 0LL;
  *(_QWORD *)&v19.fields.b = 0LL;
  v18 = 0uLL;
  preparationLabel = this->fields.preparationLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_3720/*"COMBINE_PREPARATION"*/, 0LL);
  if ( !preparationLabel )
    goto LABEL_10;
  UILabel__set_text(preparationLabel, v13, 0LL);
  UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_445/*"#E1C896"*/, &color, 0LL);
  UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_443/*"#B7A37B"*/, &v19, 0LL);
  v13 = (System_String_o *)UnityEngine_ColorUtility__TryParseHtmlString(
                             (System_String_o *)StringLiteral_438/*"#6B6B6B"*/,
                             (UnityEngine_Color_o *)&v18,
                             0LL);
  button = this->fields.button;
  if ( !button
    || (button->fields.specifyHoverColor = color, (v16 = this->fields.button) == 0LL)
    || (v16->fields.specifyPressedColor = v19, (v17 = this->fields.button) == 0LL) )
  {
LABEL_10:
    sub_1BCAA3C(v13, v14);
  }
  v17->fields.specifyDisabledColor = (struct UnityEngine_Color_o)v18;
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
      sub_1BCAA3C(0LL, method);
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
    sub_1BCAA3C(0LL, *(_QWORD *)&state);
  ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, bool, Il2CppMethodPointer))button->klass->vtable._14_SetState.method)(
    button,
    v5,
    immediate,
    button->klass->vtable._15_OnPress.methodPtr);
  this->fields.currentState = v5;
}


void __fastcall CombineMenuListItemComponent__SetDisableMessage(
        CombineMenuListItemComponent_o *this,
        System_String_o *disableMessage,
        const MethodInfo *method)
{
  UILabel_o *disableMessageLabel; // x0

  disableMessageLabel = this->fields.disableMessageLabel;
  if ( !disableMessageLabel )
    sub_1BCAA3C(0LL, disableMessage);
  UILabel__set_text(disableMessageLabel, disableMessage, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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
    sub_1BCAA3C(preparationLabel, isActive);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)preparationLabel, isActive, 0LL);
}


void __fastcall CombineMenuListItemComponent__SetEventSprite(
        CombineMenuListItemComponent_o *this,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  UISprite_o *baseSprite; // x20

  if ( (byte_4B199C4 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, spriteName, method);
    byte_4B199C4 = 1;
  }
  baseSprite = this->fields.baseSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, spriteName);
  AtlasManager__SetEventSprite(baseSprite, spriteName, 0LL);
}