void __fastcall CancelConfirmMenu___ctor(CancelConfirmMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  BalanceConfig_c *v6; // x0
  struct CancelConfirmItemDraw_array *v7; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  __int64 v14; // x2
  struct CancelConfirmItemDraw_array *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_40FCF13 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&BaseDialog_TypeInfo, v4);
    sub_B16FFC(&CancelConfirmItemDraw___TypeInfo, v5);
    byte_40FCF13 = 1;
  }
  v6 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v6 = BalanceConfig_TypeInfo;
  }
  v7 = (struct CancelConfirmItemDraw_array *)sub_B17014(
                                               CancelConfirmItemDraw___TypeInfo,
                                               (unsigned int)v6->static_fields->SupportDeckMemberMax,
                                               v2);
  this->fields.currentSupportMemberObjectList = v7;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.currentSupportMemberObjectList,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  v15 = (struct CancelConfirmItemDraw_array *)sub_B17014(
                                                CancelConfirmItemDraw___TypeInfo,
                                                (unsigned int)BalanceConfig_TypeInfo->static_fields->SupportDeckMemberMax,
                                                v14);
  this->fields.oldSupportMemberObjectList = v15;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.oldSupportMemberObjectList,
    (System_Int32_array **)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
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
    sub_B16F98(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    CancelConfirmMenu_CallbackFunc__Invoke(v9, result, 0LL);
  }
}


void __fastcall CancelConfirmMenu__Close(CancelConfirmMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  CancelConfirmMenu__Close_30545168(this, 0LL, v2);
}


void __fastcall CancelConfirmMenu__Close_30545168(
        CancelConfirmMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  System_Action_o *v15; // x20

  if ( (byte_40FCF12 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&Method_CancelConfirmMenu_EndClose__, v10);
    byte_40FCF12 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v15 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v11, v12, v13, v14);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_CancelConfirmMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v15, 0LL);
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
    sub_B16F98(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
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
  UILabel_o *messageLabel; // x0
  UILabel_o *currentSupportMemberTitleLabel; // x0
  UILabel_o *oldSupportMemberTitleLabel; // x0
  UILabel_o *decideLabel; // x0
  UILabel_o *cancelLabel; // x0

  if ( (byte_40FCF10 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1/*""*/, method);
    byte_40FCF10 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_10;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  messageLabel = this->fields.messageLabel;
  if ( !messageLabel )
    goto LABEL_10;
  UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  currentSupportMemberTitleLabel = this->fields.currentSupportMemberTitleLabel;
  if ( !currentSupportMemberTitleLabel
    || (UILabel__set_text(currentSupportMemberTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (oldSupportMemberTitleLabel = this->fields.oldSupportMemberTitleLabel) == 0LL)
    || (UILabel__set_text(oldSupportMemberTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (decideLabel = this->fields.decideLabel) == 0LL)
    || (UILabel__set_text(decideLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (cancelLabel = this->fields.cancelLabel) == 0LL) )
  {
LABEL_10:
    sub_B170D4();
  }
  UILabel__set_text(cancelLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
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
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v11; // x1
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
  __int64 v23; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v25; // x2
  UnityEngine_Component_o *wideMessageLabel; // x0
  UnityEngine_GameObject_o *v27; // x0
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x21
  __int64 v30; // x2
  __int64 v31; // x0
  struct CancelConfirmItemDraw_array *currentSupportMemberObjectList; // x8
  System_Int64_array *v33; // x22
  __int64 v34; // x23
  int64_t Servant; // x0
  UserServantEntity_o *Entity; // x24
  int64_t Equip; // x0
  __int64 v38; // x1
  __int64 v39; // x2
  const MethodInfo *v40; // x3
  struct CancelConfirmItemDraw_array *v41; // x8
  CancelConfirmItemDraw_o *v42; // x0
  struct CancelConfirmItemDraw_array *oldSupportMemberObjectList; // x8
  __int64 v44; // x23
  int64_t OldServant; // x0
  UserServantEntity_o *v46; // x24
  const MethodInfo *v47; // x3
  struct CancelConfirmItemDraw_array *v48; // x8
  CancelConfirmItemDraw_o *v49; // x0
  UnityEngine_Component_o *decideButton; // x0
  UnityEngine_GameObject_o *v51; // x0
  UnityEngine_Component_o *cancelButton; // x0
  UnityEngine_GameObject_o *v53; // x0
  struct UICommonButton_o *v54; // x0
  struct UICommonButton_o *v55; // x0
  UILabel_o *currentSupportMemberTitleLabel; // x20
  System_String_o *v57; // x0
  UILabel_o *oldSupportMemberTitleLabel; // x20
  System_String_o *v59; // x0
  UILabel_o *titleLabel; // x0
  UILabel_o *v61; // x20
  System_String_o *v62; // x0
  UILabel_o *messageLabel; // x20
  System_String_o *v64; // x0
  UILabel_o *decideLabel; // x20
  System_String_o *v66; // x0
  UILabel_o *cancelLabel; // x20
  System_String_o *v68; // x0
  UnityEngine_Component_o *v69; // x0
  UnityEngine_GameObject_o *v70; // x20
  __int64 v71; // x1
  __int64 v72; // x2
  __int64 v73; // x3
  __int64 v74; // x4
  System_Action_o *v75; // x20

  if ( (byte_40FCF11 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_B16FFC(&AndroidBackKeyManager_TypeInfo, v11);
    sub_B16FFC(&Method_CancelConfirmMenu_EndOpen__, v12);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, v13);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v14);
    sub_B16FFC(&long___TypeInfo, v15);
    sub_B16FFC(&LocalizationManager_TypeInfo, v16);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_B16FFC(&StringLiteral_10186/*"PARTY_ORGANIZATION_CONFIRM2_CANCEL_DECIDE"*/, v18);
    sub_B16FFC(&StringLiteral_10185/*"PARTY_ORGANIZATION_CONFIRM2_CANCEL_CANCEL"*/, v19);
    sub_B16FFC(&StringLiteral_12472/*"SUPPORT_SELECT_CURRENT_STATE"*/, v20);
    sub_B16FFC(&StringLiteral_12495/*"SUPPORT_SELECT_OLD_STATE"*/, v21);
    sub_B16FFC(&StringLiteral_10187/*"PARTY_ORGANIZATION_CONFIRM2_CANCEL_MESSAGE"*/, v22);
    sub_B16FFC(&StringLiteral_12450/*"SUPPORT_SELECT_CANCEL_DIALOG_TITLE"*/, v23);
    byte_40FCF11 = 1;
  }
  if ( (this->fields.state | 4) == 4 )
  {
    this->fields.callbackFunc = callback;
    sub_B16F98(
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
    CancelConfirmMenu__SetActiveServantInfo(this, 1, v25);
    wideMessageLabel = (UnityEngine_Component_o *)this->fields.wideMessageLabel;
    if ( !wideMessageLabel )
      goto LABEL_60;
    v27 = UnityEngine_Component__get_gameObject(wideMessageLabel, 0LL);
    if ( !v27 )
      goto LABEL_60;
    UnityEngine_GameObject__SetActive(v27, 0, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_60;
    MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
    v31 = sub_B17014(long___TypeInfo, 1LL, v30);
    currentSupportMemberObjectList = this->fields.currentSupportMemberObjectList;
    if ( !currentSupportMemberObjectList )
      goto LABEL_60;
    v33 = (System_Int64_array *)v31;
    v34 = 0LL;
    while ( (int)v34 < (signed int)currentSupportMemberObjectList->max_length )
    {
      if ( !supportServantData )
        goto LABEL_60;
      Servant = SupportServantData__getServant(supportServantData, v34, 0LL);
      if ( Servant )
      {
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_60;
        Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                   MasterData_WarQuestSelectionMaster,
                   Servant,
                   (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      }
      else
      {
        Entity = 0LL;
      }
      Equip = SupportServantData__getEquip(supportServantData, v34, 0LL);
      if ( v33 )
      {
        if ( !v33->max_length )
          goto LABEL_61;
        v33->m_Items[0] = Equip;
        v41 = this->fields.currentSupportMemberObjectList;
        if ( v41 )
        {
          if ( (unsigned int)v34 >= v41->max_length )
          {
LABEL_61:
            sub_B17100(Equip, v38, v39);
            sub_B170A0();
          }
          v42 = v41->m_Items[v34];
          if ( v42 )
          {
            CancelConfirmItemDraw__SetItem(v42, Entity, v33, v40);
            currentSupportMemberObjectList = this->fields.currentSupportMemberObjectList;
            ++v34;
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
    v44 = 0LL;
    while ( (int)v44 < (signed int)oldSupportMemberObjectList->max_length )
    {
      if ( !supportServantData )
        goto LABEL_60;
      OldServant = SupportServantData__getOldServant(supportServantData, v44, 0LL);
      if ( OldServant )
      {
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_60;
        v46 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                MasterData_WarQuestSelectionMaster,
                OldServant,
                (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      }
      else
      {
        v46 = 0LL;
      }
      Equip = SupportServantData__getOldEquip(supportServantData, v44, 0LL);
      if ( v33 )
      {
        if ( !v33->max_length )
          goto LABEL_61;
        v33->m_Items[0] = Equip;
        v48 = this->fields.oldSupportMemberObjectList;
        if ( v48 )
        {
          if ( (unsigned int)v44 >= v48->max_length )
            goto LABEL_61;
          v49 = v48->m_Items[v44];
          if ( v49 )
          {
            CancelConfirmItemDraw__SetItem(v49, v46, v33, v47);
            oldSupportMemberObjectList = this->fields.oldSupportMemberObjectList;
            ++v44;
            if ( oldSupportMemberObjectList )
              continue;
          }
        }
      }
      goto LABEL_60;
    }
    decideButton = (UnityEngine_Component_o *)this->fields.decideButton;
    if ( !decideButton )
      goto LABEL_60;
    v51 = UnityEngine_Component__get_gameObject(decideButton, 0LL);
    if ( !v51 )
      goto LABEL_60;
    UnityEngine_GameObject__SetActive(v51, 1, 0LL);
    cancelButton = (UnityEngine_Component_o *)this->fields.cancelButton;
    if ( !cancelButton )
      goto LABEL_60;
    v53 = UnityEngine_Component__get_gameObject(cancelButton, 0LL);
    if ( !v53 )
      goto LABEL_60;
    UnityEngine_GameObject__SetActive(v53, 1, 0LL);
    v54 = this->fields.decideButton;
    if ( !v54 )
      goto LABEL_60;
    ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v54->klass->vtable._14_SetState.method)(
      v54,
      0LL,
      1LL,
      v54->klass->vtable._15_OnPress.methodPtr);
    v55 = this->fields.cancelButton;
    if ( !v55 )
      goto LABEL_60;
    ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v55->klass->vtable._14_SetState.method)(
      v55,
      0LL,
      1LL,
      v55->klass->vtable._15_OnPress.methodPtr);
    currentSupportMemberTitleLabel = this->fields.currentSupportMemberTitleLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v57 = LocalizationManager__Get((System_String_o *)StringLiteral_12472/*"SUPPORT_SELECT_CURRENT_STATE"*/, 0LL);
    if ( !currentSupportMemberTitleLabel )
      goto LABEL_60;
    UILabel__set_text(currentSupportMemberTitleLabel, v57, 0LL);
    oldSupportMemberTitleLabel = this->fields.oldSupportMemberTitleLabel;
    v59 = LocalizationManager__Get((System_String_o *)StringLiteral_12495/*"SUPPORT_SELECT_OLD_STATE"*/, 0LL);
    if ( !oldSupportMemberTitleLabel )
      goto LABEL_60;
    UILabel__set_text(oldSupportMemberTitleLabel, v59, 0LL);
    titleLabel = this->fields.titleLabel;
    if ( !titleLabel )
      goto LABEL_60;
    UILabel__set_alignment(titleLabel, 1, 0LL);
    v61 = this->fields.titleLabel;
    v62 = LocalizationManager__Get((System_String_o *)StringLiteral_12450/*"SUPPORT_SELECT_CANCEL_DIALOG_TITLE"*/, 0LL);
    if ( !v61 )
      goto LABEL_60;
    UILabel__set_text(v61, v62, 0LL);
    messageLabel = this->fields.messageLabel;
    v64 = LocalizationManager__Get((System_String_o *)StringLiteral_10187/*"PARTY_ORGANIZATION_CONFIRM2_CANCEL_MESSAGE"*/, 0LL);
    if ( !messageLabel )
      goto LABEL_60;
    UILabel__set_text(messageLabel, v64, 0LL);
    decideLabel = this->fields.decideLabel;
    v66 = LocalizationManager__Get((System_String_o *)StringLiteral_10186/*"PARTY_ORGANIZATION_CONFIRM2_CANCEL_DECIDE"*/, 0LL);
    if ( !decideLabel
      || (UILabel__set_text(decideLabel, v66, 0LL),
          cancelLabel = this->fields.cancelLabel,
          v68 = LocalizationManager__Get((System_String_o *)StringLiteral_10185/*"PARTY_ORGANIZATION_CONFIRM2_CANCEL_CANCEL"*/, 0LL),
          !cancelLabel)
      || (UILabel__set_text(cancelLabel, v68, 0LL), (v69 = (UnityEngine_Component_o *)this->fields.cancelButton) == 0LL) )
    {
LABEL_60:
      sub_B170D4();
    }
    v70 = UnityEngine_Component__get_gameObject(v69, 0LL);
    if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
    }
    AndroidBackKeyManager__AddBackBtn(v70, 0LL);
    this->fields.state = 1;
    v75 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v71, v72, v73, v74);
    System_Action___ctor(v75, (Il2CppObject *)this, Method_CancelConfirmMenu_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v75, 0, 0LL);
  }
}


void __fastcall CancelConfirmMenu__SetActiveServantInfo(
        CancelConfirmMenu_o *this,
        bool active,
        const MethodInfo *method)
{
  UnityEngine_Component_o *messageLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *currentMemberContainer; // x0
  UnityEngine_GameObject_o *lastMemberConstainer; // x0
  UnityEngine_Component_o *currentSupportMemberTitleLabel; // x0
  UnityEngine_GameObject_o *v10; // x0
  UnityEngine_Component_o *oldSupportMemberTitleLabel; // x0
  UnityEngine_GameObject_o *v12; // x0

  messageLabel = (UnityEngine_Component_o *)this->fields.messageLabel;
  if ( !messageLabel )
    goto LABEL_10;
  gameObject = UnityEngine_Component__get_gameObject(messageLabel, 0LL);
  if ( !gameObject )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(gameObject, active, 0LL);
  currentMemberContainer = this->fields.currentMemberContainer;
  if ( !currentMemberContainer )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(currentMemberContainer, active, 0LL);
  lastMemberConstainer = this->fields.lastMemberConstainer;
  if ( !lastMemberConstainer
    || (UnityEngine_GameObject__SetActive(lastMemberConstainer, active, 0LL),
        (currentSupportMemberTitleLabel = (UnityEngine_Component_o *)this->fields.currentSupportMemberTitleLabel) == 0LL)
    || (v10 = UnityEngine_Component__get_gameObject(currentSupportMemberTitleLabel, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(v10, active, 0LL),
        (oldSupportMemberTitleLabel = (UnityEngine_Component_o *)this->fields.oldSupportMemberTitleLabel) == 0LL)
    || (v12 = UnityEngine_Component__get_gameObject(oldSupportMemberTitleLabel, 0LL)) == 0LL )
  {
LABEL_10:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(v12, active, 0LL);
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

  if ( (byte_40FCF0E & 1) == 0 )
  {
    sub_B16FFC(&CancelConfirmMenu_CallbackFunc_TypeInfo, value);
    byte_40FCF0E = 1;
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
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B173C8(v8);
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

  if ( (byte_40FCF0F & 1) == 0 )
  {
    sub_B16FFC(&CancelConfirmMenu_CallbackFunc_TypeInfo, value);
    byte_40FCF0F = 1;
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
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B173C8(v8);
  CancelConfirmMenu__Init(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CancelConfirmMenu_CallbackFunc___ctor(
        CancelConfirmMenu_CallbackFunc_o *this,
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
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_40F70B1 & 1) == 0 )
  {
    sub_B16FFC(&bool_TypeInfo, result);
    byte_40F70B1 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v9, callback, object);
}


void __fastcall CancelConfirmMenu_CallbackFunc__EndInvoke(
        CancelConfirmMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
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
        sub_B170B8(*(_QWORD *)&v18->fields.extra_arg, result, method);
      if ( (sub_B1702C(v20) & 1) == 0 )
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
      v22 = sub_B17024(v20);
      v23 = sub_B17428(v20);
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
            v16 = sub_AAFEF8(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B170AC(v15, v20);
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
            v14 = sub_AAFEF8(v19, class_0, v9);
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