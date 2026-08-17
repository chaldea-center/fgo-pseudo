void PartyOrganizationRemoveSelectMenu___ctor(PartyOrganizationRemoveSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596C0CB & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_596C0CB = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void PartyOrganizationRemoveSelectMenu__Callback(
        PartyOrganizationRemoveSelectMenu_o *this,
        int32_t result,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x0
  struct PartyOrganizationRemoveSelectMenu_CallbackFunc_o *v9; // x20
  struct PartyOrganizationRemoveSelectMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_2213A04(p_callbackFunc, 0, (System_String_o *)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))v9->fields.invoke_impl)(
      v9->fields.method_code,
      (unsigned int)result,
      v9->fields.method);
  }
}


void PartyOrganizationRemoveSelectMenu__Close(PartyOrganizationRemoveSelectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyOrganizationRemoveSelectMenu__Close_41073024(this, 0, v2);
}


void PartyOrganizationRemoveSelectMenu__Close_41073024(
        PartyOrganizationRemoveSelectMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_Action_c *v10; // x0
  System_Action_o *v11; // x20

  if ( (byte_596C0C3 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_PartyOrganizationRemoveSelectMenu_EndClose__);
    byte_596C0C3 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = System_Action_TypeInfo;
  this->fields.state = 4;
  v11 = (System_Action_o *)sub_2213CCC(v10);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_PartyOrganizationRemoveSelectMenu_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0);
}


void PartyOrganizationRemoveSelectMenu__EndClose(PartyOrganizationRemoveSelectMenu_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  MissionNaviTransitionBoardItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v10; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  PartyOrganizationRemoveSelectMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_2213A04(p_closeCallbackFunc, 0, v3, v4, v5, v6, v7, v8);
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

  if ( (byte_596C0C1 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596C0C1 = 1;
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
    sub_2213CDC(titleLabel, method);
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

  if ( (byte_596C0C8 & 1) == 0 )
  {
    sub_2213A60(&Method_PartyOrganizationRemoveSelectMenu_OnChangeName__);
    byte_596C0C8 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationRemoveSelectMenu_OnChangeName__;
    if ( (*((_BYTE *)Method_PartyOrganizationRemoveSelectMenu_OnChangeName__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_PartyOrganizationRemoveSelectMenu_OnChangeName__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
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

  if ( (byte_596C0C9 & 1) == 0 )
  {
    sub_2213A60(&Method_PartyOrganizationRemoveSelectMenu_OnClickCancel__);
    byte_596C0C9 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationRemoveSelectMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_PartyOrganizationRemoveSelectMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_PartyOrganizationRemoveSelectMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
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

  if ( (byte_596C0C4 & 1) == 0 )
  {
    sub_2213A60(&Method_PartyOrganizationRemoveSelectMenu_OnClickCopy__);
    byte_596C0C4 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationRemoveSelectMenu_OnClickCopy__;
    if ( (*((_BYTE *)Method_PartyOrganizationRemoveSelectMenu_OnClickCopy__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_PartyOrganizationRemoveSelectMenu_OnClickCopy__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
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

  if ( (byte_596C0C6 & 1) == 0 )
  {
    sub_2213A60(&Method_PartyOrganizationRemoveSelectMenu_OnClickInitAll__);
    byte_596C0C6 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationRemoveSelectMenu_OnClickInitAll__;
    if ( (*((_BYTE *)Method_PartyOrganizationRemoveSelectMenu_OnClickInitAll__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_PartyOrganizationRemoveSelectMenu_OnClickInitAll__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
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

  if ( (byte_596C0C5 & 1) == 0 )
  {
    sub_2213A60(&Method_PartyOrganizationRemoveSelectMenu_OnClickRemoveAll__);
    byte_596C0C5 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationRemoveSelectMenu_OnClickRemoveAll__;
    if ( (*((_BYTE *)Method_PartyOrganizationRemoveSelectMenu_OnClickRemoveAll__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_PartyOrganizationRemoveSelectMenu_OnClickRemoveAll__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
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

  if ( (byte_596C0C7 & 1) == 0 )
  {
    sub_2213A60(&Method_PartyOrganizationRemoveSelectMenu_OnClickRemoveEquip__);
    byte_596C0C7 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationRemoveSelectMenu_OnClickRemoveEquip__;
    if ( (*((_BYTE *)Method_PartyOrganizationRemoveSelectMenu_OnClickRemoveEquip__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_PartyOrganizationRemoveSelectMenu_OnClickRemoveEquip__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
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
  bool v7; // w7
  int32_t state; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *v16; // x1
  __int64 v17; // x2
  int32_t menuKind; // w25
  UILabel_o *titleLabel; // x24
  unsigned int v20; // w25
  __int64 v21; // x1
  __int64 v22; // x2
  UILabel_o *nameLabel; // x24
  struct PartyOrganizationRemoveSelectMenu_CallbackFunc_o **p_callbackFunc; // x19
  System_String_o *v25; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  UILabel_o *messageLabel; // x24
  UnityEngine_GameObject_o *v29; // x0
  float v30; // s0
  __int64 v31; // x1
  __int64 v32; // x2
  UILabel_o *copyLabel; // x24
  UILabel_o *removeAllLabel; // x24
  UILabel_o *initAllLabel; // x24
  UILabel_o *removeEquipLabel; // x24
  UILabel_o *changeNameLabel; // x24
  UILabel_o *cancelLabel; // x24
  _BOOL4 v39; // w26
  struct UICommonButton_o *copyButton; // x23
  unsigned int v41; // w24
  struct UICommonButton_o *removeAllButton; // x23
  bool v43; // zf
  unsigned int v44; // w22
  unsigned int v45; // w9
  __int64 v46; // x1
  struct UICommonButton_o *initAllButton; // x23
  struct UICommonButton_o *removeEquipButton; // x22
  unsigned int v49; // w9
  __int64 v50; // x1
  System_Action_o *v51; // x20

  if ( (byte_596C0C2 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_PartyOrganizationRemoveSelectMenu_EndOpen__);
    sub_2213A60(&StringLiteral_10682/*"PARTY_ORGANIZATION_REMOVE_SELECT_CANCEL"*/);
    sub_2213A60(&StringLiteral_10685/*"PARTY_ORGANIZATION_REMOVE_SELECT_INIT_ALL"*/);
    sub_2213A60(&StringLiteral_10688/*"PARTY_ORGANIZATION_REMOVE_SELECT_REMOVE_ALL"*/);
    sub_2213A60(&StringLiteral_10690/*"PARTY_ORGANIZATION_REMOVE_SELECT_TITLE"*/);
    sub_2213A60(&StringLiteral_10683/*"PARTY_ORGANIZATION_REMOVE_SELECT_CHANGE_NAME"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_10686/*"PARTY_ORGANIZATION_REMOVE_SELECT_MESSAGE"*/);
    sub_2213A60(&StringLiteral_10689/*"PARTY_ORGANIZATION_REMOVE_SELECT_REMOVE_EQUIP"*/);
    sub_2213A60(&StringLiteral_10684/*"PARTY_ORGANIZATION_REMOVE_SELECT_COPY"*/);
    sub_2213A60(&StringLiteral_10687/*"PARTY_ORGANIZATION_REMOVE_SELECT_NAME"*/);
    byte_596C0C2 = 1;
  }
  state = this->fields.state;
  switch ( state )
  {
    case 4:
LABEL_6:
      this->fields.callbackFunc = callback;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
        (int32_t)callback,
        (System_String_o *)isEnableCopy,
        (System_String_o *)callback,
        isEnableRemoveAll,
        isEnableRemoveEquip,
        (bool)method,
        v7);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive(gameObject, 1, 0);
        if ( partyItem )
        {
          menuKind = partyItem->fields.menuKind;
          titleLabel = this->fields.titleLabel;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v16, v17);
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10690/*"PARTY_ORGANIZATION_REMOVE_SELECT_TITLE"*/, 0);
          if ( titleLabel )
          {
            v20 = menuKind & 0xFFFFFFF7;
            UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0);
            nameLabel = this->fields.nameLabel;
            if ( v20 )
            {
              v16 = (System_String_o *)StringLiteral_1/*""*/;
              if ( !nameLabel )
                goto LABEL_60;
            }
            else
            {
              if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v21, v22);
              v25 = LocalizationManager__Get((System_String_o *)StringLiteral_10687/*"PARTY_ORGANIZATION_REMOVE_SELECT_NAME"*/, 0);
              gameObject = (UnityEngine_GameObject_o *)System_String__Format(
                                                         v25,
                                                         (Il2CppObject *)partyItem->fields.deckName,
                                                         0);
              v16 = (System_String_o *)gameObject;
              if ( !nameLabel )
                goto LABEL_60;
            }
            UILabel__set_text(nameLabel, v16, 0);
            messageLabel = this->fields.messageLabel;
            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v26, v27);
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10686/*"PARTY_ORGANIZATION_REMOVE_SELECT_MESSAGE"*/, 0);
            if ( messageLabel )
            {
              UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0);
              gameObject = (UnityEngine_GameObject_o *)this->fields.messageLabel;
              if ( gameObject )
              {
                v29 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
                v30 = 117.5;
                if ( !v20 )
                  v30 = 100.0;
                GameObjectExtensions__SetLocalPositionY(v29, v30, 0);
                copyLabel = this->fields.copyLabel;
                if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v31, v32);
                gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_10684/*"PARTY_ORGANIZATION_REMOVE_SELECT_COPY"*/,
                                                           0);
                if ( copyLabel )
                {
                  UILabel__set_text(copyLabel, (System_String_o *)gameObject, 0);
                  removeAllLabel = this->fields.removeAllLabel;
                  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_10688/*"PARTY_ORGANIZATION_REMOVE_SELECT_REMOVE_ALL"*/,
                                                             0);
                  if ( removeAllLabel )
                  {
                    UILabel__set_text(removeAllLabel, (System_String_o *)gameObject, 0);
                    initAllLabel = this->fields.initAllLabel;
                    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                               (System_String_o *)StringLiteral_10685/*"PARTY_ORGANIZATION_REMOVE_SELECT_INIT_ALL"*/,
                                                               0);
                    if ( initAllLabel )
                    {
                      UILabel__set_text(initAllLabel, (System_String_o *)gameObject, 0);
                      removeEquipLabel = this->fields.removeEquipLabel;
                      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_10689/*"PARTY_ORGANIZATION_REMOVE_SELECT_REMOVE_EQUIP"*/,
                                                                 0);
                      if ( removeEquipLabel )
                      {
                        UILabel__set_text(removeEquipLabel, (System_String_o *)gameObject, 0);
                        changeNameLabel = this->fields.changeNameLabel;
                        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                   (System_String_o *)StringLiteral_10683/*"PARTY_ORGANIZATION_REMOVE_SELECT_CHANGE_NAME"*/,
                                                                   0);
                        if ( changeNameLabel )
                        {
                          UILabel__set_text(changeNameLabel, (System_String_o *)gameObject, 0);
                          cancelLabel = this->fields.cancelLabel;
                          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                     (System_String_o *)StringLiteral_10682/*"PARTY_ORGANIZATION_REMOVE_SELECT_CANCEL"*/,
                                                                     0);
                          if ( cancelLabel )
                          {
                            UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0);
                            v39 = v20 == 0 && isEnableCopy;
                            copyButton = this->fields.copyButton;
                            v41 = 3;
                            if ( v39 )
                            {
                              gameObject = (UnityEngine_GameObject_o *)PartyListViewItem__IsDeckEmpty(partyItem, 0);
                              if ( ((unsigned __int8)gameObject & 1) != 0 )
                                v41 = 3;
                              else
                                v41 = 0;
                            }
                            if ( copyButton )
                            {
                              ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, const MethodInfo *))copyButton->klass->vtable._14_SetState.methodPtr)(
                                copyButton,
                                v41,
                                1,
                                copyButton->klass->vtable._14_SetState.method);
                              removeAllButton = this->fields.removeAllButton;
                              gameObject = (UnityEngine_GameObject_o *)PartyListViewItem__IsDeckEmpty(partyItem, 0);
                              if ( removeAllButton )
                              {
                                v43 = !isEnableRemoveAll;
                                v44 = 3;
                                if ( v43 )
                                  v45 = 3;
                                else
                                  v45 = 0;
                                if ( ((unsigned __int8)gameObject & 1) != 0 )
                                  v46 = v45;
                                else
                                  v46 = 0;
                                gameObject = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(struct UICommonButton_o *, __int64, __int64, const MethodInfo *))removeAllButton->klass->vtable._14_SetState.methodPtr)(
                                                                           removeAllButton,
                                                                           v46,
                                                                           1,
                                                                           removeAllButton->klass->vtable._14_SetState.method);
                                initAllButton = this->fields.initAllButton;
                                if ( !v20 )
                                {
                                  gameObject = (UnityEngine_GameObject_o *)PartyListViewItem__IsDeckInit(partyItem, 0);
                                  if ( ((unsigned __int8)gameObject & 1) != 0 )
                                    v44 = 3;
                                  else
                                    v44 = 0;
                                }
                                if ( initAllButton )
                                {
                                  ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, const MethodInfo *))initAllButton->klass->vtable._14_SetState.methodPtr)(
                                    initAllButton,
                                    v44,
                                    1,
                                    initAllButton->klass->vtable._14_SetState.method);
                                  removeEquipButton = this->fields.removeEquipButton;
                                  gameObject = (UnityEngine_GameObject_o *)PartyListViewItem__IsEquipEmpty(partyItem, 0);
                                  if ( removeEquipButton )
                                  {
                                    v49 = isEnableRemoveEquip ? 0 : 3;
                                    v50 = ((unsigned __int8)gameObject & 1) != 0 ? v49 : 0LL;
                                    ((void (__fastcall *)(struct UICommonButton_o *, __int64, __int64, const MethodInfo *))removeEquipButton->klass->vtable._14_SetState.methodPtr)(
                                      removeEquipButton,
                                      v50,
                                      1,
                                      removeEquipButton->klass->vtable._14_SetState.method);
                                    gameObject = (UnityEngine_GameObject_o *)this->fields.changeNameButton;
                                    if ( gameObject )
                                    {
                                      ((void (*)(void))gameObject->klass[1]._1.nestedTypes)();
                                      gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
                                      if ( gameObject )
                                      {
                                        ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, __int64, Il2CppClass **))gameObject->klass[1]._1.nestedTypes)(
                                          gameObject,
                                          0,
                                          1,
                                          gameObject->klass[1]._1.implementedInterfaces);
                                        this->fields.state = 1;
                                        v51 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
                                        System_Action___ctor(
                                          v51,
                                          (Il2CppObject *)this,
                                          Method_PartyOrganizationRemoveSelectMenu_EndOpen__,
                                          0);
                                        BaseDialog__Open((BaseDialog_o *)this, v51, 0, 0, 0);
                                        return;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_60:
      sub_2213CDC(gameObject, v16);
    case 3:
      this->fields.callbackFunc = callback;
      p_callbackFunc = &this->fields.callbackFunc;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)p_callbackFunc,
        (int32_t)callback,
        (System_String_o *)isEnableCopy,
        (System_String_o *)callback,
        isEnableRemoveAll,
        isEnableRemoveEquip,
        (bool)method,
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  PartyOrganizationRemoveSelectMenu_o *v13; // x0
  PartyOrganizationRemoveSelectMenu_CallbackFunc_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_596C0BF & 1) == 0 )
  {
    sub_2213A60(&PartyOrganizationRemoveSelectMenu_CallbackFunc_TypeInfo);
    byte_596C0BF = 1;
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
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (PartyOrganizationRemoveSelectMenu_o *)sub_221405C(
                                                 v8,
                                                 PartyOrganizationRemoveSelectMenu_CallbackFunc_TypeInfo,
                                                 v9,
                                                 v10);
  PartyOrganizationRemoveSelectMenu__remove_callbackFunc(v13, v14, v15);
}


System_String_o *PartyOrganizationRemoveSelectMenu__get_closeBtnPath(
        PartyOrganizationRemoveSelectMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_596C0CA & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_3194/*"BaseWindow/CancelButton"*/);
    byte_596C0CA = 1;
  }
  return (System_String_o *)StringLiteral_3194/*"BaseWindow/CancelButton"*/;
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  PartyOrganizationRemoveSelectMenu_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_596C0C0 & 1) == 0 )
  {
    sub_2213A60(&PartyOrganizationRemoveSelectMenu_CallbackFunc_TypeInfo);
    byte_596C0C0 = 1;
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
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (PartyOrganizationRemoveSelectMenu_o *)sub_221405C(
                                                 v8,
                                                 PartyOrganizationRemoveSelectMenu_CallbackFunc_TypeInfo,
                                                 v9,
                                                 v10);
  PartyOrganizationRemoveSelectMenu__Init(v13, v14);
}


void PartyOrganizationRemoveSelectMenu_CallbackFunc___ctor(
        PartyOrganizationRemoveSelectMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_2004A30;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_20049E8;
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
  if ( (byte_596C0CC & 1) == 0 )
  {
    sub_2213A60(&PartyOrganizationRemoveSelectMenu_ResultKind_TypeInfo);
    byte_596C0CC = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(PartyOrganizationRemoveSelectMenu_ResultKind_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_2213A14(this, v9, callback, object);
}


void PartyOrganizationRemoveSelectMenu_CallbackFunc__EndInvoke(
        PartyOrganizationRemoveSelectMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
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