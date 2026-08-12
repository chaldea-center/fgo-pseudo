void UserPresentHistoryDialog___cctor(const MethodInfo *method)
{
  struct UserPresentHistoryDialog_StaticFields *static_fields; // x8

  if ( (byte_596F4CD & 1) == 0 )
  {
    sub_2213A60(&UserPresentHistoryDialog_TypeInfo);
    byte_596F4CD = 1;
  }
  static_fields = UserPresentHistoryDialog_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->MESSAGE_HISTORY_POS_Y = 5;
  static_fields->SUB_TITLE_HISTORY_POS_Y = 162;
}


void UserPresentHistoryDialog___ctor(UserPresentHistoryDialog_o *this, const MethodInfo *method)
{
  TextLabelScrollDialog___ctor((TextLabelScrollDialog_o *)this, 0);
}


void UserPresentHistoryDialog__Init(UserPresentHistoryDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewManager_o *userPresentHistoryListViewManager; // x0

  TextLabelScrollDialog__Init((TextLabelScrollDialog_o *)this, 0);
  userPresentHistoryListViewManager = (ListViewManager_o *)this->fields.userPresentHistoryListViewManager;
  if ( !userPresentHistoryListViewManager )
    sub_2213CDC(0, v3);
  ListViewManager__DestroyList(userPresentHistoryListViewManager, 0);
}


void UserPresentHistoryDialog__OnClickClose(UserPresentHistoryDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_c *v5; // x0
  System_Action_o *v6; // x20

  if ( (byte_596F4CC & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_UserPresentHistoryDialog_OnClickClose__);
    sub_2213A60(&Method_UserPresentHistoryDialog__OnClickClose_b__11_0__);
    byte_596F4CC = 1;
  }
  if ( !this->fields.state )
  {
    v3 = Method_UserPresentHistoryDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_UserPresentHistoryDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_UserPresentHistoryDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  }
  v5 = System_Action_TypeInfo;
  this->fields.state = 2;
  v6 = (System_Action_o *)sub_2213CCC(v5);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_UserPresentHistoryDialog__OnClickClose_b__11_0__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0);
}


void UserPresentHistoryDialog__Open(UserPresentHistoryDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  UserPresentHistoryListViewManager_o *userPresentHistoryListViewManager; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  UserPresentHistoryDialog_c *v7; // x0
  UnityEngine_GameObject_o *bgObject; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  UILabel_o *subTitle; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *titleLabel; // x20
  __int64 v14; // x1
  __int64 v15; // x2
  UILabel_o *messageLabel; // x20
  __int64 v17; // x1
  __int64 v18; // x2
  UserPresentHistoryDialog_c *v19; // x0
  UnityEngine_GameObject_o *closeButton; // x20
  __int64 v21; // x1
  __int64 v22; // x2
  UILabel_o *closeLabel; // x20
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7

  if ( (byte_596F4CB & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UserPresentHistoryDialog_TypeInfo);
    sub_2213A60(&StringLiteral_10888/*"PRESENT_HISTORY_NO_HISTORY_MESSAGE"*/);
    sub_2213A60(&StringLiteral_10886/*"PRESENT_HISTORY_DIALOG_SUBTITLE"*/);
    sub_2213A60(&StringLiteral_10887/*"PRESENT_HISTORY_DIALOG_TITLE"*/);
    sub_2213A60(&StringLiteral_3828/*"COMMON_CONFIRM_CLOSE"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596F4CB = 1;
  }
  ((void (__fastcall *)(UserPresentHistoryDialog_o *, const MethodInfo *))this->klass->vtable._7_Init.methodPtr)(
    this,
    this->klass->vtable._7_Init.method);
  BaseDialog__Open((BaseDialog_o *)this, 0, 0, 0, 0);
  userPresentHistoryListViewManager = this->fields.userPresentHistoryListViewManager;
  if ( !userPresentHistoryListViewManager )
    goto LABEL_28;
  UserPresentHistoryListViewManager__CreateList(userPresentHistoryListViewManager, v3);
  v7 = UserPresentHistoryDialog_TypeInfo;
  bgObject = this->fields.bgObject;
  if ( !*(&UserPresentHistoryDialog_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UserPresentHistoryDialog_TypeInfo, v5, v6);
    v7 = UserPresentHistoryDialog_TypeInfo;
  }
  GameObjectExtensions__SetLocalPositionY(bgObject, (float)v7->static_fields->MESSAGE_HISTORY_POS_Y, 0);
  subTitle = this->fields.subTitle;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9, v10);
  userPresentHistoryListViewManager = (UserPresentHistoryListViewManager_o *)LocalizationManager__Get(
                                                                               (System_String_o *)StringLiteral_10886/*"PRESENT_HISTORY_DIALOG_SUBTITLE"*/,
                                                                               0);
  if ( !subTitle )
    goto LABEL_28;
  UILabel__set_text(subTitle, (System_String_o *)userPresentHistoryListViewManager, 0);
  userPresentHistoryListViewManager = (UserPresentHistoryListViewManager_o *)this->fields.subTitle;
  if ( !userPresentHistoryListViewManager )
    goto LABEL_28;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)userPresentHistoryListViewManager, 0);
  GameObjectExtensions__SetLocalPositionY(
    gameObject,
    (float)UserPresentHistoryDialog_TypeInfo->static_fields->SUB_TITLE_HISTORY_POS_Y,
    0);
  userPresentHistoryListViewManager = (UserPresentHistoryListViewManager_o *)this->fields.subTitleSmall;
  if ( !userPresentHistoryListViewManager )
    goto LABEL_28;
  UILabel__set_text((UILabel_o *)userPresentHistoryListViewManager, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.titleLabel;
  userPresentHistoryListViewManager = (UserPresentHistoryListViewManager_o *)LocalizationManager__Get(
                                                                               (System_String_o *)StringLiteral_10887/*"PRESENT_HISTORY_DIALOG_TITLE"*/,
                                                                               0);
  if ( !titleLabel )
    goto LABEL_28;
  UILabel__set_text(titleLabel, (System_String_o *)userPresentHistoryListViewManager, 0);
  userPresentHistoryListViewManager = this->fields.userPresentHistoryListViewManager;
  if ( !userPresentHistoryListViewManager )
    goto LABEL_28;
  if ( ListViewManager__get_ItemSum((ListViewManager_o *)userPresentHistoryListViewManager, 0) <= 0 )
  {
    userPresentHistoryListViewManager = (UserPresentHistoryListViewManager_o *)this->fields.messageLabel;
    if ( userPresentHistoryListViewManager )
    {
      userPresentHistoryListViewManager = (UserPresentHistoryListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                                   (UnityEngine_Component_o *)userPresentHistoryListViewManager,
                                                                                   0);
      if ( userPresentHistoryListViewManager )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)userPresentHistoryListViewManager, 1, 0);
        messageLabel = this->fields.messageLabel;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v14, v15);
        userPresentHistoryListViewManager = (UserPresentHistoryListViewManager_o *)LocalizationManager__Get(
                                                                                     (System_String_o *)StringLiteral_10888/*"PRESENT_HISTORY_NO_HISTORY_MESSAGE"*/,
                                                                                     0);
        if ( messageLabel )
        {
          UILabel__set_text(messageLabel, (System_String_o *)userPresentHistoryListViewManager, 0);
          goto LABEL_20;
        }
      }
    }
LABEL_28:
    sub_2213CDC(userPresentHistoryListViewManager, v3);
  }
LABEL_20:
  userPresentHistoryListViewManager = (UserPresentHistoryListViewManager_o *)this->fields.scrollView;
  if ( !userPresentHistoryListViewManager )
    goto LABEL_28;
  HIDWORD(userPresentHistoryListViewManager->fields.scrollView) = 1;
  UIScrollView__ResetPosition((UIScrollView_o *)userPresentHistoryListViewManager, 0);
  v19 = UserPresentHistoryDialog_TypeInfo;
  closeButton = this->fields.closeButton;
  this->fields.state = 0;
  if ( !*(&v19->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v19, v17, v18);
    v19 = UserPresentHistoryDialog_TypeInfo;
  }
  GameObjectExtensions__SetLocalPositionX(closeButton, (float)v19->static_fields->MID_POS_X, 0);
  closeLabel = this->fields.closeLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v21, v22);
  userPresentHistoryListViewManager = (UserPresentHistoryListViewManager_o *)LocalizationManager__Get(
                                                                               (System_String_o *)StringLiteral_3828/*"COMMON_CONFIRM_CLOSE"*/,
                                                                               0);
  if ( !closeLabel )
    goto LABEL_28;
  UILabel__set_text(closeLabel, (System_String_o *)userPresentHistoryListViewManager, 0);
  this->fields.closeAction = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.closeAction, 0, v24, v25, v26, v27, v28, v29);
  userPresentHistoryListViewManager = (UserPresentHistoryListViewManager_o *)this->fields.decideButton;
  if ( !userPresentHistoryListViewManager )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)userPresentHistoryListViewManager, 0, 0);
  this->fields.decideAction = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.decideAction, 0, v30, v31, v32, v33, v34, v35);
}


void UserPresentHistoryDialog___OnClickClose_b__11_0(UserPresentHistoryDialog_o *this, const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.closeAction, 0);
  ((void (__fastcall *)(UserPresentHistoryDialog_o *, const MethodInfo *))this->klass->vtable._7_Init.methodPtr)(
    this,
    this->klass->vtable._7_Init.method);
}