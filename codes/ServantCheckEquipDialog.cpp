void __fastcall ServantCheckEquipDialog___ctor(ServantCheckEquipDialog_o *this, const MethodInfo *method)
{
  if ( (byte_42B1095 & 1) == 0 )
  {
    sub_B52984(&BaseDialog_TypeInfo);
    byte_42B1095 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall ServantCheckEquipDialog__Close(ServantCheckEquipDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ServantCheckEquipDialog__Close_26860412(this, 0LL, v2);
}


void __fastcall ServantCheckEquipDialog__Close_26860412(
        ServantCheckEquipDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_Action_o *v16; // x20

  if ( (byte_42B1091 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_ServantCheckEquipDialog_EndClose__);
    byte_42B1091 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B52920(
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
  sub_B52920((BattleServantConfConponent_o *)&this->fields.closeFunc, 0LL, v10, v11, v12, v13, v14, v15);
  v16 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v16, (Il2CppObject *)this, Method_ServantCheckEquipDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v16, 0LL);
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
    sub_B52920(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
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

  if ( (byte_42B108D & 1) == 0 )
  {
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B108D = 1;
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
    sub_B52A5C(titleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall ServantCheckEquipDialog__OnClickCancel(ServantCheckEquipDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ServantCheckEquipDialog_ClickDelegate_o *closeFunc; // x0

  if ( (byte_42B1093 & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B1093 = 1;
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
      sub_B52A5C(0LL, v3);
    ServantCheckEquipDialog_ClickDelegate__Invoke(closeFunc, 0, 0LL);
  }
}


void __fastcall ServantCheckEquipDialog__OnClickDecide(ServantCheckEquipDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ServantCheckEquipDialog_ClickDelegate_o *closeFunc; // x0

  if ( (byte_42B1092 & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B1092 = 1;
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
      sub_B52A5C(0LL, v3);
    ServantCheckEquipDialog_ClickDelegate__Invoke(closeFunc, 1, 0LL);
  }
}


void __fastcall ServantCheckEquipDialog__OnEnable(ServantCheckEquipDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x19

  if ( (byte_42B1094 & 1) == 0 )
  {
    sub_B52984(&AndroidBackKeyManager_TypeInfo);
    sub_B52984(&StringLiteral_15590/*"Window/Objects/Buttons/CancelButton"*/);
    byte_42B1094 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
  }
  AndroidBackKeyManager__AddBackBtn_21195324(transform, (System_String_o *)StringLiteral_15590/*"Window/Objects/Buttons/CancelButton"*/, 0LL);
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
  System_String_o **v12; // x8
  System_String_o *v13; // x24
  System_String_o **v14; // x8
  UILabel_o *titleLabel; // x23
  System_String_o *v16; // x22
  System_String_o *servantEquipListViewManager; // x0
  __int64 v18; // x1
  UILabel_o *warningLabel; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v21; // x0
  float v22; // s0
  UILabel_o *decideButtonLabel; // x21
  UILabel_o *cancelButtonLabel; // x21
  System_Action_o *v25; // x20

  if ( (byte_42B108E & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&Method_ServantCheckEquipDialog_EndOpen__);
    sub_B52984(&StringLiteral_11755/*"SERVANT_CHECK_EQUIP_COMBINE_WARNING_MESSAGE"*/);
    sub_B52984(&StringLiteral_3295/*"COMMON_CONFIRM_DECIDE"*/);
    sub_B52984(&StringLiteral_11753/*"SERVANT_CHECK_COMBINE_DIALOG_TITLE"*/);
    sub_B52984(&StringLiteral_3293/*"COMMON_CONFIRM_CANCEL"*/);
    sub_B52984(&StringLiteral_11754/*"SERVANT_CHECK_EQUIP_COMBINE_TITLE"*/);
    sub_B52984(&StringLiteral_11752/*"SERVANT_CHECK_COMBINE_DIALOG_MESSAGE"*/);
    byte_42B108E = 1;
  }
  this->fields.closeFunc = closeCallback;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.closeFunc,
    (System_Int32_array **)closeCallback,
    (System_String_array **)isLastCheck,
    (System_String_array **)closeCallback,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  v12 = (System_String_o **)&StringLiteral_11753/*"SERVANT_CHECK_COMBINE_DIALOG_TITLE"*/;
  if ( !isLastCheck )
    v12 = (System_String_o **)&StringLiteral_11754/*"SERVANT_CHECK_EQUIP_COMBINE_TITLE"*/;
  v13 = *v12;
  v14 = (System_String_o **)&StringLiteral_11755/*"SERVANT_CHECK_EQUIP_COMBINE_WARNING_MESSAGE"*/;
  titleLabel = this->fields.titleLabel;
  if ( isLastCheck )
    v14 = (System_String_o **)&StringLiteral_11752/*"SERVANT_CHECK_COMBINE_DIALOG_MESSAGE"*/;
  v16 = *v14;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  servantEquipListViewManager = LocalizationManager__Get(v13, 0LL);
  if ( !titleLabel )
    goto LABEL_27;
  UILabel__set_text(titleLabel, servantEquipListViewManager, 0LL);
  warningLabel = this->fields.warningLabel;
  servantEquipListViewManager = LocalizationManager__Get(v16, 0LL);
  if ( !warningLabel )
    goto LABEL_27;
  UILabel__set_text(warningLabel, servantEquipListViewManager, 0LL);
  servantEquipListViewManager = (System_String_o *)this->fields.titleLabel;
  if ( !servantEquipListViewManager )
    goto LABEL_27;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEquipListViewManager, 0LL);
  if ( isLastCheck )
  {
    GameObjectExtensions__SetLocalPosition_32085060(gameObject, 9.0, 250.0, 0LL);
    servantEquipListViewManager = (System_String_o *)this->fields.warningLabel;
    if ( !servantEquipListViewManager )
      goto LABEL_27;
    v21 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEquipListViewManager, 0LL);
    v22 = 0.0;
  }
  else
  {
    GameObjectExtensions__SetLocalPosition_32085060(gameObject, 1.0, 250.0, 0LL);
    servantEquipListViewManager = (System_String_o *)this->fields.warningLabel;
    if ( !servantEquipListViewManager )
      goto LABEL_27;
    v21 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEquipListViewManager, 0LL);
    v22 = 7.0;
  }
  GameObjectExtensions__SetLocalPosition_32085060(v21, v22, -151.0, 0LL);
  decideButtonLabel = this->fields.decideButtonLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  servantEquipListViewManager = LocalizationManager__Get((System_String_o *)StringLiteral_3295/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideButtonLabel )
    goto LABEL_27;
  UILabel__set_text(decideButtonLabel, servantEquipListViewManager, 0LL);
  cancelButtonLabel = this->fields.cancelButtonLabel;
  servantEquipListViewManager = LocalizationManager__Get((System_String_o *)StringLiteral_3293/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
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
          0LL),
        (servantEquipListViewManager = (System_String_o *)this->fields.servantEquipListViewManager) == 0LL) )
  {
LABEL_27:
    sub_B52A5C(servantEquipListViewManager, v18);
  }
  ServantCheckEquipListViewManager__SetMode_27164272(
    (ServantCheckEquipListViewManager_o *)servantEquipListViewManager,
    3,
    0LL);
  v25 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v25, (Il2CppObject *)this, Method_ServantCheckEquipDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v25, 0, 0LL);
}


void __fastcall ServantCheckEquipDialog__OpenShopLastCheck(
        ServantCheckEquipDialog_o *this,
        ServantCheckEquipDialog_ClickDelegate_o *closeCallback,
        const MethodInfo *method)
{
  UILabel_o *titleLabel; // x21
  System_String_o *v6; // x0
  __int64 v7; // x1
  UILabel_o *warningLabel; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_42B1090 & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_11759/*"SERVANT_CHECK_SELL_DIALOG_TITLE"*/);
    sub_B52984(&StringLiteral_11758/*"SERVANT_CHECK_SELL_DIALOG_MESSAGE"*/);
    byte_42B1090 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_11759/*"SERVANT_CHECK_SELL_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_11;
  UILabel__set_text(titleLabel, v6, 0LL);
  warningLabel = this->fields.warningLabel;
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_11758/*"SERVANT_CHECK_SELL_DIALOG_MESSAGE"*/, 0LL);
  if ( !warningLabel
    || (UILabel__set_text(warningLabel, v6, 0LL), (v6 = (System_String_o *)this->fields.titleLabel) == 0LL)
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0LL),
        GameObjectExtensions__SetLocalPosition_32085060(gameObject, 9.0, 250.0, 0LL),
        (v6 = (System_String_o *)this->fields.warningLabel) == 0LL) )
  {
LABEL_11:
    sub_B52A5C(v6, v7);
  }
  v10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0LL);
  GameObjectExtensions__SetLocalPosition_32085060(v10, 0.0, -151.0, 0LL);
  this->fields.closeFunc = closeCallback;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.closeFunc,
    (System_Int32_array **)closeCallback,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
}


void __fastcall ServantCheckEquipDialog__Open_26859508(
        ServantCheckEquipDialog_o *this,
        System_Collections_Generic_List_ServantOperationListViewItem__o *materialList,
        ServantCheckEquipDialog_ClickDelegate_o *closeCallback,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  UILabel_o *titleLabel; // x21
  System_String_o *servantEquipListViewManager; // x0
  __int64 v13; // x1
  UILabel_o *warningLabel; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v16; // x0
  UILabel_o *decideButtonLabel; // x21
  UILabel_o *cancelButtonLabel; // x21
  System_Action_o *v19; // x20

  if ( (byte_42B108F & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&Method_ServantCheckEquipDialog_EndOpen__);
    sub_B52984(&StringLiteral_11757/*"SERVANT_CHECK_EQUIP_SELL_WARNING_MESSAGE"*/);
    sub_B52984(&StringLiteral_3295/*"COMMON_CONFIRM_DECIDE"*/);
    sub_B52984(&StringLiteral_3293/*"COMMON_CONFIRM_CANCEL"*/);
    sub_B52984(&StringLiteral_11756/*"SERVANT_CHECK_EQUIP_SELL_TITLE"*/);
    byte_42B108F = 1;
  }
  this->fields.closeFunc = closeCallback;
  sub_B52920(
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
  servantEquipListViewManager = LocalizationManager__Get((System_String_o *)StringLiteral_11756/*"SERVANT_CHECK_EQUIP_SELL_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_16;
  UILabel__set_text(titleLabel, servantEquipListViewManager, 0LL);
  warningLabel = this->fields.warningLabel;
  servantEquipListViewManager = LocalizationManager__Get((System_String_o *)StringLiteral_11757/*"SERVANT_CHECK_EQUIP_SELL_WARNING_MESSAGE"*/, 0LL);
  if ( !warningLabel )
    goto LABEL_16;
  UILabel__set_text(warningLabel, servantEquipListViewManager, 0LL);
  servantEquipListViewManager = (System_String_o *)this->fields.titleLabel;
  if ( !servantEquipListViewManager )
    goto LABEL_16;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEquipListViewManager, 0LL);
  GameObjectExtensions__SetLocalPosition_32085060(gameObject, 1.0, 250.0, 0LL);
  servantEquipListViewManager = (System_String_o *)this->fields.warningLabel;
  if ( !servantEquipListViewManager )
    goto LABEL_16;
  v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEquipListViewManager, 0LL);
  GameObjectExtensions__SetLocalPosition_32085060(v16, 7.0, -151.0, 0LL);
  decideButtonLabel = this->fields.decideButtonLabel;
  servantEquipListViewManager = LocalizationManager__Get((System_String_o *)StringLiteral_3295/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideButtonLabel )
    goto LABEL_16;
  UILabel__set_text(decideButtonLabel, servantEquipListViewManager, 0LL);
  cancelButtonLabel = this->fields.cancelButtonLabel;
  servantEquipListViewManager = LocalizationManager__Get((System_String_o *)StringLiteral_3293/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelButtonLabel
    || (UILabel__set_text(cancelButtonLabel, servantEquipListViewManager, 0LL),
        (servantEquipListViewManager = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                            (UnityEngine_Component_o *)this,
                                                            0LL)) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEquipListViewManager, 1, 0LL),
        (servantEquipListViewManager = (System_String_o *)this->fields.servantEquipListViewManager) == 0LL)
    || (ServantCheckEquipListViewManager__CreateList_27161096(
          (ServantCheckEquipListViewManager_o *)servantEquipListViewManager,
          materialList,
          0LL),
        (servantEquipListViewManager = (System_String_o *)this->fields.servantEquipListViewManager) == 0LL) )
  {
LABEL_16:
    sub_B52A5C(servantEquipListViewManager, v13);
  }
  ServantCheckEquipListViewManager__SetMode_27164272(
    (ServantCheckEquipListViewManager_o *)servantEquipListViewManager,
    3,
    0LL);
  v19 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v19, (Il2CppObject *)this, Method_ServantCheckEquipDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v19, 0, 0LL);
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
  sub_B52920(p_method);
}


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
  if ( (byte_42AD321 & 1) == 0 )
  {
    sub_B52984(&bool_TypeInfo);
    byte_42AD321 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B52928(this, v9, callback, object);
}


void __fastcall ServantCheckEquipDialog_ClickDelegate__EndInvoke(
        ServantCheckEquipDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5292C(result, 0LL, method);
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
        sub_B52A40(*(_QWORD *)&v20->fields.extra_arg, isDecide, method, v3);
      if ( (sub_B529B4(v22) & 1) == 0 )
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
      v24 = sub_B529AC(v22);
      v25 = sub_B52DB0(v22);
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
            v18 = sub_AEB880(v21, v28, v29, v26);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B52A34(v17, v22);
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
            v16 = sub_AEB880(v21, class_0, v10, v12);
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