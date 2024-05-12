void __fastcall PartyOrganizationRemoveSelectMenu___ctor(
        PartyOrganizationRemoveSelectMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_4388B06 & 1) == 0 )
  {
    sub_B775C4(&BaseDialog_TypeInfo);
    byte_4388B06 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall PartyOrganizationRemoveSelectMenu__Callback(
        PartyOrganizationRemoveSelectMenu_o *this,
        int32_t result,
        const MethodInfo *method)
{
  struct PartyOrganizationRemoveSelectMenu_CallbackFunc_o **p_callbackFunc; // x0
  PartyOrganizationRemoveSelectMenu_CallbackFunc_o *v4; // x20
  struct PartyOrganizationRemoveSelectMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v4 = callbackFunc;
  if ( callbackFunc )
  {
    *p_callbackFunc = 0LL;
    sub_B77560(p_callbackFunc);
    PartyOrganizationRemoveSelectMenu_CallbackFunc__Invoke(v4, result, 0LL);
  }
}


void __fastcall PartyOrganizationRemoveSelectMenu__Close(
        PartyOrganizationRemoveSelectMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyOrganizationRemoveSelectMenu__Close_20672052(this, 0LL, v2);
}


void __fastcall PartyOrganizationRemoveSelectMenu__Close_20672052(
        PartyOrganizationRemoveSelectMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Action_o *v5; // x20

  if ( (byte_4388AFE & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_PartyOrganizationRemoveSelectMenu_EndClose__);
    byte_4388AFE = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B77560(&this->fields.closeCallbackFunc);
  this->fields.state = 4;
  v5 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_PartyOrganizationRemoveSelectMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v5, 0LL);
}


void __fastcall PartyOrganizationRemoveSelectMenu__EndClose(
        PartyOrganizationRemoveSelectMenu_o *this,
        const MethodInfo *method)
{
  struct System_Action_o **p_closeCallbackFunc; // x19
  System_Action_o *v4; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  PartyOrganizationRemoveSelectMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = &this->fields.closeCallbackFunc;
  v4 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    *p_closeCallbackFunc = 0LL;
    sub_B77560(p_closeCallbackFunc);
    System_Action__Invoke(v4, 0LL);
  }
}


void __fastcall PartyOrganizationRemoveSelectMenu__EndOpen(
        PartyOrganizationRemoveSelectMenu_o *this,
        const MethodInfo *method)
{
  this->fields.state = 2;
}


void __fastcall PartyOrganizationRemoveSelectMenu__Init(
        PartyOrganizationRemoveSelectMenu_o *this,
        const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_4388AFC & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_4388AFC = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_13;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.nameLabel;
  if ( !titleLabel )
    goto LABEL_13;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel )
    goto LABEL_13;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.copyLabel;
  if ( !titleLabel )
    goto LABEL_13;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.removeAllLabel;
  if ( !titleLabel )
    goto LABEL_13;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.initAllLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.removeEquipLabel) == 0LL)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.changeNameLabel) == 0LL)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.cancelLabel) == 0LL) )
  {
LABEL_13:
    sub_B7769C(titleLabel, method);
  }
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall PartyOrganizationRemoveSelectMenu__OnChangeName(
        PartyOrganizationRemoveSelectMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_4388B03 & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_4388B03 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    PartyOrganizationRemoveSelectMenu__Callback(this, 5, v3);
  }
}


void __fastcall PartyOrganizationRemoveSelectMenu__OnClickCancel(
        PartyOrganizationRemoveSelectMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4388B04 & 1) == 0 )
  {
    sub_B775C4(&Method_PartyOrganizationRemoveSelectMenu_OnClickCancel__);
    byte_4388B04 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationRemoveSelectMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_PartyOrganizationRemoveSelectMenu_OnClickCancel__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B775CC(Method_PartyOrganizationRemoveSelectMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_B775A8(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
    PartyOrganizationRemoveSelectMenu__Callback(this, 0, v5);
  }
}


void __fastcall PartyOrganizationRemoveSelectMenu__OnClickCopy(
        PartyOrganizationRemoveSelectMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_4388AFF & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_4388AFF = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    PartyOrganizationRemoveSelectMenu__Callback(this, 1, v3);
  }
}


void __fastcall PartyOrganizationRemoveSelectMenu__OnClickInitAll(
        PartyOrganizationRemoveSelectMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_4388B01 & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_4388B01 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    PartyOrganizationRemoveSelectMenu__Callback(this, 3, v3);
  }
}


void __fastcall PartyOrganizationRemoveSelectMenu__OnClickRemoveAll(
        PartyOrganizationRemoveSelectMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_4388B00 & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_4388B00 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    PartyOrganizationRemoveSelectMenu__Callback(this, 2, v3);
  }
}


void __fastcall PartyOrganizationRemoveSelectMenu__OnClickRemoveEquip(
        PartyOrganizationRemoveSelectMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_4388B02 & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_4388B02 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    PartyOrganizationRemoveSelectMenu__Callback(this, 4, v3);
  }
}


void __fastcall PartyOrganizationRemoveSelectMenu__Open(
        PartyOrganizationRemoveSelectMenu_o *this,
        PartyListViewItem_o *partyItem,
        bool isEnableCopy,
        PartyOrganizationRemoveSelectMenu_CallbackFunc_o *callback,
        bool isEnableRemoveAll,
        bool isEnableRemoveEquip,
        const MethodInfo *method)
{
  int32_t state; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *v15; // x1
  int32_t menuKind; // w25
  UILabel_o *titleLabel; // x24
  int v18; // w25
  UILabel_o *nameLabel; // x24
  System_String_o *v20; // x0
  struct PartyOrganizationRemoveSelectMenu_CallbackFunc_o **p_callbackFunc; // x19
  UILabel_o *messageLabel; // x24
  UnityEngine_GameObject_o *v23; // x0
  UILabel_o *copyLabel; // x24
  UILabel_o *removeAllLabel; // x24
  UILabel_o *initAllLabel; // x24
  UILabel_o *removeEquipLabel; // x24
  UILabel_o *changeNameLabel; // x24
  UILabel_o *cancelLabel; // x24
  struct UICommonButton_o *copyButton; // x24
  struct UICommonButton_o *removeAllButton; // x23
  unsigned int v32; // w8
  __int64 v33; // x1
  struct UICommonButton_o *initAllButton; // x22
  struct UICommonButton_o *removeEquipButton; // x22
  unsigned int v36; // w8
  __int64 v37; // x1
  System_Action_o *v38; // x20

  if ( (byte_4388AFD & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&Method_PartyOrganizationRemoveSelectMenu_EndOpen__);
    sub_B775C4(&StringLiteral_10554/*"PARTY_ORGANIZATION_REMOVE_SELECT_CANCEL"*/);
    sub_B775C4(&StringLiteral_10557/*"PARTY_ORGANIZATION_REMOVE_SELECT_INIT_ALL"*/);
    sub_B775C4(&StringLiteral_10560/*"PARTY_ORGANIZATION_REMOVE_SELECT_REMOVE_ALL"*/);
    sub_B775C4(&StringLiteral_10562/*"PARTY_ORGANIZATION_REMOVE_SELECT_TITLE"*/);
    sub_B775C4(&StringLiteral_10555/*"PARTY_ORGANIZATION_REMOVE_SELECT_CHANGE_NAME"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    sub_B775C4(&StringLiteral_10558/*"PARTY_ORGANIZATION_REMOVE_SELECT_MESSAGE"*/);
    sub_B775C4(&StringLiteral_10561/*"PARTY_ORGANIZATION_REMOVE_SELECT_REMOVE_EQUIP"*/);
    sub_B775C4(&StringLiteral_10556/*"PARTY_ORGANIZATION_REMOVE_SELECT_COPY"*/);
    sub_B775C4(&StringLiteral_10559/*"PARTY_ORGANIZATION_REMOVE_SELECT_NAME"*/);
    byte_4388AFD = 1;
  }
  state = this->fields.state;
  if ( state != 4 )
  {
    if ( state == 3 )
    {
      this->fields.callbackFunc = callback;
      p_callbackFunc = &this->fields.callbackFunc;
      sub_B77560(p_callbackFunc);
      *((_DWORD *)p_callbackFunc - 2) = 2;
      return;
    }
    if ( state )
      return;
  }
  this->fields.callbackFunc = callback;
  sub_B77560(&this->fields.callbackFunc);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_62;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  if ( !partyItem )
    goto LABEL_62;
  menuKind = partyItem->fields.menuKind;
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10562/*"PARTY_ORGANIZATION_REMOVE_SELECT_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_62;
  v18 = menuKind | 8;
  UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
  nameLabel = this->fields.nameLabel;
  if ( v18 == 8 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v20 = LocalizationManager__Get((System_String_o *)StringLiteral_10559/*"PARTY_ORGANIZATION_REMOVE_SELECT_NAME"*/, 0LL);
    gameObject = (UnityEngine_GameObject_o *)System_String__Format(v20, (Il2CppObject *)partyItem->fields.deckName, 0LL);
    v15 = (System_String_o *)gameObject;
    if ( !nameLabel )
      goto LABEL_62;
  }
  else
  {
    v15 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !nameLabel )
      goto LABEL_62;
  }
  UILabel__set_text(nameLabel, v15, 0LL);
  messageLabel = this->fields.messageLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10558/*"PARTY_ORGANIZATION_REMOVE_SELECT_MESSAGE"*/, 0LL);
  if ( !messageLabel )
    goto LABEL_62;
  UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.messageLabel;
  if ( !gameObject )
    goto LABEL_62;
  v23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  GameObjectExtensions__SetLocalPositionY(v23, flt_331AEC0[v18 == 8], 0LL);
  copyLabel = this->fields.copyLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10556/*"PARTY_ORGANIZATION_REMOVE_SELECT_COPY"*/, 0LL);
  if ( !copyLabel )
    goto LABEL_62;
  UILabel__set_text(copyLabel, (System_String_o *)gameObject, 0LL);
  removeAllLabel = this->fields.removeAllLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10560/*"PARTY_ORGANIZATION_REMOVE_SELECT_REMOVE_ALL"*/, 0LL);
  if ( !removeAllLabel )
    goto LABEL_62;
  UILabel__set_text(removeAllLabel, (System_String_o *)gameObject, 0LL);
  initAllLabel = this->fields.initAllLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10557/*"PARTY_ORGANIZATION_REMOVE_SELECT_INIT_ALL"*/, 0LL);
  if ( !initAllLabel )
    goto LABEL_62;
  UILabel__set_text(initAllLabel, (System_String_o *)gameObject, 0LL);
  removeEquipLabel = this->fields.removeEquipLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10561/*"PARTY_ORGANIZATION_REMOVE_SELECT_REMOVE_EQUIP"*/, 0LL);
  if ( !removeEquipLabel )
    goto LABEL_62;
  UILabel__set_text(removeEquipLabel, (System_String_o *)gameObject, 0LL);
  changeNameLabel = this->fields.changeNameLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10555/*"PARTY_ORGANIZATION_REMOVE_SELECT_CHANGE_NAME"*/, 0LL);
  if ( !changeNameLabel )
    goto LABEL_62;
  UILabel__set_text(changeNameLabel, (System_String_o *)gameObject, 0LL);
  cancelLabel = this->fields.cancelLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10554/*"PARTY_ORGANIZATION_REMOVE_SELECT_CANCEL"*/, 0LL);
  if ( !cancelLabel )
    goto LABEL_62;
  UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0LL);
  copyButton = this->fields.copyButton;
  if ( v18 == 8
    && isEnableCopy
    && (gameObject = (UnityEngine_GameObject_o *)PartyListViewItem__IsDeckEmpty(partyItem, 0LL),
        ((unsigned __int8)gameObject & 1) == 0) )
  {
    v15 = 0LL;
    if ( !copyButton )
      goto LABEL_62;
  }
  else
  {
    v15 = (System_String_o *)(&dword_0 + 3);
    if ( !copyButton )
      goto LABEL_62;
  }
  ((void (__fastcall *)(struct UICommonButton_o *, System_String_o *, __int64, Il2CppMethodPointer))copyButton->klass->vtable._14_SetState.method)(
    copyButton,
    v15,
    1LL,
    copyButton->klass->vtable._15_OnPress.methodPtr);
  removeAllButton = this->fields.removeAllButton;
  gameObject = (UnityEngine_GameObject_o *)PartyListViewItem__IsDeckEmpty(partyItem, 0LL);
  if ( !removeAllButton )
    goto LABEL_62;
  v32 = isEnableRemoveAll ? 0 : 3;
  v33 = ((unsigned __int8)gameObject & 1) != 0 ? v32 : 0LL;
  gameObject = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(struct UICommonButton_o *, __int64, __int64, Il2CppMethodPointer))removeAllButton->klass->vtable._14_SetState.method)(
                                             removeAllButton,
                                             v33,
                                             1LL,
                                             removeAllButton->klass->vtable._15_OnPress.methodPtr);
  initAllButton = this->fields.initAllButton;
  if ( v18 == 8
    && (gameObject = (UnityEngine_GameObject_o *)PartyListViewItem__IsDeckInit(partyItem, 0LL),
        ((unsigned __int8)gameObject & 1) == 0) )
  {
    v15 = 0LL;
    if ( !initAllButton )
      goto LABEL_62;
  }
  else
  {
    v15 = (System_String_o *)(&dword_0 + 3);
    if ( !initAllButton )
      goto LABEL_62;
  }
  ((void (__fastcall *)(struct UICommonButton_o *, System_String_o *, __int64, Il2CppMethodPointer))initAllButton->klass->vtable._14_SetState.method)(
    initAllButton,
    v15,
    1LL,
    initAllButton->klass->vtable._15_OnPress.methodPtr);
  removeEquipButton = this->fields.removeEquipButton;
  gameObject = (UnityEngine_GameObject_o *)PartyListViewItem__IsEquipEmpty(partyItem, 0LL);
  if ( !removeEquipButton
    || (!isEnableRemoveEquip ? (v36 = 3) : (v36 = 0),
        ((unsigned __int8)gameObject & 1) == 0 ? (v37 = 0LL) : (v37 = v36),
        (((void (__fastcall *)(struct UICommonButton_o *, __int64, __int64, Il2CppMethodPointer))removeEquipButton->klass->vtable._14_SetState.method)(
           removeEquipButton,
           v37,
           1LL,
           removeEquipButton->klass->vtable._15_OnPress.methodPtr),
         (gameObject = (UnityEngine_GameObject_o *)this->fields.changeNameButton) == 0LL)
     || (((void (*)(void))gameObject->klass[1]._1.implementedInterfaces)(),
         (gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton) == 0LL)) )
  {
LABEL_62:
    sub_B7769C(gameObject, v15);
  }
  ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))gameObject->klass[1]._1.implementedInterfaces)(
    gameObject,
    0LL,
    1LL,
    gameObject->klass[1]._1.interfaceOffsets);
  this->fields.state = 1;
  v38 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v38, (Il2CppObject *)this, Method_PartyOrganizationRemoveSelectMenu_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v38, 0, 0LL);
}


void __fastcall PartyOrganizationRemoveSelectMenu__add_callbackFunc(
        PartyOrganizationRemoveSelectMenu_o *this,
        PartyOrganizationRemoveSelectMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct PartyOrganizationRemoveSelectMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct PartyOrganizationRemoveSelectMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  PartyOrganizationRemoveSelectMenu_o *v11; // x0
  PartyOrganizationRemoveSelectMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4388AFA & 1) == 0 )
  {
    sub_B775C4(&PartyOrganizationRemoveSelectMenu_CallbackFunc_TypeInfo);
    byte_4388AFA = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (PartyOrganizationRemoveSelectMenu_CallbackFunc_c *)v8->klass != PartyOrganizationRemoveSelectMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B6BFDC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationRemoveSelectMenu_o *)sub_B77990(v8);
  PartyOrganizationRemoveSelectMenu__remove_callbackFunc(v11, v12, v13);
}


System_String_o *__fastcall PartyOrganizationRemoveSelectMenu__get_closeBtnPath(
        PartyOrganizationRemoveSelectMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_4388B05 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_2849/*"BaseWindow/CancelButton"*/);
    byte_4388B05 = 1;
  }
  return (System_String_o *)StringLiteral_2849/*"BaseWindow/CancelButton"*/;
}


bool __fastcall PartyOrganizationRemoveSelectMenu__isStateSelected(
        PartyOrganizationRemoveSelectMenu_o *this,
        const MethodInfo *method)
{
  return this->fields.state == 3;
}


void __fastcall PartyOrganizationRemoveSelectMenu__remove_callbackFunc(
        PartyOrganizationRemoveSelectMenu_o *this,
        PartyOrganizationRemoveSelectMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct PartyOrganizationRemoveSelectMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct PartyOrganizationRemoveSelectMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  PartyOrganizationRemoveSelectMenu_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4388AFB & 1) == 0 )
  {
    sub_B775C4(&PartyOrganizationRemoveSelectMenu_CallbackFunc_TypeInfo);
    byte_4388AFB = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (PartyOrganizationRemoveSelectMenu_CallbackFunc_c *)v8->klass != PartyOrganizationRemoveSelectMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B6BFDC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationRemoveSelectMenu_o *)sub_B77990(v8);
  PartyOrganizationRemoveSelectMenu__Init(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationRemoveSelectMenu_CallbackFunc___ctor(
        PartyOrganizationRemoveSelectMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B77560(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


System_IAsyncResult_o *__fastcall PartyOrganizationRemoveSelectMenu_CallbackFunc__BeginInvoke(
        PartyOrganizationRemoveSelectMenu_CallbackFunc_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-24h] BYREF

  v10 = result;
  if ( (byte_438A0C1 & 1) == 0 )
  {
    sub_B775C4(&PartyOrganizationRemoveSelectMenu_ResultKind_TypeInfo);
    byte_438A0C1 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(PartyOrganizationRemoveSelectMenu_ResultKind_TypeInfo, &v10, callback);
  return (System_IAsyncResult_o *)sub_B77568(this, v9, callback, object);
}


void __fastcall PartyOrganizationRemoveSelectMenu_CallbackFunc__EndInvoke(
        PartyOrganizationRemoveSelectMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7756C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationRemoveSelectMenu_CallbackFunc__Invoke(
        PartyOrganizationRemoveSelectMenu_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v5; // x24
  PartyOrganizationRemoveSelectMenu_CallbackFunc_o **v6; // x25
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
  PartyOrganizationRemoveSelectMenu_CallbackFunc_o *v18; // x8
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
  PartyOrganizationRemoveSelectMenu_CallbackFunc_o *v31; // [xsp+8h] [xbp-48h] BYREF

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
    v6 = (PartyOrganizationRemoveSelectMenu_CallbackFunc_o **)(v3 + 32);
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