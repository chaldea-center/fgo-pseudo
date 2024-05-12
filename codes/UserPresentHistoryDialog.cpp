void __fastcall UserPresentHistoryDialog___cctor(const MethodInfo *method)
{
  if ( (byte_43892D3 & 1) == 0 )
  {
    sub_B775C4(&UserPresentHistoryDialog_TypeInfo);
    byte_43892D3 = 1;
  }
  UserPresentHistoryDialog_TypeInfo->static_fields->MESSAGE_HISTORY_POS_Y = 5;
  UserPresentHistoryDialog_TypeInfo->static_fields->MID_POS_X = 0;
  UserPresentHistoryDialog_TypeInfo->static_fields->SUB_TITLE_HISTORY_POS_Y = 162;
}


void __fastcall UserPresentHistoryDialog___ctor(UserPresentHistoryDialog_o *this, const MethodInfo *method)
{
  TextLabelScrollDialog___ctor((TextLabelScrollDialog_o *)this, 0LL);
}


void __fastcall UserPresentHistoryDialog__Init(UserPresentHistoryDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewManager_o *userPresentHistoryListViewManager; // x0

  TextLabelScrollDialog__Init((TextLabelScrollDialog_o *)this, 0LL);
  userPresentHistoryListViewManager = (ListViewManager_o *)this->fields.userPresentHistoryListViewManager;
  if ( !userPresentHistoryListViewManager )
    sub_B7769C(0LL, v3);
  ListViewManager__DestroyList(userPresentHistoryListViewManager, 0LL);
}


void __fastcall UserPresentHistoryDialog__OnClickClose(UserPresentHistoryDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_43892D2 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_UserPresentHistoryDialog_OnClickClose__);
    sub_B775C4(&Method_UserPresentHistoryDialog__OnClickClose_b__11_0__);
    byte_43892D2 = 1;
  }
  if ( !this->fields.state )
  {
    v3 = Method_UserPresentHistoryDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_UserPresentHistoryDialog_OnClickClose__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B775CC(Method_UserPresentHistoryDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_B775A8(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  }
  this->fields.state = 2;
  v5 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_UserPresentHistoryDialog__OnClickClose_b__11_0__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v5, 0LL);
}


void __fastcall UserPresentHistoryDialog__Open(UserPresentHistoryDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  UserPresentHistoryListViewManager_o *userPresentHistoryListViewManager; // x0
  UnityEngine_GameObject_o *bgObject; // x20
  UserPresentHistoryDialog_c *v6; // x0
  UILabel_o *subTitle; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *titleLabel; // x20
  UILabel_o *messageLabel; // x20
  struct UIScrollView_o *scrollView; // x8
  UserPresentHistoryDialog_c *v12; // x0
  UnityEngine_GameObject_o *closeButton; // x20
  UILabel_o *closeLabel; // x20
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7

  if ( (byte_43892D1 & 1) == 0 )
  {
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&UserPresentHistoryDialog_TypeInfo);
    sub_B775C4(&StringLiteral_10708/*"PRESENT_HISTORY_NO_HISTORY_MESSAGE"*/);
    sub_B775C4(&StringLiteral_10706/*"PRESENT_HISTORY_DIALOG_SUBTITLE"*/);
    sub_B775C4(&StringLiteral_10707/*"PRESENT_HISTORY_DIALOG_TITLE"*/);
    sub_B775C4(&StringLiteral_3387/*"COMMON_CONFIRM_CLOSE"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_43892D1 = 1;
  }
  ((void (__fastcall *)(UserPresentHistoryDialog_o *, void *))this->klass->vtable._7_Init.method)(
    this,
    this->klass[1]._1.image);
  BaseDialog__Open((BaseDialog_o *)this, 0LL, 0, 0LL);
  userPresentHistoryListViewManager = this->fields.userPresentHistoryListViewManager;
  if ( !userPresentHistoryListViewManager )
    goto LABEL_34;
  UserPresentHistoryListViewManager__CreateList(userPresentHistoryListViewManager, v3);
  bgObject = this->fields.bgObject;
  v6 = UserPresentHistoryDialog_TypeInfo;
  if ( (BYTE3(UserPresentHistoryDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentHistoryDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentHistoryDialog_TypeInfo);
    v6 = UserPresentHistoryDialog_TypeInfo;
  }
  GameObjectExtensions__SetLocalPositionY(bgObject, (float)v6->static_fields->MESSAGE_HISTORY_POS_Y, 0LL);
  subTitle = this->fields.subTitle;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  userPresentHistoryListViewManager = (UserPresentHistoryListViewManager_o *)LocalizationManager__Get(
                                                                               (System_String_o *)StringLiteral_10706/*"PRESENT_HISTORY_DIALOG_SUBTITLE"*/,
                                                                               0LL);
  if ( !subTitle )
    goto LABEL_34;
  UILabel__set_text(subTitle, (System_String_o *)userPresentHistoryListViewManager, 0LL);
  userPresentHistoryListViewManager = (UserPresentHistoryListViewManager_o *)this->fields.subTitle;
  if ( !userPresentHistoryListViewManager )
    goto LABEL_34;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)userPresentHistoryListViewManager, 0LL);
  GameObjectExtensions__SetLocalPositionY(
    gameObject,
    (float)UserPresentHistoryDialog_TypeInfo->static_fields->SUB_TITLE_HISTORY_POS_Y,
    0LL);
  userPresentHistoryListViewManager = (UserPresentHistoryListViewManager_o *)this->fields.subTitleSmall;
  if ( !userPresentHistoryListViewManager )
    goto LABEL_34;
  UILabel__set_text((UILabel_o *)userPresentHistoryListViewManager, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.titleLabel;
  userPresentHistoryListViewManager = (UserPresentHistoryListViewManager_o *)LocalizationManager__Get(
                                                                               (System_String_o *)StringLiteral_10707/*"PRESENT_HISTORY_DIALOG_TITLE"*/,
                                                                               0LL);
  if ( !titleLabel )
    goto LABEL_34;
  UILabel__set_text(titleLabel, (System_String_o *)userPresentHistoryListViewManager, 0LL);
  userPresentHistoryListViewManager = this->fields.userPresentHistoryListViewManager;
  if ( !userPresentHistoryListViewManager )
    goto LABEL_34;
  userPresentHistoryListViewManager = (UserPresentHistoryListViewManager_o *)ListViewManager__get_ItemSum(
                                                                               (ListViewManager_o *)userPresentHistoryListViewManager,
                                                                               0LL);
  if ( (int)userPresentHistoryListViewManager > 0 )
    goto LABEL_23;
  userPresentHistoryListViewManager = (UserPresentHistoryListViewManager_o *)this->fields.messageLabel;
  if ( !userPresentHistoryListViewManager )
    goto LABEL_34;
  userPresentHistoryListViewManager = (UserPresentHistoryListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                               (UnityEngine_Component_o *)userPresentHistoryListViewManager,
                                                                               0LL);
  if ( !userPresentHistoryListViewManager )
    goto LABEL_34;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)userPresentHistoryListViewManager, 1, 0LL);
  messageLabel = this->fields.messageLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  userPresentHistoryListViewManager = (UserPresentHistoryListViewManager_o *)LocalizationManager__Get(
                                                                               (System_String_o *)StringLiteral_10708/*"PRESENT_HISTORY_NO_HISTORY_MESSAGE"*/,
                                                                               0LL);
  if ( !messageLabel )
LABEL_34:
    sub_B7769C(userPresentHistoryListViewManager, v3);
  UILabel__set_text(messageLabel, (System_String_o *)userPresentHistoryListViewManager, 0LL);
LABEL_23:
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_34;
  HIDWORD(scrollView->fields.onDragStarted) = 1;
  userPresentHistoryListViewManager = (UserPresentHistoryListViewManager_o *)this->fields.scrollView;
  if ( !userPresentHistoryListViewManager )
    goto LABEL_34;
  UIScrollView__ResetPosition((UIScrollView_o *)userPresentHistoryListViewManager, 0LL);
  this->fields.state = 0;
  v12 = UserPresentHistoryDialog_TypeInfo;
  closeButton = this->fields.closeButton;
  if ( (BYTE3(UserPresentHistoryDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentHistoryDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentHistoryDialog_TypeInfo);
    v12 = UserPresentHistoryDialog_TypeInfo;
  }
  GameObjectExtensions__SetLocalPositionX(closeButton, (float)v12->static_fields->MID_POS_X, 0LL);
  closeLabel = this->fields.closeLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  userPresentHistoryListViewManager = (UserPresentHistoryListViewManager_o *)LocalizationManager__Get(
                                                                               (System_String_o *)StringLiteral_3387/*"COMMON_CONFIRM_CLOSE"*/,
                                                                               0LL);
  if ( !closeLabel )
    goto LABEL_34;
  UILabel__set_text(closeLabel, (System_String_o *)userPresentHistoryListViewManager, 0LL);
  this->fields.closeAction = 0LL;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.closeAction, 0LL, v15, v16, v17, v18, v19, v20);
  userPresentHistoryListViewManager = (UserPresentHistoryListViewManager_o *)this->fields.decideButton;
  if ( !userPresentHistoryListViewManager )
    goto LABEL_34;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)userPresentHistoryListViewManager, 0, 0LL);
  this->fields.decideAction = 0LL;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.decideAction, 0LL, v21, v22, v23, v24, v25, v26);
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