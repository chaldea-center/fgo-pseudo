void __fastcall SupportSelectEditMenu___ctor(SupportSelectEditMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4A57AF1 & 1) == 0 )
  {
    sub_1B885B0(&BaseDialog_TypeInfo);
    byte_4A57AF1 = 1;
  }
  this->fields.currentState = 2;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall SupportSelectEditMenu__Close(SupportSelectEditMenu_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_4A57AE8 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SupportSelectEditMenu_OnFinishedClose__);
    byte_4A57AE8 = 1;
  }
  this->fields.currentState = 2;
  v3 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_SupportSelectEditMenu_OnFinishedClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v3, 0LL);
}


void __fastcall SupportSelectEditMenu__OnClickCancel(SupportSelectEditMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4A57AEF & 1) == 0 )
  {
    sub_1B885B0(&Method_SupportSelectEditMenu_OnClickCancel__);
    byte_4A57AEF = 1;
  }
  if ( this->fields.currentState == 1 )
  {
    v3 = Method_SupportSelectEditMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_SupportSelectEditMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_SupportSelectEditMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
    SupportSelectEditMenu__Close(this, v5);
  }
}


void __fastcall SupportSelectEditMenu__OnClickChangeName(SupportSelectEditMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct SupportSelectEditMenu_OnClickButtonEvent_o *onClickButton; // x8

  if ( (byte_4A57AEE & 1) == 0 )
  {
    sub_1B885B0(&Method_SupportSelectEditMenu_OnClickChangeName__);
    byte_4A57AEE = 1;
  }
  if ( this->fields.currentState == 1 )
  {
    v3 = Method_SupportSelectEditMenu_OnClickChangeName__;
    if ( (*((_BYTE *)Method_SupportSelectEditMenu_OnClickChangeName__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_SupportSelectEditMenu_OnClickChangeName__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    onClickButton = this->fields.onClickButton;
    if ( onClickButton )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))onClickButton->fields.m_target)(
        onClickButton->fields.original_method_info,
        4LL,
        *(_QWORD *)&onClickButton->fields.extra_arg);
  }
}


void __fastcall SupportSelectEditMenu__OnClickCopy(SupportSelectEditMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct SupportSelectEditMenu_OnClickButtonEvent_o *onClickButton; // x8

  if ( (byte_4A57AEA & 1) == 0 )
  {
    sub_1B885B0(&Method_SupportSelectEditMenu_OnClickCopy__);
    byte_4A57AEA = 1;
  }
  if ( this->fields.currentState == 1 )
  {
    v3 = Method_SupportSelectEditMenu_OnClickCopy__;
    if ( (*((_BYTE *)Method_SupportSelectEditMenu_OnClickCopy__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_SupportSelectEditMenu_OnClickCopy__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    onClickButton = this->fields.onClickButton;
    if ( onClickButton )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))onClickButton->fields.m_target)(
        onClickButton->fields.original_method_info,
        0LL,
        *(_QWORD *)&onClickButton->fields.extra_arg);
  }
}


void __fastcall SupportSelectEditMenu__OnClickInitAll(SupportSelectEditMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct SupportSelectEditMenu_OnClickButtonEvent_o *onClickButton; // x8

  if ( (byte_4A57AEC & 1) == 0 )
  {
    sub_1B885B0(&Method_SupportSelectEditMenu_OnClickInitAll__);
    byte_4A57AEC = 1;
  }
  if ( this->fields.currentState == 1 )
  {
    v3 = Method_SupportSelectEditMenu_OnClickInitAll__;
    if ( (*((_BYTE *)Method_SupportSelectEditMenu_OnClickInitAll__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_SupportSelectEditMenu_OnClickInitAll__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    onClickButton = this->fields.onClickButton;
    if ( onClickButton )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))onClickButton->fields.m_target)(
        onClickButton->fields.original_method_info,
        2LL,
        *(_QWORD *)&onClickButton->fields.extra_arg);
  }
}


void __fastcall SupportSelectEditMenu__OnClickRemoveAll(SupportSelectEditMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct SupportSelectEditMenu_OnClickButtonEvent_o *onClickButton; // x8

  if ( (byte_4A57AEB & 1) == 0 )
  {
    sub_1B885B0(&Method_SupportSelectEditMenu_OnClickRemoveAll__);
    byte_4A57AEB = 1;
  }
  if ( this->fields.currentState == 1 )
  {
    v3 = Method_SupportSelectEditMenu_OnClickRemoveAll__;
    if ( (*((_BYTE *)Method_SupportSelectEditMenu_OnClickRemoveAll__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_SupportSelectEditMenu_OnClickRemoveAll__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    onClickButton = this->fields.onClickButton;
    if ( onClickButton )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))onClickButton->fields.m_target)(
        onClickButton->fields.original_method_info,
        1LL,
        *(_QWORD *)&onClickButton->fields.extra_arg);
  }
}


void __fastcall SupportSelectEditMenu__OnClickRemoveEquip(SupportSelectEditMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct SupportSelectEditMenu_OnClickButtonEvent_o *onClickButton; // x8

  if ( (byte_4A57AED & 1) == 0 )
  {
    sub_1B885B0(&Method_SupportSelectEditMenu_OnClickRemoveEquip__);
    byte_4A57AED = 1;
  }
  if ( this->fields.currentState == 1 )
  {
    v3 = Method_SupportSelectEditMenu_OnClickRemoveEquip__;
    if ( (*((_BYTE *)Method_SupportSelectEditMenu_OnClickRemoveEquip__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_SupportSelectEditMenu_OnClickRemoveEquip__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    onClickButton = this->fields.onClickButton;
    if ( onClickButton )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))onClickButton->fields.m_target)(
        onClickButton->fields.original_method_info,
        3LL,
        *(_QWORD *)&onClickButton->fields.extra_arg);
  }
}


void __fastcall SupportSelectEditMenu__OnFinishedClose(SupportSelectEditMenu_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3

  this->fields.onClickButton = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.onClickButton, 0, v2, v3);
}


void __fastcall SupportSelectEditMenu__OnFinishedOpen(SupportSelectEditMenu_o *this, const MethodInfo *method)
{
  this->fields.currentState = 1;
}


void __fastcall SupportSelectEditMenu__Open(
        SupportSelectEditMenu_o *this,
        SupportServantData_o *deckData,
        bool isEditting,
        SupportSelectEditMenu_OnClickButtonEvent_o *onClickButton,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v10; // x1
  UILabel_o *titleLabel; // x22
  UILabel_o *supportNameLabel; // x22
  System_String_o *v13; // x0
  UILabel_o *messageLabel; // x22
  SupportSelectEditMenu_o *v15; // x0
  const MethodInfo *v16; // x3
  struct UICommonButton_o *removeAllButton; // x8
  __int64 v18; // x1
  SupportSelectEditMenu_o *v19; // x0
  const MethodInfo *v20; // x3
  bool IsEmpty; // w0
  SupportSelectEditMenu_o *v22; // x0
  const MethodInfo *v23; // x3
  struct UICommonButton_o *removeEquipButton; // x8
  __int64 v25; // x1
  SupportSelectEditMenu_o *v26; // x0
  const MethodInfo *v27; // x3
  SupportSelectEditMenu_o *v28; // x0
  const MethodInfo *v29; // x3
  SupportSelectEditMenu_o *v30; // x0
  const MethodInfo *v31; // x3
  System_Action_o *v32; // x20

  if ( (byte_4A57AE7 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SupportSelectEditMenu_OnFinishedOpen__);
    sub_1B885B0(&StringLiteral_12442/*"SUPPORT_SELECT_EDIT_MENU_BUTTON_REMOVE_EQUIP"*/);
    sub_1B885B0(&StringLiteral_12439/*"SUPPORT_SELECT_EDIT_MENU_BUTTON_COPY"*/);
    sub_1B885B0(&StringLiteral_12440/*"SUPPORT_SELECT_EDIT_MENU_BUTTON_INIT_ALL"*/);
    sub_1B885B0(&StringLiteral_12445/*"SUPPORT_SELECT_EDIT_MENU_TITLE"*/);
    sub_1B885B0(&StringLiteral_12443/*"SUPPORT_SELECT_EDIT_MENU_DECK_NAME"*/);
    sub_1B885B0(&StringLiteral_12441/*"SUPPORT_SELECT_EDIT_MENU_BUTTON_REMOVE_ALL"*/);
    sub_1B885B0(&StringLiteral_12438/*"SUPPORT_SELECT_EDIT_MENU_BUTTON_CHANGE_DECK_NAME"*/);
    sub_1B885B0(&StringLiteral_12437/*"SUPPORT_SELECT_EDIT_MENU_BUTTON_CANCEL"*/);
    sub_1B885B0(&StringLiteral_12444/*"SUPPORT_SELECT_EDIT_MENU_MESSAGE"*/);
    byte_4A57AE7 = 1;
  }
  if ( deckData && this->fields.currentState == 2 )
  {
    this->fields.onClickButton = onClickButton;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&this->fields.onClickButton,
      (int32_t)onClickButton,
      isEditting,
      (int32_t)onClickButton);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_32;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    titleLabel = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12445/*"SUPPORT_SELECT_EDIT_MENU_TITLE"*/, 0LL);
    if ( !titleLabel )
      goto LABEL_32;
    UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
    supportNameLabel = this->fields.supportNameLabel;
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_12443/*"SUPPORT_SELECT_EDIT_MENU_DECK_NAME"*/, 0LL);
    gameObject = (UnityEngine_GameObject_o *)System_String__Format(
                                               v13,
                                               (Il2CppObject *)deckData->fields._deckName_k__BackingField,
                                               0LL);
    if ( !supportNameLabel )
      goto LABEL_32;
    UILabel__set_text(supportNameLabel, (System_String_o *)gameObject, 0LL);
    messageLabel = this->fields.messageLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12444/*"SUPPORT_SELECT_EDIT_MENU_MESSAGE"*/, 0LL);
    if ( !messageLabel )
      goto LABEL_32;
    UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0LL);
    if ( isEditting || SupportServantData__IsEmpty(deckData, 0LL) )
      v10 = 3LL;
    else
      v10 = 0LL;
    gameObject = (UnityEngine_GameObject_o *)this->fields.copyButton;
    if ( !gameObject )
      goto LABEL_32;
    v15 = (SupportSelectEditMenu_o *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *, __int64, __int64, Il2CppRuntimeInterfaceOffsetPair *))gameObject->klass[1]._1.implementedInterfaces)(
                                       gameObject,
                                       v10,
                                       1LL,
                                       gameObject->klass[1]._1.interfaceOffsets);
    SupportSelectEditMenu__SetButtonText(v15, this->fields.copyButton, (System_String_o *)StringLiteral_12439/*"SUPPORT_SELECT_EDIT_MENU_BUTTON_COPY"*/, v16);
    gameObject = (UnityEngine_GameObject_o *)SupportServantData__IsEmpty(deckData, 0LL);
    removeAllButton = this->fields.removeAllButton;
    if ( !removeAllButton )
      goto LABEL_32;
    if ( ((unsigned __int8)gameObject & 1) != 0 )
      v18 = 3LL;
    else
      v18 = 0LL;
    v19 = (SupportSelectEditMenu_o *)((__int64 (__fastcall *)(struct UICommonButton_o *, __int64, __int64, Il2CppMethodPointer))removeAllButton->klass->vtable._14_SetState.method)(
                                       this->fields.removeAllButton,
                                       v18,
                                       1LL,
                                       removeAllButton->klass->vtable._15_OnPress.methodPtr);
    SupportSelectEditMenu__SetButtonText(v19, this->fields.removeAllButton, (System_String_o *)StringLiteral_12441/*"SUPPORT_SELECT_EDIT_MENU_BUTTON_REMOVE_ALL"*/, v20);
    IsEmpty = SupportServantData__IsEmpty(deckData, 0LL);
    v10 = 0LL;
    if ( IsEmpty )
    {
      if ( SupportServantData__IsDefaultDeckName(deckData, 0LL) )
        v10 = 3LL;
      else
        v10 = 0LL;
    }
    gameObject = (UnityEngine_GameObject_o *)this->fields.initAllButton;
    if ( !gameObject )
      goto LABEL_32;
    v22 = (SupportSelectEditMenu_o *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *, __int64, __int64, Il2CppRuntimeInterfaceOffsetPair *))gameObject->klass[1]._1.implementedInterfaces)(
                                       gameObject,
                                       v10,
                                       1LL,
                                       gameObject->klass[1]._1.interfaceOffsets);
    SupportSelectEditMenu__SetButtonText(v22, this->fields.initAllButton, (System_String_o *)StringLiteral_12440/*"SUPPORT_SELECT_EDIT_MENU_BUTTON_INIT_ALL"*/, v23);
    gameObject = (UnityEngine_GameObject_o *)SupportServantData__getEquipSum(deckData, 0LL);
    removeEquipButton = this->fields.removeEquipButton;
    if ( !removeEquipButton )
      goto LABEL_32;
    v25 = (_DWORD)gameObject ? 0LL : 3LL;
    v26 = (SupportSelectEditMenu_o *)((__int64 (__fastcall *)(struct UICommonButton_o *, __int64, __int64, Il2CppMethodPointer))removeEquipButton->klass->vtable._14_SetState.method)(
                                       this->fields.removeEquipButton,
                                       v25,
                                       1LL,
                                       removeEquipButton->klass->vtable._15_OnPress.methodPtr);
    SupportSelectEditMenu__SetButtonText(
      v26,
      this->fields.removeEquipButton,
      (System_String_o *)StringLiteral_12442/*"SUPPORT_SELECT_EDIT_MENU_BUTTON_REMOVE_EQUIP"*/,
      v27);
    gameObject = (UnityEngine_GameObject_o *)this->fields.changeNameButton;
    if ( !gameObject )
LABEL_32:
      sub_1B8880C(gameObject, v10);
    v28 = (SupportSelectEditMenu_o *)((__int64 (*)(void))gameObject->klass[1]._1.implementedInterfaces)();
    SupportSelectEditMenu__SetButtonText(
      v28,
      this->fields.changeNameButton,
      (System_String_o *)StringLiteral_12438/*"SUPPORT_SELECT_EDIT_MENU_BUTTON_CHANGE_DECK_NAME"*/,
      v29);
    SupportSelectEditMenu__SetButtonText(v30, this->fields.cancelButton, (System_String_o *)StringLiteral_12437/*"SUPPORT_SELECT_EDIT_MENU_BUTTON_CANCEL"*/, v31);
    this->fields.currentState = 0;
    v32 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v32, (Il2CppObject *)this, Method_SupportSelectEditMenu_OnFinishedOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v32, 0, 0LL);
  }
}


void __fastcall SupportSelectEditMenu__SetButtonText(
        SupportSelectEditMenu_o *this,
        UICommonButton_o *target,
        System_String_o *localizationKey,
        const MethodInfo *method)
{
  Il2CppObject *ComponentInChildren_object__48719376; // x20

  if ( (byte_4A57AE9 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponentInChildren_UILabel___);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    this = (SupportSelectEditMenu_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57AE9 = 1;
  }
  if ( !target )
    goto LABEL_12;
  ComponentInChildren_object__48719376 = UnityEngine_Component__GetComponentInChildren_object__48719376(
                                           (UnityEngine_Component_o *)target,
                                           (const MethodInfo_2E76610 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)ComponentInChildren_object__48719376, 0LL, 0LL) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (SupportSelectEditMenu_o *)LocalizationManager__Get(localizationKey, 0LL);
    if ( ComponentInChildren_object__48719376 )
    {
      UILabel__set_text((UILabel_o *)ComponentInChildren_object__48719376, (System_String_o *)this, 0LL);
      return;
    }
LABEL_12:
    sub_1B8880C(this, target);
  }
}


bool __fastcall SupportSelectEditMenu__get_IsEnableInput(SupportSelectEditMenu_o *this, const MethodInfo *method)
{
  return this->fields.currentState == 1;
}


UnityEngine_GameObject_o *__fastcall SupportSelectEditMenu__get_closeBtnObject(
        SupportSelectEditMenu_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4A57AF0 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57AF0 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_1B8880C(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectEditMenu_OnClickButtonEvent___ctor(
        SupportSelectEditMenu_OnClickButtonEvent_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_19CB1E0;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19CB198;
}


System_IAsyncResult_o *__fastcall SupportSelectEditMenu_OnClickButtonEvent__BeginInvoke(
        SupportSelectEditMenu_OnClickButtonEvent_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-34h] BYREF

  v10 = result;
  if ( (byte_4A57AF2 & 1) == 0 )
  {
    sub_1B885B0(&SupportSelectEditMenu_ResultKind_TypeInfo);
    byte_4A57AF2 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(SupportSelectEditMenu_ResultKind_TypeInfo, &v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B88564(this, v9, callback, object);
}


void __fastcall SupportSelectEditMenu_OnClickButtonEvent__EndInvoke(
        SupportSelectEditMenu_OnClickButtonEvent_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
}


void __fastcall SupportSelectEditMenu_OnClickButtonEvent__Invoke(
        SupportSelectEditMenu_OnClickButtonEvent_o *this,
        int32_t result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    *(_QWORD *)&this->fields.extra_arg);
}