void CharaGraphManageButtonGroup___ctor(CharaGraphManageButtonGroup_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v9; // w1
  int32_t v10; // w1
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  if ( (byte_4D2FD33 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_17794/*"button_select_reg"*/);
    sub_1C93AD4(&StringLiteral_17795/*"button_select_unreg"*/);
    byte_4D2FD33 = 1;
  }
  v9 = StringLiteral_17794/*"button_select_reg"*/;
  this->fields._MainButtonOnSpriteName_k__BackingField = (struct System_String_o *)StringLiteral_17794/*"button_select_reg"*/;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._MainButtonOnSpriteName_k__BackingField,
    v9,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = StringLiteral_17795/*"button_select_unreg"*/;
  this->fields._MainButtonOffSpriteName_k__BackingField = (struct System_String_o *)StringLiteral_17795/*"button_select_unreg"*/;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._MainButtonOffSpriteName_k__BackingField,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void CharaGraphManageButtonGroup__AssertionForSerializeField(
        CharaGraphManageButtonGroup_o *this,
        const MethodInfo *method)
{
  ;
}


void CharaGraphManageButtonGroup__Awake(CharaGraphManageButtonGroup_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  UnityEngine_Component_o *pushTabButton; // x0

  ((void (__fastcall *)(CharaGraphManageButtonGroup_o *, const MethodInfo *))this->klass->vtable._4_AssertionForSerializeField.methodPtr)(
    this,
    this->klass->vtable._4_AssertionForSerializeField.method);
  if ( !this->fields.initialized )
  {
    pushTabButton = (UnityEngine_Component_o *)this->fields.pushTabButton;
    this->fields.initialized = 1;
    this->fields.isTabPushDefaultActive = CharaGraphManageButtonGroup__IsActive(pushTabButton, v3);
  }
}


void CharaGraphManageButtonGroup__ClickScaleChange(CharaGraphManageButtonGroup_o *this, const MethodInfo *method)
{
  ActionExtensions__Call(this->fields._OnClickScaleChange_k__BackingField, 0);
}


void CharaGraphManageButtonGroup__ClickTabChoice(CharaGraphManageButtonGroup_o *this, const MethodInfo *method)
{
  ActionExtensions__Call(this->fields._OnClickTabChoice_k__BackingField, 0);
}


void CharaGraphManageButtonGroup__ClickTabLock(CharaGraphManageButtonGroup_o *this, const MethodInfo *method)
{
  ActionExtensions__Call(this->fields._OnClickTabLock_k__BackingField, 0);
}


void CharaGraphManageButtonGroup__ClickTabMain(CharaGraphManageButtonGroup_o *this, const MethodInfo *method)
{
  ActionExtensions__Call(this->fields._OnClickTabMain_k__BackingField, 0);
}


void CharaGraphManageButtonGroup__ClickTabPush(CharaGraphManageButtonGroup_o *this, const MethodInfo *method)
{
  ActionExtensions__Call(this->fields._OnClickTabPush_k__BackingField, 0);
}


void CharaGraphManageButtonGroup__Init(CharaGraphManageButtonGroup_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *pushTabButton; // x0

  if ( !this->fields.initialized )
  {
    pushTabButton = (UnityEngine_Component_o *)this->fields.pushTabButton;
    this->fields.initialized = 1;
    this->fields.isTabPushDefaultActive = CharaGraphManageButtonGroup__IsActive(pushTabButton, method);
  }
}


bool CharaGraphManageButtonGroup__IsActive(UnityEngine_Component_o *c, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  if ( (byte_4D2FD32 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2FD32 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)c, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
    return 0;
  if ( !c || (gameObject = UnityEngine_Component__get_gameObject(c, 0)) == 0 )
    sub_1C93D2C(gameObject, v4);
  return UnityEngine_GameObject__get_activeSelf(gameObject, 0);
}


void CharaGraphManageButtonGroup__SetPushButtonActive(
        CharaGraphManageButtonGroup_o *this,
        bool value,
        bool isInit,
        const MethodInfo *method)
{
  UnityEngine_Object_o *pushTabSprite; // x22
  __int64 v8; // x1
  UnityEngine_Component_o *gameObject; // x0
  bool v10; // w21

  if ( (byte_4D2FD2F & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2FD2F = 1;
  }
  if ( this->fields.isTabPushDefaultActive )
  {
    pushTabSprite = (UnityEngine_Object_o *)this->fields.pushTabSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(pushTabSprite, 0, 0) )
    {
      gameObject = (UnityEngine_Component_o *)this->fields.pushTabSprite;
      if ( !gameObject )
        goto LABEL_14;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
      if ( !gameObject
        || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, value, 0),
            (gameObject = (UnityEngine_Component_o *)this->fields.pushTabButton) == 0)
        || (((void (__fastcall *)(UnityEngine_Component_o *, bool, const char *))gameObject->klass[1]._1.name)(
              gameObject,
              value,
              gameObject->klass[1]._1.namespaze),
            (gameObject = (UnityEngine_Component_o *)this->fields.pushTabButton) == 0)
        || (v10 = value,
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)gameObject, v10, 0),
            (gameObject = (UnityEngine_Component_o *)this->fields.pushTabButton) == 0) )
      {
LABEL_14:
        sub_1C93D2C(gameObject, v8);
      }
      UICommonButton__SetColliderEnable((UICommonButton_o *)gameObject, v10, !isInit, 0);
    }
  }
}


void CharaGraphManageButtonGroup__SetScaleButtonSprite(
        CharaGraphManageButtonGroup_o *this,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UISprite_o *scaleChangeTabSprite; // x0

  if ( CharaGraphManageButtonGroup__IsActive(
         (UnityEngine_Component_o *)this->fields.scaleChangeTabSprite,
         (const MethodInfo *)spriteName) )
  {
    scaleChangeTabSprite = this->fields.scaleChangeTabSprite;
    if ( !scaleChangeTabSprite )
      sub_1C93D2C(0, v5);
    UISprite__set_spriteName(scaleChangeTabSprite, spriteName, 0);
  }
}


void CharaGraphManageButtonGroup__SetupButton(
        CharaGraphManageButtonGroup_o *this,
        UICommonButton_o *button,
        UISprite_o *sprite,
        bool modeMatched,
        System_String_o *onName,
        System_String_o *offName,
        bool isInit,
        const MethodInfo *method)
{
  _BOOL8 v14; // x0
  __int64 v15; // x1
  _BOOL4 v16; // w24
  bool enabled; // w0
  System_String_o *v18; // x1

  if ( (byte_4D2FD31 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2FD31 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)button, 0, 0) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v14 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sprite, 0, 0);
    if ( !v14 )
    {
      if ( !button
        || (((void (__fastcall *)(UICommonButton_o *, __int64, const MethodInfo *))button->klass->vtable._5_set_isEnabled.methodPtr)(
              button,
              1,
              button->klass->vtable._5_set_isEnabled.method),
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)button, !modeMatched, 0),
            v16 = !isInit,
            ((void (__fastcall *)(UICommonButton_o *, _QWORD, _BOOL4, const MethodInfo *))button->klass->vtable._14_SetState.methodPtr)(
              button,
              0,
              v16,
              button->klass->vtable._14_SetState.method),
            enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)button, 0),
            UICommonButton__SetColliderEnable(button, enabled, v16, 0),
            !sprite) )
      {
        sub_1C93D2C(v14, v15);
      }
      if ( modeMatched )
        v18 = onName;
      else
        v18 = offName;
      UISprite__set_spriteName(sprite, v18, 0);
    }
  }
}


void CharaGraphManageButtonGroup__UpdateDisplay(
        CharaGraphManageButtonGroup_o *this,
        int32_t selectedModeKind,
        bool isInit,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x7
  CharaGraphManageButtonGroup_o *v7; // x20
  bool v8; // w21
  CharaGraphManageButtonGroup_o *v9; // x0
  const MethodInfo *v10; // x7
  CharaGraphManageButtonGroup_o *v11; // x0
  const MethodInfo *v12; // x7
  CharaGraphManageButtonGroup_o *v13; // x0
  const MethodInfo *v14; // x7

  v7 = this;
  if ( (byte_4D2FD30 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_17792/*"button_push_reg"*/);
    sub_1C93AD4(&StringLiteral_17793/*"button_push_unreg"*/);
    sub_1C93AD4(&StringLiteral_17778/*"button_allchoice_reg"*/);
    sub_1C93AD4(&StringLiteral_17781/*"button_alllock_unreg"*/);
    sub_1C93AD4(&StringLiteral_17780/*"button_alllock_reg"*/);
    this = (CharaGraphManageButtonGroup_o *)sub_1C93AD4(&StringLiteral_17779/*"button_allchoice_unreg"*/);
    byte_4D2FD30 = 1;
  }
  v8 = isInit;
  CharaGraphManageButtonGroup__SetupButton(
    this,
    v7->fields.mainTabButton,
    v7->fields.mainTabSprite,
    selectedModeKind == 0,
    v7->fields._MainButtonOnSpriteName_k__BackingField,
    v7->fields._MainButtonOffSpriteName_k__BackingField,
    v8,
    v4);
  CharaGraphManageButtonGroup__SetupButton(
    v9,
    v7->fields.lockTabButton,
    v7->fields.lockTabSprite,
    selectedModeKind == 2,
    (System_String_o *)StringLiteral_17780/*"button_alllock_reg"*/,
    (System_String_o *)StringLiteral_17781/*"button_alllock_unreg"*/,
    v8,
    v10);
  CharaGraphManageButtonGroup__SetupButton(
    v11,
    v7->fields.choiceTabButton,
    v7->fields.choiceTabSprite,
    selectedModeKind == 3,
    (System_String_o *)StringLiteral_17778/*"button_allchoice_reg"*/,
    (System_String_o *)StringLiteral_17779/*"button_allchoice_unreg"*/,
    v8,
    v12);
  CharaGraphManageButtonGroup__SetupButton(
    v13,
    v7->fields.pushTabButton,
    v7->fields.pushTabSprite,
    selectedModeKind == 4,
    (System_String_o *)StringLiteral_17792/*"button_push_reg"*/,
    (System_String_o *)StringLiteral_17793/*"button_push_unreg"*/,
    v8,
    v14);
}


System_String_o *CharaGraphManageButtonGroup__get_MainButtonOffSpriteName(
        CharaGraphManageButtonGroup_o *this,
        const MethodInfo *method)
{
  return this->fields._MainButtonOffSpriteName_k__BackingField;
}


System_String_o *CharaGraphManageButtonGroup__get_MainButtonOnSpriteName(
        CharaGraphManageButtonGroup_o *this,
        const MethodInfo *method)
{
  return this->fields._MainButtonOnSpriteName_k__BackingField;
}


System_Action_o *CharaGraphManageButtonGroup__get_OnClickScaleChange(
        CharaGraphManageButtonGroup_o *this,
        const MethodInfo *method)
{
  return this->fields._OnClickScaleChange_k__BackingField;
}


System_Action_o *CharaGraphManageButtonGroup__get_OnClickTabChoice(
        CharaGraphManageButtonGroup_o *this,
        const MethodInfo *method)
{
  return this->fields._OnClickTabChoice_k__BackingField;
}


System_Action_o *CharaGraphManageButtonGroup__get_OnClickTabLock(
        CharaGraphManageButtonGroup_o *this,
        const MethodInfo *method)
{
  return this->fields._OnClickTabLock_k__BackingField;
}


System_Action_o *CharaGraphManageButtonGroup__get_OnClickTabMain(
        CharaGraphManageButtonGroup_o *this,
        const MethodInfo *method)
{
  return this->fields._OnClickTabMain_k__BackingField;
}


System_Action_o *CharaGraphManageButtonGroup__get_OnClickTabPush(
        CharaGraphManageButtonGroup_o *this,
        const MethodInfo *method)
{
  return this->fields._OnClickTabPush_k__BackingField;
}


void CharaGraphManageButtonGroup__set_MainButtonOffSpriteName(
        CharaGraphManageButtonGroup_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._MainButtonOffSpriteName_k__BackingField = value;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._MainButtonOffSpriteName_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void CharaGraphManageButtonGroup__set_MainButtonOnSpriteName(
        CharaGraphManageButtonGroup_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._MainButtonOnSpriteName_k__BackingField = value;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._MainButtonOnSpriteName_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void CharaGraphManageButtonGroup__set_OnClickScaleChange(
        CharaGraphManageButtonGroup_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._OnClickScaleChange_k__BackingField = value;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._OnClickScaleChange_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void CharaGraphManageButtonGroup__set_OnClickTabChoice(
        CharaGraphManageButtonGroup_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._OnClickTabChoice_k__BackingField = value;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._OnClickTabChoice_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void CharaGraphManageButtonGroup__set_OnClickTabLock(
        CharaGraphManageButtonGroup_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._OnClickTabLock_k__BackingField = value;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._OnClickTabLock_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void CharaGraphManageButtonGroup__set_OnClickTabMain(
        CharaGraphManageButtonGroup_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._OnClickTabMain_k__BackingField = value;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._OnClickTabMain_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void CharaGraphManageButtonGroup__set_OnClickTabPush(
        CharaGraphManageButtonGroup_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._OnClickTabPush_k__BackingField = value;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._OnClickTabPush_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}