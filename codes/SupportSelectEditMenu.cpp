void __fastcall SupportSelectEditMenu___ctor(SupportSelectEditMenu_o *this, const MethodInfo *method)
{
  if ( (byte_438E03E & 1) == 0 )
  {
    sub_B775C4(&BaseDialog_TypeInfo);
    byte_438E03E = 1;
  }
  this->fields.currentState = 2;
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall SupportSelectEditMenu__Close(SupportSelectEditMenu_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_438E035 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_SupportSelectEditMenu_OnFinishedClose__);
    byte_438E035 = 1;
  }
  this->fields.currentState = 2;
  v3 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_SupportSelectEditMenu_OnFinishedClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v3, 0LL);
}


void __fastcall SupportSelectEditMenu__OnClickCancel(SupportSelectEditMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( (byte_438E03C & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438E03C = 1;
  }
  if ( this->fields.currentState == 1 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    SupportSelectEditMenu__Close(this, v3);
  }
}


void __fastcall SupportSelectEditMenu__OnClickChangeName(SupportSelectEditMenu_o *this, const MethodInfo *method)
{
  SupportSelectEditMenu_OnClickButtonEvent_o *onClickButton; // x0

  if ( (byte_438E03B & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438E03B = 1;
  }
  if ( this->fields.currentState == 1 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    onClickButton = this->fields.onClickButton;
    if ( onClickButton )
      SupportSelectEditMenu_OnClickButtonEvent__Invoke(onClickButton, 4, 0LL);
  }
}


void __fastcall SupportSelectEditMenu__OnClickCopy(SupportSelectEditMenu_o *this, const MethodInfo *method)
{
  SupportSelectEditMenu_OnClickButtonEvent_o *onClickButton; // x0

  if ( (byte_438E037 & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438E037 = 1;
  }
  if ( this->fields.currentState == 1 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    onClickButton = this->fields.onClickButton;
    if ( onClickButton )
      SupportSelectEditMenu_OnClickButtonEvent__Invoke(onClickButton, 0, 0LL);
  }
}


void __fastcall SupportSelectEditMenu__OnClickInitAll(SupportSelectEditMenu_o *this, const MethodInfo *method)
{
  SupportSelectEditMenu_OnClickButtonEvent_o *onClickButton; // x0

  if ( (byte_438E039 & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438E039 = 1;
  }
  if ( this->fields.currentState == 1 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    onClickButton = this->fields.onClickButton;
    if ( onClickButton )
      SupportSelectEditMenu_OnClickButtonEvent__Invoke(onClickButton, 2, 0LL);
  }
}


void __fastcall SupportSelectEditMenu__OnClickRemoveAll(SupportSelectEditMenu_o *this, const MethodInfo *method)
{
  SupportSelectEditMenu_OnClickButtonEvent_o *onClickButton; // x0

  if ( (byte_438E038 & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438E038 = 1;
  }
  if ( this->fields.currentState == 1 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    onClickButton = this->fields.onClickButton;
    if ( onClickButton )
      SupportSelectEditMenu_OnClickButtonEvent__Invoke(onClickButton, 1, 0LL);
  }
}


void __fastcall SupportSelectEditMenu__OnClickRemoveEquip(SupportSelectEditMenu_o *this, const MethodInfo *method)
{
  SupportSelectEditMenu_OnClickButtonEvent_o *onClickButton; // x0

  if ( (byte_438E03A & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438E03A = 1;
  }
  if ( this->fields.currentState == 1 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    onClickButton = this->fields.onClickButton;
    if ( onClickButton )
      SupportSelectEditMenu_OnClickButtonEvent__Invoke(onClickButton, 3, 0LL);
  }
}


void __fastcall SupportSelectEditMenu__OnFinishedClose(SupportSelectEditMenu_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.onClickButton = 0LL;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.onClickButton, 0LL, v2, v3, v4, v5, v6, v7);
}


void __fastcall SupportSelectEditMenu__OnFinishedOpen(SupportSelectEditMenu_o *this, const MethodInfo *method)
{
  this->fields.currentState = 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectEditMenu__Open(
        SupportSelectEditMenu_o *this,
        SupportServantData_o *deckData,
        bool isEditting,
        SupportSelectEditMenu_OnClickButtonEvent_o *onClickButton,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v13; // x1
  UILabel_o *titleLabel; // x22
  UILabel_o *supportNameLabel; // x22
  System_String_o *v16; // x0
  UILabel_o *messageLabel; // x22
  SupportSelectEditMenu_o *v18; // x0
  const MethodInfo *v19; // x3
  struct UICommonButton_o *removeAllButton; // x8
  __int64 v21; // x1
  SupportSelectEditMenu_o *v22; // x0
  const MethodInfo *v23; // x3
  bool IsEmpty; // w0
  SupportSelectEditMenu_o *v25; // x0
  const MethodInfo *v26; // x3
  struct UICommonButton_o *removeEquipButton; // x8
  __int64 v28; // x1
  SupportSelectEditMenu_o *v29; // x0
  const MethodInfo *v30; // x3
  SupportSelectEditMenu_o *v31; // x0
  const MethodInfo *v32; // x3
  SupportSelectEditMenu_o *v33; // x0
  const MethodInfo *v34; // x3
  System_Action_o *v35; // x20

  if ( (byte_438E034 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&Method_SupportSelectEditMenu_OnFinishedOpen__);
    sub_B775C4(&StringLiteral_12768/*"SUPPORT_SELECT_EDIT_MENU_BUTTON_REMOVE_EQUIP"*/);
    sub_B775C4(&StringLiteral_12765/*"SUPPORT_SELECT_EDIT_MENU_BUTTON_COPY"*/);
    sub_B775C4(&StringLiteral_12766/*"SUPPORT_SELECT_EDIT_MENU_BUTTON_INIT_ALL"*/);
    sub_B775C4(&StringLiteral_12771/*"SUPPORT_SELECT_EDIT_MENU_TITLE"*/);
    sub_B775C4(&StringLiteral_12769/*"SUPPORT_SELECT_EDIT_MENU_DECK_NAME"*/);
    sub_B775C4(&StringLiteral_12767/*"SUPPORT_SELECT_EDIT_MENU_BUTTON_REMOVE_ALL"*/);
    sub_B775C4(&StringLiteral_12764/*"SUPPORT_SELECT_EDIT_MENU_BUTTON_CHANGE_DECK_NAME"*/);
    sub_B775C4(&StringLiteral_12763/*"SUPPORT_SELECT_EDIT_MENU_BUTTON_CANCEL"*/);
    sub_B775C4(&StringLiteral_12770/*"SUPPORT_SELECT_EDIT_MENU_MESSAGE"*/);
    byte_438E034 = 1;
  }
  if ( deckData && this->fields.currentState == 2 )
  {
    this->fields.onClickButton = onClickButton;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.onClickButton,
      (System_Int32_array **)onClickButton,
      (System_String_array **)isEditting,
      (System_String_array **)onClickButton,
      (System_Boolean_array **)method,
      v5,
      v6,
      v7);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_33;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    titleLabel = this->fields.titleLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12771/*"SUPPORT_SELECT_EDIT_MENU_TITLE"*/, 0LL);
    if ( !titleLabel )
      goto LABEL_33;
    UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
    supportNameLabel = this->fields.supportNameLabel;
    v16 = LocalizationManager__Get((System_String_o *)StringLiteral_12769/*"SUPPORT_SELECT_EDIT_MENU_DECK_NAME"*/, 0LL);
    gameObject = (UnityEngine_GameObject_o *)System_String__Format(
                                               v16,
                                               (Il2CppObject *)deckData->fields._deckName_k__BackingField,
                                               0LL);
    if ( !supportNameLabel )
      goto LABEL_33;
    UILabel__set_text(supportNameLabel, (System_String_o *)gameObject, 0LL);
    messageLabel = this->fields.messageLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12770/*"SUPPORT_SELECT_EDIT_MENU_MESSAGE"*/, 0LL);
    if ( !messageLabel )
      goto LABEL_33;
    UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0LL);
    if ( isEditting || SupportServantData__IsEmpty(deckData, 0LL) )
      v13 = 3LL;
    else
      v13 = 0LL;
    gameObject = (UnityEngine_GameObject_o *)this->fields.copyButton;
    if ( !gameObject )
      goto LABEL_33;
    v18 = (SupportSelectEditMenu_o *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *, __int64, __int64, Il2CppRuntimeInterfaceOffsetPair *))gameObject->klass[1]._1.implementedInterfaces)(
                                       gameObject,
                                       v13,
                                       1LL,
                                       gameObject->klass[1]._1.interfaceOffsets);
    SupportSelectEditMenu__SetButtonText(v18, this->fields.copyButton, (System_String_o *)StringLiteral_12765/*"SUPPORT_SELECT_EDIT_MENU_BUTTON_COPY"*/, v19);
    gameObject = (UnityEngine_GameObject_o *)SupportServantData__IsEmpty(deckData, 0LL);
    removeAllButton = this->fields.removeAllButton;
    if ( !removeAllButton )
      goto LABEL_33;
    if ( ((unsigned __int8)gameObject & 1) != 0 )
      v21 = 3LL;
    else
      v21 = 0LL;
    v22 = (SupportSelectEditMenu_o *)((__int64 (__fastcall *)(struct UICommonButton_o *, __int64, __int64, Il2CppMethodPointer))removeAllButton->klass->vtable._14_SetState.method)(
                                       this->fields.removeAllButton,
                                       v21,
                                       1LL,
                                       removeAllButton->klass->vtable._15_OnPress.methodPtr);
    SupportSelectEditMenu__SetButtonText(v22, this->fields.removeAllButton, (System_String_o *)StringLiteral_12767/*"SUPPORT_SELECT_EDIT_MENU_BUTTON_REMOVE_ALL"*/, v23);
    IsEmpty = SupportServantData__IsEmpty(deckData, 0LL);
    v13 = 0LL;
    if ( IsEmpty )
    {
      if ( SupportServantData__IsDefaultDeckName(deckData, 0LL) )
        v13 = 3LL;
      else
        v13 = 0LL;
    }
    gameObject = (UnityEngine_GameObject_o *)this->fields.initAllButton;
    if ( !gameObject )
      goto LABEL_33;
    v25 = (SupportSelectEditMenu_o *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *, __int64, __int64, Il2CppRuntimeInterfaceOffsetPair *))gameObject->klass[1]._1.implementedInterfaces)(
                                       gameObject,
                                       v13,
                                       1LL,
                                       gameObject->klass[1]._1.interfaceOffsets);
    SupportSelectEditMenu__SetButtonText(v25, this->fields.initAllButton, (System_String_o *)StringLiteral_12766/*"SUPPORT_SELECT_EDIT_MENU_BUTTON_INIT_ALL"*/, v26);
    gameObject = (UnityEngine_GameObject_o *)SupportServantData__getEquipSum(deckData, 0LL);
    removeEquipButton = this->fields.removeEquipButton;
    if ( !removeEquipButton )
      goto LABEL_33;
    v28 = (_DWORD)gameObject ? 0LL : 3LL;
    v29 = (SupportSelectEditMenu_o *)((__int64 (__fastcall *)(struct UICommonButton_o *, __int64, __int64, Il2CppMethodPointer))removeEquipButton->klass->vtable._14_SetState.method)(
                                       this->fields.removeEquipButton,
                                       v28,
                                       1LL,
                                       removeEquipButton->klass->vtable._15_OnPress.methodPtr);
    SupportSelectEditMenu__SetButtonText(
      v29,
      this->fields.removeEquipButton,
      (System_String_o *)StringLiteral_12768/*"SUPPORT_SELECT_EDIT_MENU_BUTTON_REMOVE_EQUIP"*/,
      v30);
    gameObject = (UnityEngine_GameObject_o *)this->fields.changeNameButton;
    if ( !gameObject )
LABEL_33:
      sub_B7769C(gameObject, v13);
    v31 = (SupportSelectEditMenu_o *)((__int64 (*)(void))gameObject->klass[1]._1.implementedInterfaces)();
    SupportSelectEditMenu__SetButtonText(
      v31,
      this->fields.changeNameButton,
      (System_String_o *)StringLiteral_12764/*"SUPPORT_SELECT_EDIT_MENU_BUTTON_CHANGE_DECK_NAME"*/,
      v32);
    SupportSelectEditMenu__SetButtonText(v33, this->fields.cancelButton, (System_String_o *)StringLiteral_12763/*"SUPPORT_SELECT_EDIT_MENU_BUTTON_CANCEL"*/, v34);
    this->fields.currentState = 0;
    v35 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(v35, (Il2CppObject *)this, Method_SupportSelectEditMenu_OnFinishedOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v35, 0, 0LL);
  }
}


void __fastcall SupportSelectEditMenu__SetButtonText(
        SupportSelectEditMenu_o *this,
        UICommonButton_o *target,
        System_String_o *localizationKey,
        const MethodInfo *method)
{
  UIWidget_o *ComponentInChildren_UIWidget; // x20

  if ( (byte_438E036 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_Component_GetComponentInChildren_UILabel___);
    sub_B775C4(&LocalizationManager_TypeInfo);
    this = (SupportSelectEditMenu_o *)sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438E036 = 1;
  }
  if ( !target )
    goto LABEL_14;
  ComponentInChildren_UIWidget = UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                   (UnityEngine_Component_o *)target,
                                   (const MethodInfo_1C6D75C *)Method_UnityEngine_Component_GetComponentInChildren_UILabel___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)ComponentInChildren_UIWidget, 0LL, 0LL) )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    this = (SupportSelectEditMenu_o *)LocalizationManager__Get(localizationKey, 0LL);
    if ( ComponentInChildren_UIWidget )
    {
      UILabel__set_text((UILabel_o *)ComponentInChildren_UIWidget, (System_String_o *)this, 0LL);
      return;
    }
LABEL_14:
    sub_B7769C(this, target);
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

  if ( (byte_438E03D & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438E03D = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_B7769C(0LL, v4);
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
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B77560(p_method);
}


System_IAsyncResult_o *__fastcall SupportSelectEditMenu_OnClickButtonEvent__BeginInvoke(
        SupportSelectEditMenu_OnClickButtonEvent_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-24h] BYREF

  v10 = result;
  if ( (byte_43886D4 & 1) == 0 )
  {
    sub_B775C4(&SupportSelectEditMenu_ResultKind_TypeInfo);
    byte_43886D4 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(SupportSelectEditMenu_ResultKind_TypeInfo, &v10, callback);
  return (System_IAsyncResult_o *)sub_B77568(this, v9, callback, object);
}


void __fastcall SupportSelectEditMenu_OnClickButtonEvent__EndInvoke(
        SupportSelectEditMenu_OnClickButtonEvent_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7756C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectEditMenu_OnClickButtonEvent__Invoke(
        SupportSelectEditMenu_OnClickButtonEvent_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v5; // x24
  SupportSelectEditMenu_OnClickButtonEvent_o **v6; // x25
  __int64 v7; // x26
  unsigned int v8; // w23
  __int64 class_0; // x0
  __int64 v10; // x8
  unsigned int v11; // w22
  unsigned __int64 v12; // x10
  _DWORD *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  void (__fastcall **v17)(__int64 *, _QWORD, _QWORD); // x0
  SupportSelectEditMenu_OnClickButtonEvent_o *v18; // x8
  __int64 *v19; // x21
  __int64 v20; // x22
  void (__fastcall *v21)(unsigned int *, __int64); // x23
  char v22; // w23
  char v23; // w0
  unsigned int v24; // w23
  __int64 v25; // x8
  __int64 v26; // x1
  __int64 v27; // x2
  unsigned __int64 v28; // x10
  _DWORD *v29; // x11
  unsigned int v30; // [xsp+4h] [xbp-4Ch] BYREF
  SupportSelectEditMenu_OnClickButtonEvent_o *v31; // [xsp+8h] [xbp-48h] BYREF

  v31 = this;
  v30 = result;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v6 = &v31;
    v5 = 1LL;
    goto LABEL_5;
  }
  v5 = *(_QWORD *)(v3 + 24);
  if ( v5 )
  {
    v6 = (SupportSelectEditMenu_OnClickButtonEvent_o **)(v3 + 32);
LABEL_5:
    v7 = 0LL;
    while ( 1 )
    {
      v18 = v6[v7];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(unsigned int *, __int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B77680(*(_QWORD *)&v18->fields.extra_arg, *(_QWORD *)&result);
      if ( (sub_B775F4(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) != 1 )
        goto LABEL_36;
      v21((unsigned int *)v30, v20);
LABEL_38:
      if ( ++v7 == v5 )
        return;
    }
    if ( !v19 )
    {
      v21(&v30 - 4, v20);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B775EC(v20);
      v23 = sub_B779F0(v20);
      if ( (v22 & 1) != 0 )
      {
        v24 = v30;
        if ( (v23 & 1) != 0 )
        {
          v25 = *v19;
          v26 = *(_QWORD *)(v20 + 24);
          v27 = *(unsigned __int16 *)(v20 + 72);
          if ( *(_WORD *)(*v19 + 298) )
          {
            v28 = 0LL;
            v29 = (_DWORD *)(*(_QWORD *)(v25 + 176) + 8LL);
            while ( *((_QWORD *)v29 - 1) != v26 )
            {
              ++v28;
              v29 += 4;
              if ( v28 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_35;
            }
            v16 = v25 + 16LL * (*v29 + (int)v27) + 312;
          }
          else
          {
LABEL_35:
            v16 = sub_B0F4C0(v19, v26, v27);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD))sub_B77674(v15, v20);
        (*v17)(v19, v24, v17);
      }
      else
      {
        v8 = *(unsigned __int16 *)(v20 + 72);
        if ( (v23 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v20);
          v10 = *v19;
          v11 = v30;
          if ( *(_WORD *)(*v19 + 298) )
          {
            v12 = 0LL;
            v13 = (_DWORD *)(*(_QWORD *)(v10 + 176) + 8LL);
            while ( *((_QWORD *)v13 - 1) != class_0 )
            {
              ++v12;
              v13 += 4;
              if ( v12 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_11;
            }
            v14 = v10 + 16LL * (int)(*v13 + v8) + 312;
          }
          else
          {
LABEL_11:
            v14 = sub_B0F4C0(v19, class_0, v8);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))v14)(v19, v11, *(_QWORD *)(v14 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 312))(
            v19,
            v30,
            *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, __int64))v21)(v19, v30, v20);
    goto LABEL_38;
  }
}