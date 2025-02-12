void __fastcall FriendWarningDialog___ctor(FriendWarningDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4BC2CA5 & 1) == 0 )
  {
    sub_1C1ABD4(&BaseDialog_TypeInfo, method);
    byte_4BC2CA5 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall FriendWarningDialog__Callback(FriendWarningDialog_o *this, bool result, const MethodInfo *method)
{
  struct FriendWarningDialog_CallbackFunc_o **p_callbackFunc; // x0
  struct FriendWarningDialog_CallbackFunc_o *v4; // x20
  struct FriendWarningDialog_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v4 = callbackFunc;
  if ( callbackFunc )
  {
    *p_callbackFunc = 0LL;
    sub_1C1AB78(p_callbackFunc);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))v4->fields.m_target)(
      v4->fields.original_method_info,
      result,
      *(_QWORD *)&v4->fields.extra_arg);
  }
}


void __fastcall FriendWarningDialog__Close(FriendWarningDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  FriendWarningDialog__Close_31858444(this, 0LL, v2);
}


void __fastcall FriendWarningDialog__Close_31858444(
        FriendWarningDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Action_o *v6; // x20

  if ( (byte_4BC2CA2 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, callback);
    sub_1C1ABD4(&Method_FriendWarningDialog_EndClose__, v5);
    byte_4BC2CA2 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C1AB78(&this->fields.closeCallbackFunc);
  this->fields.state = 4;
  v6 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_FriendWarningDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0LL);
}


void __fastcall FriendWarningDialog__EndClose(FriendWarningDialog_o *this, const MethodInfo *method)
{
  struct System_Action_o **p_closeCallbackFunc; // x19
  struct System_Action_o *v4; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  FriendWarningDialog__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = &this->fields.closeCallbackFunc;
  v4 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    *p_closeCallbackFunc = 0LL;
    sub_1C1AB78(p_closeCallbackFunc);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v4->fields.m_target)(
      v4->fields.original_method_info,
      *(_QWORD *)&v4->fields.extra_arg);
  }
}


void __fastcall FriendWarningDialog__EndOpen(FriendWarningDialog_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void __fastcall FriendWarningDialog__Init(FriendWarningDialog_o *this, const MethodInfo *method)
{
  UILabel_o *messageLabel; // x0

  if ( (byte_4BC2CA0 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_1/*""*/, method);
    byte_4BC2CA0 = 1;
  }
  messageLabel = this->fields.messageLabel;
  if ( !messageLabel
    || (UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (messageLabel = this->fields.closeLabel) == 0LL) )
  {
    sub_1C1AE30(messageLabel, method);
  }
  UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall FriendWarningDialog__OnClickClose(FriendWarningDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4BC2CA3 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_FriendWarningDialog_OnClickClose__, method);
    byte_4BC2CA3 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_FriendWarningDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_FriendWarningDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C1ABEC(Method_FriendWarningDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    FriendWarningDialog__Callback(this, 0, v5);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendWarningDialog__Open(
        FriendWarningDialog_o *this,
        int32_t kind,
        FriendWarningDialog_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
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
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v29; // x1
  UserGameEntity_o *SelfUserGame; // x20
  OtherUserGameEntity_array *List; // x0
  UILabel_o *messageLabel; // x21
  OtherUserGameEntity_array *v33; // x23
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  System_String_o *v37; // x22
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  Il2CppObject *v41; // x23
  Il2CppObject *v42; // x0
  UILabel_o *closeLabel; // x20
  __int64 *v44; // x8
  UILabel_o *v45; // x20
  UILabel_o *v46; // x20
  UILabel_o *v47; // x20
  UILabel_o *v48; // x20
  UILabel_o *v49; // x20
  Il2CppObject *MasterData_object; // x0
  UILabel_o *v51; // x20
  UserFollowMaster_o *v52; // x22
  System_String_o *v53; // x21
  __int64 v54; // x2
  __int64 v55; // x3
  __int64 v56; // x4
  __int64 v57; // x2
  __int64 v58; // x3
  __int64 v59; // x4
  Il2CppObject *v60; // x22
  BalanceConfig_c *v61; // x8
  Il2CppObject *v62; // x0
  System_Action_o *v63; // x20
  int32_t friendKeep; // [xsp+8h] [xbp-48h] BYREF
  int32_t FollowSum; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4BC2CA1 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_1C1ABD4(&BalanceConfig_TypeInfo, v7);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_TblFriendMaster___, v8);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_UserFollowMaster___, v9);
    sub_1C1ABD4(&Method_FriendWarningDialog_EndOpen__, v10);
    sub_1C1ABD4(&int_TypeInfo, v11);
    sub_1C1ABD4(&LocalizationManager_TypeInfo, v12);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_1C1ABD4(&StringLiteral_6664/*"FRIEND_NO_FRIEND_MESSAGE"*/, v14);
    sub_1C1ABD4(&StringLiteral_6668/*"FRIEND_NO_OFFER_MESSAGE"*/, v15);
    sub_1C1ABD4(&StringLiteral_6663/*"FRIEND_NO_FRIEND_CLOSE"*/, v16);
    sub_1C1ABD4(&StringLiteral_6671/*"FRIEND_NO_STRING_CLOSE"*/, v17);
    sub_1C1ABD4(&StringLiteral_6661/*"FRIEND_MAX_FRIEND_CLOSE"*/, v18);
    sub_1C1ABD4(&StringLiteral_6672/*"FRIEND_NO_STRING_MESSAGE"*/, v19);
    sub_1C1ABD4(&StringLiteral_6662/*"FRIEND_MAX_FRIEND_MESSAGE"*/, v20);
    sub_1C1ABD4(&StringLiteral_6665/*"FRIEND_NO_OFFERED_CLOSE"*/, v21);
    sub_1C1ABD4(&StringLiteral_6593/*"FOLLOW_MAX_CLOSE"*/, v22);
    sub_1C1ABD4(&StringLiteral_6667/*"FRIEND_NO_OFFER_CLOSE"*/, v23);
    sub_1C1ABD4(&StringLiteral_6670/*"FRIEND_NO_SEARCH_MESSAGE"*/, v24);
    sub_1C1ABD4(&StringLiteral_6669/*"FRIEND_NO_SEARCH_CLOSE"*/, v25);
    sub_1C1ABD4(&StringLiteral_6594/*"FOLLOW_MAX_MESSAGE"*/, v26);
    sub_1C1ABD4(&StringLiteral_6666/*"FRIEND_NO_OFFERED_MESSAGE"*/, v27);
    byte_4BC2CA1 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.callbackFunc = callback;
    sub_1C1AB78(&this->fields.callbackFunc);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_46;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    switch ( kind )
    {
      case 1:
        SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
        gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !gameObject )
          goto LABEL_46;
        gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)gameObject,
                                                   (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_TblFriendMaster___);
        if ( !gameObject )
          goto LABEL_46;
        List = TblFriendMaster__GetList((TblFriendMaster_o *)gameObject, 3, 0LL);
        messageLabel = this->fields.messageLabel;
        v33 = List;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6662/*"FRIEND_MAX_FRIEND_MESSAGE"*/, 0LL);
        if ( !v33 )
          goto LABEL_46;
        v37 = (System_String_o *)gameObject;
        FollowSum = *(_QWORD *)&v33->max_length;
        gameObject = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &FollowSum, v34, v35, v36);
        if ( !SelfUserGame )
          goto LABEL_46;
        v41 = (Il2CppObject *)gameObject;
        friendKeep = SelfUserGame->fields.friendKeep;
        v42 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &friendKeep, v38, v39, v40);
        gameObject = (UnityEngine_GameObject_o *)System_String__Format_63054740(v37, v41, v42, 0LL);
        if ( !messageLabel )
          goto LABEL_46;
        UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0LL);
        closeLabel = this->fields.closeLabel;
        v44 = &StringLiteral_6661/*"FRIEND_MAX_FRIEND_CLOSE"*/;
        break;
      case 2:
        v45 = this->fields.messageLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6670/*"FRIEND_NO_SEARCH_MESSAGE"*/, 0LL);
        if ( !v45 )
          goto LABEL_46;
        UILabel__set_text(v45, (System_String_o *)gameObject, 0LL);
        closeLabel = this->fields.closeLabel;
        v44 = &StringLiteral_6669/*"FRIEND_NO_SEARCH_CLOSE"*/;
        break;
      case 3:
        v46 = this->fields.messageLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6672/*"FRIEND_NO_STRING_MESSAGE"*/, 0LL);
        if ( !v46 )
          goto LABEL_46;
        UILabel__set_text(v46, (System_String_o *)gameObject, 0LL);
        closeLabel = this->fields.closeLabel;
        v44 = &StringLiteral_6671/*"FRIEND_NO_STRING_CLOSE"*/;
        break;
      case 4:
        v47 = this->fields.messageLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6668/*"FRIEND_NO_OFFER_MESSAGE"*/, 0LL);
        if ( !v47 )
          goto LABEL_46;
        UILabel__set_text(v47, (System_String_o *)gameObject, 0LL);
        closeLabel = this->fields.closeLabel;
        v44 = &StringLiteral_6667/*"FRIEND_NO_OFFER_CLOSE"*/;
        break;
      case 5:
        v48 = this->fields.messageLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6666/*"FRIEND_NO_OFFERED_MESSAGE"*/, 0LL);
        if ( !v48 )
          goto LABEL_46;
        UILabel__set_text(v48, (System_String_o *)gameObject, 0LL);
        closeLabel = this->fields.closeLabel;
        v44 = &StringLiteral_6665/*"FRIEND_NO_OFFERED_CLOSE"*/;
        break;
      case 6:
        v49 = this->fields.messageLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6664/*"FRIEND_NO_FRIEND_MESSAGE"*/, 0LL);
        if ( !v49 )
          goto LABEL_46;
        UILabel__set_text(v49, (System_String_o *)gameObject, 0LL);
        closeLabel = this->fields.closeLabel;
        v44 = &StringLiteral_6663/*"FRIEND_NO_FRIEND_CLOSE"*/;
        break;
      case 7:
        gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !gameObject )
          goto LABEL_46;
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)gameObject,
                              (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_UserFollowMaster___);
        v51 = this->fields.messageLabel;
        v52 = (UserFollowMaster_o *)MasterData_object;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6594/*"FOLLOW_MAX_MESSAGE"*/, 0LL);
        if ( !v52 )
          goto LABEL_46;
        v53 = (System_String_o *)gameObject;
        FollowSum = UserFollowMaster__GetFollowSum(v52, 0LL);
        v60 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &FollowSum, v54, v55, v56);
        v61 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v61 = BalanceConfig_TypeInfo;
        }
        friendKeep = v61->static_fields->FollowNum;
        v62 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &friendKeep, v57, v58, v59);
        gameObject = (UnityEngine_GameObject_o *)System_String__Format_63054740(v53, v60, v62, 0LL);
        if ( !v51 )
          goto LABEL_46;
        UILabel__set_text(v51, (System_String_o *)gameObject, 0LL);
        closeLabel = this->fields.closeLabel;
        v44 = &StringLiteral_6593/*"FOLLOW_MAX_CLOSE"*/;
        break;
      default:
        goto LABEL_44;
    }
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)*v44, 0LL);
    if ( !closeLabel )
LABEL_46:
      sub_1C1AE30(gameObject, v29);
    UILabel__set_text(closeLabel, (System_String_o *)gameObject, 0LL);
LABEL_44:
    this->fields.state = 1;
    v63 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
    System_Action___ctor(v63, (Il2CppObject *)this, Method_FriendWarningDialog_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v63, 0, 0LL);
  }
}


void __fastcall FriendWarningDialog__add_callbackFunc(
        FriendWarningDialog_o *this,
        FriendWarningDialog_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct FriendWarningDialog_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct FriendWarningDialog_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  FriendWarningDialog_o *v11; // x0
  FriendWarningDialog_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4BC2C9E & 1) == 0 )
  {
    sub_1C1ABD4(&FriendWarningDialog_CallbackFunc_TypeInfo, value);
    byte_4BC2C9E = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (FriendWarningDialog_CallbackFunc_c *)v8->klass != FriendWarningDialog_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C560C4(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (FriendWarningDialog_o *)sub_1C1B0F0(v8);
  FriendWarningDialog__remove_callbackFunc(v11, v12, v13);
}


System_String_o *__fastcall FriendWarningDialog__get_closeBtnPath(
        FriendWarningDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BC2CA4 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_4763/*"ConfirmWindow/CloseButton"*/, method);
    byte_4BC2CA4 = 1;
  }
  return (System_String_o *)StringLiteral_4763/*"ConfirmWindow/CloseButton"*/;
}


void __fastcall FriendWarningDialog__remove_callbackFunc(
        FriendWarningDialog_o *this,
        FriendWarningDialog_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct FriendWarningDialog_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct FriendWarningDialog_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  FriendWarningDialog_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4BC2C9F & 1) == 0 )
  {
    sub_1C1ABD4(&FriendWarningDialog_CallbackFunc_TypeInfo, value);
    byte_4BC2C9F = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (FriendWarningDialog_CallbackFunc_c *)v8->klass != FriendWarningDialog_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C560C4(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (FriendWarningDialog_o *)sub_1C1B0F0(v8);
  FriendWarningDialog__EndOpen(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendWarningDialog_CallbackFunc___ctor(
        FriendWarningDialog_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1C1AB78(&this->fields.method);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1C1AC94(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C1AE4C(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C1ACFC(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A54BA0;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A54B58;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall FriendWarningDialog_CallbackFunc__BeginInvoke(
        FriendWarningDialog_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = result;
  if ( (byte_4BC2CA6 & 1) == 0 )
  {
    sub_1C1ABD4(&bool_TypeInfo, result);
    byte_4BC2CA6 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C1AB88(this, v9, callback, object);
}


void __fastcall FriendWarningDialog_CallbackFunc__EndInvoke(
        FriendWarningDialog_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C1AB8C(result, 0LL, method);
}


void __fastcall FriendWarningDialog_CallbackFunc__Invoke(
        FriendWarningDialog_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    *(_QWORD *)&this->fields.extra_arg);
}