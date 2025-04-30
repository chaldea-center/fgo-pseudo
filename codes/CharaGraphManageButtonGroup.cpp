void __fastcall CharaGraphManageButtonGroup___ctor(CharaGraphManageButtonGroup_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  int32_t v6; // w1
  int32_t v7; // w1
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4A4D85E & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_17429/*"button_select_reg"*/, method);
    sub_1B863B8(&StringLiteral_17430/*"button_select_unreg"*/, v5);
    byte_4A4D85E = 1;
  }
  v6 = StringLiteral_17429/*"button_select_reg"*/;
  this->fields._MainButtonOnSpriteName_k__BackingField = (struct System_String_o *)StringLiteral_17429/*"button_select_reg"*/;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields._MainButtonOnSpriteName_k__BackingField, v6, v2, v3);
  v7 = StringLiteral_17430/*"button_select_unreg"*/;
  this->fields._MainButtonOffSpriteName_k__BackingField = (struct System_String_o *)StringLiteral_17430/*"button_select_unreg"*/;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields._MainButtonOffSpriteName_k__BackingField, v7, v8, v9);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall CharaGraphManageButtonGroup__AssertionForSerializeField(
        CharaGraphManageButtonGroup_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall CharaGraphManageButtonGroup__Awake(CharaGraphManageButtonGroup_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  UnityEngine_Component_o *pushTabButton; // x0

  ((void (__fastcall *)(CharaGraphManageButtonGroup_o *, void *))this->klass->vtable._4_AssertionForSerializeField.method)(
    this,
    this->klass[1]._1.image);
  if ( !this->fields.initialized )
  {
    pushTabButton = (UnityEngine_Component_o *)this->fields.pushTabButton;
    this->fields.initialized = 1;
    this->fields.isTabPushDefaultActive = CharaGraphManageButtonGroup__IsActive(pushTabButton, v3);
  }
}


void __fastcall CharaGraphManageButtonGroup__ClickScaleChange(
        CharaGraphManageButtonGroup_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields._OnClickScaleChange_k__BackingField, 0LL);
}


void __fastcall CharaGraphManageButtonGroup__ClickTabChoice(
        CharaGraphManageButtonGroup_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields._OnClickTabChoice_k__BackingField, 0LL);
}


void __fastcall CharaGraphManageButtonGroup__ClickTabLock(
        CharaGraphManageButtonGroup_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields._OnClickTabLock_k__BackingField, 0LL);
}


void __fastcall CharaGraphManageButtonGroup__ClickTabMain(
        CharaGraphManageButtonGroup_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields._OnClickTabMain_k__BackingField, 0LL);
}


void __fastcall CharaGraphManageButtonGroup__ClickTabPush(
        CharaGraphManageButtonGroup_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields._OnClickTabPush_k__BackingField, 0LL);
}


void __fastcall CharaGraphManageButtonGroup__Init(CharaGraphManageButtonGroup_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *pushTabButton; // x0

  if ( !this->fields.initialized )
  {
    pushTabButton = (UnityEngine_Component_o *)this->fields.pushTabButton;
    this->fields.initialized = 1;
    this->fields.isTabPushDefaultActive = CharaGraphManageButtonGroup__IsActive(pushTabButton, method);
  }
}


bool __fastcall CharaGraphManageButtonGroup__IsActive(UnityEngine_Component_o *c, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  if ( (byte_4A4D85D & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, method);
    byte_4A4D85D = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)c, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
    return 0;
  if ( !c || (gameObject = UnityEngine_Component__get_gameObject(c, 0LL)) == 0LL )
    sub_1B86614(gameObject, v4);
  return UnityEngine_GameObject__get_activeSelf(gameObject, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaGraphManageButtonGroup__SetPushButtonActive(
        CharaGraphManageButtonGroup_o *this,
        bool value,
        bool isInit,
        const MethodInfo *method)
{
  UnityEngine_Object_o *pushTabSprite; // x22
  __int64 v8; // x1
  UnityEngine_Component_o *gameObject; // x0
  bool v10; // w21

  if ( (byte_4A4D85A & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, value);
    byte_4A4D85A = 1;
  }
  if ( this->fields.isTabPushDefaultActive )
  {
    pushTabSprite = (UnityEngine_Object_o *)this->fields.pushTabSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(pushTabSprite, 0LL, 0LL) )
    {
      gameObject = (UnityEngine_Component_o *)this->fields.pushTabSprite;
      if ( !gameObject )
        goto LABEL_14;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
      if ( !gameObject
        || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, value, 0LL),
            (gameObject = (UnityEngine_Component_o *)this->fields.pushTabButton) == 0LL)
        || (((void (__fastcall *)(UnityEngine_Component_o *, bool, void *))gameObject->klass[1]._1.namespaze)(
              gameObject,
              value,
              gameObject->klass[1]._1.byval_arg.data),
            (gameObject = (UnityEngine_Component_o *)this->fields.pushTabButton) == 0LL)
        || (v10 = value,
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)gameObject, v10, 0LL),
            (gameObject = (UnityEngine_Component_o *)this->fields.pushTabButton) == 0LL) )
      {
LABEL_14:
        sub_1B86614(gameObject, v8);
      }
      UICommonButton__SetColliderEnable((UICommonButton_o *)gameObject, v10, !isInit, 0LL);
    }
  }
}


void __fastcall CharaGraphManageButtonGroup__SetScaleButtonSprite(
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
      sub_1B86614(0LL, v5);
    UISprite__set_spriteName(scaleChangeTabSprite, spriteName, 0LL);
  }
}


void __fastcall CharaGraphManageButtonGroup__SetupButton(
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

  if ( (byte_4A4D85C & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, button);
    byte_4A4D85C = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)button, 0LL, 0LL) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v14 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sprite, 0LL, 0LL);
    if ( !v14 )
    {
      if ( !button
        || (((void (__fastcall *)(UICommonButton_o *, __int64, Il2CppMethodPointer))button->klass->vtable._5_set_isEnabled.method)(
              button,
              1LL,
              button->klass->vtable._6_OnInit.methodPtr),
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)button, !modeMatched, 0LL),
            v16 = !isInit,
            ((void (__fastcall *)(UICommonButton_o *, _QWORD, _BOOL4, Il2CppMethodPointer))button->klass->vtable._14_SetState.method)(
              button,
              0LL,
              v16,
              button->klass->vtable._15_OnPress.methodPtr),
            enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)button, 0LL),
            UICommonButton__SetColliderEnable(button, enabled, v16, 0LL),
            !sprite) )
      {
        sub_1B86614(v14, v15);
      }
      if ( modeMatched )
        v18 = onName;
      else
        v18 = offName;
      UISprite__set_spriteName(sprite, v18, 0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaGraphManageButtonGroup__UpdateDisplay(
        CharaGraphManageButtonGroup_o *this,
        int32_t selectedModeKind,
        bool isInit,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x7
  CharaGraphManageButtonGroup_o *v7; // x20
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  bool v13; // w21
  CharaGraphManageButtonGroup_o *v14; // x0
  const MethodInfo *v15; // x7
  CharaGraphManageButtonGroup_o *v16; // x0
  const MethodInfo *v17; // x7
  CharaGraphManageButtonGroup_o *v18; // x0
  const MethodInfo *v19; // x7

  v7 = this;
  if ( (byte_4A4D85B & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_17427/*"button_push_reg"*/, *(_QWORD *)&selectedModeKind);
    sub_1B863B8(&StringLiteral_17428/*"button_push_unreg"*/, v8);
    sub_1B863B8(&StringLiteral_17413/*"button_allchoice_reg"*/, v9);
    sub_1B863B8(&StringLiteral_17416/*"button_alllock_unreg"*/, v10);
    sub_1B863B8(&StringLiteral_17415/*"button_alllock_reg"*/, v11);
    this = (CharaGraphManageButtonGroup_o *)sub_1B863B8(&StringLiteral_17414/*"button_allchoice_unreg"*/, v12);
    byte_4A4D85B = 1;
  }
  v13 = isInit;
  CharaGraphManageButtonGroup__SetupButton(
    this,
    v7->fields.mainTabButton,
    v7->fields.mainTabSprite,
    selectedModeKind == 0,
    v7->fields._MainButtonOnSpriteName_k__BackingField,
    v7->fields._MainButtonOffSpriteName_k__BackingField,
    v13,
    v4);
  CharaGraphManageButtonGroup__SetupButton(
    v14,
    v7->fields.lockTabButton,
    v7->fields.lockTabSprite,
    selectedModeKind == 2,
    (System_String_o *)StringLiteral_17415/*"button_alllock_reg"*/,
    (System_String_o *)StringLiteral_17416/*"button_alllock_unreg"*/,
    v13,
    v15);
  CharaGraphManageButtonGroup__SetupButton(
    v16,
    v7->fields.choiceTabButton,
    v7->fields.choiceTabSprite,
    selectedModeKind == 3,
    (System_String_o *)StringLiteral_17413/*"button_allchoice_reg"*/,
    (System_String_o *)StringLiteral_17414/*"button_allchoice_unreg"*/,
    v13,
    v17);
  CharaGraphManageButtonGroup__SetupButton(
    v18,
    v7->fields.pushTabButton,
    v7->fields.pushTabSprite,
    selectedModeKind == 4,
    (System_String_o *)StringLiteral_17427/*"button_push_reg"*/,
    (System_String_o *)StringLiteral_17428/*"button_push_unreg"*/,
    v13,
    v19);
}


System_String_o *__fastcall CharaGraphManageButtonGroup__get_MainButtonOffSpriteName(
        CharaGraphManageButtonGroup_o *this,
        const MethodInfo *method)
{
  return this->fields._MainButtonOffSpriteName_k__BackingField;
}


System_String_o *__fastcall CharaGraphManageButtonGroup__get_MainButtonOnSpriteName(
        CharaGraphManageButtonGroup_o *this,
        const MethodInfo *method)
{
  return this->fields._MainButtonOnSpriteName_k__BackingField;
}


System_Action_o *__fastcall CharaGraphManageButtonGroup__get_OnClickScaleChange(
        CharaGraphManageButtonGroup_o *this,
        const MethodInfo *method)
{
  return this->fields._OnClickScaleChange_k__BackingField;
}


System_Action_o *__fastcall CharaGraphManageButtonGroup__get_OnClickTabChoice(
        CharaGraphManageButtonGroup_o *this,
        const MethodInfo *method)
{
  return this->fields._OnClickTabChoice_k__BackingField;
}


System_Action_o *__fastcall CharaGraphManageButtonGroup__get_OnClickTabLock(
        CharaGraphManageButtonGroup_o *this,
        const MethodInfo *method)
{
  return this->fields._OnClickTabLock_k__BackingField;
}


System_Action_o *__fastcall CharaGraphManageButtonGroup__get_OnClickTabMain(
        CharaGraphManageButtonGroup_o *this,
        const MethodInfo *method)
{
  return this->fields._OnClickTabMain_k__BackingField;
}


System_Action_o *__fastcall CharaGraphManageButtonGroup__get_OnClickTabPush(
        CharaGraphManageButtonGroup_o *this,
        const MethodInfo *method)
{
  return this->fields._OnClickTabPush_k__BackingField;
}


void __fastcall CharaGraphManageButtonGroup__set_MainButtonOffSpriteName(
        CharaGraphManageButtonGroup_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._MainButtonOffSpriteName_k__BackingField = value;
  sub_1B8635C(
    (CGThumbnailListItem_o *)&this->fields._MainButtonOffSpriteName_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall CharaGraphManageButtonGroup__set_MainButtonOnSpriteName(
        CharaGraphManageButtonGroup_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._MainButtonOnSpriteName_k__BackingField = value;
  sub_1B8635C(
    (CGThumbnailListItem_o *)&this->fields._MainButtonOnSpriteName_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall CharaGraphManageButtonGroup__set_OnClickScaleChange(
        CharaGraphManageButtonGroup_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._OnClickScaleChange_k__BackingField = value;
  sub_1B8635C(
    (CGThumbnailListItem_o *)&this->fields._OnClickScaleChange_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall CharaGraphManageButtonGroup__set_OnClickTabChoice(
        CharaGraphManageButtonGroup_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._OnClickTabChoice_k__BackingField = value;
  sub_1B8635C(
    (CGThumbnailListItem_o *)&this->fields._OnClickTabChoice_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall CharaGraphManageButtonGroup__set_OnClickTabLock(
        CharaGraphManageButtonGroup_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._OnClickTabLock_k__BackingField = value;
  sub_1B8635C(
    (CGThumbnailListItem_o *)&this->fields._OnClickTabLock_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall CharaGraphManageButtonGroup__set_OnClickTabMain(
        CharaGraphManageButtonGroup_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._OnClickTabMain_k__BackingField = value;
  sub_1B8635C(
    (CGThumbnailListItem_o *)&this->fields._OnClickTabMain_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall CharaGraphManageButtonGroup__set_OnClickTabPush(
        CharaGraphManageButtonGroup_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._OnClickTabPush_k__BackingField = value;
  sub_1B8635C(
    (CGThumbnailListItem_o *)&this->fields._OnClickTabPush_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}