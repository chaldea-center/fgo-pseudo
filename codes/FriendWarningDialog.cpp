void __fastcall FriendWarningDialog___ctor(FriendWarningDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4A565C9 & 1) == 0 )
  {
    sub_1B885B0(&BaseDialog_TypeInfo);
    byte_4A565C9 = 1;
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
    sub_1B88554(p_callbackFunc, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))v4->fields.m_target)(
      v4->fields.original_method_info,
      result,
      *(_QWORD *)&v4->fields.extra_arg);
  }
}


void __fastcall FriendWarningDialog__Close(FriendWarningDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  FriendWarningDialog__Close_30961748(this, 0LL, v2);
}


void __fastcall FriendWarningDialog__Close_30961748(
        FriendWarningDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Action_o *v5; // x20

  if ( (byte_4A565C6 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_FriendWarningDialog_EndClose__);
    byte_4A565C6 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1B88554(&this->fields.closeCallbackFunc, callback);
  this->fields.state = 4;
  v5 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_FriendWarningDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v5, 0LL);
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
    sub_1B88554(p_closeCallbackFunc, 0LL);
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

  if ( (byte_4A565C4 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A565C4 = 1;
  }
  messageLabel = this->fields.messageLabel;
  if ( !messageLabel
    || (UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (messageLabel = this->fields.closeLabel) == 0LL) )
  {
    sub_1B8880C(messageLabel, method);
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

  if ( (byte_4A565C7 & 1) == 0 )
  {
    sub_1B885B0(&Method_FriendWarningDialog_OnClickClose__);
    byte_4A565C7 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_FriendWarningDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_FriendWarningDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8();
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    FriendWarningDialog__Callback(this, 0, v5);
  }
}


void __fastcall FriendWarningDialog__Open(
        FriendWarningDialog_o *this,
        int32_t kind,
        FriendWarningDialog_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v8; // x1
  UserGameEntity_o *SelfUserGame; // x20
  OtherUserGameEntity_array *List; // x0
  UILabel_o *messageLabel; // x21
  OtherUserGameEntity_array *v12; // x23
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  System_String_o *v16; // x22
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  Il2CppObject *v20; // x23
  Il2CppObject *v21; // x0
  UILabel_o *closeLabel; // x20
  __int64 *v23; // x8
  UILabel_o *v24; // x20
  UILabel_o *v25; // x20
  UILabel_o *v26; // x20
  UILabel_o *v27; // x20
  UILabel_o *v28; // x20
  Il2CppObject *MasterData_object; // x0
  UILabel_o *v30; // x20
  UserFollowMaster_o *v31; // x22
  System_String_o *v32; // x21
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  Il2CppObject *v39; // x22
  BalanceConfig_c *v40; // x8
  Il2CppObject *v41; // x0
  System_Action_o *v42; // x20
  int32_t friendKeep; // [xsp+8h] [xbp-48h] BYREF
  int32_t FollowSum; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4A565C5 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_TblFriendMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserFollowMaster___);
    sub_1B885B0(&Method_FriendWarningDialog_EndOpen__);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_6506/*"FRIEND_NO_FRIEND_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_6510/*"FRIEND_NO_OFFER_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_6505/*"FRIEND_NO_FRIEND_CLOSE"*/);
    sub_1B885B0(&StringLiteral_6513/*"FRIEND_NO_STRING_CLOSE"*/);
    sub_1B885B0(&StringLiteral_6503/*"FRIEND_MAX_FRIEND_CLOSE"*/);
    sub_1B885B0(&StringLiteral_6514/*"FRIEND_NO_STRING_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_6504/*"FRIEND_MAX_FRIEND_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_6507/*"FRIEND_NO_OFFERED_CLOSE"*/);
    sub_1B885B0(&StringLiteral_6436/*"FOLLOW_MAX_CLOSE"*/);
    sub_1B885B0(&StringLiteral_6509/*"FRIEND_NO_OFFER_CLOSE"*/);
    sub_1B885B0(&StringLiteral_6512/*"FRIEND_NO_SEARCH_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_6511/*"FRIEND_NO_SEARCH_CLOSE"*/);
    sub_1B885B0(&StringLiteral_6437/*"FOLLOW_MAX_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_6508/*"FRIEND_NO_OFFERED_MESSAGE"*/);
    byte_4A565C5 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.callbackFunc = callback;
    sub_1B88554(&this->fields.callbackFunc, callback);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_46;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    switch ( kind )
    {
      case 1:
        SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
        gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !gameObject )
          goto LABEL_46;
        gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)gameObject,
                                                   (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_TblFriendMaster___);
        if ( !gameObject )
          goto LABEL_46;
        List = TblFriendMaster__GetList((TblFriendMaster_o *)gameObject, 3, 0LL);
        messageLabel = this->fields.messageLabel;
        v12 = List;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6504/*"FRIEND_MAX_FRIEND_MESSAGE"*/, 0LL);
        if ( !v12 )
          goto LABEL_46;
        v16 = (System_String_o *)gameObject;
        FollowSum = *(_QWORD *)&v12->max_length;
        gameObject = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &FollowSum, v13, v14, v15);
        if ( !SelfUserGame )
          goto LABEL_46;
        v20 = (Il2CppObject *)gameObject;
        friendKeep = SelfUserGame->fields.friendKeep;
        v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &friendKeep, v17, v18, v19);
        gameObject = (UnityEngine_GameObject_o *)System_String__Format_61721404(v16, v20, v21, 0LL);
        if ( !messageLabel )
          goto LABEL_46;
        UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0LL);
        closeLabel = this->fields.closeLabel;
        v23 = &StringLiteral_6503/*"FRIEND_MAX_FRIEND_CLOSE"*/;
        break;
      case 2:
        v24 = this->fields.messageLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6512/*"FRIEND_NO_SEARCH_MESSAGE"*/, 0LL);
        if ( !v24 )
          goto LABEL_46;
        UILabel__set_text(v24, (System_String_o *)gameObject, 0LL);
        closeLabel = this->fields.closeLabel;
        v23 = &StringLiteral_6511/*"FRIEND_NO_SEARCH_CLOSE"*/;
        break;
      case 3:
        v25 = this->fields.messageLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6514/*"FRIEND_NO_STRING_MESSAGE"*/, 0LL);
        if ( !v25 )
          goto LABEL_46;
        UILabel__set_text(v25, (System_String_o *)gameObject, 0LL);
        closeLabel = this->fields.closeLabel;
        v23 = &StringLiteral_6513/*"FRIEND_NO_STRING_CLOSE"*/;
        break;
      case 4:
        v26 = this->fields.messageLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6510/*"FRIEND_NO_OFFER_MESSAGE"*/, 0LL);
        if ( !v26 )
          goto LABEL_46;
        UILabel__set_text(v26, (System_String_o *)gameObject, 0LL);
        closeLabel = this->fields.closeLabel;
        v23 = &StringLiteral_6509/*"FRIEND_NO_OFFER_CLOSE"*/;
        break;
      case 5:
        v27 = this->fields.messageLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6508/*"FRIEND_NO_OFFERED_MESSAGE"*/, 0LL);
        if ( !v27 )
          goto LABEL_46;
        UILabel__set_text(v27, (System_String_o *)gameObject, 0LL);
        closeLabel = this->fields.closeLabel;
        v23 = &StringLiteral_6507/*"FRIEND_NO_OFFERED_CLOSE"*/;
        break;
      case 6:
        v28 = this->fields.messageLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6506/*"FRIEND_NO_FRIEND_MESSAGE"*/, 0LL);
        if ( !v28 )
          goto LABEL_46;
        UILabel__set_text(v28, (System_String_o *)gameObject, 0LL);
        closeLabel = this->fields.closeLabel;
        v23 = &StringLiteral_6505/*"FRIEND_NO_FRIEND_CLOSE"*/;
        break;
      case 7:
        gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !gameObject )
          goto LABEL_46;
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)gameObject,
                              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserFollowMaster___);
        v30 = this->fields.messageLabel;
        v31 = (UserFollowMaster_o *)MasterData_object;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6437/*"FOLLOW_MAX_MESSAGE"*/, 0LL);
        if ( !v31 )
          goto LABEL_46;
        v32 = (System_String_o *)gameObject;
        FollowSum = UserFollowMaster__GetFollowSum(v31, 0LL);
        v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &FollowSum, v33, v34, v35);
        v40 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v40 = BalanceConfig_TypeInfo;
        }
        friendKeep = v40->static_fields->FollowNum;
        v41 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &friendKeep, v36, v37, v38);
        gameObject = (UnityEngine_GameObject_o *)System_String__Format_61721404(v32, v39, v41, 0LL);
        if ( !v30 )
          goto LABEL_46;
        UILabel__set_text(v30, (System_String_o *)gameObject, 0LL);
        closeLabel = this->fields.closeLabel;
        v23 = &StringLiteral_6436/*"FOLLOW_MAX_CLOSE"*/;
        break;
      default:
        goto LABEL_44;
    }
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)*v23, 0LL);
    if ( !closeLabel )
LABEL_46:
      sub_1B8880C(gameObject, v8);
    UILabel__set_text(closeLabel, (System_String_o *)gameObject, 0LL);
LABEL_44:
    this->fields.state = 1;
    v42 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v42, (Il2CppObject *)this, Method_FriendWarningDialog_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v42, 0, 0LL);
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

  if ( (byte_4A565C2 & 1) == 0 )
  {
    sub_1B885B0(&FriendWarningDialog_CallbackFunc_TypeInfo);
    byte_4A565C2 = 1;
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
    v9 = sub_1BC3AA0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (FriendWarningDialog_o *)sub_1B88ACC(v8);
  FriendWarningDialog__remove_callbackFunc(v11, v12, v13);
}


System_String_o *__fastcall FriendWarningDialog__get_closeBtnPath(
        FriendWarningDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A565C8 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_4678/*"ConfirmWindow/CloseButton"*/);
    byte_4A565C8 = 1;
  }
  return (System_String_o *)StringLiteral_4678/*"ConfirmWindow/CloseButton"*/;
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

  if ( (byte_4A565C3 & 1) == 0 )
  {
    sub_1B885B0(&FriendWarningDialog_CallbackFunc_TypeInfo);
    byte_4A565C3 = 1;
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
    v9 = sub_1BC3AA0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (FriendWarningDialog_o *)sub_1B88ACC(v8);
  FriendWarningDialog__Init(v11, v12);
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
  sub_1B88554(&this->fields.method, object);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19C7464;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19C741C;
}


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
  if ( (byte_4A565CA & 1) == 0 )
  {
    sub_1B885B0(&bool_TypeInfo);
    byte_4A565CA = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B88564(this, v9, callback, object);
}


void __fastcall FriendWarningDialog_CallbackFunc__EndInvoke(
        FriendWarningDialog_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
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