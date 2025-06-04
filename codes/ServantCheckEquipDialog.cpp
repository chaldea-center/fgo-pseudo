void __fastcall ServantCheckEquipDialog___ctor(ServantCheckEquipDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4AFE098 & 1) == 0 )
  {
    sub_1BC3008(&BaseDialog_TypeInfo, method);
    byte_4AFE098 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall ServantCheckEquipDialog__Close(ServantCheckEquipDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ServantCheckEquipDialog__Close_34034288(this, 0LL, v2);
}


void __fastcall ServantCheckEquipDialog__Close_34034288(
        ServantCheckEquipDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Action_o *v9; // x20

  if ( (byte_4AFE094 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, callback);
    sub_1BC3008(&Method_ServantCheckEquipDialog_EndClose__, v6);
    byte_4AFE094 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, (int32_t)callback, (int32_t)method, v3);
  this->fields.state = 3;
  this->fields.closeFunc = 0LL;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.closeFunc, 0, v7, v8);
  v9 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_ServantCheckEquipDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v9, 0LL);
}


void __fastcall ServantCheckEquipDialog__EndClose(ServantCheckEquipDialog_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  CGThumbnailListItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v6; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  ServantCheckEquipDialog__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (CGThumbnailListItem_o *)&this->fields.closeCallbackFunc;
  v6 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_1BC2FAC(p_closeCallbackFunc, 0, v3, v4);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v6->fields.m_target)(
      v6->fields.original_method_info,
      *(_QWORD *)&v6->fields.extra_arg);
  }
}


void __fastcall ServantCheckEquipDialog__EndOpen(ServantCheckEquipDialog_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void __fastcall ServantCheckEquipDialog__Init(ServantCheckEquipDialog_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_4AFE090 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_1/*""*/, method);
    byte_4AFE090 = 1;
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
    sub_1BC3264(titleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall ServantCheckEquipDialog__OnClickCancel(ServantCheckEquipDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct ServantCheckEquipDialog_ClickDelegate_o *closeFunc; // x8

  if ( (byte_4AFE096 & 1) == 0 )
  {
    sub_1BC3008(&Method_ServantCheckEquipDialog_OnClickCancel__, method);
    byte_4AFE096 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantCheckEquipDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_ServantCheckEquipDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BC3020(Method_ServantCheckEquipDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
    closeFunc = this->fields.closeFunc;
    if ( !closeFunc )
      sub_1BC3264(v5, v6);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))closeFunc->fields.m_target)(
      closeFunc->fields.original_method_info,
      0LL,
      *(_QWORD *)&closeFunc->fields.extra_arg);
  }
}


void __fastcall ServantCheckEquipDialog__OnClickDecide(ServantCheckEquipDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct ServantCheckEquipDialog_ClickDelegate_o *closeFunc; // x8

  if ( (byte_4AFE095 & 1) == 0 )
  {
    sub_1BC3008(&Method_ServantCheckEquipDialog_OnClickDecide__, method);
    byte_4AFE095 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantCheckEquipDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_ServantCheckEquipDialog_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BC3020(Method_ServantCheckEquipDialog_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    closeFunc = this->fields.closeFunc;
    if ( !closeFunc )
      sub_1BC3264(v5, v6);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))closeFunc->fields.m_target)(
      closeFunc->fields.original_method_info,
      1LL,
      *(_QWORD *)&closeFunc->fields.extra_arg);
  }
}


void __fastcall ServantCheckEquipDialog__OnEnable(ServantCheckEquipDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4AFE097 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_15503/*"Window/Objects/Buttons/CancelButton"*/, method);
    byte_4AFE097 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_43913684(transform, (System_String_o *)StringLiteral_15503/*"Window/Objects/Buttons/CancelButton"*/, 0LL);
}


void __fastcall ServantCheckEquipDialog__Open(
        ServantCheckEquipDialog_o *this,
        System_Collections_Generic_List_SvtEqCombineListViewItem__o *materialList,
        bool isLastCheck,
        ServantCheckEquipDialog_ClickDelegate_o *closeCallback,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  System_String_o **v17; // x8
  System_String_o *v18; // x24
  System_String_o **v19; // x8
  System_String_o *v20; // x22
  UILabel_o *titleLabel; // x23
  System_String_o *servantEquipListViewManager; // x0
  __int64 v23; // x1
  UILabel_o *warningLabel; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  float v26; // s8
  UnityEngine_GameObject_o *v27; // x0
  UILabel_o *decideButtonLabel; // x21
  UILabel_o *cancelButtonLabel; // x21
  const MethodInfo *v30; // x2
  const MethodInfo *v31; // x2
  System_Action_o *v32; // x20

  if ( (byte_4AFE091 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, materialList);
    sub_1BC3008(&LocalizationManager_TypeInfo, v9);
    sub_1BC3008(&Method_ServantCheckEquipDialog_EndOpen__, v10);
    sub_1BC3008(&StringLiteral_11471/*"SERVANT_CHECK_EQUIP_COMBINE_WARNING_MESSAGE"*/, v11);
    sub_1BC3008(&StringLiteral_3649/*"COMMON_CONFIRM_DECIDE"*/, v12);
    sub_1BC3008(&StringLiteral_11469/*"SERVANT_CHECK_COMBINE_DIALOG_TITLE"*/, v13);
    sub_1BC3008(&StringLiteral_3647/*"COMMON_CONFIRM_CANCEL"*/, v14);
    sub_1BC3008(&StringLiteral_11470/*"SERVANT_CHECK_EQUIP_COMBINE_TITLE"*/, v15);
    sub_1BC3008(&StringLiteral_11468/*"SERVANT_CHECK_COMBINE_DIALOG_MESSAGE"*/, v16);
    byte_4AFE091 = 1;
  }
  this->fields.closeFunc = closeCallback;
  sub_1BC2FAC(
    (CGThumbnailListItem_o *)&this->fields.closeFunc,
    (int32_t)closeCallback,
    isLastCheck,
    (const MethodInfo *)closeCallback);
  if ( isLastCheck )
    v17 = (System_String_o **)&StringLiteral_11469/*"SERVANT_CHECK_COMBINE_DIALOG_TITLE"*/;
  else
    v17 = (System_String_o **)&StringLiteral_11470/*"SERVANT_CHECK_EQUIP_COMBINE_TITLE"*/;
  v18 = *v17;
  if ( isLastCheck )
    v19 = (System_String_o **)&StringLiteral_11468/*"SERVANT_CHECK_COMBINE_DIALOG_MESSAGE"*/;
  else
    v19 = (System_String_o **)&StringLiteral_11471/*"SERVANT_CHECK_EQUIP_COMBINE_WARNING_MESSAGE"*/;
  v20 = *v19;
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  servantEquipListViewManager = LocalizationManager__Get(v18, 0LL);
  if ( !titleLabel )
    goto LABEL_27;
  UILabel__set_text(titleLabel, servantEquipListViewManager, 0LL);
  warningLabel = this->fields.warningLabel;
  servantEquipListViewManager = LocalizationManager__Get(v20, 0LL);
  if ( !warningLabel )
    goto LABEL_27;
  UILabel__set_text(warningLabel, servantEquipListViewManager, 0LL);
  servantEquipListViewManager = (System_String_o *)this->fields.titleLabel;
  if ( !servantEquipListViewManager )
    goto LABEL_27;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEquipListViewManager, 0LL);
  if ( isLastCheck )
  {
    GameObjectExtensions__SetLocalPosition_35211920(gameObject, 9.0, 250.0, 0LL);
    servantEquipListViewManager = (System_String_o *)this->fields.warningLabel;
    if ( !servantEquipListViewManager )
      goto LABEL_27;
    v26 = 0.0;
  }
  else
  {
    GameObjectExtensions__SetLocalPosition_35211920(gameObject, 1.0, 250.0, 0LL);
    servantEquipListViewManager = (System_String_o *)this->fields.warningLabel;
    if ( !servantEquipListViewManager )
      goto LABEL_27;
    v26 = 7.0;
  }
  v27 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEquipListViewManager, 0LL);
  GameObjectExtensions__SetLocalPosition_35211920(v27, v26, -151.0, 0LL);
  decideButtonLabel = this->fields.decideButtonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  servantEquipListViewManager = LocalizationManager__Get((System_String_o *)StringLiteral_3649/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideButtonLabel )
    goto LABEL_27;
  UILabel__set_text(decideButtonLabel, servantEquipListViewManager, 0LL);
  cancelButtonLabel = this->fields.cancelButtonLabel;
  servantEquipListViewManager = LocalizationManager__Get((System_String_o *)StringLiteral_3647/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
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
          v30),
        (servantEquipListViewManager = (System_String_o *)this->fields.servantEquipListViewManager) == 0LL) )
  {
LABEL_27:
    sub_1BC3264(servantEquipListViewManager, v23);
  }
  ServantCheckEquipListViewManager__SetMode_34032820(
    (ServantCheckEquipListViewManager_o *)servantEquipListViewManager,
    3,
    v31);
  v32 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(v32, (Il2CppObject *)this, Method_ServantCheckEquipDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v32, 0, 0LL);
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
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4AFE093 & 1) == 0 )
  {
    sub_1BC3008(&LocalizationManager_TypeInfo, closeCallback);
    sub_1BC3008(&StringLiteral_11475/*"SERVANT_CHECK_SELL_DIALOG_TITLE"*/, v5);
    sub_1BC3008(&StringLiteral_11474/*"SERVANT_CHECK_SELL_DIALOG_MESSAGE"*/, v6);
    byte_4AFE093 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_11475/*"SERVANT_CHECK_SELL_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_10;
  UILabel__set_text(titleLabel, v8, 0LL);
  warningLabel = this->fields.warningLabel;
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_11474/*"SERVANT_CHECK_SELL_DIALOG_MESSAGE"*/, 0LL);
  if ( !warningLabel
    || (UILabel__set_text(warningLabel, v8, 0LL), (v8 = (System_String_o *)this->fields.titleLabel) == 0LL)
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v8, 0LL),
        GameObjectExtensions__SetLocalPosition_35211920(gameObject, 9.0, 250.0, 0LL),
        (v8 = (System_String_o *)this->fields.warningLabel) == 0LL) )
  {
LABEL_10:
    sub_1BC3264(v8, v9);
  }
  v12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v8, 0LL);
  GameObjectExtensions__SetLocalPosition_35211920(v12, 0.0, -151.0, 0LL);
  this->fields.closeFunc = closeCallback;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.closeFunc, (int32_t)closeCallback, v13, v14);
}


void __fastcall ServantCheckEquipDialog__Open_34032924(
        ServantCheckEquipDialog_o *this,
        System_Collections_Generic_List_ServantOperationListViewItem__o *materialList,
        ServantCheckEquipDialog_ClickDelegate_o *closeCallback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  UILabel_o *titleLabel; // x21
  System_String_o *servantEquipListViewManager; // x0
  __int64 v15; // x1
  UILabel_o *warningLabel; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v18; // x0
  UILabel_o *decideButtonLabel; // x21
  UILabel_o *cancelButtonLabel; // x21
  const MethodInfo *v21; // x2
  const MethodInfo *v22; // x2
  System_Action_o *v23; // x20

  if ( (byte_4AFE092 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, materialList);
    sub_1BC3008(&LocalizationManager_TypeInfo, v7);
    sub_1BC3008(&Method_ServantCheckEquipDialog_EndOpen__, v8);
    sub_1BC3008(&StringLiteral_11473/*"SERVANT_CHECK_EQUIP_SELL_WARNING_MESSAGE"*/, v9);
    sub_1BC3008(&StringLiteral_3649/*"COMMON_CONFIRM_DECIDE"*/, v10);
    sub_1BC3008(&StringLiteral_3647/*"COMMON_CONFIRM_CANCEL"*/, v11);
    sub_1BC3008(&StringLiteral_11472/*"SERVANT_CHECK_EQUIP_SELL_TITLE"*/, v12);
    byte_4AFE092 = 1;
  }
  this->fields.closeFunc = closeCallback;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.closeFunc, (int32_t)closeCallback, (int32_t)closeCallback, method);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  servantEquipListViewManager = LocalizationManager__Get((System_String_o *)StringLiteral_11472/*"SERVANT_CHECK_EQUIP_SELL_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_15;
  UILabel__set_text(titleLabel, servantEquipListViewManager, 0LL);
  warningLabel = this->fields.warningLabel;
  servantEquipListViewManager = LocalizationManager__Get((System_String_o *)StringLiteral_11473/*"SERVANT_CHECK_EQUIP_SELL_WARNING_MESSAGE"*/, 0LL);
  if ( !warningLabel )
    goto LABEL_15;
  UILabel__set_text(warningLabel, servantEquipListViewManager, 0LL);
  servantEquipListViewManager = (System_String_o *)this->fields.titleLabel;
  if ( !servantEquipListViewManager )
    goto LABEL_15;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEquipListViewManager, 0LL);
  GameObjectExtensions__SetLocalPosition_35211920(gameObject, 1.0, 250.0, 0LL);
  servantEquipListViewManager = (System_String_o *)this->fields.warningLabel;
  if ( !servantEquipListViewManager )
    goto LABEL_15;
  v18 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantEquipListViewManager, 0LL);
  GameObjectExtensions__SetLocalPosition_35211920(v18, 7.0, -151.0, 0LL);
  decideButtonLabel = this->fields.decideButtonLabel;
  servantEquipListViewManager = LocalizationManager__Get((System_String_o *)StringLiteral_3649/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideButtonLabel )
    goto LABEL_15;
  UILabel__set_text(decideButtonLabel, servantEquipListViewManager, 0LL);
  cancelButtonLabel = this->fields.cancelButtonLabel;
  servantEquipListViewManager = LocalizationManager__Get((System_String_o *)StringLiteral_3647/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelButtonLabel
    || (UILabel__set_text(cancelButtonLabel, servantEquipListViewManager, 0LL),
        (servantEquipListViewManager = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                            (UnityEngine_Component_o *)this,
                                                            0LL)) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantEquipListViewManager, 1, 0LL),
        (servantEquipListViewManager = (System_String_o *)this->fields.servantEquipListViewManager) == 0LL)
    || (ServantCheckEquipListViewManager__CreateList_34033492(
          (ServantCheckEquipListViewManager_o *)servantEquipListViewManager,
          materialList,
          v21),
        (servantEquipListViewManager = (System_String_o *)this->fields.servantEquipListViewManager) == 0LL) )
  {
LABEL_15:
    sub_1BC3264(servantEquipListViewManager, v15);
  }
  ServantCheckEquipListViewManager__SetMode_34032820(
    (ServantCheckEquipListViewManager_o *)servantEquipListViewManager,
    3,
    v22);
  v23 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(v23, (Il2CppObject *)this, Method_ServantCheckEquipDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v23, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCheckEquipDialog_ClickDelegate___ctor(
        ServantCheckEquipDialog_ClickDelegate_o *this,
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
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BC30C8(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BC3280(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BC3130(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A08AE4;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A08A9C;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall ServantCheckEquipDialog_ClickDelegate__BeginInvoke(
        ServantCheckEquipDialog_ClickDelegate_o *this,
        bool isDecide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isDecide;
  if ( (byte_4AFE099 & 1) == 0 )
  {
    sub_1BC3008(&bool_TypeInfo, isDecide);
    byte_4AFE099 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1BC2FBC(this, v9, callback, object);
}


void __fastcall ServantCheckEquipDialog_ClickDelegate__EndInvoke(
        ServantCheckEquipDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BC2FC0(result, 0LL, method);
}


void __fastcall ServantCheckEquipDialog_ClickDelegate__Invoke(
        ServantCheckEquipDialog_ClickDelegate_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    isDecide,
    *(_QWORD *)&this->fields.extra_arg);
}