void __fastcall CharaGraphManageButtonGroup___ctor(CharaGraphManageButtonGroup_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  System_Int32_array **v12; // x1
  System_Int32_array **v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_42E96C2 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_17349/*"button_select_reg"*/, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_17350/*"button_select_unreg"*/, v9, v10, v11);
    byte_42E96C2 = 1;
  }
  v12 = (System_Int32_array **)StringLiteral_17349/*"button_select_reg"*/;
  this->fields._MainButtonOnSpriteName_k__BackingField = (struct System_String_o *)StringLiteral_17349/*"button_select_reg"*/;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._MainButtonOnSpriteName_k__BackingField,
    v12,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v13 = (System_Int32_array **)StringLiteral_17350/*"button_select_unreg"*/;
  this->fields._MainButtonOffSpriteName_k__BackingField = (struct System_String_o *)StringLiteral_17350/*"button_select_unreg"*/;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._MainButtonOffSpriteName_k__BackingField,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
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
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1

  if ( (byte_42E96C1 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E96C1 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)c, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
    return 0;
  if ( !c || (gameObject = UnityEngine_Component__get_gameObject(c, 0LL)) == 0LL )
    sub_B5D69C(gameObject, v6);
  return UnityEngine_GameObject__get_activeSelf(gameObject, 0LL);
}


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

  if ( (byte_42E96BE & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, value, isInit, method);
    byte_42E96BE = 1;
  }
  if ( this->fields.isTabPushDefaultActive )
  {
    pushTabSprite = (UnityEngine_Object_o *)this->fields.pushTabSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality(pushTabSprite, 0LL, 0LL) )
    {
      gameObject = (UnityEngine_Component_o *)this->fields.pushTabSprite;
      if ( !gameObject )
        goto LABEL_15;
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
LABEL_15:
        sub_B5D69C(gameObject, v8);
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
      sub_B5D69C(0LL, v5);
    UISprite__set_spriteName(scaleChangeTabSprite, spriteName, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_42E96C0 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)button, (_DWORD)sprite, modeMatched);
    byte_42E96C0 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)button, 0LL, 0LL) )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
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
        sub_B5D69C(v14, v15);
      }
      if ( modeMatched )
        v18 = onName;
      else
        v18 = offName;
      UISprite__set_spriteName(sprite, v18, 0LL);
    }
  }
}


void __fastcall CharaGraphManageButtonGroup__UpdateDisplay(
        CharaGraphManageButtonGroup_o *this,
        int32_t selectedModeKind,
        bool isInit,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x7
  CharaGraphManageButtonGroup_o *v7; // x20
  int v8; // w1
  char v9; // w2
  __int64 v10; // x3
  int v11; // w1
  char v12; // w2
  __int64 v13; // x3
  int v14; // w1
  char v15; // w2
  __int64 v16; // x3
  int v17; // w1
  char v18; // w2
  __int64 v19; // x3
  int v20; // w1
  char v21; // w2
  __int64 v22; // x3
  bool v23; // w21
  CharaGraphManageButtonGroup_o *v24; // x0
  const MethodInfo *v25; // x7
  CharaGraphManageButtonGroup_o *v26; // x0
  const MethodInfo *v27; // x7
  CharaGraphManageButtonGroup_o *v28; // x0
  const MethodInfo *v29; // x7

  v7 = this;
  if ( (byte_42E96BF & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_17347/*"button_push_reg"*/, selectedModeKind, isInit, method);
    sub_B5D5C4(&StringLiteral_17348/*"button_push_unreg"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_17333/*"button_allchoice_reg"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_17336/*"button_alllock_unreg"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_17335/*"button_alllock_reg"*/, v17, v18, v19);
    this = (CharaGraphManageButtonGroup_o *)sub_B5D5C4(&StringLiteral_17334/*"button_allchoice_unreg"*/, v20, v21, v22);
    byte_42E96BF = 1;
  }
  v23 = isInit;
  CharaGraphManageButtonGroup__SetupButton(
    this,
    v7->fields.mainTabButton,
    v7->fields.mainTabSprite,
    selectedModeKind == 0,
    v7->fields._MainButtonOnSpriteName_k__BackingField,
    v7->fields._MainButtonOffSpriteName_k__BackingField,
    v23,
    v4);
  CharaGraphManageButtonGroup__SetupButton(
    v24,
    v7->fields.lockTabButton,
    v7->fields.lockTabSprite,
    selectedModeKind == 2,
    (System_String_o *)StringLiteral_17335/*"button_alllock_reg"*/,
    (System_String_o *)StringLiteral_17336/*"button_alllock_unreg"*/,
    v23,
    v25);
  CharaGraphManageButtonGroup__SetupButton(
    v26,
    v7->fields.choiceTabButton,
    v7->fields.choiceTabSprite,
    selectedModeKind == 3,
    (System_String_o *)StringLiteral_17333/*"button_allchoice_reg"*/,
    (System_String_o *)StringLiteral_17334/*"button_allchoice_unreg"*/,
    v23,
    v27);
  CharaGraphManageButtonGroup__SetupButton(
    v28,
    v7->fields.pushTabButton,
    v7->fields.pushTabSprite,
    selectedModeKind == 4,
    (System_String_o *)StringLiteral_17347/*"button_push_reg"*/,
    (System_String_o *)StringLiteral_17348/*"button_push_unreg"*/,
    v23,
    v29);
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._MainButtonOffSpriteName_k__BackingField = value;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._MainButtonOffSpriteName_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall CharaGraphManageButtonGroup__set_MainButtonOnSpriteName(
        CharaGraphManageButtonGroup_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._MainButtonOnSpriteName_k__BackingField = value;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._MainButtonOnSpriteName_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall CharaGraphManageButtonGroup__set_OnClickScaleChange(
        CharaGraphManageButtonGroup_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._OnClickScaleChange_k__BackingField = value;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._OnClickScaleChange_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall CharaGraphManageButtonGroup__set_OnClickTabChoice(
        CharaGraphManageButtonGroup_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._OnClickTabChoice_k__BackingField = value;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._OnClickTabChoice_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall CharaGraphManageButtonGroup__set_OnClickTabLock(
        CharaGraphManageButtonGroup_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._OnClickTabLock_k__BackingField = value;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._OnClickTabLock_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall CharaGraphManageButtonGroup__set_OnClickTabMain(
        CharaGraphManageButtonGroup_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._OnClickTabMain_k__BackingField = value;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._OnClickTabMain_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall CharaGraphManageButtonGroup__set_OnClickTabPush(
        CharaGraphManageButtonGroup_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._OnClickTabPush_k__BackingField = value;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._OnClickTabPush_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}