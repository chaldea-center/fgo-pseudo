void CancelConfirmMenu___ctor(CancelConfirmMenu_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  struct CancelConfirmItemDraw_array *v4; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  struct CancelConfirmItemDraw_array *v11; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7

  if ( (byte_4D28D14 & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&BaseDialog_TypeInfo);
    sub_1C94098(&CancelConfirmItemDraw___TypeInfo);
    byte_4D28D14 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (struct CancelConfirmItemDraw_array *)sub_1C94140(
                                               CancelConfirmItemDraw___TypeInfo,
                                               (unsigned int)v3->static_fields->SupportDeckMemberMax);
  this->fields.currentSupportMemberObjectList = v4;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.currentSupportMemberObjectList,
    (int32_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  v11 = (struct CancelConfirmItemDraw_array *)sub_1C94140(
                                                CancelConfirmItemDraw___TypeInfo,
                                                (unsigned int)BalanceConfig_TypeInfo->static_fields->SupportDeckMemberMax);
  this->fields.oldSupportMemberObjectList = v11;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.oldSupportMemberObjectList,
    (int32_t)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void CancelConfirmMenu__Callback(CancelConfirmMenu_o *this, bool result, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_callbackFunc; // x0
  struct CancelConfirmMenu_CallbackFunc_o *v9; // x20
  struct CancelConfirmMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_1C9403C(p_callbackFunc, 0, (int32_t)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, bool, intptr_t))v9->fields.invoke_impl)(
      v9->fields.method_code,
      result,
      v9->fields.method);
  }
}


void CancelConfirmMenu__Close(CancelConfirmMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  CancelConfirmMenu__Close_36253668(this, 0, v2);
}


void CancelConfirmMenu__Close_36253668(CancelConfirmMenu_o *this, System_Action_o *callback, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  System_Action_o *v10; // x20

  if ( (byte_4D28D13 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_CancelConfirmMenu_EndClose__);
    byte_4D28D13 = 1;
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
  System_Action___ctor(v10, (Il2CppObject *)this, Method_CancelConfirmMenu_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0);
}


void CancelConfirmMenu__EndClose(CancelConfirmMenu_o *this, const MethodInfo *method)
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

  CancelConfirmMenu__Init(this, method);
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


void CancelConfirmMenu__EndOpen(CancelConfirmMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void CancelConfirmMenu__Init(CancelConfirmMenu_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_4D28D11 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D28D11 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_10;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel )
    goto LABEL_10;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.currentSupportMemberTitleLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (titleLabel = this->fields.oldSupportMemberTitleLabel) == 0)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (titleLabel = this->fields.decideLabel) == 0)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (titleLabel = this->fields.cancelLabel) == 0) )
  {
LABEL_10:
    sub_1C942F0(titleLabel, method);
  }
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void CancelConfirmMenu__OnClickCancel(CancelConfirmMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    CancelConfirmMenu__Callback(this, 0, v2);
  }
}


void CancelConfirmMenu__OnClickDecide(CancelConfirmMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    CancelConfirmMenu__Callback(this, 1, v2);
  }
}


void CancelConfirmMenu__Open(
        CancelConfirmMenu_o *this,
        int32_t kind,
        SupportServantData_o *supportServantData,
        CancelConfirmMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  Il2CppObject *MasterData_object; // x21
  struct CancelConfirmItemDraw_array *currentSupportMemberObjectList; // x8
  UnityEngine_GameObject_o *v16; // x22
  __int64 v17; // x23
  Il2CppObject *Entity; // x24
  const MethodInfo *v19; // x3
  struct CancelConfirmItemDraw_array *v20; // x8
  struct CancelConfirmItemDraw_array *oldSupportMemberObjectList; // x8
  __int64 v22; // x23
  Il2CppObject *v23; // x24
  const MethodInfo *v24; // x3
  struct CancelConfirmItemDraw_array *v25; // x8
  UILabel_o *currentSupportMemberTitleLabel; // x20
  UILabel_o *oldSupportMemberTitleLabel; // x20
  UILabel_o *titleLabel; // x20
  UILabel_o *messageLabel; // x20
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  UnityEngine_GameObject_o *v32; // x0
  System_Action_o *v33; // x20

  if ( (byte_4D28D12 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_CancelConfirmMenu_EndOpen__);
    sub_1C94098(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C94098(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C94098(&long___TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&StringLiteral_10141/*"PARTY_ORGANIZATION_CONFIRM2_CANCEL_DECIDE"*/);
    sub_1C94098(&StringLiteral_10140/*"PARTY_ORGANIZATION_CONFIRM2_CANCEL_CANCEL"*/);
    sub_1C94098(&StringLiteral_12593/*"SUPPORT_SELECT_CURRENT_STATE"*/);
    sub_1C94098(&StringLiteral_12616/*"SUPPORT_SELECT_OLD_STATE"*/);
    sub_1C94098(&StringLiteral_10142/*"PARTY_ORGANIZATION_CONFIRM2_CANCEL_MESSAGE"*/);
    sub_1C94098(&StringLiteral_12571/*"SUPPORT_SELECT_CANCEL_DIALOG_TITLE"*/);
    byte_4D28D12 = 1;
  }
  if ( (this->fields.state | 4) == 4 )
  {
    this->fields.callbackFunc = callback;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      (int32_t)supportServantData,
      (int32_t)callback,
      (System_String_o *)method,
      v5,
      v6,
      v7);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_56;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    CancelConfirmMenu__SetActiveServantInfo(this, 1, v13);
    gameObject = (UnityEngine_GameObject_o *)this->fields.wideMessageLabel;
    if ( !gameObject )
      goto LABEL_56;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_56;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0);
    gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_56;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)gameObject,
                          (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserServantMaster___);
    gameObject = (UnityEngine_GameObject_o *)sub_1C94140(long___TypeInfo, 1);
    currentSupportMemberObjectList = this->fields.currentSupportMemberObjectList;
    if ( !currentSupportMemberObjectList )
      goto LABEL_56;
    v16 = gameObject;
    v17 = 0;
    while ( (int)v17 < SLODWORD(currentSupportMemberObjectList->max_length) )
    {
      if ( !supportServantData )
        goto LABEL_56;
      gameObject = (UnityEngine_GameObject_o *)SupportServantData__getServant(supportServantData, v17, 0);
      if ( gameObject )
      {
        if ( !MasterData_object )
          goto LABEL_56;
        Entity = DataMasterBase_object__object__long___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                   (int64_t)gameObject,
                   (const MethodInfo_345DA1C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      }
      else
      {
        Entity = 0;
      }
      gameObject = (UnityEngine_GameObject_o *)SupportServantData__getEquip(supportServantData, v17, 0);
      if ( v16 )
      {
        if ( !LODWORD(v16[1].klass) )
          goto LABEL_57;
        v16[1].monitor = gameObject;
        v20 = this->fields.currentSupportMemberObjectList;
        if ( v20 )
        {
          if ( (unsigned int)v17 >= LODWORD(v20->max_length) )
LABEL_57:
            sub_1C942F8(gameObject);
          gameObject = (UnityEngine_GameObject_o *)v20->m_Items[v17];
          if ( gameObject )
          {
            CancelConfirmItemDraw__SetItem(
              (CancelConfirmItemDraw_o *)gameObject,
              (UserServantEntity_o *)Entity,
              (System_Int64_array *)v16,
              v19);
            currentSupportMemberObjectList = this->fields.currentSupportMemberObjectList;
            ++v17;
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
    v22 = 0;
    while ( (int)v22 < SLODWORD(oldSupportMemberObjectList->max_length) )
    {
      if ( !supportServantData )
        goto LABEL_56;
      gameObject = (UnityEngine_GameObject_o *)SupportServantData__getOldServant(supportServantData, v22, 0);
      if ( gameObject )
      {
        if ( !MasterData_object )
          goto LABEL_56;
        v23 = DataMasterBase_object__object__long___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                (int64_t)gameObject,
                (const MethodInfo_345DA1C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      }
      else
      {
        v23 = 0;
      }
      gameObject = (UnityEngine_GameObject_o *)SupportServantData__getOldEquip(supportServantData, v22, 0);
      if ( v16 )
      {
        if ( !LODWORD(v16[1].klass) )
          goto LABEL_57;
        v16[1].monitor = gameObject;
        v25 = this->fields.oldSupportMemberObjectList;
        if ( v25 )
        {
          if ( (unsigned int)v22 >= LODWORD(v25->max_length) )
            goto LABEL_57;
          gameObject = (UnityEngine_GameObject_o *)v25->m_Items[v22];
          if ( gameObject )
          {
            CancelConfirmItemDraw__SetItem(
              (CancelConfirmItemDraw_o *)gameObject,
              (UserServantEntity_o *)v23,
              (System_Int64_array *)v16,
              v24);
            oldSupportMemberObjectList = this->fields.oldSupportMemberObjectList;
            ++v22;
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
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_56;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
    if ( !gameObject )
      goto LABEL_56;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_56;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton;
    if ( !gameObject )
      goto LABEL_56;
    ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, __int64, Il2CppClass **))gameObject->klass[1]._1.nestedTypes)(
      gameObject,
      0,
      1,
      gameObject->klass[1]._1.implementedInterfaces);
    gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
    if ( !gameObject )
      goto LABEL_56;
    ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, __int64, Il2CppClass **))gameObject->klass[1]._1.nestedTypes)(
      gameObject,
      0,
      1,
      gameObject->klass[1]._1.implementedInterfaces);
    currentSupportMemberTitleLabel = this->fields.currentSupportMemberTitleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12593/*"SUPPORT_SELECT_CURRENT_STATE"*/, 0);
    if ( !currentSupportMemberTitleLabel )
      goto LABEL_56;
    UILabel__set_text(currentSupportMemberTitleLabel, (System_String_o *)gameObject, 0);
    oldSupportMemberTitleLabel = this->fields.oldSupportMemberTitleLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12616/*"SUPPORT_SELECT_OLD_STATE"*/, 0);
    if ( !oldSupportMemberTitleLabel )
      goto LABEL_56;
    UILabel__set_text(oldSupportMemberTitleLabel, (System_String_o *)gameObject, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.titleLabel;
    if ( !gameObject )
      goto LABEL_56;
    UILabel__set_alignment((UILabel_o *)gameObject, 1, 0);
    titleLabel = this->fields.titleLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12571/*"SUPPORT_SELECT_CANCEL_DIALOG_TITLE"*/, 0);
    if ( !titleLabel )
      goto LABEL_56;
    UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0);
    messageLabel = this->fields.messageLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10142/*"PARTY_ORGANIZATION_CONFIRM2_CANCEL_MESSAGE"*/, 0);
    if ( !messageLabel )
      goto LABEL_56;
    UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0);
    decideLabel = this->fields.decideLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10141/*"PARTY_ORGANIZATION_CONFIRM2_CANCEL_DECIDE"*/, 0);
    if ( !decideLabel
      || (UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0),
          cancelLabel = this->fields.cancelLabel,
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10140/*"PARTY_ORGANIZATION_CONFIRM2_CANCEL_CANCEL"*/, 0),
          !cancelLabel)
      || (UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton) == 0) )
    {
LABEL_56:
      sub_1C942F0(gameObject, v12);
    }
    v32 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    AndroidBackKeyManager__AddBackBtn(v32, 0);
    this->fields.state = 1;
    v33 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
    System_Action___ctor(v33, (Il2CppObject *)this, Method_CancelConfirmMenu_EndOpen__, 0);
    BaseDialog__Open((BaseDialog_o *)this, v33, 0, 0, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void CancelConfirmMenu__SetActiveServantInfo(CancelConfirmMenu_o *this, bool active, const MethodInfo *method)
{
  UnityEngine_Component_o *messageLabel; // x0

  messageLabel = (UnityEngine_Component_o *)this->fields.messageLabel;
  if ( !messageLabel )
    goto LABEL_10;
  messageLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(messageLabel, 0);
  if ( !messageLabel )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageLabel, active, 0);
  messageLabel = (UnityEngine_Component_o *)this->fields.currentMemberContainer;
  if ( !messageLabel )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageLabel, active, 0);
  messageLabel = (UnityEngine_Component_o *)this->fields.lastMemberConstainer;
  if ( !messageLabel
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageLabel, active, 0),
        (messageLabel = (UnityEngine_Component_o *)this->fields.currentSupportMemberTitleLabel) == 0)
    || (messageLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(messageLabel, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageLabel, active, 0),
        (messageLabel = (UnityEngine_Component_o *)this->fields.oldSupportMemberTitleLabel) == 0)
    || (messageLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(messageLabel, 0)) == 0 )
  {
LABEL_10:
    sub_1C942F0(messageLabel, active);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageLabel, active, 0);
}


void CancelConfirmMenu__add_callbackFunc(
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

  if ( (byte_4D28D0F & 1) == 0 )
  {
    sub_1C94098(&CancelConfirmMenu_CallbackFunc_TypeInfo);
    byte_4D28D0F = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (CancelConfirmMenu_CallbackFunc_c *)v8->klass != CancelConfirmMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1CEFE6C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C9468C(v8);
  CancelConfirmMenu__remove_callbackFunc(v11, v12, v13);
}


void CancelConfirmMenu__remove_callbackFunc(
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

  if ( (byte_4D28D10 & 1) == 0 )
  {
    sub_1C94098(&CancelConfirmMenu_CallbackFunc_TypeInfo);
    byte_4D28D10 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (CancelConfirmMenu_CallbackFunc_c *)v8->klass != CancelConfirmMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1CEFE6C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C9468C(v8);
  CancelConfirmMenu__Init(v11, v12);
}


void CancelConfirmMenu_CallbackFunc___ctor(
        CancelConfirmMenu_CallbackFunc_o *this,
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
  this->fields.invoke_impl = (intptr_t)sub_1AC4C74;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AC4C2C;
}


System_IAsyncResult_o *CancelConfirmMenu_CallbackFunc__BeginInvoke(
        CancelConfirmMenu_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = result;
  if ( (byte_4D28D15 & 1) == 0 )
  {
    sub_1C94098(&bool_TypeInfo);
    byte_4D28D15 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1C9404C(this, v9, callback, object);
}


void CancelConfirmMenu_CallbackFunc__EndInvoke(
        CancelConfirmMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C94050(result, 0, method);
}


void CancelConfirmMenu_CallbackFunc__Invoke(
        CancelConfirmMenu_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    this->fields.method);
}