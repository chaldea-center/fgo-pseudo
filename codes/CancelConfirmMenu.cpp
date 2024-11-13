void __fastcall CancelConfirmMenu___ctor(CancelConfirmMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  BalanceConfig_c *v8; // x0
  struct CancelConfirmItemDraw_array *v9; // x0
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  struct CancelConfirmItemDraw_array *v16; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  __int64 v23; // x1

  if ( (byte_4B12A24 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&BaseDialog_TypeInfo, v4, v5);
    sub_1BCA7E0(&CancelConfirmItemDraw___TypeInfo, v6, v7);
    byte_4B12A24 = 1;
  }
  v8 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
    v8 = BalanceConfig_TypeInfo;
  }
  v9 = (struct CancelConfirmItemDraw_array *)sub_1BCA888(
                                               CancelConfirmItemDraw___TypeInfo,
                                               (unsigned int)v8->static_fields->SupportDeckMemberMax);
  this->fields.currentSupportMemberObjectList = v9;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.currentSupportMemberObjectList,
    (int64_t)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v16 = (struct CancelConfirmItemDraw_array *)sub_1BCA888(
                                                CancelConfirmItemDraw___TypeInfo,
                                                (unsigned int)BalanceConfig_TypeInfo->static_fields->SupportDeckMemberMax);
  this->fields.oldSupportMemberObjectList = v16;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.oldSupportMemberObjectList,
    (int64_t)v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, v23);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall CancelConfirmMenu__Callback(CancelConfirmMenu_o *this, bool result, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PartyOrganizationUtility_o *p_callbackFunc; // x0
  struct CancelConfirmMenu_CallbackFunc_o *v9; // x20
  struct CancelConfirmMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (PartyOrganizationUtility_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_1BCA784(p_callbackFunc, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))v9->fields.m_target)(
      v9->fields.original_method_info,
      result,
      *(_QWORD *)&v9->fields.extra_arg);
  }
}


void __fastcall CancelConfirmMenu__Close(CancelConfirmMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  CancelConfirmMenu__Close_33821356(this, 0LL, v2);
}


void __fastcall CancelConfirmMenu__Close_33821356(
        CancelConfirmMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  System_Action_o *v15; // x20

  if ( (byte_4B12A23 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_CancelConfirmMenu_EndClose__, v10, v11);
    byte_4B12A23 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc,
    (int64_t)callback,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v15 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v12, v13, v14);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_CancelConfirmMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v15, 0LL);
}


void __fastcall CancelConfirmMenu__EndClose(CancelConfirmMenu_o *this, const MethodInfo *method)
{
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7
  PartyOrganizationUtility_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v10; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  CancelConfirmMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_1BCA784(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v10->fields.m_target)(
      v10->fields.original_method_info,
      *(_QWORD *)&v10->fields.extra_arg);
  }
}


void __fastcall CancelConfirmMenu__EndOpen(CancelConfirmMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void __fastcall CancelConfirmMenu__Init(CancelConfirmMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UILabel_o *titleLabel; // x0

  if ( (byte_4B12A21 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B12A21 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_10;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel )
    goto LABEL_10;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.currentSupportMemberTitleLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.oldSupportMemberTitleLabel) == 0LL)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.decideLabel) == 0LL)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.cancelLabel) == 0LL) )
  {
LABEL_10:
    sub_1BCAA3C(titleLabel, method);
  }
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall CancelConfirmMenu__OnClickCancel(CancelConfirmMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    CancelConfirmMenu__Callback(this, 0, v2);
  }
}


void __fastcall CancelConfirmMenu__OnClickDecide(CancelConfirmMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    CancelConfirmMenu__Callback(this, 1, v2);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CancelConfirmMenu__Open(
        CancelConfirmMenu_o *this,
        int32_t kind,
        SupportServantData_o *supportServantData,
        CancelConfirmMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v36; // x1
  const MethodInfo *v37; // x2
  Il2CppObject *MasterData_object; // x21
  struct CancelConfirmItemDraw_array *currentSupportMemberObjectList; // x8
  System_Int64_array *v40; // x22
  __int64 v41; // x23
  Il2CppObject *Entity; // x24
  const MethodInfo *v43; // x3
  struct CancelConfirmItemDraw_array *v44; // x8
  struct CancelConfirmItemDraw_array *oldSupportMemberObjectList; // x8
  __int64 v46; // x23
  Il2CppObject *v47; // x24
  const MethodInfo *v48; // x3
  struct CancelConfirmItemDraw_array *v49; // x8
  __int64 v50; // x1
  UILabel_o *currentSupportMemberTitleLabel; // x20
  UILabel_o *oldSupportMemberTitleLabel; // x20
  UILabel_o *titleLabel; // x20
  UILabel_o *messageLabel; // x20
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  UnityEngine_GameObject_o *v57; // x0
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x3
  System_Action_o *v61; // x20

  if ( (byte_4B12A22 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&kind, supportServantData);
    sub_1BCA7E0(&Method_CancelConfirmMenu_EndOpen__, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, v13, v14);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v15, v16);
    sub_1BCA7E0(&long___TypeInfo, v17, v18);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21, v22);
    sub_1BCA7E0(&StringLiteral_10269/*"PARTY_ORGANIZATION_CONFIRM2_CANCEL_DECIDE"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_10268/*"PARTY_ORGANIZATION_CONFIRM2_CANCEL_CANCEL"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_12591/*"SUPPORT_SELECT_CURRENT_STATE"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_12614/*"SUPPORT_SELECT_OLD_STATE"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_10270/*"PARTY_ORGANIZATION_CONFIRM2_CANCEL_MESSAGE"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_12569/*"SUPPORT_SELECT_CANCEL_DIALOG_TITLE"*/, v33, v34);
    byte_4B12A22 = 1;
  }
  if ( (this->fields.state | 4) == 4 )
  {
    this->fields.callbackFunc = callback;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
      (int64_t)callback,
      (int64_t)supportServantData,
      (int32_t)callback,
      (System_String_o *)method,
      v5,
      v6,
      v7);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_56;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    CancelConfirmMenu__SetActiveServantInfo(this, 1, v37);
    gameObject = (UnityEngine_GameObject_o *)this->fields.wideMessageLabel;
    if ( !gameObject )
      goto LABEL_56;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_56;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_56;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)gameObject,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
    gameObject = (UnityEngine_GameObject_o *)sub_1BCA888(long___TypeInfo, 1LL);
    currentSupportMemberObjectList = this->fields.currentSupportMemberObjectList;
    if ( !currentSupportMemberObjectList )
      goto LABEL_56;
    v40 = (System_Int64_array *)gameObject;
    v41 = 0LL;
    while ( (int)v41 < (signed int)currentSupportMemberObjectList->max_length )
    {
      if ( !supportServantData )
        goto LABEL_56;
      gameObject = (UnityEngine_GameObject_o *)SupportServantData__getServant(supportServantData, v41, 0LL);
      if ( gameObject )
      {
        if ( !MasterData_object )
          goto LABEL_56;
        Entity = DataMasterBase_object__object__long___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                   (int64_t)gameObject,
                   (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      }
      else
      {
        Entity = 0LL;
      }
      gameObject = (UnityEngine_GameObject_o *)SupportServantData__getEquip(supportServantData, v41, 0LL);
      if ( v40 )
      {
        if ( !v40->max_length )
          goto LABEL_57;
        v40->m_Items[0] = (int64_t)gameObject;
        v44 = this->fields.currentSupportMemberObjectList;
        if ( v44 )
        {
          if ( (unsigned int)v41 >= v44->max_length )
LABEL_57:
            sub_1BCAA44(gameObject, v36);
          gameObject = (UnityEngine_GameObject_o *)v44->m_Items[v41];
          if ( gameObject )
          {
            CancelConfirmItemDraw__SetItem(
              (CancelConfirmItemDraw_o *)gameObject,
              (UserServantEntity_o *)Entity,
              v40,
              v43);
            currentSupportMemberObjectList = this->fields.currentSupportMemberObjectList;
            ++v41;
            if ( currentSupportMemberObjectList )
              continue;
          }
        }
      }
      goto LABEL_56;
    }
    oldSupportMemberObjectList = this->fields.oldSupportMemberObjectList;
    if ( !oldSupportMemberObjectList )
      goto LABEL_56;
    v46 = 0LL;
    while ( (int)v46 < (signed int)oldSupportMemberObjectList->max_length )
    {
      if ( !supportServantData )
        goto LABEL_56;
      gameObject = (UnityEngine_GameObject_o *)SupportServantData__getOldServant(supportServantData, v46, 0LL);
      if ( gameObject )
      {
        if ( !MasterData_object )
          goto LABEL_56;
        v47 = DataMasterBase_object__object__long___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                (int64_t)gameObject,
                (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      }
      else
      {
        v47 = 0LL;
      }
      gameObject = (UnityEngine_GameObject_o *)SupportServantData__getOldEquip(supportServantData, v46, 0LL);
      if ( v40 )
      {
        if ( !v40->max_length )
          goto LABEL_57;
        v40->m_Items[0] = (int64_t)gameObject;
        v49 = this->fields.oldSupportMemberObjectList;
        if ( v49 )
        {
          if ( (unsigned int)v46 >= v49->max_length )
            goto LABEL_57;
          gameObject = (UnityEngine_GameObject_o *)v49->m_Items[v46];
          if ( gameObject )
          {
            CancelConfirmItemDraw__SetItem((CancelConfirmItemDraw_o *)gameObject, (UserServantEntity_o *)v47, v40, v48);
            oldSupportMemberObjectList = this->fields.oldSupportMemberObjectList;
            ++v46;
            if ( oldSupportMemberObjectList )
              continue;
          }
        }
      }
      goto LABEL_56;
    }
    gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton;
    if ( !gameObject )
      goto LABEL_56;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_56;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
    if ( !gameObject )
      goto LABEL_56;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_56;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton;
    if ( !gameObject )
      goto LABEL_56;
    ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))gameObject->klass[1]._1.implementedInterfaces)(
      gameObject,
      0LL,
      1LL,
      gameObject->klass[1]._1.interfaceOffsets);
    gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
    if ( !gameObject )
      goto LABEL_56;
    ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))gameObject->klass[1]._1.implementedInterfaces)(
      gameObject,
      0LL,
      1LL,
      gameObject->klass[1]._1.interfaceOffsets);
    currentSupportMemberTitleLabel = this->fields.currentSupportMemberTitleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v50);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12591/*"SUPPORT_SELECT_CURRENT_STATE"*/, 0LL);
    if ( !currentSupportMemberTitleLabel )
      goto LABEL_56;
    UILabel__set_text(currentSupportMemberTitleLabel, (System_String_o *)gameObject, 0LL);
    oldSupportMemberTitleLabel = this->fields.oldSupportMemberTitleLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12614/*"SUPPORT_SELECT_OLD_STATE"*/, 0LL);
    if ( !oldSupportMemberTitleLabel )
      goto LABEL_56;
    UILabel__set_text(oldSupportMemberTitleLabel, (System_String_o *)gameObject, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.titleLabel;
    if ( !gameObject )
      goto LABEL_56;
    UILabel__set_alignment((UILabel_o *)gameObject, 1, 0LL);
    titleLabel = this->fields.titleLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12569/*"SUPPORT_SELECT_CANCEL_DIALOG_TITLE"*/, 0LL);
    if ( !titleLabel )
      goto LABEL_56;
    UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
    messageLabel = this->fields.messageLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10270/*"PARTY_ORGANIZATION_CONFIRM2_CANCEL_MESSAGE"*/, 0LL);
    if ( !messageLabel )
      goto LABEL_56;
    UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0LL);
    decideLabel = this->fields.decideLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10269/*"PARTY_ORGANIZATION_CONFIRM2_CANCEL_DECIDE"*/, 0LL);
    if ( !decideLabel
      || (UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0LL),
          cancelLabel = this->fields.cancelLabel,
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10268/*"PARTY_ORGANIZATION_CONFIRM2_CANCEL_CANCEL"*/, 0LL),
          !cancelLabel)
      || (UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0LL),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton) == 0LL) )
    {
LABEL_56:
      sub_1BCAA3C(gameObject, v36);
    }
    v57 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    AndroidBackKeyManager__AddBackBtn(v57, 0LL);
    this->fields.state = 1;
    v61 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v58, v59, v60);
    System_Action___ctor(v61, (Il2CppObject *)this, Method_CancelConfirmMenu_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v61, 0, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CancelConfirmMenu__SetActiveServantInfo(
        CancelConfirmMenu_o *this,
        bool active,
        const MethodInfo *method)
{
  UnityEngine_Component_o *messageLabel; // x0

  messageLabel = (UnityEngine_Component_o *)this->fields.messageLabel;
  if ( !messageLabel )
    goto LABEL_10;
  messageLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(messageLabel, 0LL);
  if ( !messageLabel )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageLabel, active, 0LL);
  messageLabel = (UnityEngine_Component_o *)this->fields.currentMemberContainer;
  if ( !messageLabel )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageLabel, active, 0LL);
  messageLabel = (UnityEngine_Component_o *)this->fields.lastMemberConstainer;
  if ( !messageLabel
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageLabel, active, 0LL),
        (messageLabel = (UnityEngine_Component_o *)this->fields.currentSupportMemberTitleLabel) == 0LL)
    || (messageLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(messageLabel, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageLabel, active, 0LL),
        (messageLabel = (UnityEngine_Component_o *)this->fields.oldSupportMemberTitleLabel) == 0LL)
    || (messageLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(messageLabel, 0LL)) == 0LL )
  {
LABEL_10:
    sub_1BCAA3C(messageLabel, active);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageLabel, active, 0LL);
}


void __fastcall CancelConfirmMenu__add_callbackFunc(
        CancelConfirmMenu_o *this,
        CancelConfirmMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct CancelConfirmMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct CancelConfirmMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  CancelConfirmMenu_o *v11; // x0
  CancelConfirmMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4B12A1F & 1) == 0 )
  {
    sub_1BCA7E0(&CancelConfirmMenu_CallbackFunc_TypeInfo, value, method);
    byte_4B12A1F = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (CancelConfirmMenu_CallbackFunc_c *)v8->klass != CancelConfirmMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BCACFC(v8);
  CancelConfirmMenu__remove_callbackFunc(v11, v12, v13);
}


void __fastcall CancelConfirmMenu__remove_callbackFunc(
        CancelConfirmMenu_o *this,
        CancelConfirmMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct CancelConfirmMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct CancelConfirmMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  CancelConfirmMenu_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4B12A20 & 1) == 0 )
  {
    sub_1BCA7E0(&CancelConfirmMenu_CallbackFunc_TypeInfo, value, method);
    byte_4B12A20 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (CancelConfirmMenu_CallbackFunc_c *)v8->klass != CancelConfirmMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BCACFC(v8);
  CancelConfirmMenu__Init(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CancelConfirmMenu_CallbackFunc___ctor(
        CancelConfirmMenu_CallbackFunc_o *this,
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
  sub_1BCA784(
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
  if ( (sub_1BCA8A0(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v14, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A09200;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A091B8;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall CancelConfirmMenu_CallbackFunc__BeginInvoke(
        CancelConfirmMenu_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = result;
  if ( (byte_4B12A25 & 1) == 0 )
  {
    sub_1BCA7E0(&bool_TypeInfo, result, callback);
    byte_4B12A25 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v9, callback, object);
}


void __fastcall CancelConfirmMenu_CallbackFunc__EndInvoke(
        CancelConfirmMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
}


void __fastcall CancelConfirmMenu_CallbackFunc__Invoke(
        CancelConfirmMenu_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    *(_QWORD *)&this->fields.extra_arg);
}