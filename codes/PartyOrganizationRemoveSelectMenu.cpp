void PartyOrganizationRemoveSelectMenu___ctor(PartyOrganizationRemoveSelectMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4D28291 & 1) == 0 )
  {
    sub_1C94098(&BaseDialog_TypeInfo);
    byte_4D28291 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void PartyOrganizationRemoveSelectMenu__Callback(
        PartyOrganizationRemoveSelectMenu_o *this,
        int32_t result,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_callbackFunc; // x0
  struct PartyOrganizationRemoveSelectMenu_CallbackFunc_o *v9; // x20
  struct PartyOrganizationRemoveSelectMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_1C9403C(p_callbackFunc, 0, (int32_t)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))v9->fields.invoke_impl)(
      v9->fields.method_code,
      (unsigned int)result,
      v9->fields.method);
  }
}


void PartyOrganizationRemoveSelectMenu__Close(PartyOrganizationRemoveSelectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyOrganizationRemoveSelectMenu__Close_35005068(this, 0, v2);
}


void PartyOrganizationRemoveSelectMenu__Close_35005068(
        PartyOrganizationRemoveSelectMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  System_Action_o *v10; // x20

  if ( (byte_4D28289 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_PartyOrganizationRemoveSelectMenu_EndClose__);
    byte_4D28289 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v10 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_PartyOrganizationRemoveSelectMenu_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0);
}


void PartyOrganizationRemoveSelectMenu__EndClose(PartyOrganizationRemoveSelectMenu_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7
  GrandQuestFolderBoardItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v10; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  PartyOrganizationRemoveSelectMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_1C9403C(p_closeCallbackFunc, 0, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(intptr_t, intptr_t))v10->fields.invoke_impl)(v10->fields.method_code, v10->fields.method);
  }
}


void PartyOrganizationRemoveSelectMenu__EndOpen(PartyOrganizationRemoveSelectMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void PartyOrganizationRemoveSelectMenu__Init(PartyOrganizationRemoveSelectMenu_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_4D28287 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D28287 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_13;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.nameLabel;
  if ( !titleLabel )
    goto LABEL_13;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel )
    goto LABEL_13;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.copyLabel;
  if ( !titleLabel )
    goto LABEL_13;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.removeAllLabel;
  if ( !titleLabel )
    goto LABEL_13;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.initAllLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (titleLabel = this->fields.removeEquipLabel) == 0)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (titleLabel = this->fields.changeNameLabel) == 0)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (titleLabel = this->fields.cancelLabel) == 0) )
  {
LABEL_13:
    sub_1C942F0(titleLabel, method);
  }
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void PartyOrganizationRemoveSelectMenu__OnChangeName(
        PartyOrganizationRemoveSelectMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4D2828E & 1) == 0 )
  {
    sub_1C94098(&Method_PartyOrganizationRemoveSelectMenu_OnChangeName__);
    byte_4D2828E = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationRemoveSelectMenu_OnChangeName__;
    if ( (*((_BYTE *)Method_PartyOrganizationRemoveSelectMenu_OnChangeName__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C940B0(Method_PartyOrganizationRemoveSelectMenu_OnChangeName__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    PartyOrganizationRemoveSelectMenu__Callback(this, 5, v5);
  }
}


void PartyOrganizationRemoveSelectMenu__OnClickCancel(
        PartyOrganizationRemoveSelectMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4D2828F & 1) == 0 )
  {
    sub_1C94098(&Method_PartyOrganizationRemoveSelectMenu_OnClickCancel__);
    byte_4D2828F = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationRemoveSelectMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_PartyOrganizationRemoveSelectMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C940B0(Method_PartyOrganizationRemoveSelectMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    PartyOrganizationRemoveSelectMenu__Callback(this, 0, v5);
  }
}


void PartyOrganizationRemoveSelectMenu__OnClickCopy(
        PartyOrganizationRemoveSelectMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4D2828A & 1) == 0 )
  {
    sub_1C94098(&Method_PartyOrganizationRemoveSelectMenu_OnClickCopy__);
    byte_4D2828A = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationRemoveSelectMenu_OnClickCopy__;
    if ( (*((_BYTE *)Method_PartyOrganizationRemoveSelectMenu_OnClickCopy__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C940B0(Method_PartyOrganizationRemoveSelectMenu_OnClickCopy__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    PartyOrganizationRemoveSelectMenu__Callback(this, 1, v5);
  }
}


void PartyOrganizationRemoveSelectMenu__OnClickInitAll(
        PartyOrganizationRemoveSelectMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4D2828C & 1) == 0 )
  {
    sub_1C94098(&Method_PartyOrganizationRemoveSelectMenu_OnClickInitAll__);
    byte_4D2828C = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationRemoveSelectMenu_OnClickInitAll__;
    if ( (*((_BYTE *)Method_PartyOrganizationRemoveSelectMenu_OnClickInitAll__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C940B0(Method_PartyOrganizationRemoveSelectMenu_OnClickInitAll__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    PartyOrganizationRemoveSelectMenu__Callback(this, 3, v5);
  }
}


void PartyOrganizationRemoveSelectMenu__OnClickRemoveAll(
        PartyOrganizationRemoveSelectMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4D2828B & 1) == 0 )
  {
    sub_1C94098(&Method_PartyOrganizationRemoveSelectMenu_OnClickRemoveAll__);
    byte_4D2828B = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationRemoveSelectMenu_OnClickRemoveAll__;
    if ( (*((_BYTE *)Method_PartyOrganizationRemoveSelectMenu_OnClickRemoveAll__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C940B0(Method_PartyOrganizationRemoveSelectMenu_OnClickRemoveAll__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    PartyOrganizationRemoveSelectMenu__Callback(this, 2, v5);
  }
}


void PartyOrganizationRemoveSelectMenu__OnClickRemoveEquip(
        PartyOrganizationRemoveSelectMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4D2828D & 1) == 0 )
  {
    sub_1C94098(&Method_PartyOrganizationRemoveSelectMenu_OnClickRemoveEquip__);
    byte_4D2828D = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationRemoveSelectMenu_OnClickRemoveEquip__;
    if ( (*((_BYTE *)Method_PartyOrganizationRemoveSelectMenu_OnClickRemoveEquip__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C940B0(Method_PartyOrganizationRemoveSelectMenu_OnClickRemoveEquip__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    PartyOrganizationRemoveSelectMenu__Callback(this, 4, v5);
  }
}


// local variable allocation has failed, the output may be wrong!
void PartyOrganizationRemoveSelectMenu__Open(
        PartyOrganizationRemoveSelectMenu_o *this,
        PartyListViewItem_o *partyItem,
        bool isEnableCopy,
        PartyOrganizationRemoveSelectMenu_CallbackFunc_o *callback,
        bool isEnableRemoveAll,
        bool isEnableRemoveEquip,
        const MethodInfo *method)
{
  System_String_o *v7; // x7
  int32_t state; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *v16; // x1
  int32_t menuKind; // w25
  UILabel_o *titleLabel; // x24
  unsigned int v19; // w25
  UILabel_o *nameLabel; // x24
  struct PartyOrganizationRemoveSelectMenu_CallbackFunc_o **p_callbackFunc; // x19
  System_String_o *v22; // x0
  UILabel_o *messageLabel; // x24
  UnityEngine_GameObject_o *v24; // x0
  float v25; // s0
  UILabel_o *copyLabel; // x24
  UILabel_o *removeAllLabel; // x24
  UILabel_o *initAllLabel; // x24
  UILabel_o *removeEquipLabel; // x24
  UILabel_o *changeNameLabel; // x24
  UILabel_o *cancelLabel; // x24
  struct UICommonButton_o *copyButton; // x8
  struct UICommonButton_o *v33; // x24
  struct UICommonButton_o *removeAllButton; // x24
  unsigned int v35; // w8
  __int64 v36; // x1
  struct UICommonButton_o *initAllButton; // x23
  struct UICommonButton_o *removeEquipButton; // x23
  unsigned int v39; // w8
  __int64 v40; // x1
  __int64 v41; // x1
  System_Action_o *v42; // x20

  if ( (byte_4D28288 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&Method_PartyOrganizationRemoveSelectMenu_EndOpen__);
    sub_1C94098(&StringLiteral_10301/*"PARTY_ORGANIZATION_REMOVE_SELECT_CANCEL"*/);
    sub_1C94098(&StringLiteral_10304/*"PARTY_ORGANIZATION_REMOVE_SELECT_INIT_ALL"*/);
    sub_1C94098(&StringLiteral_10307/*"PARTY_ORGANIZATION_REMOVE_SELECT_REMOVE_ALL"*/);
    sub_1C94098(&StringLiteral_10309/*"PARTY_ORGANIZATION_REMOVE_SELECT_TITLE"*/);
    sub_1C94098(&StringLiteral_10302/*"PARTY_ORGANIZATION_REMOVE_SELECT_CHANGE_NAME"*/);
    sub_1C94098(&StringLiteral_1/*""*/);
    sub_1C94098(&StringLiteral_10305/*"PARTY_ORGANIZATION_REMOVE_SELECT_MESSAGE"*/);
    sub_1C94098(&StringLiteral_10308/*"PARTY_ORGANIZATION_REMOVE_SELECT_REMOVE_EQUIP"*/);
    sub_1C94098(&StringLiteral_10303/*"PARTY_ORGANIZATION_REMOVE_SELECT_COPY"*/);
    sub_1C94098(&StringLiteral_10306/*"PARTY_ORGANIZATION_REMOVE_SELECT_NAME"*/);
    byte_4D28288 = 1;
  }
  state = this->fields.state;
  switch ( state )
  {
    case 4:
LABEL_6:
      this->fields.callbackFunc = callback;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
        (int32_t)callback,
        isEnableCopy,
        (int32_t)callback,
        (System_String_o *)isEnableRemoveAll,
        isEnableRemoveEquip,
        (int64_t)method,
        v7);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !gameObject )
        goto LABEL_67;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
      if ( !partyItem )
        goto LABEL_67;
      menuKind = partyItem->fields.menuKind;
      titleLabel = this->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10309/*"PARTY_ORGANIZATION_REMOVE_SELECT_TITLE"*/, 0);
      if ( !titleLabel )
        goto LABEL_67;
      v19 = menuKind & 0xFFFFFFF7;
      UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0);
      nameLabel = this->fields.nameLabel;
      if ( v19 )
      {
        v16 = (System_String_o *)StringLiteral_1/*""*/;
        if ( !nameLabel )
          goto LABEL_67;
      }
      else
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v22 = LocalizationManager__Get((System_String_o *)StringLiteral_10306/*"PARTY_ORGANIZATION_REMOVE_SELECT_NAME"*/, 0);
        gameObject = (UnityEngine_GameObject_o *)System_String__Format(
                                                   v22,
                                                   (Il2CppObject *)partyItem->fields.deckName,
                                                   0);
        v16 = (System_String_o *)gameObject;
        if ( !nameLabel )
          goto LABEL_67;
      }
      UILabel__set_text(nameLabel, v16, 0);
      messageLabel = this->fields.messageLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10305/*"PARTY_ORGANIZATION_REMOVE_SELECT_MESSAGE"*/, 0);
      if ( !messageLabel )
        goto LABEL_67;
      UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0);
      gameObject = (UnityEngine_GameObject_o *)this->fields.messageLabel;
      if ( !gameObject )
        goto LABEL_67;
      v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      v25 = 117.5;
      if ( !v19 )
        v25 = 100.0;
      GameObjectExtensions__SetLocalPositionY(v24, v25, 0);
      copyLabel = this->fields.copyLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10303/*"PARTY_ORGANIZATION_REMOVE_SELECT_COPY"*/, 0);
      if ( !copyLabel )
        goto LABEL_67;
      UILabel__set_text(copyLabel, (System_String_o *)gameObject, 0);
      removeAllLabel = this->fields.removeAllLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10307/*"PARTY_ORGANIZATION_REMOVE_SELECT_REMOVE_ALL"*/, 0);
      if ( !removeAllLabel )
        goto LABEL_67;
      UILabel__set_text(removeAllLabel, (System_String_o *)gameObject, 0);
      initAllLabel = this->fields.initAllLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10304/*"PARTY_ORGANIZATION_REMOVE_SELECT_INIT_ALL"*/, 0);
      if ( !initAllLabel )
        goto LABEL_67;
      UILabel__set_text(initAllLabel, (System_String_o *)gameObject, 0);
      removeEquipLabel = this->fields.removeEquipLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10308/*"PARTY_ORGANIZATION_REMOVE_SELECT_REMOVE_EQUIP"*/, 0);
      if ( !removeEquipLabel )
        goto LABEL_67;
      UILabel__set_text(removeEquipLabel, (System_String_o *)gameObject, 0);
      changeNameLabel = this->fields.changeNameLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10302/*"PARTY_ORGANIZATION_REMOVE_SELECT_CHANGE_NAME"*/, 0);
      if ( !changeNameLabel )
        goto LABEL_67;
      UILabel__set_text(changeNameLabel, (System_String_o *)gameObject, 0);
      cancelLabel = this->fields.cancelLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10301/*"PARTY_ORGANIZATION_REMOVE_SELECT_CANCEL"*/, 0);
      if ( !cancelLabel )
        goto LABEL_67;
      UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0);
      copyButton = this->fields.copyButton;
      if ( v19 )
        v33 = 0;
      else
        v33 = this->fields.copyButton;
      if ( !v19 && isEnableCopy )
      {
        gameObject = (UnityEngine_GameObject_o *)PartyListViewItem__IsDeckEmpty(partyItem, 0);
        if ( ((unsigned __int8)gameObject & 1) == 0 )
        {
          v16 = 0;
          if ( !v33 )
            goto LABEL_67;
          goto LABEL_43;
        }
        copyButton = v33;
      }
      v16 = (System_String_o *)(&dword_0 + 3);
      v33 = copyButton;
      if ( !copyButton )
        goto LABEL_67;
LABEL_43:
      ((void (__fastcall *)(struct UICommonButton_o *, System_String_o *, __int64, const MethodInfo *))v33->klass->vtable._14_SetState.methodPtr)(
        v33,
        v16,
        1,
        v33->klass->vtable._14_SetState.method);
      removeAllButton = this->fields.removeAllButton;
      gameObject = (UnityEngine_GameObject_o *)PartyListViewItem__IsDeckEmpty(partyItem, 0);
      if ( !removeAllButton )
        goto LABEL_67;
      if ( isEnableRemoveAll )
        v35 = 0;
      else
        v35 = 3;
      if ( ((unsigned __int8)gameObject & 1) != 0 )
        v36 = v35;
      else
        v36 = 0;
      gameObject = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(struct UICommonButton_o *, __int64, __int64, const MethodInfo *))removeAllButton->klass->vtable._14_SetState.methodPtr)(
                                                 removeAllButton,
                                                 v36,
                                                 1,
                                                 removeAllButton->klass->vtable._14_SetState.method);
      initAllButton = this->fields.initAllButton;
      if ( v19
        || (gameObject = (UnityEngine_GameObject_o *)PartyListViewItem__IsDeckInit(partyItem, 0),
            ((unsigned __int8)gameObject & 1) != 0) )
      {
        v16 = (System_String_o *)(&dword_0 + 3);
        if ( !initAllButton )
          goto LABEL_67;
      }
      else
      {
        v16 = 0;
        if ( !initAllButton )
          goto LABEL_67;
      }
      ((void (__fastcall *)(struct UICommonButton_o *, System_String_o *, __int64, const MethodInfo *))initAllButton->klass->vtable._14_SetState.methodPtr)(
        initAllButton,
        v16,
        1,
        initAllButton->klass->vtable._14_SetState.method);
      removeEquipButton = this->fields.removeEquipButton;
      gameObject = (UnityEngine_GameObject_o *)PartyListViewItem__IsEquipEmpty(partyItem, 0);
      if ( removeEquipButton )
      {
        v39 = isEnableRemoveEquip ? 0 : 3;
        v40 = ((unsigned __int8)gameObject & 1) != 0 ? v39 : 0LL;
        ((void (__fastcall *)(struct UICommonButton_o *, __int64, __int64, const MethodInfo *))removeEquipButton->klass->vtable._14_SetState.methodPtr)(
          removeEquipButton,
          v40,
          1,
          removeEquipButton->klass->vtable._14_SetState.method);
        gameObject = (UnityEngine_GameObject_o *)this->fields.changeNameButton;
        if ( gameObject )
        {
          v41 = v19 == 0 && isEnableCopy ? 0LL : 3LL;
          ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, __int64, Il2CppClass **))gameObject->klass[1]._1.nestedTypes)(
            gameObject,
            v41,
            1,
            gameObject->klass[1]._1.implementedInterfaces);
          gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
          if ( gameObject )
          {
            ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, __int64, Il2CppClass **))gameObject->klass[1]._1.nestedTypes)(
              gameObject,
              0,
              1,
              gameObject->klass[1]._1.implementedInterfaces);
            this->fields.state = 1;
            v42 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
            System_Action___ctor(v42, (Il2CppObject *)this, Method_PartyOrganizationRemoveSelectMenu_EndOpen__, 0);
            BaseDialog__Open((BaseDialog_o *)this, v42, 0, 0, 0);
            return;
          }
        }
      }
LABEL_67:
      sub_1C942F0(gameObject, v16);
    case 3:
      this->fields.callbackFunc = callback;
      p_callbackFunc = &this->fields.callbackFunc;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)p_callbackFunc,
        (int32_t)callback,
        isEnableCopy,
        (int32_t)callback,
        (System_String_o *)isEnableRemoveAll,
        isEnableRemoveEquip,
        (int64_t)method,
        v7);
      *((_DWORD *)p_callbackFunc - 2) = 2;
      break;
    case 0:
      goto LABEL_6;
  }
}


void PartyOrganizationRemoveSelectMenu__add_callbackFunc(
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

  if ( (byte_4D28285 & 1) == 0 )
  {
    sub_1C94098(&PartyOrganizationRemoveSelectMenu_CallbackFunc_TypeInfo);
    byte_4D28285 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (PartyOrganizationRemoveSelectMenu_CallbackFunc_c *)v8->klass != PartyOrganizationRemoveSelectMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1CEFE6C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationRemoveSelectMenu_o *)sub_1C9468C(v8);
  PartyOrganizationRemoveSelectMenu__remove_callbackFunc(v11, v12, v13);
}


System_String_o *PartyOrganizationRemoveSelectMenu__get_closeBtnPath(
        PartyOrganizationRemoveSelectMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D28290 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_3073/*"BaseWindow/CancelButton"*/);
    byte_4D28290 = 1;
  }
  return (System_String_o *)StringLiteral_3073/*"BaseWindow/CancelButton"*/;
}


bool PartyOrganizationRemoveSelectMenu__isStateSelected(
        PartyOrganizationRemoveSelectMenu_o *this,
        const MethodInfo *method)
{
  return this->fields.state == 3;
}


void PartyOrganizationRemoveSelectMenu__remove_callbackFunc(
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

  if ( (byte_4D28286 & 1) == 0 )
  {
    sub_1C94098(&PartyOrganizationRemoveSelectMenu_CallbackFunc_TypeInfo);
    byte_4D28286 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (PartyOrganizationRemoveSelectMenu_CallbackFunc_c *)v8->klass != PartyOrganizationRemoveSelectMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1CEFE6C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationRemoveSelectMenu_o *)sub_1C9468C(v8);
  PartyOrganizationRemoveSelectMenu__Init(v11, v12);
}


void PartyOrganizationRemoveSelectMenu_CallbackFunc___ctor(
        PartyOrganizationRemoveSelectMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C94158(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C9430C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C941C0(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1AC2E08;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AC2DC0;
}


System_IAsyncResult_o *PartyOrganizationRemoveSelectMenu_CallbackFunc__BeginInvoke(
        PartyOrganizationRemoveSelectMenu_CallbackFunc_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-34h] BYREF

  v10 = result;
  if ( (byte_4D28292 & 1) == 0 )
  {
    sub_1C94098(&PartyOrganizationRemoveSelectMenu_ResultKind_TypeInfo);
    byte_4D28292 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(PartyOrganizationRemoveSelectMenu_ResultKind_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_1C9404C(this, v9, callback, object);
}


void PartyOrganizationRemoveSelectMenu_CallbackFunc__EndInvoke(
        PartyOrganizationRemoveSelectMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C94050(result, 0, method);
}


void PartyOrganizationRemoveSelectMenu_CallbackFunc__Invoke(
        PartyOrganizationRemoveSelectMenu_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    this->fields.method);
}