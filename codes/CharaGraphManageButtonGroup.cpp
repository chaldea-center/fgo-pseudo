void CharaGraphManageButtonGroup___ctor(CharaGraphManageButtonGroup_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t v9; // w1
  int32_t v10; // w1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_596FAF6 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_18433/*"button_select_reg"*/);
    sub_2213A60(&StringLiteral_18434/*"button_select_unreg"*/);
    byte_596FAF6 = 1;
  }
  v9 = StringLiteral_18433/*"button_select_reg"*/;
  this->fields._MainButtonOnSpriteName_k__BackingField = (struct System_String_o *)StringLiteral_18433/*"button_select_reg"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._MainButtonOnSpriteName_k__BackingField,
    v9,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = StringLiteral_18434/*"button_select_unreg"*/;
  this->fields._MainButtonOffSpriteName_k__BackingField = (struct System_String_o *)StringLiteral_18434/*"button_select_unreg"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._MainButtonOffSpriteName_k__BackingField,
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
  __int64 v2; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1

  if ( (byte_596FAF5 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596FAF5 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)c, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
    return 0;
  if ( !c || (gameObject = UnityEngine_Component__get_gameObject(c, 0)) == 0 )
    sub_2213CDC(gameObject, v5);
  return UnityEngine_GameObject__get_activeSelf(gameObject, 0);
}


// local variable allocation has failed, the output may be wrong!
void CharaGraphManageButtonGroup__SetPushButtonActive(
        CharaGraphManageButtonGroup_o *this,
        bool value,
        bool isInit,
        const MethodInfo *method)
{
  UnityEngine_Object_o *pushTabSprite; // x22
  __int64 v8; // x1
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_596FAF2 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596FAF2 = 1;
  }
  if ( this->fields.isTabPushDefaultActive )
  {
    pushTabSprite = (UnityEngine_Object_o *)this->fields.pushTabSprite;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, value, isInit);
    if ( !UnityEngine_Object__op_Equality(pushTabSprite, 0, 0) )
    {
      gameObject = (UnityEngine_Component_o *)this->fields.pushTabSprite;
      if ( !gameObject
        || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0)) == 0
        || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, value, 0),
            (gameObject = (UnityEngine_Component_o *)this->fields.pushTabButton) == 0)
        || (((void (__fastcall *)(UnityEngine_Component_o *, bool, const char *))gameObject->klass[1]._1.name)(
              gameObject,
              value,
              gameObject->klass[1]._1.namespaze),
            (gameObject = (UnityEngine_Component_o *)this->fields.pushTabButton) == 0)
        || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)gameObject, value, 0),
            (gameObject = (UnityEngine_Component_o *)this->fields.pushTabButton) == 0) )
      {
        sub_2213CDC(gameObject, v8);
      }
      UICommonButton__SetColliderEnable((UICommonButton_o *)gameObject, value, !isInit, 0);
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
      sub_2213CDC(0, v5);
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
  __int64 v14; // x1
  __int64 v15; // x2
  _BOOL8 v16; // x0
  __int64 v17; // x1
  bool enabled; // w0
  System_String_o *v19; // x1

  if ( (byte_596FAF4 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596FAF4 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, button, sprite);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)button, 0, 0) )
  {
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14, v15);
    v16 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sprite, 0, 0);
    if ( !v16 )
    {
      if ( !button
        || (((void (__fastcall *)(UICommonButton_o *, __int64, const MethodInfo *))button->klass->vtable._5_set_isEnabled.methodPtr)(
              button,
              1,
              button->klass->vtable._5_set_isEnabled.method),
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)button, !modeMatched, 0),
            ((void (__fastcall *)(UICommonButton_o *, _QWORD, bool, const MethodInfo *))button->klass->vtable._14_SetState.methodPtr)(
              button,
              0,
              !isInit,
              button->klass->vtable._14_SetState.method),
            enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)button, 0),
            UICommonButton__SetColliderEnable(button, enabled, !isInit, 0),
            !sprite) )
      {
        sub_2213CDC(v16, v17);
      }
      if ( modeMatched )
        v19 = onName;
      else
        v19 = offName;
      UISprite__set_spriteName(sprite, v19, 0);
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
  CharaGraphManageButtonGroup_o *v7; // x21
  CharaGraphManageButtonGroup_o *v8; // x0
  const MethodInfo *v9; // x7
  CharaGraphManageButtonGroup_o *v10; // x0
  const MethodInfo *v11; // x7
  CharaGraphManageButtonGroup_o *v12; // x0
  const MethodInfo *v13; // x7

  v7 = this;
  if ( (byte_596FAF3 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_18431/*"button_push_reg"*/);
    sub_2213A60(&StringLiteral_18432/*"button_push_unreg"*/);
    sub_2213A60(&StringLiteral_18417/*"button_allchoice_reg"*/);
    sub_2213A60(&StringLiteral_18420/*"button_alllock_unreg"*/);
    sub_2213A60(&StringLiteral_18419/*"button_alllock_reg"*/);
    this = (CharaGraphManageButtonGroup_o *)sub_2213A60(&StringLiteral_18418/*"button_allchoice_unreg"*/);
    byte_596FAF3 = 1;
  }
  CharaGraphManageButtonGroup__SetupButton(
    this,
    v7->fields.mainTabButton,
    v7->fields.mainTabSprite,
    selectedModeKind == 0,
    v7->fields._MainButtonOnSpriteName_k__BackingField,
    v7->fields._MainButtonOffSpriteName_k__BackingField,
    isInit,
    v4);
  CharaGraphManageButtonGroup__SetupButton(
    v8,
    v7->fields.lockTabButton,
    v7->fields.lockTabSprite,
    selectedModeKind == 2,
    (System_String_o *)StringLiteral_18419/*"button_alllock_reg"*/,
    (System_String_o *)StringLiteral_18420/*"button_alllock_unreg"*/,
    isInit,
    v9);
  CharaGraphManageButtonGroup__SetupButton(
    v10,
    v7->fields.choiceTabButton,
    v7->fields.choiceTabSprite,
    selectedModeKind == 3,
    (System_String_o *)StringLiteral_18417/*"button_allchoice_reg"*/,
    (System_String_o *)StringLiteral_18418/*"button_allchoice_unreg"*/,
    isInit,
    v11);
  CharaGraphManageButtonGroup__SetupButton(
    v12,
    v7->fields.pushTabButton,
    v7->fields.pushTabSprite,
    selectedModeKind == 4,
    (System_String_o *)StringLiteral_18431/*"button_push_reg"*/,
    (System_String_o *)StringLiteral_18432/*"button_push_unreg"*/,
    isInit,
    v13);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._MainButtonOffSpriteName_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._MainButtonOffSpriteName_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._MainButtonOnSpriteName_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._MainButtonOnSpriteName_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._OnClickScaleChange_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._OnClickScaleChange_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._OnClickTabChoice_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._OnClickTabChoice_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._OnClickTabLock_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._OnClickTabLock_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._OnClickTabMain_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._OnClickTabMain_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._OnClickTabPush_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._OnClickTabPush_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}