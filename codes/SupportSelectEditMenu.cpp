void __fastcall SupportSelectEditMenu___ctor(SupportSelectEditMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4B63469 & 1) == 0 )
  {
    sub_1BE4ACC(&BaseDialog_TypeInfo, method);
    byte_4B63469 = 1;
  }
  this->fields.currentState = 2;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall SupportSelectEditMenu__Close(SupportSelectEditMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x20

  if ( (byte_4B63460 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, method);
    sub_1BE4ACC(&Method_SupportSelectEditMenu_OnFinishedClose__, v3);
    byte_4B63460 = 1;
  }
  this->fields.currentState = 2;
  v4 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_SupportSelectEditMenu_OnFinishedClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v4, 0LL);
}


void __fastcall SupportSelectEditMenu__OnClickCancel(SupportSelectEditMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4B63467 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_SupportSelectEditMenu_OnClickCancel__, method);
    byte_4B63467 = 1;
  }
  if ( this->fields.currentState == 1 )
  {
    v3 = Method_SupportSelectEditMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_SupportSelectEditMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BE4AE4(Method_SupportSelectEditMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
    SupportSelectEditMenu__Close(this, v5);
  }
}


void __fastcall SupportSelectEditMenu__OnClickChangeName(SupportSelectEditMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct SupportSelectEditMenu_OnClickButtonEvent_o *onClickButton; // x8

  if ( (byte_4B63466 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_SupportSelectEditMenu_OnClickChangeName__, method);
    byte_4B63466 = 1;
  }
  if ( this->fields.currentState == 1 )
  {
    v3 = Method_SupportSelectEditMenu_OnClickChangeName__;
    if ( (*((_BYTE *)Method_SupportSelectEditMenu_OnClickChangeName__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BE4AE4(Method_SupportSelectEditMenu_OnClickChangeName__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v3, v3[4]);
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

  if ( (byte_4B63462 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_SupportSelectEditMenu_OnClickCopy__, method);
    byte_4B63462 = 1;
  }
  if ( this->fields.currentState == 1 )
  {
    v3 = Method_SupportSelectEditMenu_OnClickCopy__;
    if ( (*((_BYTE *)Method_SupportSelectEditMenu_OnClickCopy__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BE4AE4(Method_SupportSelectEditMenu_OnClickCopy__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v3, v3[4]);
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

  if ( (byte_4B63464 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_SupportSelectEditMenu_OnClickInitAll__, method);
    byte_4B63464 = 1;
  }
  if ( this->fields.currentState == 1 )
  {
    v3 = Method_SupportSelectEditMenu_OnClickInitAll__;
    if ( (*((_BYTE *)Method_SupportSelectEditMenu_OnClickInitAll__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BE4AE4(Method_SupportSelectEditMenu_OnClickInitAll__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v3, v3[4]);
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

  if ( (byte_4B63463 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_SupportSelectEditMenu_OnClickRemoveAll__, method);
    byte_4B63463 = 1;
  }
  if ( this->fields.currentState == 1 )
  {
    v3 = Method_SupportSelectEditMenu_OnClickRemoveAll__;
    if ( (*((_BYTE *)Method_SupportSelectEditMenu_OnClickRemoveAll__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BE4AE4(Method_SupportSelectEditMenu_OnClickRemoveAll__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v3, v3[4]);
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

  if ( (byte_4B63465 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_SupportSelectEditMenu_OnClickRemoveEquip__, method);
    byte_4B63465 = 1;
  }
  if ( this->fields.currentState == 1 )
  {
    v3 = Method_SupportSelectEditMenu_OnClickRemoveEquip__;
    if ( (*((_BYTE *)Method_SupportSelectEditMenu_OnClickRemoveEquip__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BE4AE4(Method_SupportSelectEditMenu_OnClickRemoveEquip__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v3, v3[4]);
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
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.onClickButton = 0LL;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.onClickButton, 0LL, v2, v3, v4, v5, v6, v7);
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
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
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

  if ( (byte_4B6345F & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, deckData);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v12);
    sub_1BE4ACC(&Method_SupportSelectEditMenu_OnFinishedOpen__, v13);
    sub_1BE4ACC(&StringLiteral_12634/*"SUPPORT_SELECT_EDIT_MENU_BUTTON_REMOVE_EQUIP"*/, v14);
    sub_1BE4ACC(&StringLiteral_12631/*"SUPPORT_SELECT_EDIT_MENU_BUTTON_COPY"*/, v15);
    sub_1BE4ACC(&StringLiteral_12632/*"SUPPORT_SELECT_EDIT_MENU_BUTTON_INIT_ALL"*/, v16);
    sub_1BE4ACC(&StringLiteral_12637/*"SUPPORT_SELECT_EDIT_MENU_TITLE"*/, v17);
    sub_1BE4ACC(&StringLiteral_12635/*"SUPPORT_SELECT_EDIT_MENU_DECK_NAME"*/, v18);
    sub_1BE4ACC(&StringLiteral_12633/*"SUPPORT_SELECT_EDIT_MENU_BUTTON_REMOVE_ALL"*/, v19);
    sub_1BE4ACC(&StringLiteral_12630/*"SUPPORT_SELECT_EDIT_MENU_BUTTON_CHANGE_DECK_NAME"*/, v20);
    sub_1BE4ACC(&StringLiteral_12629/*"SUPPORT_SELECT_EDIT_MENU_BUTTON_CANCEL"*/, v21);
    sub_1BE4ACC(&StringLiteral_12636/*"SUPPORT_SELECT_EDIT_MENU_MESSAGE"*/, v22);
    byte_4B6345F = 1;
  }
  if ( deckData && this->fields.currentState == 2 )
  {
    this->fields.onClickButton = onClickButton;
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)&this->fields.onClickButton,
      (int64_t)onClickButton,
      isEditting,
      (int32_t)onClickButton,
      (System_String_o *)method,
      v5,
      v6,
      v7);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_32;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    titleLabel = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12637/*"SUPPORT_SELECT_EDIT_MENU_TITLE"*/, 0LL);
    if ( !titleLabel )
      goto LABEL_32;
    UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
    supportNameLabel = this->fields.supportNameLabel;
    v27 = LocalizationManager__Get((System_String_o *)StringLiteral_12635/*"SUPPORT_SELECT_EDIT_MENU_DECK_NAME"*/, 0LL);
    gameObject = (UnityEngine_GameObject_o *)System_String__Format(
                                               v27,
                                               (Il2CppObject *)deckData->fields._deckName_k__BackingField,
                                               0LL);
    if ( !supportNameLabel )
      goto LABEL_32;
    UILabel__set_text(supportNameLabel, (System_String_o *)gameObject, 0LL);
    messageLabel = this->fields.messageLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12636/*"SUPPORT_SELECT_EDIT_MENU_MESSAGE"*/, 0LL);
    if ( !messageLabel )
      goto LABEL_32;
    UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0LL);
    if ( isEditting || SupportServantData__IsEmpty(deckData, 0LL) )
      v24 = 3LL;
    else
      v24 = 0LL;
    gameObject = (UnityEngine_GameObject_o *)this->fields.copyButton;
    if ( !gameObject )
      goto LABEL_32;
    v29 = (SupportSelectEditMenu_o *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *, __int64, __int64, Il2CppRuntimeInterfaceOffsetPair *))gameObject->klass[1]._1.implementedInterfaces)(
                                       gameObject,
                                       v24,
                                       1LL,
                                       gameObject->klass[1]._1.interfaceOffsets);
    SupportSelectEditMenu__SetButtonText(v29, this->fields.copyButton, (System_String_o *)StringLiteral_12631/*"SUPPORT_SELECT_EDIT_MENU_BUTTON_COPY"*/, v30);
    gameObject = (UnityEngine_GameObject_o *)SupportServantData__IsEmpty(deckData, 0LL);
    removeAllButton = this->fields.removeAllButton;
    if ( !removeAllButton )
      goto LABEL_32;
    if ( ((unsigned __int8)gameObject & 1) != 0 )
      v32 = 3LL;
    else
      v32 = 0LL;
    v33 = (SupportSelectEditMenu_o *)((__int64 (__fastcall *)(struct UICommonButton_o *, __int64, __int64, Il2CppMethodPointer))removeAllButton->klass->vtable._14_SetState.method)(
                                       this->fields.removeAllButton,
                                       v32,
                                       1LL,
                                       removeAllButton->klass->vtable._15_OnPress.methodPtr);
    SupportSelectEditMenu__SetButtonText(v33, this->fields.removeAllButton, (System_String_o *)StringLiteral_12633/*"SUPPORT_SELECT_EDIT_MENU_BUTTON_REMOVE_ALL"*/, v34);
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
      goto LABEL_32;
    v36 = (SupportSelectEditMenu_o *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *, __int64, __int64, Il2CppRuntimeInterfaceOffsetPair *))gameObject->klass[1]._1.implementedInterfaces)(
                                       gameObject,
                                       v24,
                                       1LL,
                                       gameObject->klass[1]._1.interfaceOffsets);
    SupportSelectEditMenu__SetButtonText(v36, this->fields.initAllButton, (System_String_o *)StringLiteral_12632/*"SUPPORT_SELECT_EDIT_MENU_BUTTON_INIT_ALL"*/, v37);
    gameObject = (UnityEngine_GameObject_o *)SupportServantData__getEquipSum(deckData, 0LL);
    removeEquipButton = this->fields.removeEquipButton;
    if ( !removeEquipButton )
      goto LABEL_32;
    v39 = (_DWORD)gameObject ? 0LL : 3LL;
    v40 = (SupportSelectEditMenu_o *)((__int64 (__fastcall *)(struct UICommonButton_o *, __int64, __int64, Il2CppMethodPointer))removeEquipButton->klass->vtable._14_SetState.method)(
                                       this->fields.removeEquipButton,
                                       v39,
                                       1LL,
                                       removeEquipButton->klass->vtable._15_OnPress.methodPtr);
    SupportSelectEditMenu__SetButtonText(
      v40,
      this->fields.removeEquipButton,
      (System_String_o *)StringLiteral_12634/*"SUPPORT_SELECT_EDIT_MENU_BUTTON_REMOVE_EQUIP"*/,
      v41);
    gameObject = (UnityEngine_GameObject_o *)this->fields.changeNameButton;
    if ( !gameObject )
LABEL_32:
      sub_1BE4D28(gameObject, v24);
    v42 = (SupportSelectEditMenu_o *)((__int64 (*)(void))gameObject->klass[1]._1.implementedInterfaces)();
    SupportSelectEditMenu__SetButtonText(
      v42,
      this->fields.changeNameButton,
      (System_String_o *)StringLiteral_12630/*"SUPPORT_SELECT_EDIT_MENU_BUTTON_CHANGE_DECK_NAME"*/,
      v43);
    SupportSelectEditMenu__SetButtonText(v44, this->fields.cancelButton, (System_String_o *)StringLiteral_12629/*"SUPPORT_SELECT_EDIT_MENU_BUTTON_CANCEL"*/, v45);
    this->fields.currentState = 0;
    v46 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
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
  Il2CppObject *ComponentInChildren_object__49610264; // x20

  if ( (byte_4B63461 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_UnityEngine_Component_GetComponentInChildren_UILabel___, target);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v6);
    this = (SupportSelectEditMenu_o *)sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v7);
    byte_4B63461 = 1;
  }
  if ( !target )
    goto LABEL_12;
  ComponentInChildren_object__49610264 = UnityEngine_Component__GetComponentInChildren_object__49610264(
                                           (UnityEngine_Component_o *)target,
                                           (const MethodInfo_2F4FE18 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)ComponentInChildren_object__49610264, 0LL, 0LL) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (SupportSelectEditMenu_o *)LocalizationManager__Get(localizationKey, 0LL);
    if ( ComponentInChildren_object__49610264 )
    {
      UILabel__set_text((UILabel_o *)ComponentInChildren_object__49610264, (System_String_o *)this, 0LL);
      return;
    }
LABEL_12:
    sub_1BE4D28(this, target);
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

  if ( (byte_4B63468 & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, method);
    byte_4B63468 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_1BE4D28(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectEditMenu_OnClickButtonEvent___ctor(
        SupportSelectEditMenu_OnClickButtonEvent_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BE4B8C(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BE4D44(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BE4BF4(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A23538;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A234F0;
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_4B6346A & 1) == 0 )
  {
    sub_1BE4ACC(&SupportSelectEditMenu_ResultKind_TypeInfo, *(_QWORD *)&result);
    byte_4B6346A = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(SupportSelectEditMenu_ResultKind_TypeInfo, &v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1BE4A80(this, v9, callback, object);
}


void __fastcall SupportSelectEditMenu_OnClickButtonEvent__EndInvoke(
        SupportSelectEditMenu_OnClickButtonEvent_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BE4A84(result, 0LL, method);
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