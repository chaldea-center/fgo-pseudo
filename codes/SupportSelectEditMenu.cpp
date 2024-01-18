void __fastcall SupportSelectEditMenu___ctor(SupportSelectEditMenu_o *this, const MethodInfo *method)
{
  if ( (byte_418AEA8 & 1) == 0 )
  {
    sub_B2C35C(&BaseDialog_TypeInfo, method);
    byte_418AEA8 = 1;
  }
  this->fields.currentState = 2;
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall SupportSelectEditMenu__Close(SupportSelectEditMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x20

  if ( (byte_418AE9F & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_SupportSelectEditMenu_OnFinishedClose__, v3);
    byte_418AE9F = 1;
  }
  this->fields.currentState = 2;
  v4 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_SupportSelectEditMenu_OnFinishedClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v4, 0LL);
}


void __fastcall SupportSelectEditMenu__OnClickCancel(SupportSelectEditMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( (byte_418AEA6 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418AEA6 = 1;
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

  if ( (byte_418AEA5 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418AEA5 = 1;
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

  if ( (byte_418AEA1 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418AEA1 = 1;
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

  if ( (byte_418AEA3 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418AEA3 = 1;
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

  if ( (byte_418AEA2 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418AEA2 = 1;
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

  if ( (byte_418AEA4 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418AEA4 = 1;
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
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.onClickButton, 0LL, v2, v3, v4, v5, v6, v7);
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
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v24; // x1
  UILabel_o *titleLabel; // x22
  UILabel_o *supportNameLabel; // x22
  System_String_o *v27; // x0
  UILabel_o *messageLabel; // x22
  SupportSelectEditMenu_o *v29; // x0
  const MethodInfo *v30; // x3
  struct UICommonButton_o *removeAllButton; // x8
  __int64 v32; // x1
  SupportSelectEditMenu_o *v33; // x0
  const MethodInfo *v34; // x3
  bool IsEmpty; // w0
  SupportSelectEditMenu_o *v36; // x0
  const MethodInfo *v37; // x3
  struct UICommonButton_o *removeEquipButton; // x8
  __int64 v39; // x1
  SupportSelectEditMenu_o *v40; // x0
  const MethodInfo *v41; // x3
  SupportSelectEditMenu_o *v42; // x0
  const MethodInfo *v43; // x3
  SupportSelectEditMenu_o *v44; // x0
  const MethodInfo *v45; // x3
  System_Action_o *v46; // x20

  if ( (byte_418AE9E & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, deckData);
    sub_B2C35C(&LocalizationManager_TypeInfo, v12);
    sub_B2C35C(&Method_SupportSelectEditMenu_OnFinishedOpen__, v13);
    sub_B2C35C(&StringLiteral_12535/*"SUPPORT_SELECT_EDIT_MENU_BUTTON_REMOVE_EQUIP"*/, v14);
    sub_B2C35C(&StringLiteral_12532/*"SUPPORT_SELECT_EDIT_MENU_BUTTON_COPY"*/, v15);
    sub_B2C35C(&StringLiteral_12533/*"SUPPORT_SELECT_EDIT_MENU_BUTTON_INIT_ALL"*/, v16);
    sub_B2C35C(&StringLiteral_12538/*"SUPPORT_SELECT_EDIT_MENU_TITLE"*/, v17);
    sub_B2C35C(&StringLiteral_12536/*"SUPPORT_SELECT_EDIT_MENU_DECK_NAME"*/, v18);
    sub_B2C35C(&StringLiteral_12534/*"SUPPORT_SELECT_EDIT_MENU_BUTTON_REMOVE_ALL"*/, v19);
    sub_B2C35C(&StringLiteral_12531/*"SUPPORT_SELECT_EDIT_MENU_BUTTON_CHANGE_DECK_NAME"*/, v20);
    sub_B2C35C(&StringLiteral_12530/*"SUPPORT_SELECT_EDIT_MENU_BUTTON_CANCEL"*/, v21);
    sub_B2C35C(&StringLiteral_12537/*"SUPPORT_SELECT_EDIT_MENU_MESSAGE"*/, v22);
    byte_418AE9E = 1;
  }
  if ( deckData && this->fields.currentState == 2 )
  {
    this->fields.onClickButton = onClickButton;
    sub_B2C2F8(
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
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12538/*"SUPPORT_SELECT_EDIT_MENU_TITLE"*/, 0LL);
    if ( !titleLabel )
      goto LABEL_33;
    UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
    supportNameLabel = this->fields.supportNameLabel;
    v27 = LocalizationManager__Get((System_String_o *)StringLiteral_12536/*"SUPPORT_SELECT_EDIT_MENU_DECK_NAME"*/, 0LL);
    gameObject = (UnityEngine_GameObject_o *)System_String__Format(
                                               v27,
                                               (Il2CppObject *)deckData->fields._deckName_k__BackingField,
                                               0LL);
    if ( !supportNameLabel )
      goto LABEL_33;
    UILabel__set_text(supportNameLabel, (System_String_o *)gameObject, 0LL);
    messageLabel = this->fields.messageLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12537/*"SUPPORT_SELECT_EDIT_MENU_MESSAGE"*/, 0LL);
    if ( !messageLabel )
      goto LABEL_33;
    UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0LL);
    if ( isEditting || SupportServantData__IsEmpty(deckData, 0LL) )
      v24 = 3LL;
    else
      v24 = 0LL;
    gameObject = (UnityEngine_GameObject_o *)this->fields.copyButton;
    if ( !gameObject )
      goto LABEL_33;
    v29 = (SupportSelectEditMenu_o *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *, __int64, __int64, Il2CppRuntimeInterfaceOffsetPair *))gameObject->klass[1]._1.implementedInterfaces)(
                                       gameObject,
                                       v24,
                                       1LL,
                                       gameObject->klass[1]._1.interfaceOffsets);
    SupportSelectEditMenu__SetButtonText(v29, this->fields.copyButton, (System_String_o *)StringLiteral_12532/*"SUPPORT_SELECT_EDIT_MENU_BUTTON_COPY"*/, v30);
    gameObject = (UnityEngine_GameObject_o *)SupportServantData__IsEmpty(deckData, 0LL);
    removeAllButton = this->fields.removeAllButton;
    if ( !removeAllButton )
      goto LABEL_33;
    if ( ((unsigned __int8)gameObject & 1) != 0 )
      v32 = 3LL;
    else
      v32 = 0LL;
    v33 = (SupportSelectEditMenu_o *)((__int64 (__fastcall *)(struct UICommonButton_o *, __int64, __int64, Il2CppMethodPointer))removeAllButton->klass->vtable._14_SetState.method)(
                                       this->fields.removeAllButton,
                                       v32,
                                       1LL,
                                       removeAllButton->klass->vtable._15_OnPress.methodPtr);
    SupportSelectEditMenu__SetButtonText(v33, this->fields.removeAllButton, (System_String_o *)StringLiteral_12534/*"SUPPORT_SELECT_EDIT_MENU_BUTTON_REMOVE_ALL"*/, v34);
    IsEmpty = SupportServantData__IsEmpty(deckData, 0LL);
    v24 = 0LL;
    if ( IsEmpty )
    {
      if ( SupportServantData__IsDefaultDeckName(deckData, 0LL) )
        v24 = 3LL;
      else
        v24 = 0LL;
    }
    gameObject = (UnityEngine_GameObject_o *)this->fields.initAllButton;
    if ( !gameObject )
      goto LABEL_33;
    v36 = (SupportSelectEditMenu_o *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *, __int64, __int64, Il2CppRuntimeInterfaceOffsetPair *))gameObject->klass[1]._1.implementedInterfaces)(
                                       gameObject,
                                       v24,
                                       1LL,
                                       gameObject->klass[1]._1.interfaceOffsets);
    SupportSelectEditMenu__SetButtonText(v36, this->fields.initAllButton, (System_String_o *)StringLiteral_12533/*"SUPPORT_SELECT_EDIT_MENU_BUTTON_INIT_ALL"*/, v37);
    gameObject = (UnityEngine_GameObject_o *)SupportServantData__getEquipSum(deckData, 0LL);
    removeEquipButton = this->fields.removeEquipButton;
    if ( !removeEquipButton )
      goto LABEL_33;
    v39 = (_DWORD)gameObject ? 0LL : 3LL;
    v40 = (SupportSelectEditMenu_o *)((__int64 (__fastcall *)(struct UICommonButton_o *, __int64, __int64, Il2CppMethodPointer))removeEquipButton->klass->vtable._14_SetState.method)(
                                       this->fields.removeEquipButton,
                                       v39,
                                       1LL,
                                       removeEquipButton->klass->vtable._15_OnPress.methodPtr);
    SupportSelectEditMenu__SetButtonText(
      v40,
      this->fields.removeEquipButton,
      (System_String_o *)StringLiteral_12535/*"SUPPORT_SELECT_EDIT_MENU_BUTTON_REMOVE_EQUIP"*/,
      v41);
    gameObject = (UnityEngine_GameObject_o *)this->fields.changeNameButton;
    if ( !gameObject )
LABEL_33:
      sub_B2C434(gameObject, v24);
    v42 = (SupportSelectEditMenu_o *)((__int64 (*)(void))gameObject->klass[1]._1.implementedInterfaces)();
    SupportSelectEditMenu__SetButtonText(
      v42,
      this->fields.changeNameButton,
      (System_String_o *)StringLiteral_12531/*"SUPPORT_SELECT_EDIT_MENU_BUTTON_CHANGE_DECK_NAME"*/,
      v43);
    SupportSelectEditMenu__SetButtonText(v44, this->fields.cancelButton, (System_String_o *)StringLiteral_12530/*"SUPPORT_SELECT_EDIT_MENU_BUTTON_CANCEL"*/, v45);
    this->fields.currentState = 0;
    v46 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v46, (Il2CppObject *)this, Method_SupportSelectEditMenu_OnFinishedOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v46, 0, 0LL);
  }
}


void __fastcall SupportSelectEditMenu__SetButtonText(
        SupportSelectEditMenu_o *this,
        UICommonButton_o *target,
        System_String_o *localizationKey,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  UIWidget_o *ComponentInChildren_UIWidget; // x20

  if ( (byte_418AEA0 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponentInChildren_UILabel___, target);
    sub_B2C35C(&LocalizationManager_TypeInfo, v6);
    this = (SupportSelectEditMenu_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    byte_418AEA0 = 1;
  }
  if ( !target )
    goto LABEL_14;
  ComponentInChildren_UIWidget = UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                   (UnityEngine_Component_o *)target,
                                   (const MethodInfo_172DC3C *)Method_UnityEngine_Component_GetComponentInChildren_UILabel___);
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
    sub_B2C434(this, target);
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

  if ( (byte_418AEA7 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418AEA7 = 1;
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
    sub_B2C434(0LL, v4);
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
  sub_B2C2F8(p_method, object);
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_41847CF & 1) == 0 )
  {
    sub_B2C35C(&SupportSelectEditMenu_ResultKind_TypeInfo, *(_QWORD *)&result);
    byte_41847CF = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(SupportSelectEditMenu_ResultKind_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_B2C300(this, v9, callback, object);
}


void __fastcall SupportSelectEditMenu_OnClickButtonEvent__EndInvoke(
        SupportSelectEditMenu_OnClickButtonEvent_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectEditMenu_OnClickButtonEvent__Invoke(
        SupportSelectEditMenu_OnClickButtonEvent_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v6; // x24
  SupportSelectEditMenu_OnClickButtonEvent_o **v7; // x25
  __int64 v8; // x26
  unsigned int v9; // w23
  __int64 class_0; // x0
  __int64 v11; // x3
  __int64 v12; // x8
  unsigned int v13; // w22
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, _QWORD, _QWORD); // x0
  SupportSelectEditMenu_OnClickButtonEvent_o *v20; // x8
  __int64 *v21; // x21
  __int64 v22; // x22
  void (__fastcall *v23)(unsigned int *, __int64); // x23
  char v24; // w23
  char v25; // w0
  __int64 v26; // x3
  unsigned int v27; // w23
  __int64 v28; // x8
  __int64 v29; // x1
  __int64 v30; // x2
  unsigned __int64 v31; // x10
  _DWORD *v32; // x11
  unsigned int v33; // [xsp+4h] [xbp-4Ch] BYREF
  SupportSelectEditMenu_OnClickButtonEvent_o *v34; // [xsp+8h] [xbp-48h] BYREF

  v34 = this;
  v33 = result;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v7 = &v34;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v4 + 24);
  if ( v6 )
  {
    v7 = (SupportSelectEditMenu_OnClickButtonEvent_o **)(v4 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v20 = v7[v8];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(unsigned int *, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v20->fields.extra_arg, *(_QWORD *)&result, method, v3);
      if ( (sub_B2C38C(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 1 )
        goto LABEL_36;
      v23((unsigned int *)v33, v22);
LABEL_38:
      if ( ++v8 == v6 )
        return;
    }
    if ( !v21 )
    {
      v23(&v33 - 4, v22);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B2C384(v22);
      v25 = sub_B2C788(v22);
      if ( (v24 & 1) != 0 )
      {
        v27 = v33;
        if ( (v25 & 1) != 0 )
        {
          v28 = *v21;
          v29 = *(_QWORD *)(v22 + 24);
          v30 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v31 = 0LL;
            v32 = (_DWORD *)(*(_QWORD *)(v28 + 176) + 8LL);
            while ( *((_QWORD *)v32 - 1) != v29 )
            {
              ++v31;
              v32 += 4;
              if ( v31 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_35;
            }
            v18 = v28 + 16LL * (*v32 + (int)v30) + 312;
          }
          else
          {
LABEL_35:
            v18 = sub_AC5258(v21, v29, v30, v26);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD))sub_B2C40C(v17, v22);
        (*v19)(v21, v27, v19);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v12 = *v21;
          v13 = v33;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v12 + 16LL * (int)(*v15 + v9) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_AC5258(v21, class_0, v9, v11);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))v16)(v21, v13, *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            v33,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, __int64))v23)(v21, v33, v22);
    goto LABEL_38;
  }
}