void __fastcall UserPresentHistoryDialog___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4185D9D & 1) == 0 )
  {
    sub_B2C35C(&UserPresentHistoryDialog_TypeInfo, v1);
    byte_4185D9D = 1;
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
    sub_B2C434(0LL, v3);
  ListViewManager__DestroyList(userPresentHistoryListViewManager, 0LL);
}


void __fastcall UserPresentHistoryDialog__OnClickClose(UserPresentHistoryDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  System_Action_o *v7; // x20

  if ( (byte_4185D9C & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_UserPresentHistoryDialog_OnClickClose__, v3);
    sub_B2C35C(&Method_UserPresentHistoryDialog__OnClickClose_b__11_0__, v4);
    byte_4185D9C = 1;
  }
  if ( !this->fields.state )
  {
    v5 = Method_UserPresentHistoryDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_UserPresentHistoryDialog_OnClickClose__ + 75) & 2) != 0 )
      v5 = (_QWORD *)sub_B2C364(Method_UserPresentHistoryDialog_OnClickClose__);
    v6 = (System_Reflection_MethodBase_o *)sub_B2C340(v5, v5[3]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
  }
  this->fields.state = 2;
  v7 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
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
  UnityEngine_GameObject_o *bgObject; // x20
  UserPresentHistoryDialog_c *v12; // x0
  UILabel_o *subTitle; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *titleLabel; // x20
  UILabel_o *messageLabel; // x20
  struct UIScrollView_o *scrollView; // x8
  UserPresentHistoryDialog_c *v18; // x0
  UnityEngine_GameObject_o *closeButton; // x20
  UILabel_o *closeLabel; // x20
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7

  if ( (byte_4185D9B & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, method);
    sub_B2C35C(&UserPresentHistoryDialog_TypeInfo, v3);
    sub_B2C35C(&StringLiteral_10511/*"PRESENT_HISTORY_NO_HISTORY_MESSAGE"*/, v4);
    sub_B2C35C(&StringLiteral_10509/*"PRESENT_HISTORY_DIALOG_SUBTITLE"*/, v5);
    sub_B2C35C(&StringLiteral_10510/*"PRESENT_HISTORY_DIALOG_TITLE"*/, v6);
    sub_B2C35C(&StringLiteral_3261/*"COMMON_CONFIRM_CLOSE"*/, v7);
    sub_B2C35C(&StringLiteral_1/*""*/, v8);
    byte_4185D9B = 1;
  }
  ((void (__fastcall *)(UserPresentHistoryDialog_o *, void *))this->klass->vtable._7_Init.method)(
    this,
    this->klass[1]._1.image);
  BaseDialog__Open((BaseDialog_o *)this, 0LL, 0, 0LL);
  userPresentHistoryListViewManager = this->fields.userPresentHistoryListViewManager;
  if ( !userPresentHistoryListViewManager )
    goto LABEL_34;
  UserPresentHistoryListViewManager__CreateList(userPresentHistoryListViewManager, v9);
  bgObject = this->fields.bgObject;
  v12 = UserPresentHistoryDialog_TypeInfo;
  if ( (BYTE3(UserPresentHistoryDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentHistoryDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentHistoryDialog_TypeInfo);
    v12 = UserPresentHistoryDialog_TypeInfo;
  }
  GameObjectExtensions__SetLocalPositionY(bgObject, (float)v12->static_fields->MESSAGE_HISTORY_POS_Y, 0LL);
  subTitle = this->fields.subTitle;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  userPresentHistoryListViewManager = (UserPresentHistoryListViewManager_o *)LocalizationManager__Get(
                                                                               (System_String_o *)StringLiteral_10509/*"PRESENT_HISTORY_DIALOG_SUBTITLE"*/,
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
                                                                               (System_String_o *)StringLiteral_10510/*"PRESENT_HISTORY_DIALOG_TITLE"*/,
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
                                                                               (System_String_o *)StringLiteral_10511/*"PRESENT_HISTORY_NO_HISTORY_MESSAGE"*/,
                                                                               0LL);
  if ( !messageLabel )
LABEL_34:
    sub_B2C434(userPresentHistoryListViewManager, v9);
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
  v18 = UserPresentHistoryDialog_TypeInfo;
  closeButton = this->fields.closeButton;
  if ( (BYTE3(UserPresentHistoryDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentHistoryDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentHistoryDialog_TypeInfo);
    v18 = UserPresentHistoryDialog_TypeInfo;
  }
  GameObjectExtensions__SetLocalPositionX(closeButton, (float)v18->static_fields->MID_POS_X, 0LL);
  closeLabel = this->fields.closeLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  userPresentHistoryListViewManager = (UserPresentHistoryListViewManager_o *)LocalizationManager__Get(
                                                                               (System_String_o *)StringLiteral_3261/*"COMMON_CONFIRM_CLOSE"*/,
                                                                               0LL);
  if ( !closeLabel )
    goto LABEL_34;
  UILabel__set_text(closeLabel, (System_String_o *)userPresentHistoryListViewManager, 0LL);
  this->fields.closeAction = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.closeAction, 0LL, v21, v22, v23, v24, v25, v26);
  userPresentHistoryListViewManager = (UserPresentHistoryListViewManager_o *)this->fields.decideButton;
  if ( !userPresentHistoryListViewManager )
    goto LABEL_34;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)userPresentHistoryListViewManager, 0, 0LL);
  this->fields.decideAction = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.decideAction, 0LL, v27, v28, v29, v30, v31, v32);
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