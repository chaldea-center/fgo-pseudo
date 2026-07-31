void FriendWarningDialog___ctor(FriendWarningDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_59330DA & 1) == 0 )
  {
    sub_21FFC50(&BaseDialog_TypeInfo);
    byte_59330DA = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void FriendWarningDialog__Callback(FriendWarningDialog_o *this, bool result, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x0
  struct FriendWarningDialog_CallbackFunc_o *v9; // x20
  struct FriendWarningDialog_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_21FFBF4(p_callbackFunc, 0, (System_String_o *)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, bool, intptr_t))v9->fields.invoke_impl)(
      v9->fields.method_code,
      result,
      v9->fields.method);
  }
}


void FriendWarningDialog__Close(FriendWarningDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  FriendWarningDialog__Close_39525768(this, 0, v2);
}


void FriendWarningDialog__Close_39525768(
        FriendWarningDialog_o *this,
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

  if ( (byte_59330D7 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_FriendWarningDialog_EndClose__);
    byte_59330D7 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_21FFBF4(
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
  v11 = (System_Action_o *)sub_21FFEBC(v10);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_FriendWarningDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0);
}


void FriendWarningDialog__EndClose(FriendWarningDialog_o *this, const MethodInfo *method)
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

  FriendWarningDialog__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_21FFBF4(p_closeCallbackFunc, 0, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(intptr_t, intptr_t))v10->fields.invoke_impl)(v10->fields.method_code, v10->fields.method);
  }
}


void FriendWarningDialog__EndOpen(FriendWarningDialog_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void FriendWarningDialog__Init(FriendWarningDialog_o *this, const MethodInfo *method)
{
  UILabel_o *messageLabel; // x0

  if ( (byte_59330D5 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_59330D5 = 1;
  }
  messageLabel = this->fields.messageLabel;
  if ( !messageLabel
    || (UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (messageLabel = this->fields.closeLabel) == 0) )
  {
    sub_21FFECC(messageLabel, method);
  }
  UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void FriendWarningDialog__OnClickClose(FriendWarningDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_59330D8 & 1) == 0 )
  {
    sub_21FFC50(&Method_FriendWarningDialog_OnClickClose__);
    byte_59330D8 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_FriendWarningDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_FriendWarningDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_FriendWarningDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    FriendWarningDialog__Callback(this, 0, v5);
  }
}


void FriendWarningDialog__Open(
        FriendWarningDialog_o *this,
        int32_t kind,
        FriendWarningDialog_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x2
  UILabel_o *v15; // x20
  __int64 *v16; // x8
  UILabel_o *v17; // x20
  __int64 v18; // x1
  __int64 v19; // x2
  Il2CppObject *MasterData_object; // x22
  UILabel_o *v21; // x20
  System_String_o *v22; // x21
  __int64 v23; // x1
  __int64 v24; // x2
  Il2CppObject *v25; // x22
  BalanceConfig_c *v26; // x8
  Il2CppObject *v27; // x0
  UserGameEntity_o *SelfUserGame; // x20
  __int64 v29; // x1
  __int64 v30; // x2
  OtherUserGameEntity_array *List; // x23
  UILabel_o *messageLabel; // x21
  System_String_o *v33; // x22
  Il2CppObject *v34; // x23
  Il2CppObject *v35; // x0
  UILabel_o *v36; // x20
  UILabel_o *v37; // x20
  UILabel_o *v38; // x20
  UILabel_o *closeLabel; // x20
  System_Action_o *v40; // x20
  int32_t friendKeep; // [xsp+8h] [xbp-38h] BYREF
  int32_t max_length; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_59330D6 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_TblFriendMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserFollowMaster___);
    sub_21FFC50(&Method_FriendWarningDialog_EndOpen__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&StringLiteral_6811/*"FRIEND_NO_FRIEND_MESSAGE"*/);
    sub_21FFC50(&StringLiteral_6815/*"FRIEND_NO_OFFER_MESSAGE"*/);
    sub_21FFC50(&StringLiteral_6810/*"FRIEND_NO_FRIEND_CLOSE"*/);
    sub_21FFC50(&StringLiteral_6818/*"FRIEND_NO_STRING_CLOSE"*/);
    sub_21FFC50(&StringLiteral_6808/*"FRIEND_MAX_FRIEND_CLOSE"*/);
    sub_21FFC50(&StringLiteral_6819/*"FRIEND_NO_STRING_MESSAGE"*/);
    sub_21FFC50(&StringLiteral_6809/*"FRIEND_MAX_FRIEND_MESSAGE"*/);
    sub_21FFC50(&StringLiteral_6812/*"FRIEND_NO_OFFERED_CLOSE"*/);
    sub_21FFC50(&StringLiteral_6741/*"FOLLOW_MAX_CLOSE"*/);
    sub_21FFC50(&StringLiteral_6814/*"FRIEND_NO_OFFER_CLOSE"*/);
    sub_21FFC50(&StringLiteral_6817/*"FRIEND_NO_SEARCH_MESSAGE"*/);
    sub_21FFC50(&StringLiteral_6816/*"FRIEND_NO_SEARCH_CLOSE"*/);
    sub_21FFC50(&StringLiteral_6742/*"FOLLOW_MAX_MESSAGE"*/);
    sub_21FFC50(&StringLiteral_6813/*"FRIEND_NO_OFFERED_MESSAGE"*/);
    byte_59330D6 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.callbackFunc = callback;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      (System_String_o *)callback,
      (System_String_o *)method,
      v4,
      v5,
      v6,
      v7);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_53;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    if ( kind <= 3 )
    {
      switch ( kind )
      {
        case 1:
          SelfUserGame = UserGameMaster__getSelfUserGame(0);
          gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !gameObject )
            goto LABEL_53;
          gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                     (DataManager_o *)gameObject,
                                                     (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_TblFriendMaster___);
          if ( !gameObject )
            goto LABEL_53;
          List = TblFriendMaster__GetList((TblFriendMaster_o *)gameObject, 3, 0);
          messageLabel = this->fields.messageLabel;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v29, v30);
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6809/*"FRIEND_MAX_FRIEND_MESSAGE"*/, 0);
          if ( !List )
            goto LABEL_53;
          v33 = (System_String_o *)gameObject;
          max_length = List->max_length;
          gameObject = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(qword_594C070, &max_length);
          if ( !SelfUserGame )
            goto LABEL_53;
          v34 = (Il2CppObject *)gameObject;
          friendKeep = SelfUserGame->fields.friendKeep;
          v35 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &friendKeep);
          gameObject = (UnityEngine_GameObject_o *)System_String__Format_75484576(v33, v34, v35, 0);
          if ( !messageLabel )
            goto LABEL_53;
          UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0);
          v16 = &StringLiteral_6808/*"FRIEND_MAX_FRIEND_CLOSE"*/;
LABEL_49:
          closeLabel = this->fields.closeLabel;
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)*v16, 0);
          if ( closeLabel )
          {
            UILabel__set_text(closeLabel, (System_String_o *)gameObject, 0);
            break;
          }
LABEL_53:
          sub_21FFECC(gameObject, v12);
        case 2:
          v38 = this->fields.messageLabel;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v13, v14);
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6817/*"FRIEND_NO_SEARCH_MESSAGE"*/, 0);
          if ( !v38 )
            goto LABEL_53;
          UILabel__set_text(v38, (System_String_o *)gameObject, 0);
          v16 = &StringLiteral_6816/*"FRIEND_NO_SEARCH_CLOSE"*/;
          goto LABEL_49;
        case 3:
          v17 = this->fields.messageLabel;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v13, v14);
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6819/*"FRIEND_NO_STRING_MESSAGE"*/, 0);
          if ( !v17 )
            goto LABEL_53;
          UILabel__set_text(v17, (System_String_o *)gameObject, 0);
          v16 = &StringLiteral_6818/*"FRIEND_NO_STRING_CLOSE"*/;
          goto LABEL_49;
      }
    }
    else
    {
      if ( kind <= 5 )
      {
        if ( kind == 4 )
        {
          v36 = this->fields.messageLabel;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v13, v14);
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6815/*"FRIEND_NO_OFFER_MESSAGE"*/, 0);
          if ( !v36 )
            goto LABEL_53;
          UILabel__set_text(v36, (System_String_o *)gameObject, 0);
          v16 = &StringLiteral_6814/*"FRIEND_NO_OFFER_CLOSE"*/;
        }
        else
        {
          v15 = this->fields.messageLabel;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v13, v14);
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6813/*"FRIEND_NO_OFFERED_MESSAGE"*/, 0);
          if ( !v15 )
            goto LABEL_53;
          UILabel__set_text(v15, (System_String_o *)gameObject, 0);
          v16 = &StringLiteral_6812/*"FRIEND_NO_OFFERED_CLOSE"*/;
        }
        goto LABEL_49;
      }
      if ( kind == 6 )
      {
        v37 = this->fields.messageLabel;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v13, v14);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6811/*"FRIEND_NO_FRIEND_MESSAGE"*/, 0);
        if ( !v37 )
          goto LABEL_53;
        UILabel__set_text(v37, (System_String_o *)gameObject, 0);
        v16 = &StringLiteral_6810/*"FRIEND_NO_FRIEND_CLOSE"*/;
        goto LABEL_49;
      }
      if ( kind == 7 )
      {
        gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !gameObject )
          goto LABEL_53;
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)gameObject,
                              (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserFollowMaster___);
        v21 = this->fields.messageLabel;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v18, v19);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6742/*"FOLLOW_MAX_MESSAGE"*/, 0);
        if ( !MasterData_object )
          goto LABEL_53;
        v22 = (System_String_o *)gameObject;
        max_length = UserFollowMaster__GetFollowSum((UserFollowMaster_o *)MasterData_object, 0);
        v25 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &max_length);
        v26 = BalanceConfig_TypeInfo;
        if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v23, v24);
          v26 = BalanceConfig_TypeInfo;
        }
        friendKeep = v26->static_fields->FollowNum;
        v27 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &friendKeep);
        gameObject = (UnityEngine_GameObject_o *)System_String__Format_75484576(v22, v25, v27, 0);
        if ( !v21 )
          goto LABEL_53;
        UILabel__set_text(v21, (System_String_o *)gameObject, 0);
        v16 = &StringLiteral_6741/*"FOLLOW_MAX_CLOSE"*/;
        goto LABEL_49;
      }
    }
    this->fields.state = 1;
    v40 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(v40, (Il2CppObject *)this, Method_FriendWarningDialog_EndOpen__, 0);
    BaseDialog__Open((BaseDialog_o *)this, v40, 0, 0, 0);
  }
}


void FriendWarningDialog__add_callbackFunc(
        FriendWarningDialog_o *this,
        FriendWarningDialog_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct FriendWarningDialog_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct FriendWarningDialog_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  FriendWarningDialog_o *v13; // x0
  FriendWarningDialog_CallbackFunc_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_59330D3 & 1) == 0 )
  {
    sub_21FFC50(&FriendWarningDialog_CallbackFunc_TypeInfo);
    byte_59330D3 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (FriendWarningDialog_CallbackFunc_c *)v8->klass != FriendWarningDialog_CallbackFunc_TypeInfo )
        break;
    }
    v11 = sub_223767C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (FriendWarningDialog_o *)sub_220024C(v8, FriendWarningDialog_CallbackFunc_TypeInfo, v9, v10);
  FriendWarningDialog__remove_callbackFunc(v13, v14, v15);
}


System_String_o *FriendWarningDialog__get_closeBtnPath(FriendWarningDialog_o *this, const MethodInfo *method)
{
  if ( (byte_59330D9 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_4819/*"ConfirmWindow/CloseButton"*/);
    byte_59330D9 = 1;
  }
  return (System_String_o *)StringLiteral_4819/*"ConfirmWindow/CloseButton"*/;
}


void FriendWarningDialog__remove_callbackFunc(
        FriendWarningDialog_o *this,
        FriendWarningDialog_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct FriendWarningDialog_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct FriendWarningDialog_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  FriendWarningDialog_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_59330D4 & 1) == 0 )
  {
    sub_21FFC50(&FriendWarningDialog_CallbackFunc_TypeInfo);
    byte_59330D4 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (FriendWarningDialog_CallbackFunc_c *)v8->klass != FriendWarningDialog_CallbackFunc_TypeInfo )
        break;
    }
    v11 = sub_223767C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (FriendWarningDialog_o *)sub_220024C(v8, FriendWarningDialog_CallbackFunc_TypeInfo, v9, v10);
  FriendWarningDialog__EndOpen(v13, v14);
}


void FriendWarningDialog_CallbackFunc___ctor(
        FriendWarningDialog_CallbackFunc_o *this,
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
  sub_21FFBF4(
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
  if ( (sub_21FFD28(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_21FFEE8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_21FFD90(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1FEE77C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1FEE734;
}


System_IAsyncResult_o *FriendWarningDialog_CallbackFunc__BeginInvoke(
        FriendWarningDialog_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-38h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = result;
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(qword_594C050, v10);
  return (System_IAsyncResult_o *)sub_21FFC04(this, v9, callback, object);
}


void FriendWarningDialog_CallbackFunc__EndInvoke(
        FriendWarningDialog_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_21FFC08(result, 0, method);
}


void FriendWarningDialog_CallbackFunc__Invoke(
        FriendWarningDialog_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    this->fields.method);
}