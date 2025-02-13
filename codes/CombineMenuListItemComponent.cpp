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
  UILabel_o *preparationLabel; // x20
  System_String_o *v4; // x0
  __int64 v5; // x1
  struct UICommonButton_o *button; // x8
  struct UICommonButton_o *v7; // x8
  struct UICommonButton_o *v8; // x8
  unsigned __int128 v9; // [xsp+0h] [xbp-60h] BYREF
  UnityEngine_Color_o v10; // [xsp+10h] [xbp-50h] BYREF
  UnityEngine_Color_o color; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_4BDFE1A & 1) == 0 )
  {
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&StringLiteral_3744/*"COMBINE_PREPARATION"*/);
    sub_1C21E38(&StringLiteral_440/*"#6B6B6B"*/);
    sub_1C21E38(&StringLiteral_447/*"#E1C896"*/);
    sub_1C21E38(&StringLiteral_445/*"#B7A37B"*/);
    byte_4BDFE1A = 1;
  }
  *(_QWORD *)&color.fields.r = 0LL;
  *(_QWORD *)&color.fields.b = 0LL;
  *(_QWORD *)&v10.fields.r = 0LL;
  *(_QWORD *)&v10.fields.b = 0LL;
  v9 = 0uLL;
  preparationLabel = this->fields.preparationLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_3744/*"COMBINE_PREPARATION"*/, 0LL);
  if ( !preparationLabel )
    goto LABEL_10;
  UILabel__set_text(preparationLabel, v4, 0LL);
  UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_447/*"#E1C896"*/, &color, 0LL);
  UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_445/*"#B7A37B"*/, &v10, 0LL);
  v4 = (System_String_o *)UnityEngine_ColorUtility__TryParseHtmlString(
                            (System_String_o *)StringLiteral_440/*"#6B6B6B"*/,
                            (UnityEngine_Color_o *)&v9,
                            0LL);
  button = this->fields.button;
  if ( !button
    || (button->fields.specifyHoverColor = color, (v7 = this->fields.button) == 0LL)
    || (v7->fields.specifyPressedColor = v10, (v8 = this->fields.button) == 0LL) )
  {
LABEL_10:
    sub_1C22094(v4, v5);
  }
  v8->fields.specifyDisabledColor = (struct UnityEngine_Color_o)v9;
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
      sub_1C22094(0LL, method);
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
    sub_1C22094(0LL, *(_QWORD *)&state);
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
    sub_1C22094(0LL, disableMessage);
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
    sub_1C22094(preparationLabel, isActive);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)preparationLabel, isActive, 0LL);
}


void __fastcall CombineMenuListItemComponent__SetEventSprite(
        CombineMenuListItemComponent_o *this,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  UISprite_o *baseSprite; // x20

  if ( (byte_4BDFE1B & 1) == 0 )
  {
    sub_1C21E38(&AtlasManager_TypeInfo);
    byte_4BDFE1B = 1;
  }
  baseSprite = this->fields.baseSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventSprite(baseSprite, spriteName, 0LL);
}