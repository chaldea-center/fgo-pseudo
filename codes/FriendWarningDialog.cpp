void __fastcall FriendWarningDialog___ctor(FriendWarningDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EB4EC & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB4EC = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall FriendWarningDialog__Callback(FriendWarningDialog_o *this, bool result, const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_callbackFunc; // x0
  FriendWarningDialog_CallbackFunc_o *v9; // x19
  struct FriendWarningDialog_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_B5D560(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    FriendWarningDialog_CallbackFunc__Invoke(v9, result, 0LL);
  }
}


void __fastcall FriendWarningDialog__Close(FriendWarningDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  FriendWarningDialog__Close_30319036(this, 0LL, v2);
}


void __fastcall FriendWarningDialog__Close_30319036(
        FriendWarningDialog_o *this,
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

  if ( (byte_42EB4E9 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_FriendWarningDialog_EndClose__, v10, v11, v12);
    byte_42EB4E9 = 1;
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
  System_Action___ctor(v13, (Il2CppObject *)this, Method_FriendWarningDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v13, 0LL);
}


void __fastcall FriendWarningDialog__EndClose(FriendWarningDialog_o *this, const MethodInfo *method)
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

  FriendWarningDialog__Init(this, method);
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


void __fastcall FriendWarningDialog__EndOpen(FriendWarningDialog_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void __fastcall FriendWarningDialog__Init(FriendWarningDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UILabel_o *messageLabel; // x0

  if ( (byte_42EB4E7 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, v2, v3);
    byte_42EB4E7 = 1;
  }
  messageLabel = this->fields.messageLabel;
  if ( !messageLabel
    || (UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (messageLabel = this->fields.closeLabel) == 0LL) )
  {
    sub_B5D69C(messageLabel, method);
  }
  UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall FriendWarningDialog__OnClickClose(FriendWarningDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x2

  if ( (byte_42EB4EA & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB4EA = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    FriendWarningDialog__Callback(this, 0, v5);
  }
}


void __fastcall FriendWarningDialog__Open(
        FriendWarningDialog_o *this,
        int32_t kind,
        FriendWarningDialog_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
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
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int v62; // w1
  int v63; // w2
  __int64 v64; // x3
  int v65; // w1
  int v66; // w2
  __int64 v67; // x3
  int v68; // w1
  int v69; // w2
  __int64 v70; // x3
  int v71; // w1
  int v72; // w2
  __int64 v73; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v75; // x1
  UserGameEntity_o *SelfUserGame; // x20
  OtherUserGameEntity_array *List; // x0
  UILabel_o *messageLabel; // x21
  OtherUserGameEntity_array *v79; // x23
  System_String_o *v80; // x22
  Il2CppObject *v81; // x23
  Il2CppObject *v82; // x0
  UILabel_o *closeLabel; // x20
  __int64 *v84; // x8
  UILabel_o *v85; // x20
  UILabel_o *v86; // x20
  UILabel_o *v87; // x20
  UILabel_o *v88; // x20
  UILabel_o *v89; // x20
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  UILabel_o *v91; // x20
  UserFollowMaster_o *v92; // x22
  System_String_o *v93; // x21
  Il2CppObject *v94; // x22
  BalanceConfig_c *v95; // x8
  Il2CppObject *v96; // x0
  System_Action_o *v97; // x20
  int32_t friendKeep; // [xsp+8h] [xbp-38h] BYREF
  int32_t FollowSum; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42EB4E8 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, kind, (_DWORD)callback, method);
    sub_B5D5C4(&BalanceConfig_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_DataManager_GetMasterData_TblFriendMaster___, v14, v15, v16);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserFollowMaster___, v17, v18, v19);
    sub_B5D5C4(&Method_FriendWarningDialog_EndOpen__, v20, v21, v22);
    sub_B5D5C4(&int_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_6551/*"FRIEND_NO_FRIEND_MESSAGE"*/, v32, v33, v34);
    sub_B5D5C4(&StringLiteral_6555/*"FRIEND_NO_OFFER_MESSAGE"*/, v35, v36, v37);
    sub_B5D5C4(&StringLiteral_6550/*"FRIEND_NO_FRIEND_CLOSE"*/, v38, v39, v40);
    sub_B5D5C4(&StringLiteral_6558/*"FRIEND_NO_STRING_CLOSE"*/, v41, v42, v43);
    sub_B5D5C4(&StringLiteral_6548/*"FRIEND_MAX_FRIEND_CLOSE"*/, v44, v45, v46);
    sub_B5D5C4(&StringLiteral_6559/*"FRIEND_NO_STRING_MESSAGE"*/, v47, v48, v49);
    sub_B5D5C4(&StringLiteral_6549/*"FRIEND_MAX_FRIEND_MESSAGE"*/, v50, v51, v52);
    sub_B5D5C4(&StringLiteral_6552/*"FRIEND_NO_OFFERED_CLOSE"*/, v53, v54, v55);
    sub_B5D5C4(&StringLiteral_6482/*"FOLLOW_MAX_CLOSE"*/, v56, v57, v58);
    sub_B5D5C4(&StringLiteral_6554/*"FRIEND_NO_OFFER_CLOSE"*/, v59, v60, v61);
    sub_B5D5C4(&StringLiteral_6557/*"FRIEND_NO_SEARCH_MESSAGE"*/, v62, v63, v64);
    sub_B5D5C4(&StringLiteral_6556/*"FRIEND_NO_SEARCH_CLOSE"*/, v65, v66, v67);
    sub_B5D5C4(&StringLiteral_6483/*"FOLLOW_MAX_MESSAGE"*/, v68, v69, v70);
    sub_B5D5C4(&StringLiteral_6553/*"FRIEND_NO_OFFERED_MESSAGE"*/, v71, v72, v73);
    byte_42EB4E8 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.callbackFunc = callback;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)callback,
      (System_String_array **)callback,
      (System_String_array **)method,
      v4,
      v5,
      v6,
      v7);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_54;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    switch ( kind )
    {
      case 1:
        SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
        gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !gameObject )
          goto LABEL_54;
        gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                   (DataManager_o *)gameObject,
                                                   (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_TblFriendMaster___);
        if ( !gameObject )
          goto LABEL_54;
        List = TblFriendMaster__GetList((TblFriendMaster_o *)gameObject, 3, 0LL);
        messageLabel = this->fields.messageLabel;
        v79 = List;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6549/*"FRIEND_MAX_FRIEND_MESSAGE"*/, 0LL);
        if ( !v79 )
          goto LABEL_54;
        v80 = (System_String_o *)gameObject;
        FollowSum = *(_QWORD *)&v79->max_length;
        gameObject = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &FollowSum);
        if ( !SelfUserGame )
          goto LABEL_54;
        v81 = (Il2CppObject *)gameObject;
        friendKeep = SelfUserGame->fields.friendKeep;
        v82 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &friendKeep);
        gameObject = (UnityEngine_GameObject_o *)System_String__Format_44573324(v80, v81, v82, 0LL);
        if ( !messageLabel )
          goto LABEL_54;
        UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0LL);
        closeLabel = this->fields.closeLabel;
        v84 = &StringLiteral_6548/*"FRIEND_MAX_FRIEND_CLOSE"*/;
        break;
      case 2:
        v86 = this->fields.messageLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6557/*"FRIEND_NO_SEARCH_MESSAGE"*/, 0LL);
        if ( !v86 )
          goto LABEL_54;
        UILabel__set_text(v86, (System_String_o *)gameObject, 0LL);
        closeLabel = this->fields.closeLabel;
        v84 = &StringLiteral_6556/*"FRIEND_NO_SEARCH_CLOSE"*/;
        break;
      case 3:
        v87 = this->fields.messageLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6559/*"FRIEND_NO_STRING_MESSAGE"*/, 0LL);
        if ( !v87 )
          goto LABEL_54;
        UILabel__set_text(v87, (System_String_o *)gameObject, 0LL);
        closeLabel = this->fields.closeLabel;
        v84 = &StringLiteral_6558/*"FRIEND_NO_STRING_CLOSE"*/;
        break;
      case 4:
        v88 = this->fields.messageLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6555/*"FRIEND_NO_OFFER_MESSAGE"*/, 0LL);
        if ( !v88 )
          goto LABEL_54;
        UILabel__set_text(v88, (System_String_o *)gameObject, 0LL);
        closeLabel = this->fields.closeLabel;
        v84 = &StringLiteral_6554/*"FRIEND_NO_OFFER_CLOSE"*/;
        break;
      case 5:
        v85 = this->fields.messageLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6553/*"FRIEND_NO_OFFERED_MESSAGE"*/, 0LL);
        if ( !v85 )
          goto LABEL_54;
        UILabel__set_text(v85, (System_String_o *)gameObject, 0LL);
        closeLabel = this->fields.closeLabel;
        v84 = &StringLiteral_6552/*"FRIEND_NO_OFFERED_CLOSE"*/;
        break;
      case 6:
        v89 = this->fields.messageLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6551/*"FRIEND_NO_FRIEND_MESSAGE"*/, 0LL);
        if ( !v89 )
          goto LABEL_54;
        UILabel__set_text(v89, (System_String_o *)gameObject, 0LL);
        closeLabel = this->fields.closeLabel;
        v84 = &StringLiteral_6550/*"FRIEND_NO_FRIEND_CLOSE"*/;
        break;
      case 7:
        gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !gameObject )
          goto LABEL_54;
        MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)gameObject,
                                               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserFollowMaster___);
        v91 = this->fields.messageLabel;
        v92 = (UserFollowMaster_o *)MasterData_WarQuestSelectionMaster;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6483/*"FOLLOW_MAX_MESSAGE"*/, 0LL);
        if ( !v92 )
          goto LABEL_54;
        v93 = (System_String_o *)gameObject;
        FollowSum = UserFollowMaster__GetFollowSum(v92, 0LL);
        v94 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &FollowSum);
        v95 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v95 = BalanceConfig_TypeInfo;
        }
        friendKeep = v95->static_fields->FollowNum;
        v96 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &friendKeep);
        gameObject = (UnityEngine_GameObject_o *)System_String__Format_44573324(v93, v94, v96, 0LL);
        if ( !v91 )
          goto LABEL_54;
        UILabel__set_text(v91, (System_String_o *)gameObject, 0LL);
        closeLabel = this->fields.closeLabel;
        v84 = &StringLiteral_6482/*"FOLLOW_MAX_CLOSE"*/;
        break;
      default:
        goto LABEL_52;
    }
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)*v84, 0LL);
    if ( !closeLabel )
LABEL_54:
      sub_B5D69C(gameObject, v75);
    UILabel__set_text(closeLabel, (System_String_o *)gameObject, 0LL);
LABEL_52:
    this->fields.state = 1;
    v97 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v97, (Il2CppObject *)this, Method_FriendWarningDialog_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v97, 0, 0LL);
  }
}


void __fastcall FriendWarningDialog__add_callbackFunc(
        FriendWarningDialog_o *this,
        FriendWarningDialog_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct FriendWarningDialog_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct FriendWarningDialog_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  FriendWarningDialog_o *v12; // x0
  FriendWarningDialog_CallbackFunc_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_42EB4E5 & 1) == 0 )
  {
    sub_B5D5C4(&FriendWarningDialog_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EB4E5 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Combine(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (FriendWarningDialog_CallbackFunc_c *)v9->klass != FriendWarningDialog_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  sub_B5D990(v9);
  FriendWarningDialog__remove_callbackFunc(v12, v13, v14);
}


System_String_o *__fastcall FriendWarningDialog__get_closeBtnPath(
        FriendWarningDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EB4EB & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_4292/*"ConfirmWindow/CloseButton"*/, (_DWORD)method, v2, v3);
    byte_42EB4EB = 1;
  }
  return (System_String_o *)StringLiteral_4292/*"ConfirmWindow/CloseButton"*/;
}


void __fastcall FriendWarningDialog__remove_callbackFunc(
        FriendWarningDialog_o *this,
        FriendWarningDialog_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct FriendWarningDialog_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct FriendWarningDialog_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  FriendWarningDialog_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_42EB4E6 & 1) == 0 )
  {
    sub_B5D5C4(&FriendWarningDialog_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EB4E6 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Remove(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (FriendWarningDialog_CallbackFunc_c *)v9->klass != FriendWarningDialog_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  sub_B5D990(v9);
  FriendWarningDialog__EndOpen(v12, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendWarningDialog_CallbackFunc___ctor(
        FriendWarningDialog_CallbackFunc_o *this,
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


System_IAsyncResult_o *__fastcall FriendWarningDialog_CallbackFunc__BeginInvoke(
        FriendWarningDialog_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = result;
  if ( (byte_42E56E9 & 1) == 0 )
  {
    sub_B5D5C4(&bool_TypeInfo, result, (_DWORD)callback, object);
    byte_42E56E9 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B5D568(this, v9, callback, object);
}


void __fastcall FriendWarningDialog_CallbackFunc__EndInvoke(
        FriendWarningDialog_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendWarningDialog_CallbackFunc__Invoke(
        FriendWarningDialog_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  FriendWarningDialog_CallbackFunc_o **v7; // x25
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
  FriendWarningDialog_CallbackFunc_o *v19; // x8
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
  FriendWarningDialog_CallbackFunc_o *v31; // [xsp+8h] [xbp-48h] BYREF

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
    v7 = (FriendWarningDialog_CallbackFunc_o **)(v3 + 32);
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