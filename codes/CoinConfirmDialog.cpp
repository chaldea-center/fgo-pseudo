void __fastcall CoinConfirmDialog___ctor(CoinConfirmDialog_o *this, const MethodInfo *method)
{
  if ( (byte_49FF894 & 1) == 0 )
  {
    sub_1B640C8(&BaseDialog_TypeInfo, method);
    byte_49FF894 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall CoinConfirmDialog__Close(CoinConfirmDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  CoinConfirmDialog__Close_44182960(this, 0LL, v2);
}


void __fastcall CoinConfirmDialog__Close_44182960(
        CoinConfirmDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x2
  System_Action_o *v9; // x20

  if ( (byte_49FF88F & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, callback);
    sub_1B640C8(&Method_CoinConfirmDialog_EndClose__, v6);
    byte_49FF88F = 1;
  }
  this->fields.onClose = callback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.onClose, (int32_t)callback, (int32_t)method, v3);
  this->fields.state = 2;
  v9 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v7, v8);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_CoinConfirmDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v9, 0LL);
}


void __fastcall CoinConfirmDialog__DestroyList(CoinConfirmDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *viewManager; // x20
  const MethodInfo *v4; // x1
  CoinRoomCoinListViewManager_o *v5; // x0

  if ( (byte_49FF892 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FF892 = 1;
  }
  viewManager = (UnityEngine_Object_o *)this->fields.viewManager;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(viewManager, 0LL, 0LL) )
  {
    v5 = this->fields.viewManager;
    if ( !v5 )
      sub_1B64324(0LL);
    CoinRoomCoinListViewManager__DestroyList(v5, v4);
  }
}


void __fastcall CoinConfirmDialog__EndClose(CoinConfirmDialog_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  ServantStatusBattleListViewItem_o *p_onClose; // x19
  struct System_Action_o *v6; // x20
  struct System_Action_o *onClose; // t1

  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  onClose = this->fields.onClose;
  p_onClose = (ServantStatusBattleListViewItem_o *)&this->fields.onClose;
  v6 = onClose;
  if ( onClose )
  {
    p_onClose->klass = 0LL;
    sub_1B6406C(p_onClose, 0, v3, v4);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v6->fields.m_target)(
      v6->fields.original_method_info,
      *(_QWORD *)&v6->fields.extra_arg);
  }
}


void __fastcall CoinConfirmDialog__Init(CoinConfirmDialog_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall CoinConfirmDialog__OnClickCancel(CoinConfirmDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_49FF891 & 1) == 0 )
  {
    sub_1B640C8(&Method_CoinConfirmDialog_OnClickCancel__, method);
    byte_49FF891 = 1;
  }
  if ( this->fields.state == 1 )
  {
    v3 = Method_CoinConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_CoinConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B640E0(Method_CoinConfirmDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
    CoinConfirmDialog__Close_44182960(this, 0LL, v5);
  }
}


void __fastcall CoinConfirmDialog__OnClickDecide(CoinConfirmDialog_o *this, const MethodInfo *method)
{
  ServantStatusBattleListViewItem_o *p_onDecide; // x19
  struct System_Action_o *onDecide; // t1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  ServantStatusBattleListViewItem_c *klass; // x20
  int32_t v8; // w2
  int32_t v9; // w3
  __int64 v10; // x0

  if ( (byte_49FF890 & 1) == 0 )
  {
    sub_1B640C8(&Method_CoinConfirmDialog_OnClickDecide__, method);
    byte_49FF890 = 1;
  }
  if ( this->fields.state == 1 )
  {
    onDecide = this->fields.onDecide;
    p_onDecide = (ServantStatusBattleListViewItem_o *)&this->fields.onDecide;
    if ( onDecide )
    {
      v5 = Method_CoinConfirmDialog_OnClickDecide__;
      if ( (*((_BYTE *)Method_CoinConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
        v5 = (_QWORD *)sub_1B640E0(Method_CoinConfirmDialog_OnClickDecide__);
      v6 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
      OverwriteAssetSoundName__PlaySystemSe(v6, 8, 0LL);
      klass = p_onDecide->klass;
      p_onDecide->klass = 0LL;
      sub_1B6406C(p_onDecide, 0, v8, v9);
      if ( !klass )
        sub_1B64324(v10);
      ((void (__fastcall *)(Il2CppClass *, _QWORD))klass->_1.namespaze)(
        klass->_1.element_class,
        *(_QWORD *)&klass->_1.byval_arg.bits);
    }
  }
}


void __fastcall CoinConfirmDialog__OnEnable(CoinConfirmDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_49FF893 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_15582/*"Window/Objects/CancelButton"*/, method);
    byte_49FF893 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_41446668(transform, (System_String_o *)StringLiteral_15582/*"Window/Objects/CancelButton"*/, 0LL);
}


void __fastcall CoinConfirmDialog__Open(
        CoinConfirmDialog_o *this,
        System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *selectedCoinDic,
        System_Action_o *onDecide,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  UILabel_o *titleLabel; // x21
  System_String_o *v15; // x0
  System_String_o *v16; // x21
  int32_t v17; // w0
  UILabel_o *detailLabel; // x22
  Il2CppObject *v19; // x0
  const MethodInfo *v20; // x5
  int32_t v21; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_49FF88E & 1) == 0 )
  {
    sub_1B640C8(&CoinRoomUtility_TypeInfo, selectedCoinDic);
    sub_1B640C8(&int_TypeInfo, v7);
    sub_1B640C8(&LocalizationManager_TypeInfo, v8);
    sub_1B640C8(&StringLiteral_3601/*"COIN_ROOM_CONFIRM_DIALOG_DETAIL"*/, v9);
    sub_1B640C8(&StringLiteral_3602/*"COIN_ROOM_CONFIRM_DIALOG_TITLE"*/, v10);
    byte_49FF88E = 1;
  }
  if ( !this->fields.state )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_14;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    this->fields.onDecide = onDecide;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.onDecide, (int32_t)onDecide, v12, v13);
    titleLabel = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3602/*"COIN_ROOM_CONFIRM_DIALOG_TITLE"*/, 0LL);
    if ( !titleLabel )
      goto LABEL_14;
    UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
    v15 = LocalizationManager__Get((System_String_o *)StringLiteral_3601/*"COIN_ROOM_CONFIRM_DIALOG_DETAIL"*/, 0LL);
    v16 = v15;
    if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
    v17 = CoinRoomUtility__MaxPoint((const MethodInfo *)v15);
    detailLabel = this->fields.detailLabel;
    v21 = v17;
    v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21);
    gameObject = (UnityEngine_GameObject_o *)System_String__Format(v16, v19, 0LL);
    if ( !detailLabel
      || (UILabel__set_text(detailLabel, (System_String_o *)gameObject, 0LL),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.viewManager) == 0LL) )
    {
LABEL_14:
      sub_1B64324(gameObject);
    }
    CoinRoomCoinListViewManager__CreateConfirmList(
      (CoinRoomCoinListViewManager_o *)gameObject,
      selectedCoinDic,
      1,
      0,
      1,
      v20);
    this->fields.state = 1;
    BaseDialog__Open((BaseDialog_o *)this, 0LL, 0, 0LL);
  }
}