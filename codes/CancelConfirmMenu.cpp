void __fastcall CancelConfirmMenu___ctor(CancelConfirmMenu_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  struct CancelConfirmItemDraw_array *v4; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  struct CancelConfirmItemDraw_array *v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_438E3EF & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&BaseDialog_TypeInfo);
    sub_B775C4(&CancelConfirmItemDraw___TypeInfo);
    byte_438E3EF = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (struct CancelConfirmItemDraw_array *)sub_B775DC(
                                               CancelConfirmItemDraw___TypeInfo,
                                               (unsigned int)v3->static_fields->SupportDeckMemberMax);
  this->fields.currentSupportMemberObjectList = v4;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.currentSupportMemberObjectList,
    (System_Int32_array **)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  v11 = (struct CancelConfirmItemDraw_array *)sub_B775DC(
                                                CancelConfirmItemDraw___TypeInfo,
                                                (unsigned int)BalanceConfig_TypeInfo->static_fields->SupportDeckMemberMax);
  this->fields.oldSupportMemberObjectList = v11;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.oldSupportMemberObjectList,
    (System_Int32_array **)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall CancelConfirmMenu__Callback(CancelConfirmMenu_o *this, bool result, const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_callbackFunc; // x0
  CancelConfirmMenu_CallbackFunc_o *v9; // x19
  struct CancelConfirmMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_B77560(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    CancelConfirmMenu_CallbackFunc__Invoke(v9, result, 0LL);
  }
}


void __fastcall CancelConfirmMenu__Close(CancelConfirmMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  CancelConfirmMenu__Close_31124296(this, 0LL, v2);
}


void __fastcall CancelConfirmMenu__Close_31124296(
        CancelConfirmMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Action_o *v10; // x20

  if ( (byte_438E3EE & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_CancelConfirmMenu_EndClose__);
    byte_438E3EE = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v10 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_CancelConfirmMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0LL);
}


void __fastcall CancelConfirmMenu__EndClose(CancelConfirmMenu_o *this, const MethodInfo *method)
{
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  BattleServantConfConponent_o *p_closeCallbackFunc; // x19
  System_Action_o *v10; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  CancelConfirmMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B77560(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action__Invoke(v10, 0LL);
  }
}


void __fastcall CancelConfirmMenu__EndOpen(CancelConfirmMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void __fastcall CancelConfirmMenu__Init(CancelConfirmMenu_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_438E3EC & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438E3EC = 1;
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
    sub_B7769C(titleLabel, method);
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


void __fastcall CancelConfirmMenu__Open(
        CancelConfirmMenu_o *this,
        int32_t kind,
        SupportServantData_o *supportServantData,
        CancelConfirmMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x21
  struct CancelConfirmItemDraw_array *currentSupportMemberObjectList; // x8
  System_Int64_array *v16; // x22
  __int64 v17; // x23
  UserServantEntity_o *Entity; // x24
  const MethodInfo *v19; // x3
  struct CancelConfirmItemDraw_array *v20; // x8
  struct CancelConfirmItemDraw_array *oldSupportMemberObjectList; // x8
  __int64 v22; // x23
  UserServantEntity_o *v23; // x24
  const MethodInfo *v24; // x3
  struct CancelConfirmItemDraw_array *v25; // x8
  UILabel_o *currentSupportMemberTitleLabel; // x20
  UILabel_o *oldSupportMemberTitleLabel; // x20
  UILabel_o *titleLabel; // x20
  UILabel_o *messageLabel; // x20
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  UnityEngine_GameObject_o *v32; // x20
  System_Action_o *v33; // x20
  __int64 v34; // x0

  if ( (byte_438E3ED & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&AndroidBackKeyManager_TypeInfo);
    sub_B775C4(&Method_CancelConfirmMenu_EndOpen__);
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B775C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_B775C4(&long___TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&StringLiteral_10403/*"PARTY_ORGANIZATION_CONFIRM2_CANCEL_DECIDE"*/);
    sub_B775C4(&StringLiteral_10402/*"PARTY_ORGANIZATION_CONFIRM2_CANCEL_CANCEL"*/);
    sub_B775C4(&StringLiteral_12761/*"SUPPORT_SELECT_CURRENT_STATE"*/);
    sub_B775C4(&StringLiteral_12784/*"SUPPORT_SELECT_OLD_STATE"*/);
    sub_B775C4(&StringLiteral_10404/*"PARTY_ORGANIZATION_CONFIRM2_CANCEL_MESSAGE"*/);
    sub_B775C4(&StringLiteral_12739/*"SUPPORT_SELECT_CANCEL_DIALOG_TITLE"*/);
    byte_438E3ED = 1;
  }
  if ( (this->fields.state | 4) == 4 )
  {
    this->fields.callbackFunc = callback;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)callback,
      (System_String_array **)supportServantData,
      (System_String_array **)callback,
      (System_Boolean_array **)method,
      v5,
      v6,
      v7);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_60;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    CancelConfirmMenu__SetActiveServantInfo(this, 1, v13);
    gameObject = (UnityEngine_GameObject_o *)this->fields.wideMessageLabel;
    if ( !gameObject )
      goto LABEL_60;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_60;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_60;
    MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)gameObject, (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantMaster___);
    gameObject = (UnityEngine_GameObject_o *)sub_B775DC(long___TypeInfo, 1LL);
    currentSupportMemberObjectList = this->fields.currentSupportMemberObjectList;
    if ( !currentSupportMemberObjectList )
      goto LABEL_60;
    v16 = (System_Int64_array *)gameObject;
    v17 = 0LL;
    while ( (int)v17 < (signed int)currentSupportMemberObjectList->max_length )
    {
      if ( !supportServantData )
        goto LABEL_60;
      gameObject = (UnityEngine_GameObject_o *)SupportServantData__getServant(supportServantData, v17, 0LL);
      if ( gameObject )
      {
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_60;
        Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                   MasterData_WarQuestSelectionMaster,
                   (int64_t)gameObject,
                   (const MethodInfo_21FBABC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      }
      else
      {
        Entity = 0LL;
      }
      gameObject = (UnityEngine_GameObject_o *)SupportServantData__getEquip(supportServantData, v17, 0LL);
      if ( v16 )
      {
        if ( !v16->max_length )
          goto LABEL_61;
        v16->m_Items[0] = (int64_t)gameObject;
        v20 = this->fields.currentSupportMemberObjectList;
        if ( v20 )
        {
          if ( (unsigned int)v17 >= v20->max_length )
          {
LABEL_61:
            v34 = sub_B776C8(gameObject);
            sub_B77668(v34, 0LL);
          }
          gameObject = (UnityEngine_GameObject_o *)v20->m_Items[v17];
          if ( gameObject )
          {
            CancelConfirmItemDraw__SetItem((CancelConfirmItemDraw_o *)gameObject, Entity, v16, v19);
            currentSupportMemberObjectList = this->fields.currentSupportMemberObjectList;
            ++v17;
            if ( currentSupportMemberObjectList )
              continue;
          }
        }
      }
      goto LABEL_60;
    }
    oldSupportMemberObjectList = this->fields.oldSupportMemberObjectList;
    if ( !oldSupportMemberObjectList )
      goto LABEL_60;
    v22 = 0LL;
    while ( (int)v22 < (signed int)oldSupportMemberObjectList->max_length )
    {
      if ( !supportServantData )
        goto LABEL_60;
      gameObject = (UnityEngine_GameObject_o *)SupportServantData__getOldServant(supportServantData, v22, 0LL);
      if ( gameObject )
      {
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_60;
        v23 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                MasterData_WarQuestSelectionMaster,
                (int64_t)gameObject,
                (const MethodInfo_21FBABC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      }
      else
      {
        v23 = 0LL;
      }
      gameObject = (UnityEngine_GameObject_o *)SupportServantData__getOldEquip(supportServantData, v22, 0LL);
      if ( v16 )
      {
        if ( !v16->max_length )
          goto LABEL_61;
        v16->m_Items[0] = (int64_t)gameObject;
        v25 = this->fields.oldSupportMemberObjectList;
        if ( v25 )
        {
          if ( (unsigned int)v22 >= v25->max_length )
            goto LABEL_61;
          gameObject = (UnityEngine_GameObject_o *)v25->m_Items[v22];
          if ( gameObject )
          {
            CancelConfirmItemDraw__SetItem((CancelConfirmItemDraw_o *)gameObject, v23, v16, v24);
            oldSupportMemberObjectList = this->fields.oldSupportMemberObjectList;
            ++v22;
            if ( oldSupportMemberObjectList )
              continue;
          }
        }
      }
      goto LABEL_60;
    }
    gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton;
    if ( !gameObject )
      goto LABEL_60;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_60;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
    if ( !gameObject )
      goto LABEL_60;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_60;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton;
    if ( !gameObject )
      goto LABEL_60;
    ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))gameObject->klass[1]._1.implementedInterfaces)(
      gameObject,
      0LL,
      1LL,
      gameObject->klass[1]._1.interfaceOffsets);
    gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
    if ( !gameObject )
      goto LABEL_60;
    ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))gameObject->klass[1]._1.implementedInterfaces)(
      gameObject,
      0LL,
      1LL,
      gameObject->klass[1]._1.interfaceOffsets);
    currentSupportMemberTitleLabel = this->fields.currentSupportMemberTitleLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12761/*"SUPPORT_SELECT_CURRENT_STATE"*/, 0LL);
    if ( !currentSupportMemberTitleLabel )
      goto LABEL_60;
    UILabel__set_text(currentSupportMemberTitleLabel, (System_String_o *)gameObject, 0LL);
    oldSupportMemberTitleLabel = this->fields.oldSupportMemberTitleLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12784/*"SUPPORT_SELECT_OLD_STATE"*/, 0LL);
    if ( !oldSupportMemberTitleLabel )
      goto LABEL_60;
    UILabel__set_text(oldSupportMemberTitleLabel, (System_String_o *)gameObject, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.titleLabel;
    if ( !gameObject )
      goto LABEL_60;
    UILabel__set_alignment((UILabel_o *)gameObject, 1, 0LL);
    titleLabel = this->fields.titleLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12739/*"SUPPORT_SELECT_CANCEL_DIALOG_TITLE"*/, 0LL);
    if ( !titleLabel )
      goto LABEL_60;
    UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
    messageLabel = this->fields.messageLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10404/*"PARTY_ORGANIZATION_CONFIRM2_CANCEL_MESSAGE"*/, 0LL);
    if ( !messageLabel )
      goto LABEL_60;
    UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0LL);
    decideLabel = this->fields.decideLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10403/*"PARTY_ORGANIZATION_CONFIRM2_CANCEL_DECIDE"*/, 0LL);
    if ( !decideLabel
      || (UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0LL),
          cancelLabel = this->fields.cancelLabel,
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10402/*"PARTY_ORGANIZATION_CONFIRM2_CANCEL_CANCEL"*/, 0LL),
          !cancelLabel)
      || (UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0LL),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton) == 0LL) )
    {
LABEL_60:
      sub_B7769C(gameObject, v12);
    }
    v32 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
    }
    AndroidBackKeyManager__AddBackBtn(v32, 0LL);
    this->fields.state = 1;
    v33 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(v33, (Il2CppObject *)this, Method_CancelConfirmMenu_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v33, 0, 0LL);
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
    sub_B7769C(messageLabel, active);
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

  if ( (byte_438E3EA & 1) == 0 )
  {
    sub_B775C4(&CancelConfirmMenu_CallbackFunc_TypeInfo);
    byte_438E3EA = 1;
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
    v9 = sub_B6BFDC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B77990(v8);
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

  if ( (byte_438E3EB & 1) == 0 )
  {
    sub_B775C4(&CancelConfirmMenu_CallbackFunc_TypeInfo);
    byte_438E3EB = 1;
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
    v9 = sub_B6BFDC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B77990(v8);
  CancelConfirmMenu__Init(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CancelConfirmMenu_CallbackFunc___ctor(
        CancelConfirmMenu_CallbackFunc_o *this,
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
  sub_B77560(p_method);
}


System_IAsyncResult_o *__fastcall CancelConfirmMenu_CallbackFunc__BeginInvoke(
        CancelConfirmMenu_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = result;
  if ( (byte_438854B & 1) == 0 )
  {
    sub_B775C4(&bool_TypeInfo);
    byte_438854B = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback);
  return (System_IAsyncResult_o *)sub_B77568(this, v9, callback, object);
}


void __fastcall CancelConfirmMenu_CallbackFunc__EndInvoke(
        CancelConfirmMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7756C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CancelConfirmMenu_CallbackFunc__Invoke(
        CancelConfirmMenu_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  CancelConfirmMenu_CallbackFunc_o **v7; // x25
  __int64 v8; // x26
  unsigned int v9; // w23
  __int64 class_0; // x0
  __int64 v11; // x8
  unsigned __int64 v12; // x10
  _DWORD *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  void (__fastcall **v17)(__int64 *, bool, _QWORD); // x0
  CancelConfirmMenu_CallbackFunc_o *v18; // x8
  __int64 *v19; // x21
  __int64 v20; // x22
  void (__fastcall *v21)(bool, __int64); // x23
  char v22; // w23
  char v23; // w0
  __int64 v24; // x8
  __int64 v25; // x1
  __int64 v26; // x2
  unsigned __int64 v27; // x10
  _DWORD *v28; // x11
  CancelConfirmMenu_CallbackFunc_o *v29; // [xsp+8h] [xbp-48h] BYREF

  v29 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v29;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
  {
    v7 = (CancelConfirmMenu_CallbackFunc_o **)(v3 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v18 = v7[v8];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(bool, __int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B77680(*(_QWORD *)&v18->fields.extra_arg, result);
      if ( (sub_B775F4(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) != 1 )
        goto LABEL_36;
      v21(result, v20);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v19 && *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B775EC(v20);
      v23 = sub_B779F0(v20);
      if ( (v22 & 1) != 0 )
      {
        if ( (v23 & 1) != 0 )
        {
          v24 = *v19;
          v25 = *(_QWORD *)(v20 + 24);
          v26 = *(unsigned __int16 *)(v20 + 72);
          if ( *(_WORD *)(*v19 + 298) )
          {
            v27 = 0LL;
            v28 = (_DWORD *)(*(_QWORD *)(v24 + 176) + 8LL);
            while ( *((_QWORD *)v28 - 1) != v25 )
            {
              ++v27;
              v28 += 4;
              if ( v27 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_35;
            }
            v16 = v24 + 16LL * (*v28 + (int)v26) + 312;
          }
          else
          {
LABEL_35:
            v16 = sub_B0F4C0(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B77674(v15, v20);
        (*v17)(v19, result, v17);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v20 + 72);
        if ( (v23 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v20);
          v11 = *v19;
          if ( *(_WORD *)(*v19 + 298) )
          {
            v12 = 0LL;
            v13 = (_DWORD *)(*(_QWORD *)(v11 + 176) + 8LL);
            while ( *((_QWORD *)v13 - 1) != class_0 )
            {
              ++v12;
              v13 += 4;
              if ( v12 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_11;
            }
            v14 = v11 + 16LL * (int)(*v13 + v9) + 312;
          }
          else
          {
LABEL_11:
            v14 = sub_B0F4C0(v19, class_0, v9);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v14)(v19, result, *(_QWORD *)(v14 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 312))(
            v19,
            result,
            *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v21)(v19, result, v20);
    goto LABEL_37;
  }
}