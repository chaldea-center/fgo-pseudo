void __fastcall UserPresentHistoryDialog___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  struct UserPresentHistoryDialog_StaticFields *static_fields; // x8

  if ( (byte_4B15024 & 1) == 0 )
  {
    sub_1BCA7E0(&UserPresentHistoryDialog_TypeInfo, v1, v2);
    byte_4B15024 = 1;
  }
  static_fields = UserPresentHistoryDialog_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->MESSAGE_HISTORY_POS_Y = 5LL;
  static_fields->SUB_TITLE_HISTORY_POS_Y = 162;
}


void __fastcall UserPresentHistoryDialog__Init(UserPresentHistoryDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewManager_o *userPresentHistoryListViewManager; // x0

  TextLabelScrollDialog__Init((TextLabelScrollDialog_o *)this, method);
  userPresentHistoryListViewManager = (ListViewManager_o *)this->fields.userPresentHistoryListViewManager;
  if ( !userPresentHistoryListViewManager )
    sub_1BCAA3C(0LL, v3);
  ListViewManager__DestroyList(userPresentHistoryListViewManager, 0LL);
}


void __fastcall UserPresentHistoryDialog__OnClickClose(UserPresentHistoryDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  System_Action_o *v11; // x20

  if ( (byte_4B15023 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_UserPresentHistoryDialog_OnClickClose__, v5, v6);
    sub_1BCA7E0(&Method_UserPresentHistoryDialog__OnClickClose_b__11_0__, v7, v8);
    byte_4B15023 = 1;
  }
  if ( !this->fields.state )
  {
    v9 = Method_UserPresentHistoryDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_UserPresentHistoryDialog_OnClickClose__ + 83) & 2) != 0 )
      v9 = (_QWORD *)sub_1BCA7F8(Method_UserPresentHistoryDialog_OnClickClose__);
    v10 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v9, v9[4]);
    OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0LL);
  }
  this->fields.state = 2;
  v11 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_UserPresentHistoryDialog__OnClickClose_b__11_0__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0LL);
}


void __fastcall UserPresentHistoryDialog__Open(UserPresentHistoryDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  const MethodInfo *v16; // x1
  UserPresentHistoryListViewManager_o *userPresentHistoryListViewManager; // x0
  __int64 v18; // x1
  UserPresentHistoryDialog_c *v19; // x0
  UnityEngine_GameObject_o *bgObject; // x20
  __int64 v21; // x1
  UILabel_o *subTitle; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *titleLabel; // x20
  __int64 v25; // x1
  UILabel_o *messageLabel; // x20
  __int64 v27; // x1
  UserPresentHistoryDialog_c *v28; // x0
  UnityEngine_GameObject_o *closeButton; // x20
  __int64 v30; // x1
  UILabel_o *closeLabel; // x20
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7

  if ( (byte_4B15022 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&UserPresentHistoryDialog_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_10588/*"PRESENT_HISTORY_NO_HISTORY_MESSAGE"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_10586/*"PRESENT_HISTORY_DIALOG_SUBTITLE"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_10587/*"PRESENT_HISTORY_DIALOG_TITLE"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v14, v15);
    byte_4B15022 = 1;
  }
  ((void (__fastcall *)(UserPresentHistoryDialog_o *, void *))this->klass->vtable._7_Init.method)(
    this,
    this->klass[1]._1.image);
  BaseDialog__Open((BaseDialog_o *)this, 0LL, 0, 0LL);
  userPresentHistoryListViewManager = this->fields.userPresentHistoryListViewManager;
  if ( !userPresentHistoryListViewManager )
    goto LABEL_28;
  UserPresentHistoryListViewManager__CreateList(userPresentHistoryListViewManager, v16);
  v19 = UserPresentHistoryDialog_TypeInfo;
  bgObject = this->fields.bgObject;
  if ( !UserPresentHistoryDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentHistoryDialog_TypeInfo, v18);
    v19 = UserPresentHistoryDialog_TypeInfo;
  }
  GameObjectExtensions__SetLocalPositionY(bgObject, (float)v19->static_fields->MESSAGE_HISTORY_POS_Y, 0LL);
  subTitle = this->fields.subTitle;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v21);
  userPresentHistoryListViewManager = (UserPresentHistoryListViewManager_o *)LocalizationManager__Get(
                                                                               (System_String_o *)StringLiteral_10586/*"PRESENT_HISTORY_DIALOG_SUBTITLE"*/,
                                                                               0LL);
  if ( !subTitle )
    goto LABEL_28;
  UILabel__set_text(subTitle, (System_String_o *)userPresentHistoryListViewManager, 0LL);
  userPresentHistoryListViewManager = (UserPresentHistoryListViewManager_o *)this->fields.subTitle;
  if ( !userPresentHistoryListViewManager )
    goto LABEL_28;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)userPresentHistoryListViewManager, 0LL);
  GameObjectExtensions__SetLocalPositionY(
    gameObject,
    (float)UserPresentHistoryDialog_TypeInfo->static_fields->SUB_TITLE_HISTORY_POS_Y,
    0LL);
  userPresentHistoryListViewManager = (UserPresentHistoryListViewManager_o *)this->fields.subTitleSmall;
  if ( !userPresentHistoryListViewManager )
    goto LABEL_28;
  UILabel__set_text((UILabel_o *)userPresentHistoryListViewManager, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.titleLabel;
  userPresentHistoryListViewManager = (UserPresentHistoryListViewManager_o *)LocalizationManager__Get(
                                                                               (System_String_o *)StringLiteral_10587/*"PRESENT_HISTORY_DIALOG_TITLE"*/,
                                                                               0LL);
  if ( !titleLabel )
    goto LABEL_28;
  UILabel__set_text(titleLabel, (System_String_o *)userPresentHistoryListViewManager, 0LL);
  userPresentHistoryListViewManager = this->fields.userPresentHistoryListViewManager;
  if ( !userPresentHistoryListViewManager )
    goto LABEL_28;
  if ( ListViewManager__get_ItemSum((ListViewManager_o *)userPresentHistoryListViewManager, 0LL) <= 0 )
  {
    userPresentHistoryListViewManager = (UserPresentHistoryListViewManager_o *)this->fields.messageLabel;
    if ( userPresentHistoryListViewManager )
    {
      userPresentHistoryListViewManager = (UserPresentHistoryListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                                   (UnityEngine_Component_o *)userPresentHistoryListViewManager,
                                                                                   0LL);
      if ( userPresentHistoryListViewManager )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)userPresentHistoryListViewManager, 1, 0LL);
        messageLabel = this->fields.messageLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v25);
        userPresentHistoryListViewManager = (UserPresentHistoryListViewManager_o *)LocalizationManager__Get(
                                                                                     (System_String_o *)StringLiteral_10588/*"PRESENT_HISTORY_NO_HISTORY_MESSAGE"*/,
                                                                                     0LL);
        if ( messageLabel )
        {
          UILabel__set_text(messageLabel, (System_String_o *)userPresentHistoryListViewManager, 0LL);
          goto LABEL_20;
        }
      }
    }
LABEL_28:
    sub_1BCAA3C(userPresentHistoryListViewManager, v16);
  }
LABEL_20:
  userPresentHistoryListViewManager = (UserPresentHistoryListViewManager_o *)this->fields.scrollView;
  if ( !userPresentHistoryListViewManager )
    goto LABEL_28;
  HIDWORD(userPresentHistoryListViewManager->fields.scrollView) = 1;
  UIScrollView__ResetPosition((UIScrollView_o *)userPresentHistoryListViewManager, 0LL);
  this->fields.state = 0;
  v28 = UserPresentHistoryDialog_TypeInfo;
  closeButton = this->fields.closeButton;
  if ( !UserPresentHistoryDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentHistoryDialog_TypeInfo, v27);
    v28 = UserPresentHistoryDialog_TypeInfo;
  }
  GameObjectExtensions__SetLocalPositionX(closeButton, (float)v28->static_fields->MID_POS_X, 0LL);
  closeLabel = this->fields.closeLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v30);
  userPresentHistoryListViewManager = (UserPresentHistoryListViewManager_o *)LocalizationManager__Get(
                                                                               (System_String_o *)StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/,
                                                                               0LL);
  if ( !closeLabel )
    goto LABEL_28;
  UILabel__set_text(closeLabel, (System_String_o *)userPresentHistoryListViewManager, 0LL);
  this->fields.closeAction = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.closeAction, 0LL, v32, v33, v34, v35, v36, v37);
  userPresentHistoryListViewManager = (UserPresentHistoryListViewManager_o *)this->fields.decideButton;
  if ( !userPresentHistoryListViewManager )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)userPresentHistoryListViewManager, 0, 0LL);
  this->fields.decideAction = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.decideAction, 0LL, v38, v39, v40, v41, v42, v43);
}


void __fastcall UserPresentHistoryDialog___OnClickClose_b__11_0(
        UserPresentHistoryDialog_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.closeAction, 0LL);
  ((void (__fastcall *)(UserPresentHistoryDialog_o *, void *))this->klass->vtable._7_Init.method)(
    this,
    this->klass[1]._1.image);
}