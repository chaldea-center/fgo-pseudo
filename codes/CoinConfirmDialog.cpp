void __fastcall CoinConfirmDialog___ctor(CoinConfirmDialog_o *this, const MethodInfo *method)
{
  if ( (byte_40F9A09 & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    byte_40F9A09 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall CoinConfirmDialog__Close(CoinConfirmDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  CoinConfirmDialog__Close_24360052(this, 0LL, v2);
}


void __fastcall CoinConfirmDialog__Close_24360052(
        CoinConfirmDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  System_Action_o *v15; // x20

  if ( (byte_40F9A04 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&Method_CoinConfirmDialog_EndClose__, v10);
    byte_40F9A04 = 1;
  }
  this->fields.onClose = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.onClose,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 2;
  v15 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v11, v12, v13, v14);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_CoinConfirmDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v15, 0LL);
}


void __fastcall CoinConfirmDialog__DestroyList(CoinConfirmDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *viewManager; // x20
  const MethodInfo *v4; // x1
  CoinRoomCoinListViewManager_o *v5; // x0

  if ( (byte_40F9A07 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F9A07 = 1;
  }
  viewManager = (UnityEngine_Object_o *)this->fields.viewManager;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(viewManager, 0LL, 0LL) )
  {
    v5 = this->fields.viewManager;
    if ( !v5 )
      sub_B170D4();
    CoinRoomCoinListViewManager__DestroyList(v5, v4);
  }
}


void __fastcall CoinConfirmDialog__EndClose(CoinConfirmDialog_o *this, const MethodInfo *method)
{
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  BattleServantConfConponent_o *p_onClose; // x19
  System_Action_o *v10; // x20
  struct System_Action_o *onClose; // t1

  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  onClose = this->fields.onClose;
  p_onClose = (BattleServantConfConponent_o *)&this->fields.onClose;
  v10 = onClose;
  if ( onClose )
  {
    p_onClose->klass = 0LL;
    sub_B16F98(p_onClose, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action__Invoke(v10, 0LL);
  }
}


void __fastcall CoinConfirmDialog__Init(CoinConfirmDialog_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall CoinConfirmDialog__OnClickCancel(CoinConfirmDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_40F9A06 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F9A06 = 1;
  }
  if ( this->fields.state == 1 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    CoinConfirmDialog__Close_24360052(this, 0LL, v3);
  }
}


void __fastcall CoinConfirmDialog__OnClickDecide(CoinConfirmDialog_o *this, const MethodInfo *method)
{
  BattleServantConfConponent_o *p_onDecide; // x19
  struct System_Action_o *onDecide; // t1
  System_Action_o *klass; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_40F9A05 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F9A05 = 1;
  }
  if ( this->fields.state == 1 )
  {
    onDecide = this->fields.onDecide;
    p_onDecide = (BattleServantConfConponent_o *)&this->fields.onDecide;
    if ( onDecide )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(8, 0LL);
      klass = (System_Action_o *)p_onDecide->klass;
      p_onDecide->klass = 0LL;
      sub_B16F98(p_onDecide, 0LL, v6, v7, v8, v9, v10, v11);
      if ( !klass )
        sub_B170D4();
      System_Action__Invoke(klass, 0LL);
    }
  }
}


void __fastcall CoinConfirmDialog__OnEnable(CoinConfirmDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Transform_o *transform; // x19

  if ( (byte_40F9A08 & 1) == 0 )
  {
    sub_B16FFC(&AndroidBackKeyManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_15423/*"Window/Objects/CancelButton"*/, v3);
    byte_40F9A08 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
  }
  AndroidBackKeyManager__AddBackBtn_21111220(transform, (System_String_o *)StringLiteral_15423/*"Window/Objects/CancelButton"*/, 0LL);
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
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  UILabel_o *titleLabel; // x21
  System_String_o *v19; // x0
  System_String_o *v20; // x0
  System_String_o *v21; // x21
  int32_t v22; // w0
  UILabel_o *detailLabel; // x22
  Il2CppObject *v24; // x0
  System_String_o *v25; // x0
  const MethodInfo *v26; // x5
  CoinRoomCoinListViewManager_o *viewManager; // x0
  int32_t v28; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40F9A03 & 1) == 0 )
  {
    sub_B16FFC(&CoinRoomUtility_TypeInfo, selectedCoinDic);
    sub_B16FFC(&int_TypeInfo, v7);
    sub_B16FFC(&LocalizationManager_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_3121/*"COIN_ROOM_CONFIRM_DIALOG_DETAIL"*/, v9);
    sub_B16FFC(&StringLiteral_3122/*"COIN_ROOM_CONFIRM_DIALOG_TITLE"*/, v10);
    byte_40F9A03 = 1;
  }
  if ( !this->fields.state )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_16;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    this->fields.onDecide = onDecide;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.onDecide,
      (System_Int32_array **)onDecide,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
    titleLabel = this->fields.titleLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v19 = LocalizationManager__Get((System_String_o *)StringLiteral_3122/*"COIN_ROOM_CONFIRM_DIALOG_TITLE"*/, 0LL);
    if ( !titleLabel )
      goto LABEL_16;
    UILabel__set_text(titleLabel, v19, 0LL);
    v20 = LocalizationManager__Get((System_String_o *)StringLiteral_3121/*"COIN_ROOM_CONFIRM_DIALOG_DETAIL"*/, 0LL);
    v21 = v20;
    if ( (BYTE3(CoinRoomUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CoinRoomUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
    }
    v22 = CoinRoomUtility__MaxPoint((const MethodInfo *)v20);
    detailLabel = this->fields.detailLabel;
    v28 = v22;
    v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28);
    v25 = System_String__Format(v21, v24, 0LL);
    if ( !detailLabel || (UILabel__set_text(detailLabel, v25, 0LL), (viewManager = this->fields.viewManager) == 0LL) )
LABEL_16:
      sub_B170D4();
    CoinRoomCoinListViewManager__CreateConfirmList(viewManager, selectedCoinDic, 1, 0, 1, v26);
    this->fields.state = 1;
    BaseDialog__Open((BaseDialog_o *)this, 0LL, 0, 0LL);
  }
}