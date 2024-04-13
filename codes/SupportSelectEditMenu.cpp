void __fastcall SupportSelectEditMenu___ctor(SupportSelectEditMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EB3B5 & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB3B5 = 1;
  }
  this->fields.currentState = 2;
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall SupportSelectEditMenu__Close(SupportSelectEditMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Action_o *v8; // x20

  if ( (byte_42EB3AC & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SupportSelectEditMenu_OnFinishedClose__, v5, v6, v7);
    byte_42EB3AC = 1;
  }
  this->fields.currentState = 2;
  v8 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_SupportSelectEditMenu_OnFinishedClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v8, 0LL);
}


void __fastcall SupportSelectEditMenu__OnClickCancel(SupportSelectEditMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x1

  if ( (byte_42EB3B3 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB3B3 = 1;
  }
  if ( this->fields.currentState == 1 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    SupportSelectEditMenu__Close(this, v5);
  }
}


void __fastcall SupportSelectEditMenu__OnClickChangeName(SupportSelectEditMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  SupportSelectEditMenu_OnClickButtonEvent_o *onClickButton; // x0

  if ( (byte_42EB3B2 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB3B2 = 1;
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
  int v2; // w2
  __int64 v3; // x3
  SupportSelectEditMenu_OnClickButtonEvent_o *onClickButton; // x0

  if ( (byte_42EB3AE & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB3AE = 1;
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
  int v2; // w2
  __int64 v3; // x3
  SupportSelectEditMenu_OnClickButtonEvent_o *onClickButton; // x0

  if ( (byte_42EB3B0 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB3B0 = 1;
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
  int v2; // w2
  __int64 v3; // x3
  SupportSelectEditMenu_OnClickButtonEvent_o *onClickButton; // x0

  if ( (byte_42EB3AF & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB3AF = 1;
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
  int v2; // w2
  __int64 v3; // x3
  SupportSelectEditMenu_OnClickButtonEvent_o *onClickButton; // x0

  if ( (byte_42EB3B1 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB3B1 = 1;
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
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.onClickButton, 0LL, v2, v3, v4, v5, v6, v7);
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
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v46; // x1
  UILabel_o *titleLabel; // x22
  UILabel_o *supportNameLabel; // x22
  System_String_o *v49; // x0
  UILabel_o *messageLabel; // x22
  SupportSelectEditMenu_o *v51; // x0
  const MethodInfo *v52; // x3
  struct UICommonButton_o *removeAllButton; // x8
  __int64 v54; // x1
  SupportSelectEditMenu_o *v55; // x0
  const MethodInfo *v56; // x3
  bool IsEmpty; // w0
  SupportSelectEditMenu_o *v58; // x0
  const MethodInfo *v59; // x3
  struct UICommonButton_o *removeEquipButton; // x8
  __int64 v61; // x1
  SupportSelectEditMenu_o *v62; // x0
  const MethodInfo *v63; // x3
  SupportSelectEditMenu_o *v64; // x0
  const MethodInfo *v65; // x3
  SupportSelectEditMenu_o *v66; // x0
  const MethodInfo *v67; // x3
  System_Action_o *v68; // x20

  if ( (byte_42EB3AB & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)deckData, isEditting, onClickButton);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_SupportSelectEditMenu_OnFinishedOpen__, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_12683/*"SUPPORT_SELECT_EDIT_MENU_BUTTON_REMOVE_EQUIP"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_12680/*"SUPPORT_SELECT_EDIT_MENU_BUTTON_COPY"*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_12681/*"SUPPORT_SELECT_EDIT_MENU_BUTTON_INIT_ALL"*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_12686/*"SUPPORT_SELECT_EDIT_MENU_TITLE"*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_12684/*"SUPPORT_SELECT_EDIT_MENU_DECK_NAME"*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_12682/*"SUPPORT_SELECT_EDIT_MENU_BUTTON_REMOVE_ALL"*/, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_12679/*"SUPPORT_SELECT_EDIT_MENU_BUTTON_CHANGE_DECK_NAME"*/, v36, v37, v38);
    sub_B5D5C4(&StringLiteral_12678/*"SUPPORT_SELECT_EDIT_MENU_BUTTON_CANCEL"*/, v39, v40, v41);
    sub_B5D5C4(&StringLiteral_12685/*"SUPPORT_SELECT_EDIT_MENU_MESSAGE"*/, v42, v43, v44);
    byte_42EB3AB = 1;
  }
  if ( deckData && this->fields.currentState == 2 )
  {
    this->fields.onClickButton = onClickButton;
    sub_B5D560(
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
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12686/*"SUPPORT_SELECT_EDIT_MENU_TITLE"*/, 0LL);
    if ( !titleLabel )
      goto LABEL_33;
    UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
    supportNameLabel = this->fields.supportNameLabel;
    v49 = LocalizationManager__Get((System_String_o *)StringLiteral_12684/*"SUPPORT_SELECT_EDIT_MENU_DECK_NAME"*/, 0LL);
    gameObject = (UnityEngine_GameObject_o *)System_String__Format(
                                               v49,
                                               (Il2CppObject *)deckData->fields._deckName_k__BackingField,
                                               0LL);
    if ( !supportNameLabel )
      goto LABEL_33;
    UILabel__set_text(supportNameLabel, (System_String_o *)gameObject, 0LL);
    messageLabel = this->fields.messageLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12685/*"SUPPORT_SELECT_EDIT_MENU_MESSAGE"*/, 0LL);
    if ( !messageLabel )
      goto LABEL_33;
    UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0LL);
    if ( isEditting || SupportServantData__IsEmpty(deckData, 0LL) )
      v46 = 3LL;
    else
      v46 = 0LL;
    gameObject = (UnityEngine_GameObject_o *)this->fields.copyButton;
    if ( !gameObject )
      goto LABEL_33;
    v51 = (SupportSelectEditMenu_o *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *, __int64, __int64, Il2CppRuntimeInterfaceOffsetPair *))gameObject->klass[1]._1.implementedInterfaces)(
                                       gameObject,
                                       v46,
                                       1LL,
                                       gameObject->klass[1]._1.interfaceOffsets);
    SupportSelectEditMenu__SetButtonText(v51, this->fields.copyButton, (System_String_o *)StringLiteral_12680/*"SUPPORT_SELECT_EDIT_MENU_BUTTON_COPY"*/, v52);
    gameObject = (UnityEngine_GameObject_o *)SupportServantData__IsEmpty(deckData, 0LL);
    removeAllButton = this->fields.removeAllButton;
    if ( !removeAllButton )
      goto LABEL_33;
    if ( ((unsigned __int8)gameObject & 1) != 0 )
      v54 = 3LL;
    else
      v54 = 0LL;
    v55 = (SupportSelectEditMenu_o *)((__int64 (__fastcall *)(struct UICommonButton_o *, __int64, __int64, Il2CppMethodPointer))removeAllButton->klass->vtable._14_SetState.method)(
                                       this->fields.removeAllButton,
                                       v54,
                                       1LL,
                                       removeAllButton->klass->vtable._15_OnPress.methodPtr);
    SupportSelectEditMenu__SetButtonText(v55, this->fields.removeAllButton, (System_String_o *)StringLiteral_12682/*"SUPPORT_SELECT_EDIT_MENU_BUTTON_REMOVE_ALL"*/, v56);
    IsEmpty = SupportServantData__IsEmpty(deckData, 0LL);
    v46 = 0LL;
    if ( IsEmpty )
    {
      if ( SupportServantData__IsDefaultDeckName(deckData, 0LL) )
        v46 = 3LL;
      else
        v46 = 0LL;
    }
    gameObject = (UnityEngine_GameObject_o *)this->fields.initAllButton;
    if ( !gameObject )
      goto LABEL_33;
    v58 = (SupportSelectEditMenu_o *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *, __int64, __int64, Il2CppRuntimeInterfaceOffsetPair *))gameObject->klass[1]._1.implementedInterfaces)(
                                       gameObject,
                                       v46,
                                       1LL,
                                       gameObject->klass[1]._1.interfaceOffsets);
    SupportSelectEditMenu__SetButtonText(v58, this->fields.initAllButton, (System_String_o *)StringLiteral_12681/*"SUPPORT_SELECT_EDIT_MENU_BUTTON_INIT_ALL"*/, v59);
    gameObject = (UnityEngine_GameObject_o *)SupportServantData__getEquipSum(deckData, 0LL);
    removeEquipButton = this->fields.removeEquipButton;
    if ( !removeEquipButton )
      goto LABEL_33;
    v61 = (_DWORD)gameObject ? 0LL : 3LL;
    v62 = (SupportSelectEditMenu_o *)((__int64 (__fastcall *)(struct UICommonButton_o *, __int64, __int64, Il2CppMethodPointer))removeEquipButton->klass->vtable._14_SetState.method)(
                                       this->fields.removeEquipButton,
                                       v61,
                                       1LL,
                                       removeEquipButton->klass->vtable._15_OnPress.methodPtr);
    SupportSelectEditMenu__SetButtonText(
      v62,
      this->fields.removeEquipButton,
      (System_String_o *)StringLiteral_12683/*"SUPPORT_SELECT_EDIT_MENU_BUTTON_REMOVE_EQUIP"*/,
      v63);
    gameObject = (UnityEngine_GameObject_o *)this->fields.changeNameButton;
    if ( !gameObject )
LABEL_33:
      sub_B5D69C(gameObject, v46);
    v64 = (SupportSelectEditMenu_o *)((__int64 (*)(void))gameObject->klass[1]._1.implementedInterfaces)();
    SupportSelectEditMenu__SetButtonText(
      v64,
      this->fields.changeNameButton,
      (System_String_o *)StringLiteral_12679/*"SUPPORT_SELECT_EDIT_MENU_BUTTON_CHANGE_DECK_NAME"*/,
      v65);
    SupportSelectEditMenu__SetButtonText(v66, this->fields.cancelButton, (System_String_o *)StringLiteral_12678/*"SUPPORT_SELECT_EDIT_MENU_BUTTON_CANCEL"*/, v67);
    this->fields.currentState = 0;
    v68 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v68, (Il2CppObject *)this, Method_SupportSelectEditMenu_OnFinishedOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v68, 0, 0LL);
  }
}


void __fastcall SupportSelectEditMenu__SetButtonText(
        SupportSelectEditMenu_o *this,
        UICommonButton_o *target,
        System_String_o *localizationKey,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  UIWidget_o *ComponentInChildren_UIWidget; // x20

  if ( (byte_42EB3AD & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_Component_GetComponentInChildren_UILabel___,
      (_DWORD)target,
      (_DWORD)localizationKey,
      method);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v6, v7, v8);
    this = (SupportSelectEditMenu_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, v9, v10, v11);
    byte_42EB3AD = 1;
  }
  if ( !target )
    goto LABEL_14;
  ComponentInChildren_UIWidget = UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                   (UnityEngine_Component_o *)target,
                                   (const MethodInfo_1ADE34C *)Method_UnityEngine_Component_GetComponentInChildren_UILabel___);
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
    sub_B5D69C(this, target);
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
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v6; // x1
  UnityEngine_Component_o *v8; // x0

  if ( (byte_42EB3B4 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB3B4 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v8 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v8 )
    sub_B5D69C(0LL, v6);
  return UnityEngine_Component__get_gameObject(v8, 0LL);
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
  sub_B5D560(p_method);
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
  if ( (byte_42E6485 & 1) == 0 )
  {
    sub_B5D5C4(&SupportSelectEditMenu_ResultKind_TypeInfo, result, (_DWORD)callback, object);
    byte_42E6485 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(SupportSelectEditMenu_ResultKind_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_B5D568(this, v9, callback, object);
}


void __fastcall SupportSelectEditMenu_OnClickButtonEvent__EndInvoke(
        SupportSelectEditMenu_OnClickButtonEvent_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
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
  __int64 v10; // x3
  __int64 v11; // x8
  unsigned int v12; // w22
  unsigned __int64 v13; // x10
  _DWORD *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  void (__fastcall **v18)(__int64 *, _QWORD, _QWORD); // x0
  SupportSelectEditMenu_OnClickButtonEvent_o *v19; // x8
  __int64 *v20; // x21
  __int64 v21; // x22
  void (__fastcall *v22)(unsigned int *, __int64); // x23
  char v23; // w23
  char v24; // w0
  __int64 v25; // x3
  unsigned int v26; // w23
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  unsigned int v32; // [xsp+4h] [xbp-4Ch] BYREF
  SupportSelectEditMenu_OnClickButtonEvent_o *v33; // [xsp+8h] [xbp-48h] BYREF

  v33 = this;
  v32 = result;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v6 = &v33;
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
      v19 = v6[v7];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(unsigned int *, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v19->fields.extra_arg, *(_QWORD *)&result, method);
      if ( (sub_B5D5F4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22((unsigned int *)v32, v21);
LABEL_38:
      if ( ++v7 == v5 )
        return;
    }
    if ( !v20 )
    {
      v22(&v32 - 4, v21);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B5D5EC(v21);
      v24 = sub_B5D9F0(v21);
      if ( (v23 & 1) != 0 )
      {
        v26 = v32;
        if ( (v24 & 1) != 0 )
        {
          v27 = *v20;
          v28 = *(_QWORD *)(v21 + 24);
          v29 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v30 = 0LL;
            v31 = (_DWORD *)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *((_QWORD *)v31 - 1) != v28 )
            {
              ++v30;
              v31 += 4;
              if ( v30 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v27 + 16LL * (*v31 + (int)v29) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AF54C0(v20, v28, v29, v25);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD))sub_B5D674(v16, v21);
        (*v18)(v20, v26, v18);
      }
      else
      {
        v8 = *(unsigned __int16 *)(v21 + 72);
        if ( (v24 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v21);
          v11 = *v20;
          v12 = v32;
          if ( *(_WORD *)(*v20 + 298) )
          {
            v13 = 0LL;
            v14 = (_DWORD *)(*(_QWORD *)(v11 + 176) + 8LL);
            while ( *((_QWORD *)v14 - 1) != class_0 )
            {
              ++v13;
              v14 += 4;
              if ( v13 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_11;
            }
            v15 = v11 + 16LL * (int)(*v14 + v8) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AF54C0(v20, class_0, v8, v10);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))v15)(v20, v12, *(_QWORD *)(v15 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 312))(
            v20,
            v32,
            *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, __int64))v22)(v20, v32, v21);
    goto LABEL_38;
  }
}