void __fastcall UserPresentHistoryDialog___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct UserPresentHistoryDialog_StaticFields *static_fields; // x8

  if ( (byte_49B9C6D & 1) == 0 )
  {
    sub_1B4CF90(&UserPresentHistoryDialog_TypeInfo, v1);
    byte_49B9C6D = 1;
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
    sub_1B4D1EC(0LL, v3);
  ListViewManager__DestroyList(userPresentHistoryListViewManager, 0LL);
}


void __fastcall UserPresentHistoryDialog__OnClickClose(UserPresentHistoryDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  System_Action_o *v7; // x20

  if ( (byte_49B9C6C & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    sub_1B4CF90(&Method_UserPresentHistoryDialog_OnClickClose__, v3);
    sub_1B4CF90(&Method_UserPresentHistoryDialog__OnClickClose_b__11_0__, v4);
    byte_49B9C6C = 1;
  }
  if ( !this->fields.state )
  {
    v5 = Method_UserPresentHistoryDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_UserPresentHistoryDialog_OnClickClose__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B4CFA8(Method_UserPresentHistoryDialog_OnClickClose__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
  }
  this->fields.state = 2;
  v7 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_UserPresentHistoryDialog__OnClickClose_b__11_0__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
}


void __fastcall UserPresentHistoryDialog__Open(UserPresentHistoryDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  const MethodInfo *v9; // x1
  UserPresentHistoryListViewManager_o *userPresentHistoryListViewManager; // x0
  UserPresentHistoryDialog_c *v11; // x0
  UnityEngine_GameObject_o *bgObject; // x20
  UILabel_o *subTitle; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *titleLabel; // x20
  UILabel_o *messageLabel; // x20
  UserPresentHistoryDialog_c *v17; // x0
  UnityEngine_GameObject_o *closeButton; // x20
  UILabel_o *closeLabel; // x20
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t v22; // w2
  const MethodInfo *v23; // x3

  if ( (byte_49B9C6B & 1) == 0 )
  {
    sub_1B4CF90(&LocalizationManager_TypeInfo, method);
    sub_1B4CF90(&UserPresentHistoryDialog_TypeInfo, v3);
    sub_1B4CF90(&StringLiteral_10245/*"PRESENT_HISTORY_NO_HISTORY_MESSAGE"*/, v4);
    sub_1B4CF90(&StringLiteral_10243/*"PRESENT_HISTORY_DIALOG_SUBTITLE"*/, v5);
    sub_1B4CF90(&StringLiteral_10244/*"PRESENT_HISTORY_DIALOG_TITLE"*/, v6);
    sub_1B4CF90(&StringLiteral_3657/*"COMMON_CONFIRM_CLOSE"*/, v7);
    sub_1B4CF90(&StringLiteral_1/*""*/, v8);
    byte_49B9C6B = 1;
  }
  ((void (__fastcall *)(UserPresentHistoryDialog_o *, void *))this->klass->vtable._7_Init.method)(
    this,
    this->klass[1]._1.image);
  BaseDialog__Open((BaseDialog_o *)this, 0LL, 0, 0LL);
  userPresentHistoryListViewManager = this->fields.userPresentHistoryListViewManager;
  if ( !userPresentHistoryListViewManager )
    goto LABEL_28;
  UserPresentHistoryListViewManager__CreateList(userPresentHistoryListViewManager, v9);
  v11 = UserPresentHistoryDialog_TypeInfo;
  bgObject = this->fields.bgObject;
  if ( !UserPresentHistoryDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentHistoryDialog_TypeInfo);
    v11 = UserPresentHistoryDialog_TypeInfo;
  }
  GameObjectExtensions__SetLocalPositionY(bgObject, (float)v11->static_fields->MESSAGE_HISTORY_POS_Y, 0LL);
  subTitle = this->fields.subTitle;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  userPresentHistoryListViewManager = (UserPresentHistoryListViewManager_o *)LocalizationManager__Get(
                                                                               (System_String_o *)StringLiteral_10243/*"PRESENT_HISTORY_DIALOG_SUBTITLE"*/,
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
                                                                               (System_String_o *)StringLiteral_10244/*"PRESENT_HISTORY_DIALOG_TITLE"*/,
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
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        userPresentHistoryListViewManager = (UserPresentHistoryListViewManager_o *)LocalizationManager__Get(
                                                                                     (System_String_o *)StringLiteral_10245/*"PRESENT_HISTORY_NO_HISTORY_MESSAGE"*/,
                                                                                     0LL);
        if ( messageLabel )
        {
          UILabel__set_text(messageLabel, (System_String_o *)userPresentHistoryListViewManager, 0LL);
          goto LABEL_20;
        }
      }
    }
LABEL_28:
    sub_1B4D1EC(userPresentHistoryListViewManager, v9);
  }
LABEL_20:
  userPresentHistoryListViewManager = (UserPresentHistoryListViewManager_o *)this->fields.scrollView;
  if ( !userPresentHistoryListViewManager )
    goto LABEL_28;
  HIDWORD(userPresentHistoryListViewManager->fields.scrollView) = 1;
  UIScrollView__ResetPosition((UIScrollView_o *)userPresentHistoryListViewManager, 0LL);
  this->fields.state = 0;
  v17 = UserPresentHistoryDialog_TypeInfo;
  closeButton = this->fields.closeButton;
  if ( !UserPresentHistoryDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentHistoryDialog_TypeInfo);
    v17 = UserPresentHistoryDialog_TypeInfo;
  }
  GameObjectExtensions__SetLocalPositionX(closeButton, (float)v17->static_fields->MID_POS_X, 0LL);
  closeLabel = this->fields.closeLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  userPresentHistoryListViewManager = (UserPresentHistoryListViewManager_o *)LocalizationManager__Get(
                                                                               (System_String_o *)StringLiteral_3657/*"COMMON_CONFIRM_CLOSE"*/,
                                                                               0LL);
  if ( !closeLabel )
    goto LABEL_28;
  UILabel__set_text(closeLabel, (System_String_o *)userPresentHistoryListViewManager, 0LL);
  this->fields.closeAction = 0LL;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.closeAction, 0, v20, v21);
  userPresentHistoryListViewManager = (UserPresentHistoryListViewManager_o *)this->fields.decideButton;
  if ( !userPresentHistoryListViewManager )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)userPresentHistoryListViewManager, 0, 0LL);
  this->fields.decideAction = 0LL;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.decideAction, 0, v22, v23);
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