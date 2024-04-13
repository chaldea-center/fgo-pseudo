void __fastcall CancelConfirmMenu___ctor(CancelConfirmMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  BalanceConfig_c *v11; // x0
  struct CancelConfirmItemDraw_array *v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  struct CancelConfirmItemDraw_array *v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7

  if ( (byte_42EB652 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&BaseDialog_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&CancelConfirmItemDraw___TypeInfo, v8, v9, v10);
    byte_42EB652 = 1;
  }
  v11 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v11 = BalanceConfig_TypeInfo;
  }
  v12 = (struct CancelConfirmItemDraw_array *)sub_B5D5DC(
                                                CancelConfirmItemDraw___TypeInfo,
                                                (unsigned int)v11->static_fields->SupportDeckMemberMax);
  this->fields.currentSupportMemberObjectList = v12;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.currentSupportMemberObjectList,
    (System_Int32_array **)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = (struct CancelConfirmItemDraw_array *)sub_B5D5DC(
                                                CancelConfirmItemDraw___TypeInfo,
                                                (unsigned int)BalanceConfig_TypeInfo->static_fields->SupportDeckMemberMax);
  this->fields.oldSupportMemberObjectList = v19;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.oldSupportMemberObjectList,
    (System_Int32_array **)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
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
    sub_B5D560(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    CancelConfirmMenu_CallbackFunc__Invoke(v9, result, 0LL);
  }
}


void __fastcall CancelConfirmMenu__Close(CancelConfirmMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  CancelConfirmMenu__Close_30510824(this, 0LL, v2);
}


void __fastcall CancelConfirmMenu__Close_30510824(
        CancelConfirmMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  System_Action_o *v13; // x20

  if ( (byte_42EB651 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_CancelConfirmMenu_EndClose__, v10, v11, v12);
    byte_42EB651 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v13 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_CancelConfirmMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v13, 0LL);
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
    sub_B5D560(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action__Invoke(v10, 0LL);
  }
}


void __fastcall CancelConfirmMenu__EndOpen(CancelConfirmMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void __fastcall CancelConfirmMenu__Init(CancelConfirmMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UILabel_o *titleLabel; // x0

  if ( (byte_42EB64F & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, v2, v3);
    byte_42EB64F = 1;
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
    sub_B5D69C(titleLabel, method);
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v51; // x1
  const MethodInfo *v52; // x2
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x21
  struct CancelConfirmItemDraw_array *currentSupportMemberObjectList; // x8
  System_Int64_array *v55; // x22
  __int64 v56; // x23
  UserServantEntity_o *Entity; // x24
  const MethodInfo *v58; // x3
  struct CancelConfirmItemDraw_array *v59; // x8
  struct CancelConfirmItemDraw_array *oldSupportMemberObjectList; // x8
  __int64 v61; // x23
  UserServantEntity_o *v62; // x24
  const MethodInfo *v63; // x3
  struct CancelConfirmItemDraw_array *v64; // x8
  UILabel_o *currentSupportMemberTitleLabel; // x20
  UILabel_o *oldSupportMemberTitleLabel; // x20
  UILabel_o *titleLabel; // x20
  UILabel_o *messageLabel; // x20
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  UnityEngine_GameObject_o *v71; // x20
  System_Action_o *v72; // x20
  __int64 v73; // x0

  if ( (byte_42EB650 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, kind, (_DWORD)supportServantData, callback);
    sub_B5D5C4(&AndroidBackKeyManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_CancelConfirmMenu_EndOpen__, v14, v15, v16);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, v17, v18, v19);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v20, v21, v22);
    sub_B5D5C4(&long___TypeInfo, v23, v24, v25);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_10325/*"PARTY_ORGANIZATION_CONFIRM2_CANCEL_DECIDE"*/, v32, v33, v34);
    sub_B5D5C4(&StringLiteral_10324/*"PARTY_ORGANIZATION_CONFIRM2_CANCEL_CANCEL"*/, v35, v36, v37);
    sub_B5D5C4(&StringLiteral_12676/*"SUPPORT_SELECT_CURRENT_STATE"*/, v38, v39, v40);
    sub_B5D5C4(&StringLiteral_12699/*"SUPPORT_SELECT_OLD_STATE"*/, v41, v42, v43);
    sub_B5D5C4(&StringLiteral_10326/*"PARTY_ORGANIZATION_CONFIRM2_CANCEL_MESSAGE"*/, v44, v45, v46);
    sub_B5D5C4(&StringLiteral_12654/*"SUPPORT_SELECT_CANCEL_DIALOG_TITLE"*/, v47, v48, v49);
    byte_42EB650 = 1;
  }
  if ( (this->fields.state | 4) == 4 )
  {
    this->fields.callbackFunc = callback;
    sub_B5D560(
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
    CancelConfirmMenu__SetActiveServantInfo(this, 1, v52);
    gameObject = (UnityEngine_GameObject_o *)this->fields.wideMessageLabel;
    if ( !gameObject )
      goto LABEL_60;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_60;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_60;
    MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)gameObject, (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
    gameObject = (UnityEngine_GameObject_o *)sub_B5D5DC(long___TypeInfo, 1LL);
    currentSupportMemberObjectList = this->fields.currentSupportMemberObjectList;
    if ( !currentSupportMemberObjectList )
      goto LABEL_60;
    v55 = (System_Int64_array *)gameObject;
    v56 = 0LL;
    while ( (int)v56 < (signed int)currentSupportMemberObjectList->max_length )
    {
      if ( !supportServantData )
        goto LABEL_60;
      gameObject = (UnityEngine_GameObject_o *)SupportServantData__getServant(supportServantData, v56, 0LL);
      if ( gameObject )
      {
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_60;
        Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                   MasterData_WarQuestSelectionMaster,
                   (int64_t)gameObject,
                   (const MethodInfo_23FB038 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      }
      else
      {
        Entity = 0LL;
      }
      gameObject = (UnityEngine_GameObject_o *)SupportServantData__getEquip(supportServantData, v56, 0LL);
      if ( v55 )
      {
        if ( !v55->max_length )
          goto LABEL_61;
        v55->m_Items[0] = (int64_t)gameObject;
        v59 = this->fields.currentSupportMemberObjectList;
        if ( v59 )
        {
          if ( (unsigned int)v56 >= v59->max_length )
          {
LABEL_61:
            v73 = sub_B5D6C8(gameObject);
            sub_B5D668(v73, 0LL);
          }
          gameObject = (UnityEngine_GameObject_o *)v59->m_Items[v56];
          if ( gameObject )
          {
            CancelConfirmItemDraw__SetItem((CancelConfirmItemDraw_o *)gameObject, Entity, v55, v58);
            currentSupportMemberObjectList = this->fields.currentSupportMemberObjectList;
            ++v56;
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
    v61 = 0LL;
    while ( (int)v61 < (signed int)oldSupportMemberObjectList->max_length )
    {
      if ( !supportServantData )
        goto LABEL_60;
      gameObject = (UnityEngine_GameObject_o *)SupportServantData__getOldServant(supportServantData, v61, 0LL);
      if ( gameObject )
      {
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_60;
        v62 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                MasterData_WarQuestSelectionMaster,
                (int64_t)gameObject,
                (const MethodInfo_23FB038 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      }
      else
      {
        v62 = 0LL;
      }
      gameObject = (UnityEngine_GameObject_o *)SupportServantData__getOldEquip(supportServantData, v61, 0LL);
      if ( v55 )
      {
        if ( !v55->max_length )
          goto LABEL_61;
        v55->m_Items[0] = (int64_t)gameObject;
        v64 = this->fields.oldSupportMemberObjectList;
        if ( v64 )
        {
          if ( (unsigned int)v61 >= v64->max_length )
            goto LABEL_61;
          gameObject = (UnityEngine_GameObject_o *)v64->m_Items[v61];
          if ( gameObject )
          {
            CancelConfirmItemDraw__SetItem((CancelConfirmItemDraw_o *)gameObject, v62, v55, v63);
            oldSupportMemberObjectList = this->fields.oldSupportMemberObjectList;
            ++v61;
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
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12676/*"SUPPORT_SELECT_CURRENT_STATE"*/, 0LL);
    if ( !currentSupportMemberTitleLabel )
      goto LABEL_60;
    UILabel__set_text(currentSupportMemberTitleLabel, (System_String_o *)gameObject, 0LL);
    oldSupportMemberTitleLabel = this->fields.oldSupportMemberTitleLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12699/*"SUPPORT_SELECT_OLD_STATE"*/, 0LL);
    if ( !oldSupportMemberTitleLabel )
      goto LABEL_60;
    UILabel__set_text(oldSupportMemberTitleLabel, (System_String_o *)gameObject, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.titleLabel;
    if ( !gameObject )
      goto LABEL_60;
    UILabel__set_alignment((UILabel_o *)gameObject, 1, 0LL);
    titleLabel = this->fields.titleLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12654/*"SUPPORT_SELECT_CANCEL_DIALOG_TITLE"*/, 0LL);
    if ( !titleLabel )
      goto LABEL_60;
    UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
    messageLabel = this->fields.messageLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10326/*"PARTY_ORGANIZATION_CONFIRM2_CANCEL_MESSAGE"*/, 0LL);
    if ( !messageLabel )
      goto LABEL_60;
    UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0LL);
    decideLabel = this->fields.decideLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10325/*"PARTY_ORGANIZATION_CONFIRM2_CANCEL_DECIDE"*/, 0LL);
    if ( !decideLabel
      || (UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0LL),
          cancelLabel = this->fields.cancelLabel,
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10324/*"PARTY_ORGANIZATION_CONFIRM2_CANCEL_CANCEL"*/, 0LL),
          !cancelLabel)
      || (UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0LL),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton) == 0LL) )
    {
LABEL_60:
      sub_B5D69C(gameObject, v51);
    }
    v71 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
    }
    AndroidBackKeyManager__AddBackBtn(v71, 0LL);
    this->fields.state = 1;
    v72 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v72, (Il2CppObject *)this, Method_CancelConfirmMenu_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v72, 0, 0LL);
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
    sub_B5D69C(messageLabel, active);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageLabel, active, 0LL);
}


void __fastcall CancelConfirmMenu__add_callbackFunc(
        CancelConfirmMenu_o *this,
        CancelConfirmMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct CancelConfirmMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct CancelConfirmMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  CancelConfirmMenu_o *v12; // x0
  CancelConfirmMenu_CallbackFunc_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_42EB64D & 1) == 0 )
  {
    sub_B5D5C4(&CancelConfirmMenu_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EB64D = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Combine(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (CancelConfirmMenu_CallbackFunc_c *)v9->klass != CancelConfirmMenu_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  sub_B5D990(v9);
  CancelConfirmMenu__remove_callbackFunc(v12, v13, v14);
}


void __fastcall CancelConfirmMenu__remove_callbackFunc(
        CancelConfirmMenu_o *this,
        CancelConfirmMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct CancelConfirmMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct CancelConfirmMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  CancelConfirmMenu_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_42EB64E & 1) == 0 )
  {
    sub_B5D5C4(&CancelConfirmMenu_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EB64E = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Remove(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (CancelConfirmMenu_CallbackFunc_c *)v9->klass != CancelConfirmMenu_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  sub_B5D990(v9);
  CancelConfirmMenu__Init(v12, v13);
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
  sub_B5D560(p_method);
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
  if ( (byte_42E5E41 & 1) == 0 )
  {
    sub_B5D5C4(&bool_TypeInfo, result, (_DWORD)callback, object);
    byte_42E5E41 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B5D568(this, v9, callback, object);
}


void __fastcall CancelConfirmMenu_CallbackFunc__EndInvoke(
        CancelConfirmMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
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
  __int64 v11; // x3
  __int64 v12; // x8
  unsigned __int64 v13; // x10
  _DWORD *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  void (__fastcall **v18)(__int64 *, bool, _QWORD); // x0
  CancelConfirmMenu_CallbackFunc_o *v19; // x8
  __int64 *v20; // x21
  __int64 v21; // x22
  void (__fastcall *v22)(bool, __int64); // x23
  char v23; // w23
  char v24; // w0
  __int64 v25; // x3
  __int64 v26; // x8
  __int64 v27; // x1
  __int64 v28; // x2
  unsigned __int64 v29; // x10
  _DWORD *v30; // x11
  CancelConfirmMenu_CallbackFunc_o *v31; // [xsp+8h] [xbp-48h] BYREF

  v31 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v31;
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
      v19 = v7[v8];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(bool, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v19->fields.extra_arg, result, method);
      if ( (sub_B5D5F4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22(result, v21);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B5D5EC(v21);
      v24 = sub_B5D9F0(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v26 = *v20;
          v27 = *(_QWORD *)(v21 + 24);
          v28 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v29 = 0LL;
            v30 = (_DWORD *)(*(_QWORD *)(v26 + 176) + 8LL);
            while ( *((_QWORD *)v30 - 1) != v27 )
            {
              ++v29;
              v30 += 4;
              if ( v29 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v26 + 16LL * (*v30 + (int)v28) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AF54C0(v20, v27, v28, v25);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B5D674(v16, v21);
        (*v18)(v20, result, v18);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v21 + 72);
        if ( (v24 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v21);
          v12 = *v20;
          if ( *(_WORD *)(*v20 + 298) )
          {
            v13 = 0LL;
            v14 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v14 - 1) != class_0 )
            {
              ++v13;
              v14 += 4;
              if ( v13 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_11;
            }
            v15 = v12 + 16LL * (int)(*v14 + v9) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AF54C0(v20, class_0, v9, v11);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v15)(v20, result, *(_QWORD *)(v15 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 312))(
            v20,
            result,
            *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v22)(v20, result, v21);
    goto LABEL_37;
  }
}