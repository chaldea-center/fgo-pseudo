void __fastcall ServantCheckEquipDialog___ctor(ServantCheckEquipDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4187C4D & 1) == 0 )
  {
    sub_B2C35C(&BaseDialog_TypeInfo, method);
    byte_4187C4D = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall ServantCheckEquipDialog__Close(ServantCheckEquipDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ServantCheckEquipDialog__Close_25385760(this, 0LL, v2);
}


void __fastcall ServantCheckEquipDialog__Close_25385760(
        ServantCheckEquipDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Action_o *v17; // x20

  if ( (byte_4187C49 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&Method_ServantCheckEquipDialog_EndClose__, v10);
    byte_4187C49 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 3;
  this->fields.closeFunc = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.closeFunc, 0LL, v11, v12, v13, v14, v15, v16);
  v17 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_ServantCheckEquipDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v17, 0LL);
}


void __fastcall ServantCheckEquipDialog__EndClose(ServantCheckEquipDialog_o *this, const MethodInfo *method)
{
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  BattleServantConfConponent_o *p_closeCallbackFunc; // x19
  System_Action_o *v10; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  ServantCheckEquipDialog__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B2C2F8(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action__Invoke(v10, 0LL);
  }
}


void __fastcall ServantCheckEquipDialog__EndOpen(ServantCheckEquipDialog_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void __fastcall ServantCheckEquipDialog__Init(ServantCheckEquipDialog_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_4187C45 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, method);
    byte_4187C45 = 1;
  }
  titleLabel = this->fields.titleLabel;
  this->fields.state = 0;
  if ( !titleLabel )
    goto LABEL_10;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.warningLabel;
  if ( !titleLabel )
    goto LABEL_10;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.decideButtonLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.cancelButtonLabel) == 0LL)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = (UILabel_o *)this->fields.servantEquipListViewManager) == 0LL)
    || (ListViewManager__DestroyList((ListViewManager_o *)titleLabel, 0LL),
        (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_10:
    sub_B2C434(titleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall ServantCheckEquipDialog__OnClickCancel(ServantCheckEquipDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ServantCheckEquipDialog_ClickDelegate_o *closeFunc; // x0

  if ( (byte_4187C4B & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4187C4B = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    closeFunc = this->fields.closeFunc;
    if ( !closeFunc )
      sub_B2C434(0LL, v3);
    ServantCheckEquipDialog_ClickDelegate__Invoke(closeFunc, 0, 0LL);
  }
}


void __fastcall ServantCheckEquipDialog__OnClickDecide(ServantCheckEquipDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ServantCheckEquipDialog_ClickDelegate_o *closeFunc; // x0

  if ( (byte_4187C4A & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4187C4A = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    closeFunc = this->fields.closeFunc;
    if ( !closeFunc )
      sub_B2C434(0LL, v3);
    ServantCheckEquipDialog_ClickDelegate__Invoke(closeFunc, 1, 0LL);
  }
}


void __fastcall ServantCheckEquipDialog__OnEnable(ServantCheckEquipDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Transform_o *transform; // x19

  if ( (byte_4187C4C & 1) == 0 )
  {
    sub_B2C35C(&AndroidBackKeyManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_15485/*"Window/Objects/Buttons/CancelButton"*/, v3);
    byte_4187C4C = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
  }
  AndroidBackKeyManager__AddBackBtn_21105064(transform, (System_String_o *)StringLiteral_15485/*"Window/Objects/Buttons/CancelButton"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCheckEquipDialog__Open(
        ServantCheckEquipDialog_o *this,
        System_Collections_Generic_List_SvtEqCombineListViewItem__o *materialList,
        bool isLastCheck,
        ServantCheckEquipDialog_ClickDelegate_o *closeCallback,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  System_String_o **v20; // x8
  System_String_o *v21; // x24
  System_String_o **v22; // x8
  UILabel_o *titleLabel; // x23
  System_String_o *v24; // x22
  System_String_o *servantEquipListViewManager; // x0
  __int64 v26; // x1
  UILabel_o *warningLabel; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v29; // x0
  float v30; // s0
  UILabel_o *decideButtonLabel; // x21
  UILabel_o *cancelButtonLabel; // x21
  const MethodInfo *v33; // x2
  const MethodInfo *v34; // x2
  System_Action_o *v35; // x20

  if ( (byte_4187C46 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, materialList);
    sub_B2C35C(&LocalizationManager_TypeInfo, v12);
    sub_B2C35C(&Method_ServantCheckEquipDialog_EndOpen__, v13);
    sub_B2C35C(&StringLiteral_11670/*"SERVANT_CHECK_EQUIP_COMBINE_WARNING_MESSAGE"*/, v14);
    sub_B2C35C(&StringLiteral_3262/*"COMMON_CONFIRM_DECIDE"*/, v15);
    sub_B2C35C(&StringLiteral_11668/*"SERVANT_CHECK_COMBINE_DIALOG_TITLE"*/, v16);
    sub_B2C35C(&StringLiteral_3260/*"COMMON_CONFIRM_CANCEL"*/, v17);
    sub_B2C35C(&StringLiteral_11669/*"SERVANT_CHECK_EQUIP_COMBINE_TITLE"*/, v18);
    sub_B2C35C(&StringLiteral_11667/*"SERVANT_CHECK_COMBINE_DIALOG_MESSAGE"*/, v19);
    byte_4187C46 = 1;
  }
  this->fields.closeFunc = closeCallback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.closeFunc,
    (System_Int32_array **)closeCallback,
    (System_String_array **)isLastCheck,
    (System_String_array **)closeCallback,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  v20 = (System_String_o **)&StringLiteral_11668/*"SERVANT_CHECK_COMBINE_DIALOG_TITLE"*/;
  if ( !isLastCheck )
    v20 = (System_String_o **)&StringLiteral_11669/*"SERVANT_CHECK_EQUIP_COMBINE_TITLE"*/;
  v21 = *v20;
  v22 = (System_String_o **)&StringLiteral_11670/*"SERVANT_CHECK_EQUIP_COMBINE_WARNING_MESSAGE"*/;
  titleLabel = this->fields.titleLabel;
  if ( isLastCheck )
    v22 = (System_String_o **)&StringLiteral_11667/*"SERVANT_CHECK_COMBINE_DIALOG_MESSAGE"*/;
  v24 = *v22;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  servantEquipListViewManager = LocalizationManager__Get(v21, 0LL);
  if ( !titleLabel )
    goto LABEL_27;
  UILabel__set_text(titleLabel, servantEquipListViewManager, 0LL);
  warningLabel = this->fields.warningLabel;
  servantEquipListViewManager = LocalizationManager__Get(v24, 0LL);
  if ( !warningLabel )
    goto LABEL_27;
  UILabel__set_text(warningLabel, servantEquipListViewManager, 0LL);
  servantEquipListViewManager = (System_String_o *)this->fields.titleLabel;
  if ( !servantEquipListViewManager )
    goto LABEL_27;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEquipListViewManager, 0LL);
  if ( isLastCheck )
  {
    GameObjectExtensions__SetLocalPosition_31325924(gameObject, 9.0, 250.0, 0LL);
    servantEquipListViewManager = (System_String_o *)this->fields.warningLabel;
    if ( !servantEquipListViewManager )
      goto LABEL_27;
    v29 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEquipListViewManager, 0LL);
    v30 = 0.0;
  }
  else
  {
    GameObjectExtensions__SetLocalPosition_31325924(gameObject, 1.0, 250.0, 0LL);
    servantEquipListViewManager = (System_String_o *)this->fields.warningLabel;
    if ( !servantEquipListViewManager )
      goto LABEL_27;
    v29 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEquipListViewManager, 0LL);
    v30 = 7.0;
  }
  GameObjectExtensions__SetLocalPosition_31325924(v29, v30, -151.0, 0LL);
  decideButtonLabel = this->fields.decideButtonLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  servantEquipListViewManager = LocalizationManager__Get((System_String_o *)StringLiteral_3262/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideButtonLabel )
    goto LABEL_27;
  UILabel__set_text(decideButtonLabel, servantEquipListViewManager, 0LL);
  cancelButtonLabel = this->fields.cancelButtonLabel;
  servantEquipListViewManager = LocalizationManager__Get((System_String_o *)StringLiteral_3260/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelButtonLabel
    || (UILabel__set_text(cancelButtonLabel, servantEquipListViewManager, 0LL),
        (servantEquipListViewManager = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                            (UnityEngine_Component_o *)this,
                                                            0LL)) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEquipListViewManager, 1, 0LL),
        (servantEquipListViewManager = (System_String_o *)this->fields.servantEquipListViewManager) == 0LL)
    || (ServantCheckEquipListViewManager__CreateList(
          (ServantCheckEquipListViewManager_o *)servantEquipListViewManager,
          materialList,
          v33),
        (servantEquipListViewManager = (System_String_o *)this->fields.servantEquipListViewManager) == 0LL) )
  {
LABEL_27:
    sub_B2C434(servantEquipListViewManager, v26);
  }
  ServantCheckEquipListViewManager__SetMode_25384324(
    (ServantCheckEquipListViewManager_o *)servantEquipListViewManager,
    3,
    v34);
  v35 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v35, (Il2CppObject *)this, Method_ServantCheckEquipDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v35, 0, 0LL);
}


void __fastcall ServantCheckEquipDialog__OpenShopLastCheck(
        ServantCheckEquipDialog_o *this,
        ServantCheckEquipDialog_ClickDelegate_o *closeCallback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UILabel_o *titleLabel; // x21
  System_String_o *v8; // x0
  __int64 v9; // x1
  UILabel_o *warningLabel; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_4187C48 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, closeCallback);
    sub_B2C35C(&StringLiteral_11674/*"SERVANT_CHECK_SELL_DIALOG_TITLE"*/, v5);
    sub_B2C35C(&StringLiteral_11673/*"SERVANT_CHECK_SELL_DIALOG_MESSAGE"*/, v6);
    byte_4187C48 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_11674/*"SERVANT_CHECK_SELL_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_11;
  UILabel__set_text(titleLabel, v8, 0LL);
  warningLabel = this->fields.warningLabel;
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_11673/*"SERVANT_CHECK_SELL_DIALOG_MESSAGE"*/, 0LL);
  if ( !warningLabel
    || (UILabel__set_text(warningLabel, v8, 0LL), (v8 = (System_String_o *)this->fields.titleLabel) == 0LL)
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v8, 0LL),
        GameObjectExtensions__SetLocalPosition_31325924(gameObject, 9.0, 250.0, 0LL),
        (v8 = (System_String_o *)this->fields.warningLabel) == 0LL) )
  {
LABEL_11:
    sub_B2C434(v8, v9);
  }
  v12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v8, 0LL);
  GameObjectExtensions__SetLocalPosition_31325924(v12, 0.0, -151.0, 0LL);
  this->fields.closeFunc = closeCallback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.closeFunc,
    (System_Int32_array **)closeCallback,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
}


void __fastcall ServantCheckEquipDialog__Open_25384440(
        ServantCheckEquipDialog_o *this,
        System_Collections_Generic_List_ServantOperationListViewItem__o *materialList,
        ServantCheckEquipDialog_ClickDelegate_o *closeCallback,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  UILabel_o *titleLabel; // x21
  System_String_o *servantEquipListViewManager; // x0
  __int64 v19; // x1
  UILabel_o *warningLabel; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v22; // x0
  UILabel_o *decideButtonLabel; // x21
  UILabel_o *cancelButtonLabel; // x21
  const MethodInfo *v25; // x2
  const MethodInfo *v26; // x2
  System_Action_o *v27; // x20

  if ( (byte_4187C47 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, materialList);
    sub_B2C35C(&LocalizationManager_TypeInfo, v11);
    sub_B2C35C(&Method_ServantCheckEquipDialog_EndOpen__, v12);
    sub_B2C35C(&StringLiteral_11672/*"SERVANT_CHECK_EQUIP_SELL_WARNING_MESSAGE"*/, v13);
    sub_B2C35C(&StringLiteral_3262/*"COMMON_CONFIRM_DECIDE"*/, v14);
    sub_B2C35C(&StringLiteral_3260/*"COMMON_CONFIRM_CANCEL"*/, v15);
    sub_B2C35C(&StringLiteral_11671/*"SERVANT_CHECK_EQUIP_SELL_TITLE"*/, v16);
    byte_4187C47 = 1;
  }
  this->fields.closeFunc = closeCallback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.closeFunc,
    (System_Int32_array **)closeCallback,
    (System_String_array **)closeCallback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  servantEquipListViewManager = LocalizationManager__Get((System_String_o *)StringLiteral_11671/*"SERVANT_CHECK_EQUIP_SELL_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_16;
  UILabel__set_text(titleLabel, servantEquipListViewManager, 0LL);
  warningLabel = this->fields.warningLabel;
  servantEquipListViewManager = LocalizationManager__Get((System_String_o *)StringLiteral_11672/*"SERVANT_CHECK_EQUIP_SELL_WARNING_MESSAGE"*/, 0LL);
  if ( !warningLabel )
    goto LABEL_16;
  UILabel__set_text(warningLabel, servantEquipListViewManager, 0LL);
  servantEquipListViewManager = (System_String_o *)this->fields.titleLabel;
  if ( !servantEquipListViewManager )
    goto LABEL_16;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEquipListViewManager, 0LL);
  GameObjectExtensions__SetLocalPosition_31325924(gameObject, 1.0, 250.0, 0LL);
  servantEquipListViewManager = (System_String_o *)this->fields.warningLabel;
  if ( !servantEquipListViewManager )
    goto LABEL_16;
  v22 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEquipListViewManager, 0LL);
  GameObjectExtensions__SetLocalPosition_31325924(v22, 7.0, -151.0, 0LL);
  decideButtonLabel = this->fields.decideButtonLabel;
  servantEquipListViewManager = LocalizationManager__Get((System_String_o *)StringLiteral_3262/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideButtonLabel )
    goto LABEL_16;
  UILabel__set_text(decideButtonLabel, servantEquipListViewManager, 0LL);
  cancelButtonLabel = this->fields.cancelButtonLabel;
  servantEquipListViewManager = LocalizationManager__Get((System_String_o *)StringLiteral_3260/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelButtonLabel
    || (UILabel__set_text(cancelButtonLabel, servantEquipListViewManager, 0LL),
        (servantEquipListViewManager = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                            (UnityEngine_Component_o *)this,
                                                            0LL)) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEquipListViewManager, 1, 0LL),
        (servantEquipListViewManager = (System_String_o *)this->fields.servantEquipListViewManager) == 0LL)
    || (ServantCheckEquipListViewManager__CreateList_25385012(
          (ServantCheckEquipListViewManager_o *)servantEquipListViewManager,
          materialList,
          v25),
        (servantEquipListViewManager = (System_String_o *)this->fields.servantEquipListViewManager) == 0LL) )
  {
LABEL_16:
    sub_B2C434(servantEquipListViewManager, v19);
  }
  ServantCheckEquipListViewManager__SetMode_25384324(
    (ServantCheckEquipListViewManager_o *)servantEquipListViewManager,
    3,
    v26);
  v27 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v27, (Il2CppObject *)this, Method_ServantCheckEquipDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v27, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCheckEquipDialog_ClickDelegate___ctor(
        ServantCheckEquipDialog_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B2C2F8(p_method, object);
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall ServantCheckEquipDialog_ClickDelegate__BeginInvoke(
        ServantCheckEquipDialog_ClickDelegate_o *this,
        bool isDecide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = isDecide;
  if ( (byte_41853C9 & 1) == 0 )
  {
    sub_B2C35C(&bool_TypeInfo, isDecide);
    byte_41853C9 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B2C300(this, v9, callback, object);
}


void __fastcall ServantCheckEquipDialog_ClickDelegate__EndInvoke(
        ServantCheckEquipDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCheckEquipDialog_ClickDelegate__Invoke(
        ServantCheckEquipDialog_ClickDelegate_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  ServantCheckEquipDialog_ClickDelegate_o **v8; // x25
  __int64 v9; // x26
  unsigned int v10; // w23
  __int64 class_0; // x0
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, bool, _QWORD); // x0
  ServantCheckEquipDialog_ClickDelegate_o *v20; // x8
  __int64 *v21; // x21
  __int64 v22; // x22
  void (__fastcall *v23)(bool, __int64); // x23
  char v24; // w23
  char v25; // w0
  __int64 v26; // x3
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  ServantCheckEquipDialog_ClickDelegate_o *v32; // [xsp+8h] [xbp-48h] BYREF

  v32 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v32;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (ServantCheckEquipDialog_ClickDelegate_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(bool, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v20->fields.extra_arg, isDecide, method, v3);
      if ( (sub_B2C38C(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 1 )
        goto LABEL_36;
      v23(isDecide, v22);
LABEL_37:
      if ( ++v9 == v7 )
        return;
    }
    if ( v21 && *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B2C384(v22);
      v25 = sub_B2C788(v22);
      if ( (v24 & 1) != 0 )
      {
        if ( (v25 & 1) != 0 )
        {
          v27 = *v21;
          v28 = *(_QWORD *)(v22 + 24);
          v29 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v30 = 0LL;
            v31 = (_DWORD *)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *((_QWORD *)v31 - 1) != v28 )
            {
              ++v30;
              v31 += 4;
              if ( v30 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_35;
            }
            v18 = v27 + 16LL * (*v31 + (int)v29) + 312;
          }
          else
          {
LABEL_35:
            v18 = sub_AC5258(v21, v28, v29, v26);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B2C40C(v17, v22);
        (*v19)(v21, isDecide, v19);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v13 = *v21;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v13 + 16LL * (int)(*v15 + v10) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_AC5258(v21, class_0, v10, v12);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v16)(v21, isDecide, *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            isDecide,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v23)(v21, isDecide, v22);
    goto LABEL_37;
  }
}