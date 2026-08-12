void CancelConfirmMenu___ctor(CancelConfirmMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BalanceConfig_c *v4; // x0
  struct CancelConfirmItemDraw_array *v5; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  struct CancelConfirmItemDraw_array *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  __int64 v19; // x1
  __int64 v20; // x2

  if ( (byte_596CBF2 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&BaseDialog_TypeInfo);
    sub_2213A60(&CancelConfirmItemDraw___TypeInfo);
    byte_596CBF2 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method, v2);
    v4 = BalanceConfig_TypeInfo;
  }
  v5 = (struct CancelConfirmItemDraw_array *)sub_2213B20(
                                               CancelConfirmItemDraw___TypeInfo,
                                               (unsigned int)v4->static_fields->SupportDeckMemberMax);
  this->fields.currentSupportMemberObjectList = v5;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.currentSupportMemberObjectList,
    (int32_t)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  v12 = (struct CancelConfirmItemDraw_array *)sub_2213B20(
                                                CancelConfirmItemDraw___TypeInfo,
                                                (unsigned int)BalanceConfig_TypeInfo->static_fields->SupportDeckMemberMax);
  this->fields.oldSupportMemberObjectList = v12;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.oldSupportMemberObjectList,
    (int32_t)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, v19, v20);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void CancelConfirmMenu__Callback(CancelConfirmMenu_o *this, bool result, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x0
  struct CancelConfirmMenu_CallbackFunc_o *v9; // x20
  struct CancelConfirmMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_2213A04(p_callbackFunc, 0, (System_String_o *)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, bool, intptr_t))v9->fields.invoke_impl)(
      v9->fields.method_code,
      result,
      v9->fields.method);
  }
}


void CancelConfirmMenu__Close(CancelConfirmMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  CancelConfirmMenu__Close_42431548(this, 0, v2);
}


void CancelConfirmMenu__Close_42431548(CancelConfirmMenu_o *this, System_Action_o *callback, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_Action_c *v10; // x0
  System_Action_o *v11; // x20

  if ( (byte_596CBF1 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_CancelConfirmMenu_EndClose__);
    byte_596CBF1 = 1;
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
  System_Action___ctor(v11, (Il2CppObject *)this, Method_CancelConfirmMenu_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0);
}


void CancelConfirmMenu__EndClose(CancelConfirmMenu_o *this, const MethodInfo *method)
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

  CancelConfirmMenu__Init(this, method);
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


void CancelConfirmMenu__EndOpen(CancelConfirmMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void CancelConfirmMenu__Init(CancelConfirmMenu_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_596CBEF & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596CBEF = 1;
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
    sub_2213CDC(titleLabel, method);
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
  bool v6; // w6
  bool v7; // w7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  Il2CppObject *MasterData_object; // x21
  struct CancelConfirmItemDraw_array *currentSupportMemberObjectList; // x8
  UnityEngine_GameObject_o *v16; // x22
  int32_t v17; // w23
  Il2CppObject *Entity; // x24
  const MethodInfo *v19; // x3
  struct CancelConfirmItemDraw_array *v20; // x8
  struct CancelConfirmItemDraw_array *oldSupportMemberObjectList; // x8
  int32_t v22; // w23
  Il2CppObject *v23; // x24
  const MethodInfo *v24; // x3
  struct CancelConfirmItemDraw_array *v25; // x8
  __int64 v26; // x1
  __int64 v27; // x2
  UILabel_o *currentSupportMemberTitleLabel; // x20
  UILabel_o *oldSupportMemberTitleLabel; // x20
  UILabel_o *titleLabel; // x20
  UILabel_o *messageLabel; // x20
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  UnityEngine_GameObject_o *v34; // x0
  System_Action_o *v35; // x20

  if ( (byte_596CBF0 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_CancelConfirmMenu_EndOpen__);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_2213A60(&long___TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_10522/*"PARTY_ORGANIZATION_CONFIRM2_CANCEL_DECIDE"*/);
    sub_2213A60(&StringLiteral_10521/*"PARTY_ORGANIZATION_CONFIRM2_CANCEL_CANCEL"*/);
    sub_2213A60(&StringLiteral_13065/*"SUPPORT_SELECT_CURRENT_STATE"*/);
    sub_2213A60(&StringLiteral_13088/*"SUPPORT_SELECT_OLD_STATE"*/);
    sub_2213A60(&StringLiteral_10523/*"PARTY_ORGANIZATION_CONFIRM2_CANCEL_MESSAGE"*/);
    sub_2213A60(&StringLiteral_13043/*"SUPPORT_SELECT_CANCEL_DIALOG_TITLE"*/);
    byte_596CBF0 = 1;
  }
  if ( (this->fields.state | 4) == 4 )
  {
    this->fields.callbackFunc = callback;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      (System_String_o *)supportServantData,
      (System_String_o *)callback,
      (int32_t)method,
      v5,
      v6,
      v7);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_37;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    CancelConfirmMenu__SetActiveServantInfo(this, 1, v13);
    gameObject = (UnityEngine_GameObject_o *)this->fields.wideMessageLabel;
    if ( !gameObject )
      goto LABEL_37;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_37;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0);
    gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_37;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)gameObject,
                          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
    gameObject = (UnityEngine_GameObject_o *)sub_2213B20(long___TypeInfo, 1);
    currentSupportMemberObjectList = this->fields.currentSupportMemberObjectList;
    if ( !currentSupportMemberObjectList )
      goto LABEL_37;
    v16 = gameObject;
    v17 = 0;
    while ( v17 < SLODWORD(currentSupportMemberObjectList->max_length) )
    {
      if ( !supportServantData )
        goto LABEL_37;
      gameObject = (UnityEngine_GameObject_o *)SupportServantData__getServant(supportServantData, v17, 0);
      if ( gameObject )
      {
        if ( !MasterData_object )
          goto LABEL_37;
        Entity = DataMasterBase_object__object__long___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                   (int64_t)gameObject,
                   (const MethodInfo_3F13190 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      }
      else
      {
        Entity = 0;
      }
      gameObject = (UnityEngine_GameObject_o *)SupportServantData__getEquip(supportServantData, v17, 0);
      if ( v16 )
      {
        if ( !LODWORD(v16[1].klass) )
          goto LABEL_56;
        v20 = this->fields.currentSupportMemberObjectList;
        v16[1].monitor = gameObject;
        if ( v20 )
        {
          if ( (unsigned int)v17 >= LODWORD(v20->max_length) )
LABEL_56:
            sub_2213CE4(gameObject);
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
      goto LABEL_37;
    }
    oldSupportMemberObjectList = this->fields.oldSupportMemberObjectList;
    if ( !oldSupportMemberObjectList )
      goto LABEL_37;
    v22 = 0;
    while ( v22 < SLODWORD(oldSupportMemberObjectList->max_length) )
    {
      if ( !supportServantData )
        goto LABEL_37;
      gameObject = (UnityEngine_GameObject_o *)SupportServantData__getOldServant(supportServantData, v22, 0);
      if ( gameObject )
      {
        if ( !MasterData_object )
          goto LABEL_37;
        v23 = DataMasterBase_object__object__long___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                (int64_t)gameObject,
                (const MethodInfo_3F13190 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      }
      else
      {
        v23 = 0;
      }
      gameObject = (UnityEngine_GameObject_o *)SupportServantData__getOldEquip(supportServantData, v22, 0);
      if ( v16 )
      {
        if ( !LODWORD(v16[1].klass) )
          goto LABEL_56;
        v25 = this->fields.oldSupportMemberObjectList;
        v16[1].monitor = gameObject;
        if ( v25 )
        {
          if ( (unsigned int)v22 >= LODWORD(v25->max_length) )
            goto LABEL_56;
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
      goto LABEL_37;
    }
    gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton;
    if ( !gameObject )
      goto LABEL_37;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_37;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
    if ( !gameObject )
      goto LABEL_37;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_37;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton;
    if ( !gameObject )
      goto LABEL_37;
    ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, __int64, Il2CppClass **))gameObject->klass[1]._1.nestedTypes)(
      gameObject,
      0,
      1,
      gameObject->klass[1]._1.implementedInterfaces);
    gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
    if ( !gameObject )
      goto LABEL_37;
    ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, __int64, Il2CppClass **))gameObject->klass[1]._1.nestedTypes)(
      gameObject,
      0,
      1,
      gameObject->klass[1]._1.implementedInterfaces);
    currentSupportMemberTitleLabel = this->fields.currentSupportMemberTitleLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v26, v27);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13065/*"SUPPORT_SELECT_CURRENT_STATE"*/, 0);
    if ( !currentSupportMemberTitleLabel )
      goto LABEL_37;
    UILabel__set_text(currentSupportMemberTitleLabel, (System_String_o *)gameObject, 0);
    oldSupportMemberTitleLabel = this->fields.oldSupportMemberTitleLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13088/*"SUPPORT_SELECT_OLD_STATE"*/, 0);
    if ( !oldSupportMemberTitleLabel )
      goto LABEL_37;
    UILabel__set_text(oldSupportMemberTitleLabel, (System_String_o *)gameObject, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.titleLabel;
    if ( !gameObject )
      goto LABEL_37;
    UILabel__set_alignment((UILabel_o *)gameObject, 1, 0);
    titleLabel = this->fields.titleLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13043/*"SUPPORT_SELECT_CANCEL_DIALOG_TITLE"*/, 0);
    if ( !titleLabel )
      goto LABEL_37;
    UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0);
    messageLabel = this->fields.messageLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10523/*"PARTY_ORGANIZATION_CONFIRM2_CANCEL_MESSAGE"*/, 0);
    if ( !messageLabel )
      goto LABEL_37;
    UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0);
    decideLabel = this->fields.decideLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10522/*"PARTY_ORGANIZATION_CONFIRM2_CANCEL_DECIDE"*/, 0);
    if ( !decideLabel
      || (UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0),
          cancelLabel = this->fields.cancelLabel,
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10521/*"PARTY_ORGANIZATION_CONFIRM2_CANCEL_CANCEL"*/, 0),
          !cancelLabel)
      || (UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton) == 0) )
    {
LABEL_37:
      sub_2213CDC(gameObject, v12);
    }
    v34 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    AndroidBackKeyManager__AddBackBtn(v34, 0);
    this->fields.state = 1;
    v35 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v35, (Il2CppObject *)this, Method_CancelConfirmMenu_EndOpen__, 0);
    BaseDialog__Open((BaseDialog_o *)this, v35, 0, 0, 0);
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
    sub_2213CDC(messageLabel, active);
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  CancelConfirmMenu_o *v13; // x0
  CancelConfirmMenu_CallbackFunc_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_596CBED & 1) == 0 )
  {
    sub_2213A60(&CancelConfirmMenu_CallbackFunc_TypeInfo);
    byte_596CBED = 1;
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
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_221405C(v8, CancelConfirmMenu_CallbackFunc_TypeInfo, v9, v10);
  CancelConfirmMenu__remove_callbackFunc(v13, v14, v15);
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  CancelConfirmMenu_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_596CBEE & 1) == 0 )
  {
    sub_2213A60(&CancelConfirmMenu_CallbackFunc_TypeInfo);
    byte_596CBEE = 1;
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
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_221405C(v8, CancelConfirmMenu_CallbackFunc_TypeInfo, v9, v10);
  CancelConfirmMenu__Init(v13, v14);
}


void CancelConfirmMenu_CallbackFunc___ctor(
        CancelConfirmMenu_CallbackFunc_o *this,
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
  this->fields.invoke_impl = (intptr_t)sub_2006EFC;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_2006EB4;
}


System_IAsyncResult_o *CancelConfirmMenu_CallbackFunc__BeginInvoke(
        CancelConfirmMenu_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-38h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = result;
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(qword_5984328, v10);
  return sub_2213A14(this, v9, callback, object);
}


void CancelConfirmMenu_CallbackFunc__EndInvoke(
        CancelConfirmMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
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