void PartyOrganizationRemoveSelectMenu___ctor(PartyOrganizationRemoveSelectMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4C3EAB8 & 1) == 0 )
  {
    sub_1C37058(&BaseDialog_TypeInfo);
    byte_4C3EAB8 = 1;
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
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_callbackFunc; // x0
  struct PartyOrganizationRemoveSelectMenu_CallbackFunc_o *v5; // x20
  struct PartyOrganizationRemoveSelectMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
  v5 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_1C36FFC(p_callbackFunc, 0, (int32_t)method, v3);
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))v5->fields.invoke_impl)(
      v5->fields.method_code,
      (unsigned int)result,
      v5->fields.method);
  }
}


void PartyOrganizationRemoveSelectMenu__Close(PartyOrganizationRemoveSelectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyOrganizationRemoveSelectMenu__Close_34332028(this, 0, v2);
}


void PartyOrganizationRemoveSelectMenu__Close_34332028(
        PartyOrganizationRemoveSelectMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Action_o *v6; // x20

  if ( (byte_4C3EAB0 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_PartyOrganizationRemoveSelectMenu_EndClose__);
    byte_4C3EAB0 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, (int32_t)callback, (int32_t)method, v3);
  this->fields.state = 4;
  v6 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_PartyOrganizationRemoveSelectMenu_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0);
}


void PartyOrganizationRemoveSelectMenu__EndClose(PartyOrganizationRemoveSelectMenu_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  CGThumbnailListItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v6; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  PartyOrganizationRemoveSelectMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (CGThumbnailListItem_o *)&this->fields.closeCallbackFunc;
  v6 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_1C36FFC(p_closeCallbackFunc, 0, v3, v4);
    ((void (__fastcall *)(intptr_t, intptr_t))v6->fields.invoke_impl)(v6->fields.method_code, v6->fields.method);
  }
}


void PartyOrganizationRemoveSelectMenu__EndOpen(PartyOrganizationRemoveSelectMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void PartyOrganizationRemoveSelectMenu__Init(PartyOrganizationRemoveSelectMenu_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_4C3EAAE & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C3EAAE = 1;
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
    sub_1C372B4(titleLabel);
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

  if ( (byte_4C3EAB5 & 1) == 0 )
  {
    sub_1C37058(&Method_PartyOrganizationRemoveSelectMenu_OnChangeName__);
    byte_4C3EAB5 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationRemoveSelectMenu_OnChangeName__;
    if ( (*((_BYTE *)Method_PartyOrganizationRemoveSelectMenu_OnChangeName__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C37070(Method_PartyOrganizationRemoveSelectMenu_OnChangeName__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
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

  if ( (byte_4C3EAB6 & 1) == 0 )
  {
    sub_1C37058(&Method_PartyOrganizationRemoveSelectMenu_OnClickCancel__);
    byte_4C3EAB6 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationRemoveSelectMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_PartyOrganizationRemoveSelectMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C37070(Method_PartyOrganizationRemoveSelectMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
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

  if ( (byte_4C3EAB1 & 1) == 0 )
  {
    sub_1C37058(&Method_PartyOrganizationRemoveSelectMenu_OnClickCopy__);
    byte_4C3EAB1 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationRemoveSelectMenu_OnClickCopy__;
    if ( (*((_BYTE *)Method_PartyOrganizationRemoveSelectMenu_OnClickCopy__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C37070(Method_PartyOrganizationRemoveSelectMenu_OnClickCopy__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
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

  if ( (byte_4C3EAB3 & 1) == 0 )
  {
    sub_1C37058(&Method_PartyOrganizationRemoveSelectMenu_OnClickInitAll__);
    byte_4C3EAB3 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationRemoveSelectMenu_OnClickInitAll__;
    if ( (*((_BYTE *)Method_PartyOrganizationRemoveSelectMenu_OnClickInitAll__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C37070(Method_PartyOrganizationRemoveSelectMenu_OnClickInitAll__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
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

  if ( (byte_4C3EAB2 & 1) == 0 )
  {
    sub_1C37058(&Method_PartyOrganizationRemoveSelectMenu_OnClickRemoveAll__);
    byte_4C3EAB2 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationRemoveSelectMenu_OnClickRemoveAll__;
    if ( (*((_BYTE *)Method_PartyOrganizationRemoveSelectMenu_OnClickRemoveAll__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C37070(Method_PartyOrganizationRemoveSelectMenu_OnClickRemoveAll__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
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

  if ( (byte_4C3EAB4 & 1) == 0 )
  {
    sub_1C37058(&Method_PartyOrganizationRemoveSelectMenu_OnClickRemoveEquip__);
    byte_4C3EAB4 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationRemoveSelectMenu_OnClickRemoveEquip__;
    if ( (*((_BYTE *)Method_PartyOrganizationRemoveSelectMenu_OnClickRemoveEquip__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C37070(Method_PartyOrganizationRemoveSelectMenu_OnClickRemoveEquip__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    PartyOrganizationRemoveSelectMenu__Callback(this, 4, v5);
  }
}


void PartyOrganizationRemoveSelectMenu__Open(
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
  int32_t menuKind; // w25
  UILabel_o *titleLabel; // x24
  unsigned int v17; // w25
  UILabel_o *nameLabel; // x24
  System_String_o *v19; // x1
  struct PartyOrganizationRemoveSelectMenu_CallbackFunc_o **p_callbackFunc; // x19
  System_String_o *v21; // x0
  UILabel_o *messageLabel; // x24
  UnityEngine_GameObject_o *v23; // x0
  float v24; // s0
  UILabel_o *copyLabel; // x24
  UILabel_o *removeAllLabel; // x24
  UILabel_o *initAllLabel; // x24
  UILabel_o *removeEquipLabel; // x24
  UILabel_o *changeNameLabel; // x24
  UILabel_o *cancelLabel; // x24
  struct UICommonButton_o *copyButton; // x8
  struct UICommonButton_o *v32; // x24
  __int64 v33; // x1
  struct UICommonButton_o *removeAllButton; // x24
  unsigned int v35; // w8
  __int64 v36; // x1
  struct UICommonButton_o *initAllButton; // x23
  __int64 v38; // x1
  struct UICommonButton_o *removeEquipButton; // x23
  unsigned int v40; // w8
  __int64 v41; // x1
  __int64 v42; // x1
  System_Action_o *v43; // x20

  if ( (byte_4C3EAAF & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&Method_PartyOrganizationRemoveSelectMenu_EndOpen__);
    sub_1C37058(&StringLiteral_10270/*"PARTY_ORGANIZATION_REMOVE_SELECT_CANCEL"*/);
    sub_1C37058(&StringLiteral_10273/*"PARTY_ORGANIZATION_REMOVE_SELECT_INIT_ALL"*/);
    sub_1C37058(&StringLiteral_10276/*"PARTY_ORGANIZATION_REMOVE_SELECT_REMOVE_ALL"*/);
    sub_1C37058(&StringLiteral_10278/*"PARTY_ORGANIZATION_REMOVE_SELECT_TITLE"*/);
    sub_1C37058(&StringLiteral_10271/*"PARTY_ORGANIZATION_REMOVE_SELECT_CHANGE_NAME"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    sub_1C37058(&StringLiteral_10274/*"PARTY_ORGANIZATION_REMOVE_SELECT_MESSAGE"*/);
    sub_1C37058(&StringLiteral_10277/*"PARTY_ORGANIZATION_REMOVE_SELECT_REMOVE_EQUIP"*/);
    sub_1C37058(&StringLiteral_10272/*"PARTY_ORGANIZATION_REMOVE_SELECT_COPY"*/);
    sub_1C37058(&StringLiteral_10275/*"PARTY_ORGANIZATION_REMOVE_SELECT_NAME"*/);
    byte_4C3EAAF = 1;
  }
  state = this->fields.state;
  switch ( state )
  {
    case 4:
LABEL_6:
      this->fields.callbackFunc = callback;
      sub_1C36FFC(
        (CGThumbnailListItem_o *)&this->fields.callbackFunc,
        (int32_t)callback,
        isEnableCopy,
        (const MethodInfo *)callback);
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
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10278/*"PARTY_ORGANIZATION_REMOVE_SELECT_TITLE"*/, 0);
      if ( !titleLabel )
        goto LABEL_67;
      v17 = menuKind & 0xFFFFFFF7;
      UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0);
      nameLabel = this->fields.nameLabel;
      if ( v17 )
      {
        v19 = (System_String_o *)StringLiteral_1/*""*/;
        if ( !nameLabel )
          goto LABEL_67;
      }
      else
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v21 = LocalizationManager__Get((System_String_o *)StringLiteral_10275/*"PARTY_ORGANIZATION_REMOVE_SELECT_NAME"*/, 0);
        gameObject = (UnityEngine_GameObject_o *)System_String__Format(
                                                   v21,
                                                   (Il2CppObject *)partyItem->fields.deckName,
                                                   0);
        v19 = (System_String_o *)gameObject;
        if ( !nameLabel )
          goto LABEL_67;
      }
      UILabel__set_text(nameLabel, v19, 0);
      messageLabel = this->fields.messageLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10274/*"PARTY_ORGANIZATION_REMOVE_SELECT_MESSAGE"*/, 0);
      if ( !messageLabel )
        goto LABEL_67;
      UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0);
      gameObject = (UnityEngine_GameObject_o *)this->fields.messageLabel;
      if ( !gameObject )
        goto LABEL_67;
      v23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      v24 = 117.5;
      if ( !v17 )
        v24 = 100.0;
      GameObjectExtensions__SetLocalPositionY(v23, v24, 0);
      copyLabel = this->fields.copyLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10272/*"PARTY_ORGANIZATION_REMOVE_SELECT_COPY"*/, 0);
      if ( !copyLabel )
        goto LABEL_67;
      UILabel__set_text(copyLabel, (System_String_o *)gameObject, 0);
      removeAllLabel = this->fields.removeAllLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10276/*"PARTY_ORGANIZATION_REMOVE_SELECT_REMOVE_ALL"*/, 0);
      if ( !removeAllLabel )
        goto LABEL_67;
      UILabel__set_text(removeAllLabel, (System_String_o *)gameObject, 0);
      initAllLabel = this->fields.initAllLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10273/*"PARTY_ORGANIZATION_REMOVE_SELECT_INIT_ALL"*/, 0);
      if ( !initAllLabel )
        goto LABEL_67;
      UILabel__set_text(initAllLabel, (System_String_o *)gameObject, 0);
      removeEquipLabel = this->fields.removeEquipLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10277/*"PARTY_ORGANIZATION_REMOVE_SELECT_REMOVE_EQUIP"*/, 0);
      if ( !removeEquipLabel )
        goto LABEL_67;
      UILabel__set_text(removeEquipLabel, (System_String_o *)gameObject, 0);
      changeNameLabel = this->fields.changeNameLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10271/*"PARTY_ORGANIZATION_REMOVE_SELECT_CHANGE_NAME"*/, 0);
      if ( !changeNameLabel )
        goto LABEL_67;
      UILabel__set_text(changeNameLabel, (System_String_o *)gameObject, 0);
      cancelLabel = this->fields.cancelLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10270/*"PARTY_ORGANIZATION_REMOVE_SELECT_CANCEL"*/, 0);
      if ( !cancelLabel )
        goto LABEL_67;
      UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0);
      copyButton = this->fields.copyButton;
      if ( v17 )
        v32 = 0;
      else
        v32 = this->fields.copyButton;
      if ( !v17 && isEnableCopy )
      {
        gameObject = (UnityEngine_GameObject_o *)PartyListViewItem__IsDeckEmpty(partyItem, 0);
        if ( ((unsigned __int8)gameObject & 1) == 0 )
        {
          v33 = 0;
          if ( !v32 )
            goto LABEL_67;
          goto LABEL_43;
        }
        copyButton = v32;
      }
      v33 = 3;
      v32 = copyButton;
      if ( !copyButton )
        goto LABEL_67;
LABEL_43:
      ((void (__fastcall *)(struct UICommonButton_o *, __int64, __int64, const MethodInfo *))v32->klass->vtable._14_SetState.methodPtr)(
        v32,
        v33,
        1,
        v32->klass->vtable._14_SetState.method);
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
      if ( v17
        || (gameObject = (UnityEngine_GameObject_o *)PartyListViewItem__IsDeckInit(partyItem, 0),
            ((unsigned __int8)gameObject & 1) != 0) )
      {
        v38 = 3;
        if ( !initAllButton )
          goto LABEL_67;
      }
      else
      {
        v38 = 0;
        if ( !initAllButton )
          goto LABEL_67;
      }
      ((void (__fastcall *)(struct UICommonButton_o *, __int64, __int64, const MethodInfo *))initAllButton->klass->vtable._14_SetState.methodPtr)(
        initAllButton,
        v38,
        1,
        initAllButton->klass->vtable._14_SetState.method);
      removeEquipButton = this->fields.removeEquipButton;
      gameObject = (UnityEngine_GameObject_o *)PartyListViewItem__IsEquipEmpty(partyItem, 0);
      if ( removeEquipButton )
      {
        v40 = isEnableRemoveEquip ? 0 : 3;
        v41 = ((unsigned __int8)gameObject & 1) != 0 ? v40 : 0LL;
        ((void (__fastcall *)(struct UICommonButton_o *, __int64, __int64, const MethodInfo *))removeEquipButton->klass->vtable._14_SetState.methodPtr)(
          removeEquipButton,
          v41,
          1,
          removeEquipButton->klass->vtable._14_SetState.method);
        gameObject = (UnityEngine_GameObject_o *)this->fields.changeNameButton;
        if ( gameObject )
        {
          v42 = v17 == 0 && isEnableCopy ? 0LL : 3LL;
          ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, __int64, Il2CppClass **))gameObject->klass[1]._1.nestedTypes)(
            gameObject,
            v42,
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
            v43 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
            System_Action___ctor(v43, (Il2CppObject *)this, Method_PartyOrganizationRemoveSelectMenu_EndOpen__, 0);
            BaseDialog__Open((BaseDialog_o *)this, v43, 0, 0, 0);
            return;
          }
        }
      }
LABEL_67:
      sub_1C372B4(gameObject);
    case 3:
      this->fields.callbackFunc = callback;
      p_callbackFunc = &this->fields.callbackFunc;
      sub_1C36FFC(
        (CGThumbnailListItem_o *)p_callbackFunc,
        (int32_t)callback,
        isEnableCopy,
        (const MethodInfo *)callback);
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

  if ( (byte_4C3EAAC & 1) == 0 )
  {
    sub_1C37058(&PartyOrganizationRemoveSelectMenu_CallbackFunc_TypeInfo);
    byte_4C3EAAC = 1;
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
    v9 = sub_1C712B0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationRemoveSelectMenu_o *)sub_1C37574(v8);
  PartyOrganizationRemoveSelectMenu__remove_callbackFunc(v11, v12, v13);
}


System_String_o *PartyOrganizationRemoveSelectMenu__get_closeBtnPath(
        PartyOrganizationRemoveSelectMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C3EAB7 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_3072/*"BaseWindow/CancelButton"*/);
    byte_4C3EAB7 = 1;
  }
  return (System_String_o *)StringLiteral_3072/*"BaseWindow/CancelButton"*/;
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

  if ( (byte_4C3EAAD & 1) == 0 )
  {
    sub_1C37058(&PartyOrganizationRemoveSelectMenu_CallbackFunc_TypeInfo);
    byte_4C3EAAD = 1;
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
    v9 = sub_1C712B0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationRemoveSelectMenu_o *)sub_1C37574(v8);
  PartyOrganizationRemoveSelectMenu__Init(v11, v12);
}


void PartyOrganizationRemoveSelectMenu_CallbackFunc___ctor(
        PartyOrganizationRemoveSelectMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C37118(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C372D0(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C37180(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A760D8;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A76090;
}


System_IAsyncResult_o *PartyOrganizationRemoveSelectMenu_CallbackFunc__BeginInvoke(
        PartyOrganizationRemoveSelectMenu_CallbackFunc_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  _QWORD v12[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v13; // [xsp+1Ch] [xbp-34h] BYREF

  v13 = result;
  if ( (byte_4C3EAB9 & 1) == 0 )
  {
    sub_1C37058(&PartyOrganizationRemoveSelectMenu_ResultKind_TypeInfo);
    byte_4C3EAB9 = 1;
  }
  v12[1] = 0;
  v12[0] = j_il2cpp_value_box_0(
             PartyOrganizationRemoveSelectMenu_ResultKind_TypeInfo,
             &v13,
             callback,
             object,
             method,
             v5,
             v6,
             v7);
  return (System_IAsyncResult_o *)sub_1C3700C(this, v12, callback, object);
}


void PartyOrganizationRemoveSelectMenu_CallbackFunc__EndInvoke(
        PartyOrganizationRemoveSelectMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C37010(result, 0, method);
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