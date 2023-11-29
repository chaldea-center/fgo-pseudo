void __fastcall UserPresentHistoryDialog___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40F8086 & 1) == 0 )
  {
    sub_B16FFC(&UserPresentHistoryDialog_TypeInfo, v1);
    byte_40F8086 = 1;
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
  ListViewManager_o *userPresentHistoryListViewManager; // x0

  TextLabelScrollDialog__Init((TextLabelScrollDialog_o *)this, 0LL);
  userPresentHistoryListViewManager = (ListViewManager_o *)this->fields.userPresentHistoryListViewManager;
  if ( !userPresentHistoryListViewManager )
    sub_B170D4();
  ListViewManager__DestroyList(userPresentHistoryListViewManager, 0LL);
}


void __fastcall UserPresentHistoryDialog__OnClickClose(UserPresentHistoryDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  System_Action_o *v10; // x20

  if ( (byte_40F8085 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_UserPresentHistoryDialog_OnClickClose__, v6);
    sub_B16FFC(&Method_UserPresentHistoryDialog__OnClickClose_b__11_0__, v7);
    byte_40F8085 = 1;
  }
  if ( !this->fields.state )
  {
    v8 = Method_UserPresentHistoryDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_UserPresentHistoryDialog_OnClickClose__ + 75) & 2) != 0 )
      v8 = (_QWORD *)sub_B17004(Method_UserPresentHistoryDialog_OnClickClose__);
    v9 = (System_Reflection_MethodBase_o *)sub_B16FE0(v8, v8[3]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
  }
  this->fields.state = 2;
  v10 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_UserPresentHistoryDialog__OnClickClose_b__11_0__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0LL);
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
  System_String_o *v14; // x0
  UnityEngine_Component_o *v15; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *subTitleSmall; // x0
  UILabel_o *titleLabel; // x20
  System_String_o *v19; // x0
  ListViewManager_o *v20; // x0
  UnityEngine_Component_o *messageLabel; // x0
  UnityEngine_GameObject_o *v22; // x0
  UILabel_o *v23; // x20
  System_String_o *v24; // x0
  struct UIScrollView_o *scrollView; // x8
  UIScrollView_o *v26; // x0
  UserPresentHistoryDialog_c *v27; // x0
  UnityEngine_GameObject_o *closeButton; // x20
  UILabel_o *closeLabel; // x20
  System_String_o *v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  UnityEngine_GameObject_o *decideButton; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7

  if ( (byte_40F8084 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&UserPresentHistoryDialog_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_10478, v4);
    sub_B16FFC(&StringLiteral_10476, v5);
    sub_B16FFC(&StringLiteral_10477, v6);
    sub_B16FFC(&StringLiteral_3252, v7);
    sub_B16FFC(&StringLiteral_1, v8);
    byte_40F8084 = 1;
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
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_10476, 0LL);
  if ( !subTitle )
    goto LABEL_34;
  UILabel__set_text(subTitle, v14, 0LL);
  v15 = (UnityEngine_Component_o *)this->fields.subTitle;
  if ( !v15 )
    goto LABEL_34;
  gameObject = UnityEngine_Component__get_gameObject(v15, 0LL);
  GameObjectExtensions__SetLocalPositionY(
    gameObject,
    (float)UserPresentHistoryDialog_TypeInfo->static_fields->SUB_TITLE_HISTORY_POS_Y,
    0LL);
  subTitleSmall = this->fields.subTitleSmall;
  if ( !subTitleSmall )
    goto LABEL_34;
  UILabel__set_text(subTitleSmall, (System_String_o *)StringLiteral_1, 0LL);
  titleLabel = this->fields.titleLabel;
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_10477, 0LL);
  if ( !titleLabel )
    goto LABEL_34;
  UILabel__set_text(titleLabel, v19, 0LL);
  v20 = (ListViewManager_o *)this->fields.userPresentHistoryListViewManager;
  if ( !v20 )
    goto LABEL_34;
  if ( ListViewManager__get_ItemSum(v20, 0LL) > 0 )
    goto LABEL_23;
  messageLabel = (UnityEngine_Component_o *)this->fields.messageLabel;
  if ( !messageLabel )
    goto LABEL_34;
  v22 = UnityEngine_Component__get_gameObject(messageLabel, 0LL);
  if ( !v22 )
    goto LABEL_34;
  UnityEngine_GameObject__SetActive(v22, 1, 0LL);
  v23 = this->fields.messageLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v24 = LocalizationManager__Get((System_String_o *)StringLiteral_10478, 0LL);
  if ( !v23 )
LABEL_34:
    sub_B170D4();
  UILabel__set_text(v23, v24, 0LL);
LABEL_23:
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_34;
  HIDWORD(scrollView->fields.onDragStarted) = 1;
  v26 = this->fields.scrollView;
  if ( !v26 )
    goto LABEL_34;
  UIScrollView__ResetPosition(v26, 0LL);
  this->fields.state = 0;
  v27 = UserPresentHistoryDialog_TypeInfo;
  closeButton = this->fields.closeButton;
  if ( (BYTE3(UserPresentHistoryDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentHistoryDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentHistoryDialog_TypeInfo);
    v27 = UserPresentHistoryDialog_TypeInfo;
  }
  GameObjectExtensions__SetLocalPositionX(closeButton, (float)v27->static_fields->MID_POS_X, 0LL);
  closeLabel = this->fields.closeLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v30 = LocalizationManager__Get((System_String_o *)StringLiteral_3252, 0LL);
  if ( !closeLabel )
    goto LABEL_34;
  UILabel__set_text(closeLabel, v30, 0LL);
  this->fields.closeAction = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.closeAction, 0LL, v31, v32, v33, v34, v35, v36);
  decideButton = this->fields.decideButton;
  if ( !decideButton )
    goto LABEL_34;
  UnityEngine_GameObject__SetActive(decideButton, 0, 0LL);
  this->fields.decideAction = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.decideAction, 0LL, v38, v39, v40, v41, v42, v43);
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