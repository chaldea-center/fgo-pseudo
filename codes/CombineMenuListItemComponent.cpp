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
  int v4; // w8
  System_String_o *v5; // x0
  __int64 v6; // x1
  struct UICommonButton_o *button; // x8
  struct UICommonButton_o *v8; // x8
  struct UICommonButton_o *v9; // x8
  unsigned __int128 v10; // [xsp+0h] [xbp-60h] BYREF
  UnityEngine_Color_o v11; // [xsp+10h] [xbp-50h] BYREF
  UnityEngine_Color_o color; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_59749FA & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_3754/*"COMBINE_PREPARATION"*/);
    sub_2213A60(&StringLiteral_437/*"#6B6B6B"*/);
    sub_2213A60(&StringLiteral_446/*"#E1C896"*/);
    sub_2213A60(&StringLiteral_444/*"#B7A37B"*/);
    byte_59749FA = 1;
  }
  *(_QWORD *)&color.fields.r = 0;
  *(_QWORD *)&color.fields.b = 0;
  preparationLabel = this->fields.preparationLabel;
  *(_QWORD *)&v11.fields.r = 0;
  *(_QWORD *)&v11.fields.b = 0;
  v4 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
  v10 = 0u;
  if ( !v4 )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_3754/*"COMBINE_PREPARATION"*/, 0);
  if ( !preparationLabel )
    goto LABEL_10;
  UILabel__set_text(preparationLabel, v5, 0);
  UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_446/*"#E1C896"*/, &color, 0);
  UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_444/*"#B7A37B"*/, &v11, 0);
  v5 = (System_String_o *)UnityEngine_ColorUtility__TryParseHtmlString(
                            (System_String_o *)StringLiteral_437/*"#6B6B6B"*/,
                            (UnityEngine_Color_o *)&v10,
                            0);
  button = this->fields.button;
  if ( !button
    || (button->fields.specifyHoverColor = color, (v8 = this->fields.button) == 0)
    || (v8->fields.specifyPressedColor = v11, (v9 = this->fields.button) == 0) )
  {
LABEL_10:
    sub_2213CDC(v5, v6);
  }
  v9->fields.specifyDisabledColor = (struct UnityEngine_Color_o)v10;
}


void CombineMenuListItemComponent__ResetDisableState(CombineMenuListItemComponent_o *this, const MethodInfo *method)
{
  struct UICommonButton_o *button; // x0

  if ( this->fields.currentState == 3 )
  {
    button = this->fields.button;
    if ( !button )
      sub_2213CDC(0, method);
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
    sub_2213CDC(0, *(_QWORD *)&state);
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
    sub_2213CDC(0, disableMessage);
  UILabel__set_text(disableMessageLabel, disableMessage, 0);
}


// local variable allocation has failed, the output may be wrong!
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
    sub_2213CDC(preparationLabel, isActive);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)preparationLabel, isActive, 0);
}


void CombineMenuListItemComponent__SetEventSprite(
        CombineMenuListItemComponent_o *this,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  UISprite_o *baseSprite; // x20

  if ( (byte_59749FB & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    byte_59749FB = 1;
  }
  baseSprite = this->fields.baseSprite;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, spriteName);
  AtlasManager__SetEventSprite(baseSprite, spriteName, 0);
}