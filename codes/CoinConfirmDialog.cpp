void __fastcall CoinConfirmDialog___ctor(CoinConfirmDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA925 & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA925 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall CoinConfirmDialog__Close(CoinConfirmDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  CoinConfirmDialog__Close_28901148(this, 0LL, v2);
}


void __fastcall CoinConfirmDialog__Close_28901148(
        CoinConfirmDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  System_Action_o *v13; // x20

  if ( (byte_42EA920 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_CoinConfirmDialog_EndClose__, v10, v11, v12);
    byte_42EA920 = 1;
  }
  this->fields.onClose = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.onClose,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 2;
  v13 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_CoinConfirmDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v13, 0LL);
}


void __fastcall CoinConfirmDialog__DestroyList(CoinConfirmDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *viewManager; // x20
  __int64 v6; // x1
  CoinRoomCoinListViewManager_o *v7; // x0

  if ( (byte_42EA923 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA923 = 1;
  }
  viewManager = (UnityEngine_Object_o *)this->fields.viewManager;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(viewManager, 0LL, 0LL) )
  {
    v7 = this->fields.viewManager;
    if ( !v7 )
      sub_B5D69C(0LL, v6);
    CoinRoomCoinListViewManager__DestroyList(v7, 0LL);
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
    sub_B5D560(p_onClose, 0LL, v3, v4, v5, v6, v7, v8);
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
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x2

  if ( (byte_42EA922 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA922 = 1;
  }
  if ( this->fields.state == 1 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    CoinConfirmDialog__Close_28901148(this, 0LL, v5);
  }
}


void __fastcall CoinConfirmDialog__OnClickDecide(CoinConfirmDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleServantConfConponent_o *p_onDecide; // x19
  struct System_Action_o *onDecide; // t1
  System_Action_o *klass; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  __int64 v14; // x0
  __int64 v15; // x1

  if ( (byte_42EA921 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA921 = 1;
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
      sub_B5D560(p_onDecide, 0LL, v8, v9, v10, v11, v12, v13);
      if ( !klass )
        sub_B5D69C(v14, v15);
      System_Action__Invoke(klass, 0LL);
    }
  }
}


void __fastcall CoinConfirmDialog__OnEnable(CoinConfirmDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Transform_o *transform; // x19

  if ( (byte_42EA924 & 1) == 0 )
  {
    sub_B5D5C4(&AndroidBackKeyManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_15676/*"Window/Objects/CancelButton"*/, v5, v6, v7);
    byte_42EA924 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
  }
  AndroidBackKeyManager__AddBackBtn_21237572(transform, (System_String_o *)StringLiteral_15676/*"Window/Objects/CancelButton"*/, 0LL);
}


void __fastcall CoinConfirmDialog__Open(
        CoinConfirmDialog_o *this,
        System_Collections_Generic_Dictionary_int__SelectedUserSvtCoin__o *selectedCoinDic,
        System_Action_o *onDecide,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  UILabel_o *titleLabel; // x21
  System_String_o *v28; // x21
  int32_t v29; // w0
  UILabel_o *detailLabel; // x22
  Il2CppObject *v31; // x0
  int32_t v32; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42EA91F & 1) == 0 )
  {
    sub_B5D5C4(&CoinRoomUtility_TypeInfo, (_DWORD)selectedCoinDic, (_DWORD)onDecide, method);
    sub_B5D5C4(&int_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_3195/*"COIN_ROOM_CONFIRM_DIALOG_DETAIL"*/, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_3196/*"COIN_ROOM_CONFIRM_DIALOG_TITLE"*/, v16, v17, v18);
    byte_42EA91F = 1;
  }
  if ( !this->fields.state )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_16;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    this->fields.onDecide = onDecide;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.onDecide,
      (System_Int32_array **)onDecide,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
    titleLabel = this->fields.titleLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3196/*"COIN_ROOM_CONFIRM_DIALOG_TITLE"*/, 0LL);
    if ( !titleLabel )
      goto LABEL_16;
    UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
    v28 = LocalizationManager__Get((System_String_o *)StringLiteral_3195/*"COIN_ROOM_CONFIRM_DIALOG_DETAIL"*/, 0LL);
    if ( (BYTE3(CoinRoomUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CoinRoomUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
    }
    v29 = CoinRoomUtility__MaxPoint(0LL);
    detailLabel = this->fields.detailLabel;
    v32 = v29;
    v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v32);
    gameObject = (UnityEngine_GameObject_o *)System_String__Format(v28, v31, 0LL);
    if ( !detailLabel
      || (UILabel__set_text(detailLabel, (System_String_o *)gameObject, 0LL),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.viewManager) == 0LL) )
    {
LABEL_16:
      sub_B5D69C(gameObject, v20);
    }
    CoinRoomCoinListViewManager__CreateConfirmList(
      (CoinRoomCoinListViewManager_o *)gameObject,
      selectedCoinDic,
      1,
      0,
      1,
      0LL);
    this->fields.state = 1;
    BaseDialog__Open((BaseDialog_o *)this, 0LL, 0, 0LL);
  }
}