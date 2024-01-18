void __fastcall PartyOrganizationRemoveSelectMenu___ctor(
        PartyOrganizationRemoveSelectMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_4184FC1 & 1) == 0 )
  {
    sub_B2C35C(&BaseDialog_TypeInfo, method);
    byte_4184FC1 = 1;
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
    sub_B2C2F8(p_callbackFunc, 0LL);
    PartyOrganizationRemoveSelectMenu_CallbackFunc__Invoke(v4, result, 0LL);
  }
}


void __fastcall PartyOrganizationRemoveSelectMenu__Close(
        PartyOrganizationRemoveSelectMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyOrganizationRemoveSelectMenu__Close_19908004(this, 0LL, v2);
}


void __fastcall PartyOrganizationRemoveSelectMenu__Close_19908004(
        PartyOrganizationRemoveSelectMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Action_o *v6; // x20

  if ( (byte_4184FB9 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&Method_PartyOrganizationRemoveSelectMenu_EndClose__, v5);
    byte_4184FB9 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B2C2F8(&this->fields.closeCallbackFunc, callback);
  this->fields.state = 4;
  v6 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_PartyOrganizationRemoveSelectMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0LL);
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
    sub_B2C2F8(p_closeCallbackFunc, 0LL);
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

  if ( (byte_4184FB7 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, method);
    byte_4184FB7 = 1;
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
    sub_B2C434(titleLabel, method);
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

  if ( (byte_4184FBE & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4184FBE = 1;
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

  if ( (byte_4184FBF & 1) == 0 )
  {
    sub_B2C35C(&Method_PartyOrganizationRemoveSelectMenu_OnClickCancel__, method);
    byte_4184FBF = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationRemoveSelectMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_PartyOrganizationRemoveSelectMenu_OnClickCancel__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B2C364(Method_PartyOrganizationRemoveSelectMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_B2C340(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
    PartyOrganizationRemoveSelectMenu__Callback(this, 0, v5);
  }
}


void __fastcall PartyOrganizationRemoveSelectMenu__OnClickCopy(
        PartyOrganizationRemoveSelectMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_4184FBA & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4184FBA = 1;
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

  if ( (byte_4184FBC & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4184FBC = 1;
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

  if ( (byte_4184FBB & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4184FBB = 1;
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

  if ( (byte_4184FBD & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4184FBD = 1;
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
  __int64 v23; // x1
  __int64 v24; // x1
  int32_t state; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *v27; // x1
  int32_t menuKind; // w25
  UILabel_o *titleLabel; // x24
  int v30; // w25
  UILabel_o *nameLabel; // x24
  System_String_o *v32; // x0
  struct PartyOrganizationRemoveSelectMenu_CallbackFunc_o **p_callbackFunc; // x19
  UILabel_o *messageLabel; // x24
  UnityEngine_GameObject_o *v35; // x0
  UILabel_o *copyLabel; // x24
  UILabel_o *removeAllLabel; // x24
  UILabel_o *initAllLabel; // x24
  UILabel_o *removeEquipLabel; // x24
  UILabel_o *changeNameLabel; // x24
  UILabel_o *cancelLabel; // x24
  struct UICommonButton_o *copyButton; // x24
  struct UICommonButton_o *removeAllButton; // x23
  unsigned int v44; // w8
  __int64 v45; // x1
  struct UICommonButton_o *initAllButton; // x22
  struct UICommonButton_o *removeEquipButton; // x22
  unsigned int v48; // w8
  __int64 v49; // x1
  System_Action_o *v50; // x20

  if ( (byte_4184FB8 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, partyItem);
    sub_B2C35C(&LocalizationManager_TypeInfo, v13);
    sub_B2C35C(&Method_PartyOrganizationRemoveSelectMenu_EndOpen__, v14);
    sub_B2C35C(&StringLiteral_10368/*"PARTY_ORGANIZATION_REMOVE_SELECT_CANCEL"*/, v15);
    sub_B2C35C(&StringLiteral_10371/*"PARTY_ORGANIZATION_REMOVE_SELECT_INIT_ALL"*/, v16);
    sub_B2C35C(&StringLiteral_10374/*"PARTY_ORGANIZATION_REMOVE_SELECT_REMOVE_ALL"*/, v17);
    sub_B2C35C(&StringLiteral_10376/*"PARTY_ORGANIZATION_REMOVE_SELECT_TITLE"*/, v18);
    sub_B2C35C(&StringLiteral_10369/*"PARTY_ORGANIZATION_REMOVE_SELECT_CHANGE_NAME"*/, v19);
    sub_B2C35C(&StringLiteral_1/*""*/, v20);
    sub_B2C35C(&StringLiteral_10372/*"PARTY_ORGANIZATION_REMOVE_SELECT_MESSAGE"*/, v21);
    sub_B2C35C(&StringLiteral_10375/*"PARTY_ORGANIZATION_REMOVE_SELECT_REMOVE_EQUIP"*/, v22);
    sub_B2C35C(&StringLiteral_10370/*"PARTY_ORGANIZATION_REMOVE_SELECT_COPY"*/, v23);
    sub_B2C35C(&StringLiteral_10373/*"PARTY_ORGANIZATION_REMOVE_SELECT_NAME"*/, v24);
    byte_4184FB8 = 1;
  }
  state = this->fields.state;
  if ( state != 4 )
  {
    if ( state == 3 )
    {
      this->fields.callbackFunc = callback;
      p_callbackFunc = &this->fields.callbackFunc;
      sub_B2C2F8(p_callbackFunc, callback);
      *((_DWORD *)p_callbackFunc - 2) = 2;
      return;
    }
    if ( state )
      return;
  }
  this->fields.callbackFunc = callback;
  sub_B2C2F8(&this->fields.callbackFunc, callback);
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
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10376/*"PARTY_ORGANIZATION_REMOVE_SELECT_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_62;
  v30 = menuKind | 8;
  UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
  nameLabel = this->fields.nameLabel;
  if ( v30 == 8 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v32 = LocalizationManager__Get((System_String_o *)StringLiteral_10373/*"PARTY_ORGANIZATION_REMOVE_SELECT_NAME"*/, 0LL);
    gameObject = (UnityEngine_GameObject_o *)System_String__Format(v32, (Il2CppObject *)partyItem->fields.deckName, 0LL);
    v27 = (System_String_o *)gameObject;
    if ( !nameLabel )
      goto LABEL_62;
  }
  else
  {
    v27 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !nameLabel )
      goto LABEL_62;
  }
  UILabel__set_text(nameLabel, v27, 0LL);
  messageLabel = this->fields.messageLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10372/*"PARTY_ORGANIZATION_REMOVE_SELECT_MESSAGE"*/, 0LL);
  if ( !messageLabel )
    goto LABEL_62;
  UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.messageLabel;
  if ( !gameObject )
    goto LABEL_62;
  v35 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  GameObjectExtensions__SetLocalPositionY(v35, flt_319EBC8[v30 == 8], 0LL);
  copyLabel = this->fields.copyLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10370/*"PARTY_ORGANIZATION_REMOVE_SELECT_COPY"*/, 0LL);
  if ( !copyLabel )
    goto LABEL_62;
  UILabel__set_text(copyLabel, (System_String_o *)gameObject, 0LL);
  removeAllLabel = this->fields.removeAllLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10374/*"PARTY_ORGANIZATION_REMOVE_SELECT_REMOVE_ALL"*/, 0LL);
  if ( !removeAllLabel )
    goto LABEL_62;
  UILabel__set_text(removeAllLabel, (System_String_o *)gameObject, 0LL);
  initAllLabel = this->fields.initAllLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10371/*"PARTY_ORGANIZATION_REMOVE_SELECT_INIT_ALL"*/, 0LL);
  if ( !initAllLabel )
    goto LABEL_62;
  UILabel__set_text(initAllLabel, (System_String_o *)gameObject, 0LL);
  removeEquipLabel = this->fields.removeEquipLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10375/*"PARTY_ORGANIZATION_REMOVE_SELECT_REMOVE_EQUIP"*/, 0LL);
  if ( !removeEquipLabel )
    goto LABEL_62;
  UILabel__set_text(removeEquipLabel, (System_String_o *)gameObject, 0LL);
  changeNameLabel = this->fields.changeNameLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10369/*"PARTY_ORGANIZATION_REMOVE_SELECT_CHANGE_NAME"*/, 0LL);
  if ( !changeNameLabel )
    goto LABEL_62;
  UILabel__set_text(changeNameLabel, (System_String_o *)gameObject, 0LL);
  cancelLabel = this->fields.cancelLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10368/*"PARTY_ORGANIZATION_REMOVE_SELECT_CANCEL"*/, 0LL);
  if ( !cancelLabel )
    goto LABEL_62;
  UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0LL);
  copyButton = this->fields.copyButton;
  if ( v30 == 8
    && isEnableCopy
    && (gameObject = (UnityEngine_GameObject_o *)PartyListViewItem__IsDeckEmpty(partyItem, 0LL),
        ((unsigned __int8)gameObject & 1) == 0) )
  {
    v27 = 0LL;
    if ( !copyButton )
      goto LABEL_62;
  }
  else
  {
    v27 = (System_String_o *)(&dword_0 + 3);
    if ( !copyButton )
      goto LABEL_62;
  }
  ((void (__fastcall *)(struct UICommonButton_o *, System_String_o *, __int64, Il2CppMethodPointer))copyButton->klass->vtable._14_SetState.method)(
    copyButton,
    v27,
    1LL,
    copyButton->klass->vtable._15_OnPress.methodPtr);
  removeAllButton = this->fields.removeAllButton;
  gameObject = (UnityEngine_GameObject_o *)PartyListViewItem__IsDeckEmpty(partyItem, 0LL);
  if ( !removeAllButton )
    goto LABEL_62;
  v44 = isEnableRemoveAll ? 0 : 3;
  v45 = ((unsigned __int8)gameObject & 1) != 0 ? v44 : 0LL;
  gameObject = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(struct UICommonButton_o *, __int64, __int64, Il2CppMethodPointer))removeAllButton->klass->vtable._14_SetState.method)(
                                             removeAllButton,
                                             v45,
                                             1LL,
                                             removeAllButton->klass->vtable._15_OnPress.methodPtr);
  initAllButton = this->fields.initAllButton;
  if ( v30 == 8
    && (gameObject = (UnityEngine_GameObject_o *)PartyListViewItem__IsDeckInit(partyItem, 0LL),
        ((unsigned __int8)gameObject & 1) == 0) )
  {
    v27 = 0LL;
    if ( !initAllButton )
      goto LABEL_62;
  }
  else
  {
    v27 = (System_String_o *)(&dword_0 + 3);
    if ( !initAllButton )
      goto LABEL_62;
  }
  ((void (__fastcall *)(struct UICommonButton_o *, System_String_o *, __int64, Il2CppMethodPointer))initAllButton->klass->vtable._14_SetState.method)(
    initAllButton,
    v27,
    1LL,
    initAllButton->klass->vtable._15_OnPress.methodPtr);
  removeEquipButton = this->fields.removeEquipButton;
  gameObject = (UnityEngine_GameObject_o *)PartyListViewItem__IsEquipEmpty(partyItem, 0LL);
  if ( !removeEquipButton
    || (!isEnableRemoveEquip ? (v48 = 3) : (v48 = 0),
        ((unsigned __int8)gameObject & 1) == 0 ? (v49 = 0LL) : (v49 = v48),
        (((void (__fastcall *)(struct UICommonButton_o *, __int64, __int64, Il2CppMethodPointer))removeEquipButton->klass->vtable._14_SetState.method)(
           removeEquipButton,
           v49,
           1LL,
           removeEquipButton->klass->vtable._15_OnPress.methodPtr),
         (gameObject = (UnityEngine_GameObject_o *)this->fields.changeNameButton) == 0LL)
     || (((void (*)(void))gameObject->klass[1]._1.implementedInterfaces)(),
         (gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton) == 0LL)) )
  {
LABEL_62:
    sub_B2C434(gameObject, v27);
  }
  ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))gameObject->klass[1]._1.implementedInterfaces)(
    gameObject,
    0LL,
    1LL,
    gameObject->klass[1]._1.interfaceOffsets);
  this->fields.state = 1;
  v50 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v50, (Il2CppObject *)this, Method_PartyOrganizationRemoveSelectMenu_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v50, 0, 0LL);
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

  if ( (byte_4184FB5 & 1) == 0 )
  {
    sub_B2C35C(&PartyOrganizationRemoveSelectMenu_CallbackFunc_TypeInfo, value);
    byte_4184FB5 = 1;
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
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationRemoveSelectMenu_o *)sub_B2C728(v8);
  PartyOrganizationRemoveSelectMenu__remove_callbackFunc(v11, v12, v13);
}


System_String_o *__fastcall PartyOrganizationRemoveSelectMenu__get_closeBtnPath(
        PartyOrganizationRemoveSelectMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_4184FC0 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_2741/*"BaseWindow/CancelButton"*/, method);
    byte_4184FC0 = 1;
  }
  return (System_String_o *)StringLiteral_2741/*"BaseWindow/CancelButton"*/;
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

  if ( (byte_4184FB6 & 1) == 0 )
  {
    sub_B2C35C(&PartyOrganizationRemoveSelectMenu_CallbackFunc_TypeInfo, value);
    byte_4184FB6 = 1;
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
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationRemoveSelectMenu_o *)sub_B2C728(v8);
  PartyOrganizationRemoveSelectMenu__Init(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationRemoveSelectMenu_CallbackFunc___ctor(
        PartyOrganizationRemoveSelectMenu_CallbackFunc_o *this,
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
  if ( (byte_4185293 & 1) == 0 )
  {
    sub_B2C35C(&PartyOrganizationRemoveSelectMenu_ResultKind_TypeInfo, *(_QWORD *)&result);
    byte_4185293 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(PartyOrganizationRemoveSelectMenu_ResultKind_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_B2C300(this, v9, callback, object);
}


void __fastcall PartyOrganizationRemoveSelectMenu_CallbackFunc__EndInvoke(
        PartyOrganizationRemoveSelectMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationRemoveSelectMenu_CallbackFunc__Invoke(
        PartyOrganizationRemoveSelectMenu_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v6; // x24
  PartyOrganizationRemoveSelectMenu_CallbackFunc_o **v7; // x25
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
  PartyOrganizationRemoveSelectMenu_CallbackFunc_o *v20; // x8
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
  PartyOrganizationRemoveSelectMenu_CallbackFunc_o *v34; // [xsp+8h] [xbp-48h] BYREF

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
    v7 = (PartyOrganizationRemoveSelectMenu_CallbackFunc_o **)(v4 + 32);
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