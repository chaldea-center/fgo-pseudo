void __fastcall FriendWarningDialog___ctor(FriendWarningDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B114EB & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    byte_4B114EB = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
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
    sub_1BCA784(p_callbackFunc, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))v4->fields.m_target)(
      v4->fields.original_method_info,
      result,
      *(_QWORD *)&v4->fields.extra_arg);
  }
}


void __fastcall FriendWarningDialog__Close(FriendWarningDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  FriendWarningDialog__Close_31535996(this, 0LL, v2);
}


void __fastcall FriendWarningDialog__Close_31535996(
        FriendWarningDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  System_Action_o *v10; // x20

  if ( (byte_4B114E8 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_FriendWarningDialog_EndClose__, v5, v6);
    byte_4B114E8 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1BCA784(&this->fields.closeCallbackFunc, callback);
  this->fields.state = 4;
  v10 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v7, v8, v9);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_FriendWarningDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0LL);
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
    sub_1BCA784(p_closeCallbackFunc, 0LL);
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
  __int64 v2; // x2
  UILabel_o *messageLabel; // x0

  if ( (byte_4B114E6 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B114E6 = 1;
  }
  messageLabel = this->fields.messageLabel;
  if ( !messageLabel
    || (UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (messageLabel = this->fields.closeLabel) == 0LL) )
  {
    sub_1BCAA3C(messageLabel, method);
  }
  UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall FriendWarningDialog__OnClickClose(FriendWarningDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4B114E9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_FriendWarningDialog_OnClickClose__, method, v2);
    byte_4B114E9 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v4 = Method_FriendWarningDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_FriendWarningDialog_OnClickClose__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_FriendWarningDialog_OnClickClose__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    FriendWarningDialog__Callback(this, 0, v6);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
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
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v50; // x1
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x3
  UserGameEntity_o *SelfUserGame; // x20
  OtherUserGameEntity_array *List; // x0
  __int64 v56; // x1
  UILabel_o *messageLabel; // x21
  OtherUserGameEntity_array *v58; // x23
  System_String_o *v59; // x22
  Il2CppObject *v60; // x23
  Il2CppObject *v61; // x0
  UILabel_o *closeLabel; // x20
  __int64 *v63; // x8
  UILabel_o *v64; // x20
  UILabel_o *v65; // x20
  UILabel_o *v66; // x20
  UILabel_o *v67; // x20
  UILabel_o *v68; // x20
  Il2CppObject *MasterData_object; // x0
  __int64 v70; // x1
  UILabel_o *v71; // x20
  UserFollowMaster_o *v72; // x22
  System_String_o *v73; // x21
  __int64 v74; // x1
  Il2CppObject *v75; // x22
  BalanceConfig_c *v76; // x8
  Il2CppObject *v77; // x0
  System_Action_o *v78; // x20
  int32_t friendKeep; // [xsp+8h] [xbp-48h] BYREF
  int32_t FollowSum; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B114E7 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&kind, callback);
    sub_1BCA7E0(&BalanceConfig_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_TblFriendMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserFollowMaster___, v11, v12);
    sub_1BCA7E0(&Method_FriendWarningDialog_EndOpen__, v13, v14);
    sub_1BCA7E0(&int_TypeInfo, v15, v16);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19, v20);
    sub_1BCA7E0(&StringLiteral_6625/*"FRIEND_NO_FRIEND_MESSAGE"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_6629/*"FRIEND_NO_OFFER_MESSAGE"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_6624/*"FRIEND_NO_FRIEND_CLOSE"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_6632/*"FRIEND_NO_STRING_CLOSE"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_6622/*"FRIEND_MAX_FRIEND_CLOSE"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_6633/*"FRIEND_NO_STRING_MESSAGE"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_6623/*"FRIEND_MAX_FRIEND_MESSAGE"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_6626/*"FRIEND_NO_OFFERED_CLOSE"*/, v35, v36);
    sub_1BCA7E0(&StringLiteral_6555/*"FOLLOW_MAX_CLOSE"*/, v37, v38);
    sub_1BCA7E0(&StringLiteral_6628/*"FRIEND_NO_OFFER_CLOSE"*/, v39, v40);
    sub_1BCA7E0(&StringLiteral_6631/*"FRIEND_NO_SEARCH_MESSAGE"*/, v41, v42);
    sub_1BCA7E0(&StringLiteral_6630/*"FRIEND_NO_SEARCH_CLOSE"*/, v43, v44);
    sub_1BCA7E0(&StringLiteral_6556/*"FOLLOW_MAX_MESSAGE"*/, v45, v46);
    sub_1BCA7E0(&StringLiteral_6627/*"FRIEND_NO_OFFERED_MESSAGE"*/, v47, v48);
    byte_4B114E7 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.callbackFunc = callback;
    sub_1BCA784(&this->fields.callbackFunc, callback);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_46;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    switch ( kind )
    {
      case 1:
        SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
        gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !gameObject )
          goto LABEL_46;
        gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)gameObject,
                                                   (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_TblFriendMaster___);
        if ( !gameObject )
          goto LABEL_46;
        List = TblFriendMaster__GetList((TblFriendMaster_o *)gameObject, 3, 0LL);
        messageLabel = this->fields.messageLabel;
        v58 = List;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v56);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6623/*"FRIEND_MAX_FRIEND_MESSAGE"*/, 0LL);
        if ( !v58 )
          goto LABEL_46;
        v59 = (System_String_o *)gameObject;
        FollowSum = *(_QWORD *)&v58->max_length;
        gameObject = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &FollowSum);
        if ( !SelfUserGame )
          goto LABEL_46;
        v60 = (Il2CppObject *)gameObject;
        friendKeep = SelfUserGame->fields.friendKeep;
        v61 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &friendKeep);
        gameObject = (UnityEngine_GameObject_o *)System_String__Format_62415592(v59, v60, v61, 0LL);
        if ( !messageLabel )
          goto LABEL_46;
        UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0LL);
        closeLabel = this->fields.closeLabel;
        v63 = &StringLiteral_6622/*"FRIEND_MAX_FRIEND_CLOSE"*/;
        break;
      case 2:
        v64 = this->fields.messageLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v51);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6631/*"FRIEND_NO_SEARCH_MESSAGE"*/, 0LL);
        if ( !v64 )
          goto LABEL_46;
        UILabel__set_text(v64, (System_String_o *)gameObject, 0LL);
        closeLabel = this->fields.closeLabel;
        v63 = &StringLiteral_6630/*"FRIEND_NO_SEARCH_CLOSE"*/;
        break;
      case 3:
        v65 = this->fields.messageLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v51);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6633/*"FRIEND_NO_STRING_MESSAGE"*/, 0LL);
        if ( !v65 )
          goto LABEL_46;
        UILabel__set_text(v65, (System_String_o *)gameObject, 0LL);
        closeLabel = this->fields.closeLabel;
        v63 = &StringLiteral_6632/*"FRIEND_NO_STRING_CLOSE"*/;
        break;
      case 4:
        v66 = this->fields.messageLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v51);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6629/*"FRIEND_NO_OFFER_MESSAGE"*/, 0LL);
        if ( !v66 )
          goto LABEL_46;
        UILabel__set_text(v66, (System_String_o *)gameObject, 0LL);
        closeLabel = this->fields.closeLabel;
        v63 = &StringLiteral_6628/*"FRIEND_NO_OFFER_CLOSE"*/;
        break;
      case 5:
        v67 = this->fields.messageLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v51);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6627/*"FRIEND_NO_OFFERED_MESSAGE"*/, 0LL);
        if ( !v67 )
          goto LABEL_46;
        UILabel__set_text(v67, (System_String_o *)gameObject, 0LL);
        closeLabel = this->fields.closeLabel;
        v63 = &StringLiteral_6626/*"FRIEND_NO_OFFERED_CLOSE"*/;
        break;
      case 6:
        v68 = this->fields.messageLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v51);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6625/*"FRIEND_NO_FRIEND_MESSAGE"*/, 0LL);
        if ( !v68 )
          goto LABEL_46;
        UILabel__set_text(v68, (System_String_o *)gameObject, 0LL);
        closeLabel = this->fields.closeLabel;
        v63 = &StringLiteral_6624/*"FRIEND_NO_FRIEND_CLOSE"*/;
        break;
      case 7:
        gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !gameObject )
          goto LABEL_46;
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)gameObject,
                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserFollowMaster___);
        v71 = this->fields.messageLabel;
        v72 = (UserFollowMaster_o *)MasterData_object;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v70);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6556/*"FOLLOW_MAX_MESSAGE"*/, 0LL);
        if ( !v72 )
          goto LABEL_46;
        v73 = (System_String_o *)gameObject;
        FollowSum = UserFollowMaster__GetFollowSum(v72, 0LL);
        v75 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &FollowSum);
        v76 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v74);
          v76 = BalanceConfig_TypeInfo;
        }
        friendKeep = v76->static_fields->FollowNum;
        v77 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &friendKeep);
        gameObject = (UnityEngine_GameObject_o *)System_String__Format_62415592(v73, v75, v77, 0LL);
        if ( !v71 )
          goto LABEL_46;
        UILabel__set_text(v71, (System_String_o *)gameObject, 0LL);
        closeLabel = this->fields.closeLabel;
        v63 = &StringLiteral_6555/*"FOLLOW_MAX_CLOSE"*/;
        break;
      default:
        goto LABEL_44;
    }
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)*v63, 0LL);
    if ( !closeLabel )
LABEL_46:
      sub_1BCAA3C(gameObject, v50);
    UILabel__set_text(closeLabel, (System_String_o *)gameObject, 0LL);
LABEL_44:
    this->fields.state = 1;
    v78 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v51, v52, v53);
    System_Action___ctor(v78, (Il2CppObject *)this, Method_FriendWarningDialog_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v78, 0, 0LL);
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

  if ( (byte_4B114E4 & 1) == 0 )
  {
    sub_1BCA7E0(&FriendWarningDialog_CallbackFunc_TypeInfo, value, method);
    byte_4B114E4 = 1;
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
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (FriendWarningDialog_o *)sub_1BCACFC(v8);
  FriendWarningDialog__remove_callbackFunc(v11, v12, v13);
}


System_String_o *__fastcall FriendWarningDialog__get_closeBtnPath(
        FriendWarningDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B114EA & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_4746/*"ConfirmWindow/CloseButton"*/, method, v2);
    byte_4B114EA = 1;
  }
  return (System_String_o *)StringLiteral_4746/*"ConfirmWindow/CloseButton"*/;
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

  if ( (byte_4B114E5 & 1) == 0 )
  {
    sub_1BCA7E0(&FriendWarningDialog_CallbackFunc_TypeInfo, value, method);
    byte_4B114E5 = 1;
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
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (FriendWarningDialog_o *)sub_1BCACFC(v8);
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
  sub_1BCA784(&this->fields.method, object);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A058A0;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A05858;
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
  if ( (byte_4B114EC & 1) == 0 )
  {
    sub_1BCA7E0(&bool_TypeInfo, result, callback);
    byte_4B114EC = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v9, callback, object);
}


void __fastcall FriendWarningDialog_CallbackFunc__EndInvoke(
        FriendWarningDialog_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
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