void CoinConfirmDialog___ctor(CoinConfirmDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4CB9FC5 & 1) == 0 )
  {
    sub_1C6BA08(&BaseDialog_TypeInfo);
    byte_4CB9FC5 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void CoinConfirmDialog__Close(CoinConfirmDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  CoinConfirmDialog__Close_48464248(this, 0, v2);
}


void CoinConfirmDialog__Close_48464248(CoinConfirmDialog_o *this, System_Action_o *callback, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Action_o *v6; // x20

  if ( (byte_4CB9FC0 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_CoinConfirmDialog_EndClose__);
    byte_4CB9FC0 = 1;
  }
  this->fields.onClose = callback;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.onClose, (int32_t)callback, (int32_t)method, v3);
  this->fields.state = 2;
  v6 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_CoinConfirmDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0);
}


void CoinConfirmDialog__DestroyList(CoinConfirmDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *viewManager; // x20
  const MethodInfo *v4; // x1
  CoinRoomCoinListViewManager_o *v5; // x0

  if ( (byte_4CB9FC3 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB9FC3 = 1;
  }
  viewManager = (UnityEngine_Object_o *)this->fields.viewManager;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(viewManager, 0, 0) )
  {
    v5 = this->fields.viewManager;
    if ( !v5 )
      sub_1C6BC60(0, v4);
    CoinRoomCoinListViewManager__DestroyList(v5, v4);
  }
}


void CoinConfirmDialog__EndClose(CoinConfirmDialog_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  CGThumbnailListItem_o *p_onClose; // x19
  struct System_Action_o *v6; // x20
  struct System_Action_o *onClose; // t1

  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
  onClose = this->fields.onClose;
  p_onClose = (CGThumbnailListItem_o *)&this->fields.onClose;
  v6 = onClose;
  if ( onClose )
  {
    p_onClose->klass = 0;
    sub_1C6B9AC(p_onClose, 0, v3, v4);
    ((void (__fastcall *)(intptr_t, intptr_t))v6->fields.invoke_impl)(v6->fields.method_code, v6->fields.method);
  }
}


void CoinConfirmDialog__Init(CoinConfirmDialog_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void CoinConfirmDialog__OnClickCancel(CoinConfirmDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4CB9FC2 & 1) == 0 )
  {
    sub_1C6BA08(&Method_CoinConfirmDialog_OnClickCancel__);
    byte_4CB9FC2 = 1;
  }
  if ( this->fields.state == 1 )
  {
    v3 = Method_CoinConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_CoinConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C6BA20(Method_CoinConfirmDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    CoinConfirmDialog__Close_48464248(this, 0, v5);
  }
}


void CoinConfirmDialog__OnClickDecide(CoinConfirmDialog_o *this, const MethodInfo *method)
{
  CGThumbnailListItem_o *p_onDecide; // x19
  struct System_Action_o *onDecide; // t1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  CGThumbnailListItem_c *klass; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_4CB9FC1 & 1) == 0 )
  {
    sub_1C6BA08(&Method_CoinConfirmDialog_OnClickDecide__);
    byte_4CB9FC1 = 1;
  }
  if ( this->fields.state == 1 )
  {
    onDecide = this->fields.onDecide;
    p_onDecide = (CGThumbnailListItem_o *)&this->fields.onDecide;
    if ( onDecide )
    {
      v5 = Method_CoinConfirmDialog_OnClickDecide__;
      if ( (*((_BYTE *)Method_CoinConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
        v5 = (_QWORD *)sub_1C6BA20(Method_CoinConfirmDialog_OnClickDecide__);
      v6 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v5, v5[4]);
      OverwriteAssetSoundName__PlaySystemSe(v6, 8, 0, 0);
      klass = p_onDecide->klass;
      p_onDecide->klass = 0;
      sub_1C6B9AC(p_onDecide, 0, v8, v9);
      if ( !klass )
        sub_1C6BC60(v10, v11);
      ((void (__fastcall *)(Il2CppClass *, _QWORD))klass->_1.namespaze)(
        klass->_1.element_class,
        *(_QWORD *)&klass->_1.byval_arg.bits);
    }
  }
}


void CoinConfirmDialog__OnEnable(CoinConfirmDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4CB9FC4 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_15647/*"Window/Objects/CancelButton"*/);
    byte_4CB9FC4 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_45210584(transform, (System_String_o *)StringLiteral_15647/*"Window/Objects/CancelButton"*/, 0);
}


void CoinConfirmDialog__Open(
        CoinConfirmDialog_o *this,
        System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *selectedCoinDic,
        System_Action_o *onDecide,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  UILabel_o *titleLabel; // x21
  System_String_o *v12; // x21
  int32_t v13; // w0
  UILabel_o *detailLabel; // x22
  Il2CppObject *v15; // x0
  const MethodInfo *v16; // x5
  int32_t v17; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4CB9FBF & 1) == 0 )
  {
    sub_1C6BA08(&CoinRoomUtility_TypeInfo);
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_3535/*"COIN_ROOM_CONFIRM_DIALOG_DETAIL"*/);
    sub_1C6BA08(&StringLiteral_3536/*"COIN_ROOM_CONFIRM_DIALOG_TITLE"*/);
    byte_4CB9FBF = 1;
  }
  if ( !this->fields.state )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_14;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    this->fields.onDecide = onDecide;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.onDecide, (int32_t)onDecide, v9, v10);
    titleLabel = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3536/*"COIN_ROOM_CONFIRM_DIALOG_TITLE"*/, 0);
    if ( !titleLabel )
      goto LABEL_14;
    UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0);
    v12 = LocalizationManager__Get((System_String_o *)StringLiteral_3535/*"COIN_ROOM_CONFIRM_DIALOG_DETAIL"*/, 0);
    if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
    v13 = CoinRoomUtility__MaxPoint(0);
    detailLabel = this->fields.detailLabel;
    v17 = v13;
    v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17);
    gameObject = (UnityEngine_GameObject_o *)System_String__Format(v12, v15, 0);
    if ( !detailLabel
      || (UILabel__set_text(detailLabel, (System_String_o *)gameObject, 0),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.viewManager) == 0) )
    {
LABEL_14:
      sub_1C6BC60(gameObject, v8);
    }
    CoinRoomCoinListViewManager__CreateConfirmList(
      (CoinRoomCoinListViewManager_o *)gameObject,
      selectedCoinDic,
      1,
      0,
      1,
      v16);
    this->fields.state = 1;
    BaseDialog__Open((BaseDialog_o *)this, 0, 0, 0, 0);
  }
}