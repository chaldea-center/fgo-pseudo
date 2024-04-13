void __fastcall UserPresentHistoryDialog___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E6A50 & 1) == 0 )
  {
    sub_B5D5C4(&UserPresentHistoryDialog_TypeInfo, v1, v2, v3);
    byte_42E6A50 = 1;
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
    sub_B5D69C(0LL, v3);
  ListViewManager__DestroyList(userPresentHistoryListViewManager, 0LL);
}


void __fastcall UserPresentHistoryDialog__OnClickClose(UserPresentHistoryDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  System_Action_o *v13; // x20

  if ( (byte_42E6A4F & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UserPresentHistoryDialog_OnClickClose__, v5, v6, v7);
    sub_B5D5C4(&Method_UserPresentHistoryDialog__OnClickClose_b__11_0__, v8, v9, v10);
    byte_42E6A4F = 1;
  }
  if ( !this->fields.state )
  {
    v11 = Method_UserPresentHistoryDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_UserPresentHistoryDialog_OnClickClose__ + 75) & 2) != 0 )
      v11 = (_QWORD *)sub_B5D5CC(Method_UserPresentHistoryDialog_OnClickClose__);
    v12 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v11, v11[3]);
    OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0LL);
  }
  this->fields.state = 2;
  v13 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_UserPresentHistoryDialog__OnClickClose_b__11_0__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v13, 0LL);
}


void __fastcall UserPresentHistoryDialog__Open(UserPresentHistoryDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
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
  const MethodInfo *v23; // x1
  UserPresentHistoryListViewManager_o *userPresentHistoryListViewManager; // x0
  UnityEngine_GameObject_o *bgObject; // x20
  UserPresentHistoryDialog_c *v26; // x0
  UILabel_o *subTitle; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *titleLabel; // x20
  UILabel_o *messageLabel; // x20
  struct UIScrollView_o *scrollView; // x8
  UserPresentHistoryDialog_c *v32; // x0
  UnityEngine_GameObject_o *closeButton; // x20
  UILabel_o *closeLabel; // x20
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7

  if ( (byte_42E6A4E & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UserPresentHistoryDialog_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_10628/*"PRESENT_HISTORY_NO_HISTORY_MESSAGE"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_10626/*"PRESENT_HISTORY_DIALOG_SUBTITLE"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_10627/*"PRESENT_HISTORY_DIALOG_TITLE"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_3327/*"COMMON_CONFIRM_CLOSE"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_1/*""*/, v20, v21, v22);
    byte_42E6A4E = 1;
  }
  ((void (__fastcall *)(UserPresentHistoryDialog_o *, void *))this->klass->vtable._7_Init.method)(
    this,
    this->klass[1]._1.image);
  BaseDialog__Open((BaseDialog_o *)this, 0LL, 0, 0LL);
  userPresentHistoryListViewManager = this->fields.userPresentHistoryListViewManager;
  if ( !userPresentHistoryListViewManager )
    goto LABEL_34;
  UserPresentHistoryListViewManager__CreateList(userPresentHistoryListViewManager, v23);
  bgObject = this->fields.bgObject;
  v26 = UserPresentHistoryDialog_TypeInfo;
  if ( (BYTE3(UserPresentHistoryDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentHistoryDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentHistoryDialog_TypeInfo);
    v26 = UserPresentHistoryDialog_TypeInfo;
  }
  GameObjectExtensions__SetLocalPositionY(bgObject, (float)v26->static_fields->MESSAGE_HISTORY_POS_Y, 0LL);
  subTitle = this->fields.subTitle;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  userPresentHistoryListViewManager = (UserPresentHistoryListViewManager_o *)LocalizationManager__Get(
                                                                               (System_String_o *)StringLiteral_10626/*"PRESENT_HISTORY_DIALOG_SUBTITLE"*/,
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
                                                                               (System_String_o *)StringLiteral_10627/*"PRESENT_HISTORY_DIALOG_TITLE"*/,
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
                                                                               (System_String_o *)StringLiteral_10628/*"PRESENT_HISTORY_NO_HISTORY_MESSAGE"*/,
                                                                               0LL);
  if ( !messageLabel )
LABEL_34:
    sub_B5D69C(userPresentHistoryListViewManager, v23);
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
  v32 = UserPresentHistoryDialog_TypeInfo;
  closeButton = this->fields.closeButton;
  if ( (BYTE3(UserPresentHistoryDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentHistoryDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentHistoryDialog_TypeInfo);
    v32 = UserPresentHistoryDialog_TypeInfo;
  }
  GameObjectExtensions__SetLocalPositionX(closeButton, (float)v32->static_fields->MID_POS_X, 0LL);
  closeLabel = this->fields.closeLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  userPresentHistoryListViewManager = (UserPresentHistoryListViewManager_o *)LocalizationManager__Get(
                                                                               (System_String_o *)StringLiteral_3327/*"COMMON_CONFIRM_CLOSE"*/,
                                                                               0LL);
  if ( !closeLabel )
    goto LABEL_34;
  UILabel__set_text(closeLabel, (System_String_o *)userPresentHistoryListViewManager, 0LL);
  this->fields.closeAction = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.closeAction, 0LL, v35, v36, v37, v38, v39, v40);
  userPresentHistoryListViewManager = (UserPresentHistoryListViewManager_o *)this->fields.decideButton;
  if ( !userPresentHistoryListViewManager )
    goto LABEL_34;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)userPresentHistoryListViewManager, 0, 0LL);
  this->fields.decideAction = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.decideAction, 0LL, v41, v42, v43, v44, v45, v46);
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